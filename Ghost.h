#pragma once
#include <sfml/Graphics.hpp>
#include <sfml/Window.hpp>
#include "GameTile.h"
class Ghost
{
public:
	sf::CircleShape Top;
	sf::RectangleShape Bottom;

	//direction

	float speed = 0.4;



	int X, Y;
	int arr[18][21];
	Ghost() {

	}
	Ghost(float x, float y, sf::Color a);

	virtual ~Ghost();


	void initBody(float x, float y, sf::Color a);
	void update(Vector2f &direction);
	void render(sf::RenderTarget& target, Vector2f& direction);
	bool wall(int a, int b);
	void mapArray(vector<vector<GameTile*>> map, int x,int y);
	void pathfinder(int x,int y);
};

