#pragma once

#include "GlobalHeader.h"

class Planet
{
private:
	const int TELLURIC_PROB = 20;
	const int GAS_PROB = 60;
	const int DEAD_PROB = 20;

	const int TELLURIC_MIN_RADIUS = 2500;
	const int TELLURIC_MAX_RADIUS = 8000;
	const int GAS_MIN_RADIUS = 50000;
	const int GAS_MAX_RADIUS = 90000;
	const int DEAD_MIN_RADIUS = 2000;
	const int DEAD_MAX_RADIUS = 5000;

	const int TELLURIC_MIN_GRAVITY = 3;
	const int TELLURIC_MAX_GRAVITY = 10;
	const int GAS_MIN_GRAVITY = 3;
	const int GAS_MAX_GRAVITY = 12;
	const int DEAD_MIN_GRAVITY = 9;
	const int DEAD_MAX_GRAVITY = 24;

	enum Type {
		TELLURIC,
		GAS,
		DEAD
	};
		
	Type type;
	int radius;
	float gravity;

public:
	Planet();

	void Display();

};

