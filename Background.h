#pragma once
#include<sfml/Graphics.hpp>
#include<sfml/Window.hpp>
#include<sfml/System.hpp>
#include "GameTile.h"
#include<vector>
using namespace sf;
using namespace std;

class Background
{
	CircleShape Food;
	RectangleShape Inner;

	//count

	int gridlength;
	void initFood();
	void initInner();
	void initTiles();
	int x = 0;
public:
	vector<vector<GameTile*> > tiles;
	int countFood = 0;

	vector<vector<int>> initPoints();
	Background();

	virtual ~Background();
	
	void update(RenderTarget& target);
	void render(RenderTarget& target);
};

