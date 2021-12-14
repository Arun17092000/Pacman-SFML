#include "Ghost.h"
#include <iostream>

Ghost::Ghost(float x, float y,sf::Color a)
{
	this->initBody(x,y,a);
}

Ghost::~Ghost()
{

}

void Ghost::initBody(float x, float y, sf::Color a)
{
	float radius = 13.5;
	Top.setFillColor(a);
	Top.setRadius(radius);
	Top.setPosition(x, y);
	Bottom.setFillColor(a);
	Bottom.setSize({ 2*radius, radius+1 });
	Bottom.setPosition(x, y + radius);

}

void Ghost::update(Vector2f& direction) {
	this->Top.move(direction.x * this->speed, direction.y * this->speed);
	this->Bottom.move(direction.x * this->speed, direction.y * this->speed);
}

void Ghost::render(sf::RenderTarget& target, Vector2f& direction)
{
	target.draw(this->Top);
	target.draw(this->Bottom);
}

bool Ghost::wall(int a, int b)
{
	if (arr[a][b] == 1) {
		return false;
	}
	return true;
}

void Ghost::mapArray(vector<vector<GameTile*>> map, int x, int y)
{
	for (int i = 0;i < map.size();i++) {
		for (int j = 0;j < map[i].size();j++) {
			if (map[i][j]->isPassable == false) {
				this->arr[i][j] = 0;
			}
			else {
				this->arr[i][j] = 1;
			}
		}
	}
	for (int i = 0;i < 18;i++) {
		for (int j = 0;j < 21;j++) {
			std::cout << arr[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}


void Ghost::pathfinder(int x, int y)
{
	this-> X = (int)(this->Top.getPosition().x - 70) / 30;
	this-> Y = (int)(this->Top.getPosition().y - 70) / 30;
	
	if (X > x && Y > y) {
		if (wall(X + 1, Y)) {
			X = 2;
		}
	}
	
}
