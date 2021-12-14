#pragma once

#include<vector>
#include<iostream>
#include<ctime>  //For random function
#include<string>
#include "Player.h"
#include "Background.h"
#include "Ghost.h"
#include "State.h"

using namespace sf;
using namespace std;

/*
	This acts like game engine
	Wrapper class
*/

class Game{
private:

	//State

	State state;

	// Mode
	
	bool attack = false;
	float timer = 0;
	
	//Window
	RenderWindow* window;
	VideoMode videomode;
	Event ev;
	//Gamelogic

	//Player
	Player* player;

	//Direction
	Vector2f direction = {0.f,0.f};
	Vector2f prevDir = { 0.f,0.f };
	int count = 0;
	
	//Map
	Background map;

	//Nextpos

	FloatRect nextpos;

	//Score and text
	Font font;
	Text Score;
	Text lose;
	Text Timer;

	Text win;
	int score = 0;
	int food = 0;

	//Health
	vector<RectangleShape> health;
	int size = 3;

	//Ghost

	/*Blinky*/
	Ghost *blinky = new Ghost(100.f,100.f,Color::Red);
	Vector2f currBlinky = { 1.f,0.f };
	Vector2f prevBlinky = { 1.f,0.f };
	Vector2f prevBlinky2 = { 1.f,0.f };

	/*pinky*/
	Ghost *pinky = new Ghost(100.f, 310.f, Color(255,184,255));
	Vector2f currPinky = { 1.f,0.f };
	Vector2f prevPinky = { 1.f,0.f };
	Vector2f prevPinky2 = { 1.f,0.f };

	/*baaka*/
	Ghost *baaka = new Ghost(430.f, 100.f, Color(0,255,255));
	Vector2f currbaaka = { -1.f,0.f };
	Vector2f prevbaaka = { -1.f,0.f };
	Vector2f prevbaaka2 = { -1.f,0.f };

	/*clyde*/
	Ghost* clyde = new Ghost(640.f, 520.f, Color(255,184,82));
	Vector2f currClyde = { -1.f,0.f };
	Vector2f prevClyde = { -1.f,0.f };
	Vector2f prevClyde2 = { -1.f,0.f };
	
	//Private functions
	void initVariables();
	void initWindow();
	void initPlayer();
	void initHealth();
	void initText();
	//void initMap();

public:
	//constructor
	Game();
	virtual ~Game();
	//Accessors
	
	const bool running() const;
	//functions
	void pollEvents();
	void updatemousePos();
	void update();
	void render();

	//pacman
	void wallCollision(Vector2f& direction);
	bool ghostCollision();

	//Ghost
	void Ghostmove(Ghost *a, Vector2f& curr, Vector2f& prev, Vector2f& prev2);
	void directionUpdate(Ghost *a,Vector2f &curr,Vector2f &prev , Vector2f &prev2);
	void renderGhost();

	//Score and health


	void upateTimer();
	void updateScore();
	void renderHealth();
	void Energizer();
	void attackMode();



};
