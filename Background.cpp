#include "Background.h"
#include<iostream>

void Background::initFood()
{
	this->Food.setFillColor(Color::Red);
	this->Food.setRadius(2.f);
	//this->Food.setPosition(40.f, 60.f);
}

void Background::initInner()
{
	this->Inner.setFillColor(Color::Blue);
	this->Inner.setPosition(40.f, 60.f);
}

vector<vector<int>> Background::initPoints()
{
	vector<vector<int>> points(25);
	int i = 0;
	points[i].push_back(1);
	points[i].push_back(4);
	i++;

	points[i].push_back(1);
	points[i].push_back(17);
	i++;

	//points[i].push_back(4);
	//points[i].push_back(1);
	//i++;
	//
	points[i].push_back(4);
	points[i].push_back(13);
	i++;

	points[i].push_back(6);
	points[i].push_back(11);
	i++;
	
	points[i].push_back(8);
	points[i].push_back(5);
		points[i].push_back(0);
	i++;

	points[i].push_back(8);
	points[i].push_back(1);
    points[i].push_back(0);
    i++;



	points[i].push_back(8);
	points[i].push_back(15);
points[i].push_back(0);
	i++;

	points[i].push_back(10);
	points[i].push_back(5);
points[i].push_back(0);
	i++;

	points[i].push_back(10);
	points[i].push_back(7);
	points[i].push_back(1);
	i++;



	points[i].push_back(10);
	points[i].push_back(1);
points[i].push_back(0);
	i++;
	points[i].push_back(12);
	points[i].push_back(13);
	points[i].push_back(1);
	i++;

	points[i].push_back(12);
	points[i].push_back(5);
points[i].push_back(0);
	i++;

	points[i].push_back(12);
	points[i].push_back(19);
points[i].push_back(0);
	i++;

	points[i].push_back(11);
	points[i].push_back(7);
points[i].push_back(0);
	i++;

	points[i].push_back(14);
	points[i].push_back(1);
points[i].push_back(0);
	i++;
	//points[i].push_back(14);
	//points[i].push_back(15);
	//points[i].push_back(0);
	//i++;

	points[i].push_back(16);
	points[i].push_back(9);
	points[i].push_back(0);
	i++;

	points[i].push_back(15);
	points[i].push_back(11);
    points[i].push_back(0);
	i++;

	//points[i].x = 4;
	//points[i].y = 10;
	//i++;

	points[i].push_back(10);
	points[i].push_back(10);
    points[i].push_back(0);
	i++;

	//cout << i;

	return points;
}

void Background::initTiles()
{
	vector <int> size(50);
	for (int i = 0;i < size.size();i++) {
		size[i] = 40 + (i+1)*30;
	}
	this->tiles.clear();
	vector<GameTile*> firstrow;
	int i = 0;
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //1
	firstrow.push_back(new GameTile(size[i], size[0], false, Color::White));	i++; //2
	firstrow.push_back(new GameTile(size[i], size[0], false, Color::White));	i++; //3
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //4
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //5
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //6
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //7
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //8
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //9
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //10
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //11
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //12
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //13
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //14
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //15
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //16
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //17
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //18
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //19
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //20
	firstrow.push_back(new GameTile(size[i],  size[0], false, Color::White));	i++; //21
	this->tiles.push_back(firstrow);
	i = 0;

	vector<GameTile*> secondrow;
	secondrow.push_back(new GameTile(size[i], size[1], false,     Color::White));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1], false,     Color::White));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1],  true, Color(18,97,160)));	i++;
	secondrow.push_back(new GameTile(size[i], size[1], false,     Color::White));	i++;
	this->tiles.push_back(secondrow);
	i = 0;


	vector<GameTile*> thirdrow;
	thirdrow.push_back(new GameTile(size[i], size[2], false,	   Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2],  true, Color(18, 97, 160)));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2],  true, Color(18, 97, 160)));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,	   Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,	   Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2],  true, Color(18, 97, 160)));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2],  true, Color(18, 97, 160)));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,	   Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2],  true, Color(18, 97, 160)));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2],  true, Color(18, 97, 160)));	i++;
	thirdrow.push_back(new GameTile(size[i], size[2], false,       Color::White));	i++;
	this->tiles.push_back(thirdrow);
	i = 0;
	
	vector<GameTile*> fourthrow;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3],  true, Color(18, 97, 160)));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3],  true, Color(18, 97, 160)));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3],  true, Color(18, 97, 160)));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3],  true, Color(18, 97, 160)));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3],  true, Color(18, 97, 160)));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3],  true, Color(18, 97, 160)));	i++;
	fourthrow.push_back(new GameTile(size[i], size[3], false,       Color::White));	i++;
	this->tiles.push_back(fourthrow);
	i = 0;
	
	vector<GameTile*> fifthrow;
	fifthrow.push_back(new GameTile(size[i], size[4], false,       Color::White));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4],  true, Color(18, 97, 160)));	i++;
	fifthrow.push_back(new GameTile(size[i], size[4], false,       Color::White));	i++;
	this->tiles.push_back(fifthrow);
	i = 0;
	
	vector<GameTile*> sixthrow;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], true, Color(18, 97, 160)));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5],  true, Color(18, 97, 160)));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5],  true, Color(18, 97, 160)));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5],  true, Color(18, 97, 160)));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5],  true, Color(18, 97, 160)));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5],  true, Color(18, 97, 160)));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	sixthrow.push_back(new GameTile(size[i], size[5], false,       Color::White));	i++;
	this->tiles.push_back(sixthrow);
	i = 0;

	vector<GameTile*> seventhrow;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6],  true, Color(18, 97, 160)));	i++;
	seventhrow.push_back(new GameTile(size[i], size[6], false,       Color::White));	i++;
	this->tiles.push_back(seventhrow);
	i = 0;

	vector<GameTile*> row8;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,	   Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7],  true, Color(18, 97, 160)));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7],  true, Color(18, 97, 160)));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7],  true, Color(18, 97, 160)));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7],  true, Color(18, 97, 160)));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	row8.push_back(new GameTile(size[i], size[7], false,       Color::White));	i++;
	this->tiles.push_back(row8);
	i = 0;

	vector<GameTile*> row9;
	row9.push_back(new GameTile(size[i], size[8], false,       Color::White));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8], false,       Color::White));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8], false,       Color::White));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8],  true, Color(18, 97, 160)));	i++;
	row9.push_back(new GameTile(size[i], size[8], false,       Color::White));	i++;
	this->tiles.push_back(row9);
	i = 0;

	vector<GameTile*> row10;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9],  true, Color(18, 97, 160)));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9],  true, Color(18, 97, 160)));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++; 
	row10.push_back(new GameTile(size[i], size[9], true,  Color(18, 97, 160))); i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++; 
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9],  true, Color(18, 97, 160)));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9],  true, Color(18, 97, 160)));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	row10.push_back(new GameTile(size[i], size[9], false,       Color::White));	i++;
	this->tiles.push_back(row10);
	this->tiles[9][9]->dir = -1;
	this->tiles[9][11]->dir = 1;
	i = 0;

	vector<GameTile*> row11;
	row11.push_back(new GameTile(size[i], size[10], false,       Color::White));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10], false,       Color::White));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10], false,       Color::White));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10],  true, Color(18, 97, 160)));	i++;
	row11.push_back(new GameTile(size[i], size[10], false,       Color::White));	i++;
	this->tiles.push_back(row11);
	i = 0;

	vector<GameTile*> row12;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11],  true, Color(18, 97, 160)));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11],  true, Color(18, 97, 160)));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11],  true, Color(18, 97, 160)));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11],  true, Color(18, 97, 160)));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11],  true, Color(18, 97, 160)));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	row12.push_back(new GameTile(size[i], size[11],  true, Color(18, 97, 160)));	i++;
	row12.push_back(new GameTile(size[i], size[11], false,       Color::White));	i++;
	this->tiles.push_back(row12);
	i = 0;

	vector<GameTile*> row13;
	row13.push_back(new GameTile(size[i], size[12], false,		 Color::White));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12], false,       Color::White));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12], false,       Color::White));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12],  true, Color(18, 97, 160)));	i++;
	row13.push_back(new GameTile(size[i], size[12], false,       Color::White));	i++;
	this->tiles.push_back(row13);
	i = 0;

	vector<GameTile*> row14;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13],  true, Color(18, 97, 160)));	i++;
	row14.push_back(new GameTile(size[i], size[13], false,       Color::White));	i++;
	this->tiles.push_back(row14);
	i = 0;

	vector<GameTile*> row15;
	row15.push_back(new GameTile(size[i], size[14], false,       Color::White));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14], false,       Color::White));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));    i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));    i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14], false,       Color::White));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14], false,       Color::White));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14],  true, Color(18, 97, 160)));	i++;
	row15.push_back(new GameTile(size[i], size[14], false,       Color::White));	i++;
	this->tiles.push_back(row15);
	i = 0;

	vector<GameTile*> row16;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15],  true, Color(18, 97, 160)));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,	     Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,	     Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,		 Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15],  true, Color(18, 97, 160)));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false, Color(18, 97, 160)));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	row16.push_back(new GameTile(size[i], size[15],  true, Color(18, 97, 160)));	i++;
	row16.push_back(new GameTile(size[i], size[15], false,       Color::White));	i++;
	this->tiles.push_back(row16);
	i = 0;

	vector<GameTile*> row17;
	row17.push_back(new GameTile(size[i], size[16], false,       Color::White));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16],  true, Color(18, 97, 160)));	i++;
	row17.push_back(new GameTile(size[i], size[16], false,       Color::White));	i++;
	this->tiles.push_back(row17);
	i = 0;

	vector<GameTile*> row18;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	row18.push_back(new GameTile(size[i], size[17], false, Color::White));	i++;
	this->tiles.push_back(row18);
	i = 0;


	
}


Background::Background()
{
	this->gridlength = 8;
	this->initFood();
	this->initInner();
	this->initTiles();
	//std::cout << "background has been called\n";
}

Background::~Background()
{
	std::cout << " " << std::endl;

}


void Background::update(RenderTarget& target)
{
	vector<vector<int>> points = this->initPoints();
	for (int i = 0;i <17;i++) {
		this->tiles[points[i][0]][points[i][1]]->isturn = true;
		//this->tiles[points[i][0]][points[i][1]]->food.setFillColor(Color::Red);
		/*this->tiles[points[i][0]][points[i][1]]->dir = points[i][1];*/
	}
	for (int i = 0 ;i < this->tiles.size();i++) 
	{
		for (int j = 0; j < this->tiles[i].size();j++) 
		{
			if (this->tiles[i][j]->isPassable){
				target.draw(this->tiles[i][j]->food);
				this->countFood++;
			}
			else {
				//if (this->tiles[i][j]->dir == -1) {
				//	float x = this->tiles[i][j]->tile.getPosition().x;
				//	float y = this->tiles[i][j]->tile.getPosition().y;
				//	this->tiles[i][j]->tile.setPosition(x-5,y);
				//}
				this->x++;
				//this->tiles[i][j]->changeColor(Color(180- 200*x, 2 + 200*x, x));
				target.draw(this->tiles[i][j]->tile);
				if (this->x > 180) {
					this->x = 0;
				}
			}
		}
	}
}


void Background::render(RenderTarget& target)
{
	//std::cout << "REnder has been called\n";
	this->update(target);
}
