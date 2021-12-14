#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
using namespace sf;
class Player
{
private:

	//player
	Sprite sprite;
	Texture texture;
public:
	CircleShape pacman;
private:

	//Movement speed
	float movementSpeed;

	//Private functions
	void initTexture();
	void initSprite();
	void initPlayer();

public:
	Player();
	virtual ~Player();

	//Functions

	void Changerotation(float x);
	void Move(const Vector2f& direction);
	void updatePlayer(const Vector2f& direction);
	void renderPlayer(const Vector2f& direction, RenderTarget& target);
	float getPosX();
	float getPosY();
	float getSpeed();
	FloatRect GetBounds();

	void changeSpeed(float x);
	void changeColor(Color a);

};