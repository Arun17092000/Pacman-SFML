#include "Game.h"
#include <thread>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;


void Game::wallCollision(Vector2f& direction)
{
    int X1 = 0,X2 = 0, Y1 = 0,Y2 = 0;
    //cout << (int)(this->player->getPosY() -70)/ 30<<"," << (int)(this->player->getPosX() - 70) / 30<<endl;
    if (direction.y == 0) {
        if (direction.x == 1) {
            X1 = 1;
            X2 = 1;
        }
        this->nextpos = this->player->GetBounds();
        this->nextpos.left += direction.x * this->player->getSpeed();
        this->nextpos.top += direction.y * this->player->getSpeed();
         
        Y1 += (int)(this->nextpos.top - 70) / 30;
        Y2 += (int)(this->nextpos.top - 70 + 25) / 30;

        X1 += (int)(this->nextpos.left - 70) / 30;

        FloatRect wall;
        wall = this->map.tiles[Y1][X1]->tile.getGlobalBounds();
        if (Y1 == Y2) {
            if (!this->map.tiles[Y1][X1]->isPassable) {
                if (wall.intersects(nextpos)) {
                    if (prevDir == direction) {
                        direction = { 0,0 };
                    }
                    else {
                        direction = prevDir;
                    }
                }
            }
            else {
                FloatRect food = this->map.tiles[Y1][X1]->food.getGlobalBounds();
                if (nextpos.intersects(food)) {
                    if (this->map.tiles[Y1][X1]->isEnergy) {
                        this->player->changeSpeed(0.8);
                        this->map.tiles[Y1][X1]->food.setFillColor(Color::Black);
                        this->map.tiles[Y1][X1]->isEnergy = false;
                        this->attack = true;
                        timer = 0;
                        score = score + 10;

                    }
                    if (this->map.tiles[Y1][X1]->food.getFillColor() != Color::Black) {
                        score++;
                        this->food++;
                    }
                    this->map.tiles[Y1][X1]->food.setFillColor(Color::Black);
                    
                }
                    
            }
            
        }
        else {
            direction = prevDir;
        }
    }

    
    else {
        if (direction.y == 1) {
            Y1 = 1;
            Y2 = 1;
        }
        this->nextpos = this->player->GetBounds();
        this->nextpos.left += direction.x * this->player->getSpeed();
        this->nextpos.top += direction.y * this->player->getSpeed();

        X1 += (int)(this->nextpos.left - 70) / 30;
        X2 += (int)(this->nextpos.left - 70 + 25) / 30;

        Y1 += (int)(this->nextpos.top - 70) / 30;

        FloatRect wall;
        wall = this->map.tiles[Y1][X1]->tile.getGlobalBounds();
        if (X1 == X2) {
            if (!this->map.tiles[Y1][X1]->isPassable) {
                if (wall.intersects(nextpos)) {
                    if (prevDir == direction) {
                        direction = { 0,0 };
                    }
                    else {
                        direction = prevDir;
                    }
                }
            }
            else {
                FloatRect food = this->map.tiles[Y1][X2]->food.getGlobalBounds();
                if (nextpos.intersects(food)) {
                    if (this->map.tiles[Y1][X2]->isEnergy) {
                        this->player->changeSpeed(0.7);
                        this->map.tiles[Y1][X2]->food.setFillColor(Color::Black);
                        this->map.tiles[Y1][X2]->isEnergy = false;
                        attack = true;
                        timer = 0;
                        score = score + 10;

                    }
                    if (this->map.tiles[Y1][X2]->food.getFillColor() != Color::Black) {
                        score++;
                        this->food++;
                        this->map.tiles[Y1][X2]->food.setFillColor(Color::Black);
                    }

                    this->map.tiles[Y1][X2]->food.setFillColor(Color::Black);
                   
                }
                    
            }

        }
        else {
            direction = prevDir;
        }
    }
    
    prevDir = direction;
    cout << this->food << endl;
    if (this->food == 177) {
        this->state.end = true;
    }
    //cout << "Score: " << score << endl;
   
}

bool Game::ghostCollision()
{
    FloatRect pacman = this->player->GetBounds();
    FloatRect Red = this->blinky->Top.getGlobalBounds();
    FloatRect Pink = this->pinky->Top.getGlobalBounds();
    FloatRect Orange = this->baaka->Top.getGlobalBounds();
    FloatRect Blue = this->clyde->Top.getGlobalBounds();

    if (pacman.intersects(Red)) {
        if (attack) {
            blinky->Top.setPosition(100.f, 100.f);
            blinky->Bottom.setPosition(100.f, 100.f + 14.5f);
            blinky->Top.setFillColor(Color::Red);
            blinky->Bottom.setFillColor(Color::Red);
            score = score + 20;
        }
        else {
            state.exit = true;
        }
        return true;
    }

    if (pacman.intersects(Pink)) {
        if (attack) {
            pinky->Top.setPosition(100.f, 400.f);
            pinky->Bottom.setPosition(100.f, 400.f + 14.5f);
            pinky->Top.setFillColor(Color(255, 184, 255));
            pinky->Bottom.setFillColor(Color(255, 184, 255));
            score = score + 20;
        }
        else {
            state.exit = true;
        }
        return true;
    }
    if (pacman.intersects(Orange)) {
        if (attack) {
            baaka->Top.setPosition(430.f, 100.f);
            baaka->Bottom.setPosition(430.f, 100.f + 14.5f);
            baaka->Top.setFillColor(Color(0, 255, 255));
            baaka->Bottom.setFillColor(Color(0, 255, 255));
            score = score + 20;
        }
        else {
          state.exit = true;
        }
        return true;
    }
    if (pacman.intersects(Blue)) {
        if (attack) {
            clyde->Top.setPosition(100.f, 310.f);
            clyde->Bottom.setPosition(100.f, 310.f + 14.5f);
            clyde->Top.setFillColor(Color(255, 184, 82));
            clyde->Bottom.setFillColor(Color(255, 184, 82));
            score = score + 20;

        }
        else {
 
            state.exit = true;
        }
        return true;
    }
    return false;
}

void Game::Ghostmove(Ghost* ghost, Vector2f& curr, Vector2f& prev, Vector2f& prev2)
{

    int X = (int)(ghost->Top.getPosition().x - 70) / 30;
    int Y = (int)(ghost->Top.getPosition().y - 70) / 30;

    FloatRect ghostF = ghost->Top.getGlobalBounds();
    ghostF.top += ghost->speed * curr.y;
    ghostF.left += ghost->speed * curr.x;
    if (curr.x > 0) {
        X++;
    }
    if (curr.y > 0) {
        Y++;
    }

    FloatRect wall = map.tiles[Y][X]->tile.getGlobalBounds();

    if (!this->map.tiles[Y][X]->isPassable) {
        if (wall.intersects(ghostF)) {
            prev2 = prev;
            prev = curr;
            curr = {0.f,0.f};
        }
    }
    else if (this->map.tiles[Y][X]->isturn) {
        ghost->Top.setPosition(X * 30 + 70, Y * 30 + 70);
        ghost->Bottom.setPosition(X * 30 + 70, Y * 30 + 70 + 14);
        if (ghost->Top.getFillColor() == Color(0, 255, 255) or ghost->Top.getFillColor() == Color(255, 184, 82)) {
            prev2 = prev;
            prev = curr;
            curr = { 0.f,0.f };
        }
    }
}

void Game::directionUpdate(Ghost *a,Vector2f& curr, Vector2f& prev, Vector2f& prev2)
{
    int random = rand() % 4;
    float i, j;
    if (random % 10 == 3) {
        i = 1;
        j = 0;
    }
    else if(random % 5 == 2){
        i = -1;
        j = 0;
    }
    else if (random % 3 == 1) {
        i = 0;
        j = 1;
    }
    else {
        i = 0;
        j = -1;
    }

    curr.x = i;
    curr.y = j;

}

void Game::renderGhost()
{
    Vector2f temp = { 0.f,0.f };
    if (this->currBlinky == temp) {
        this->directionUpdate(this->blinky,this->currBlinky, this->prevBlinky, this->prevBlinky2);
    }
    this->blinky->render(*this->window, this->currBlinky);
    this->Ghostmove(this->blinky, this->currBlinky, this->prevBlinky, this->prevBlinky2);

    if (this->currPinky == temp) {
        this->directionUpdate(pinky,this->currPinky, this->prevPinky, this->prevPinky2);
    }
    this->pinky->render(*this->window, this->currPinky);
    this->Ghostmove(this->pinky, this->currPinky, this->prevPinky, this->prevPinky2);
    //cout << prevPinky.x << "," << prevPinky.y << endl;

    if (this->currbaaka == temp) {
        this->directionUpdate(baaka,this->currbaaka, this->prevbaaka, this->prevbaaka2);
    }
    this->baaka->render(*this->window, this->currbaaka);
    this->Ghostmove(this->baaka, this->currbaaka, this->prevbaaka, this->prevbaaka2);

    if (this->currClyde == temp) {
        this->directionUpdate(this->clyde,this->currClyde, this->prevClyde, this->prevClyde2);
    }
    this->clyde->render(*this->window, this->currClyde);
    this->Ghostmove(this->clyde, this->currClyde, this->prevClyde, this->prevClyde2);
    
}

void Game::upateTimer()
{
    string ans = to_string(200 - this->timer);
    string s = " Timer: ";
    s = s.append(ans);
    this->Timer.setString(s);
}

void Game::updateScore()
{
    string s = "Score: ";
    string ans = to_string(this->score);
    s = s.append(ans);
    this->Score.setString(s);
}

void Game::renderHealth()
{
    for (int i = 0;i < this->health.size();i++) {
        window->draw(this->health[i]);
    }
}

void Game::Energizer()
{
    this->map.tiles[1][1]->isEnergy = true;
    this->map.tiles[1][1]->food.setFillColor(Color:: Yellow);
    this->map.tiles[1][19]->isEnergy = true;
    this->map.tiles[1][19]->food.setFillColor(Color::Yellow);
    this->map.tiles[16][1]->isEnergy = true;
    this->map.tiles[16][1]->food.setFillColor(Color::Yellow);
    this->map.tiles[16][19]->isEnergy = true;
    this->map.tiles[16][19]->food.setFillColor(Color::Yellow);
    
}

void Game::attackMode()
{
    if (attack == true) {
        blinky->Top.setFillColor(Color(25, 25, 166));
        blinky->Bottom.setFillColor(Color(25, 25, 166));
        blinky->speed = 0.25;

        pinky->Top.setFillColor(Color(25, 25, 166));
        pinky->Bottom.setFillColor(Color(25, 25, 166));
        pinky->speed = 0.25;
        timer = timer + 0.1;

        baaka->Top.setFillColor(Color(25, 25, 166));
        baaka->Bottom.setFillColor(Color(25, 25, 166));
        baaka->speed = 0.25;

        clyde->Top.setFillColor(Color(25, 25, 166));
        clyde->Bottom.setFillColor(Color(25, 25, 166));
        clyde->speed = 0.25;
        cout << this->timer << endl;

        if (timer >= 200) {
            blinky->Top.setFillColor(Color::Red);
            blinky->Bottom.setFillColor(Color::Red);
            blinky->speed = 0.5;

            pinky->Top.setFillColor(Color(255, 184, 255));
            pinky->Bottom.setFillColor(Color(255, 184, 255));
            pinky->speed = 0.5;

            baaka->Top.setFillColor(Color(0, 255, 255));
            baaka->Bottom.setFillColor(Color(0, 255, 255));
            baaka->speed = 0.5;

            clyde->Top.setFillColor(Color(255, 184, 82));
            clyde->Bottom.setFillColor(Color(255, 184, 82));
            clyde->speed = 0.5;
            
            this->attack = false;
            timer = 0;
            this->player->changeSpeed(0.4);
        }

    }

}


//Private functions
void Game::initVariables() {
	this->window = nullptr;
    this->font.loadFromFile("Fonts/Roboto-Light.ttf");
    //this->ghost.mapArray(this->map.tiles, 0, 0);

    //Gamelogic

}
void Game::initWindow() {
	this->videomode.height = 700;
	this->videomode.width = 820;
	this->window = new RenderWindow(this->videomode, "Pacman", Style::Titlebar | Style::Close | Style::Resize);
    this->window->setFramerateLimit(144);
}


void Game::initPlayer()
{
    this -> player = new Player();
}

void Game::initHealth()
{
    RectangleShape a;
    a.setFillColor(Color::Red);
    a.setSize({ 80.f,100.f });
    a.setPosition(400.f, 10.f);

    this->health.push_back(a);
    a.setPosition(480.f, 10.f);

    this->health.push_back(a);
    a.setPosition(460.f, 10.f);

    this->health.push_back(a);

}

void Game::initText()
{
    this->Score.setFont(font);
    this->Score.setString("Score: ");
    this->Score.setPosition({ 2.f,2.f });
    this->Score.setCharacterSize(50.f);
    this->Score.setFillColor(Color::Blue);

    this->lose.setFont(font);
    this->lose.setString("Game Over");
    this->lose.setPosition(100, 10);
    this->lose.setCharacterSize(120.f);
    this->lose.setFillColor(Color::Blue);

    this->win.setFont(font);
    this->win.setString("You win");
    this->win.setPosition(100, 200);
    this->win.setCharacterSize(120.f);
    this->win.setFillColor(Color::Blue);

    this->Timer.setFont(font);
    this->Timer.setString(" ");
    this->Timer.setPosition(400,2);
    this->Timer.setCharacterSize(50.f);
    this->Timer.setFillColor(Color::Blue);
}


//void Game::initMap()
//{
  //  this-> map = new Background();
//}

Game::Game() {
	this->initVariables();
	this->initWindow();
    this->initText();
    this->initPlayer();
    this->Energizer();

}

Game :: ~Game() {
	delete this->window;
    delete this->player;

}//Accessors

const bool Game::running() const {
	return this->window->isOpen();
}

//Functions

void Game::pollEvents() {
    //Event Polling
    //cout << this->player.getPosition().x << " " << this->player.getPosition().y<<endl;
    while (this->window->pollEvent(this->ev)) {
        switch (this->ev.type) {
        case Event::Closed:
            this->window->close();
            break;
        case Event::KeyPressed:
            //cout << this->map.tiles[(this->player->getPosX() - 70) / 30][(this->player->getPosY()-70)/30]->tile.getGlobalBounds().left << endl;
            if (this->ev.key.code == Keyboard::Escape) {
                this->window->close();
            }

            //state
            if (this->ev.key.code == Keyboard::Space) {
                bool pause = state.pause;
                this->state.paused(!pause);
            }
            
            //MovePlayer
            if (this->ev.key.code == Keyboard::Left){
                direction = {-1,0};
            }
            if (this->ev.key.code == Keyboard::Down) {
                direction = {0,1};
            }
            if (this->ev.key.code == Keyboard::Right) {
                direction = {1,0};
            }
            if (this->ev.key.code == Keyboard::Up) {
                direction = {0,-1};
            }

            break;
        }
    }
}

void Game::updatemousePos() {
    /*
    
        -updates mouse position


    */
    //this->mousePoswindow = Mouse::getPosition(*this->window);
}

void Game ::update() {     //update game window
    //this->ent.storefood(this->map.tiles);
    if (!this->state.pause or !this->state.end || !this->state.exit) {
        this->player->updatePlayer(this->direction);
        this->blinky->update(this->currBlinky);
        this->pinky->update(this->currPinky);
        this->baaka->update(this->currbaaka);
        this->clyde->update(this->currClyde);
    }
    this->pollEvents();
    this->updateScore();
    this->upateTimer();
    if (this->ghostCollision()) {
        size--;
        return;
    }
    this->attackMode();

}


void Game ::render() {   //showing the points(eyes open and see what happend)
    this ->window->clear(Color());
    
    //Draw
    if (attack) {
        this->window->draw(this->Timer);
    }
    if (!state.pause) {
        this->wallCollision(direction);
    }
    if (!this->state.end and !this->state.exit) {

        this->map.render(*window);

        this->player->renderPlayer(direction, *this->window);
        this->window->draw(Score);
        this->renderGhost();
        this->renderHealth();
    }
    if (this->state.end) {
        this->Score.setPosition(500, 500);
        this->window->draw(Score);
        this->window->draw(win);
    }

    if (this->state.exit) {
        this->direction = { 0,0 };
        this->Score.setPosition(500, 200);
        this->window->draw(Score);
        this->window->draw(lose);
    }
    this->window->display();
        //cout << this->map.countFood << endl;
}



