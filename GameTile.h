#pragma once

#include<SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class GameTile
{
public:
	int dir = 0;
	bool isPassable;
	Vector2f pos;
	RectangleShape tile;
	CircleShape food;
	bool isturn = false;
	bool isEnergy = false;

	int food_Count = 0;

	GameTile(float x, float y, bool a,Color b);
	void setUpTile();
	void initFood();
	int foodCount();
	void changeColor(Color a);
};

