#pragma once
#include "Player.h"
#include<iostream>

void Player::initTexture()
{
    //Load texture from file
    if (this->texture.loadFromFile("Textures/pacman.png")) {
        //std::cout << "yessssssss";
    }
    
}

void Player::initSprite()
{
    //Set texture to the sprtites
    this->sprite.setTexture(this->texture);

    //REsize the sprite
    this->sprite.scale(0.05, 0.05);
    this->sprite.setPosition(460, 460);
}
void Player::initPlayer() {
    pacman.setRadius(13.5f);
    pacman.setFillColor(Color::Yellow);
    pacman.setPosition(462,462);
}

Player::Player()
{
    this->initTexture();
    this->initSprite();
    this->initPlayer();
    this->movementSpeed = 0.45;
}

Player:: ~Player()
{
}

void Player::Move(const Vector2f& direction)
{       
    //this->sprite.move(direction.x * this->movementSpeed, direction.y * this->movementSpeed);
    this->pacman.move(direction.x * this->movementSpeed, direction.y * this->movementSpeed);
}

void Player::Changerotation(float x)
{
    this->sprite.setRotation(x);
}

void Player::updatePlayer(const Vector2f& direction)
{
    this->Move(direction);
    //std::cout<<sprite.getPosition().x<<" "<<sprite.getPosition().y<<std::endl;

}

void Player::renderPlayer(const Vector2f& direction, RenderTarget& target)
{   
    //this->updatePlayer(direction);
    target.draw(this->pacman);
    //target.draw(this->sprite);
}

float Player::getPosX()
{
    return this->pacman.getPosition().x;
}

float Player::getPosY()
{
    return this->pacman.getPosition().y;
}

float Player::getSpeed() {
    return this->movementSpeed;
}

FloatRect Player::GetBounds()
{

    return this->pacman.getGlobalBounds();
}

void Player::changeSpeed(float x)
{
    this->movementSpeed = x;
}

void Player::changeColor(Color a)
{
    this->pacman.setFillColor(a);
}

