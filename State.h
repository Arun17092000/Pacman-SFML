#pragma once

#include <sfml/Graphics.hpp>
class State
{
public:
	bool pause;
	bool end;
	bool exit;

public:
	State();
	virtual ~State();

	//public functions

	void paused(bool s);
	void ended(bool s);
	void exited(bool s);



};

