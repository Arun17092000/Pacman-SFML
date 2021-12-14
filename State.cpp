#include "State.h"

State::State()
{
	this->pause = false;
	this->end = false;
	this->exit = false;
}

State::~State()
{
}

void State::paused(bool s)
{
	this->pause = s;
}

void State::ended(bool s)
{
	this->end = s;
}

void State::exited(bool s)
{
	this->end = s;
}
