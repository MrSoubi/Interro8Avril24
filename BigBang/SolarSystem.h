#pragma once

#include "GlobalHeader.h"

#include "Planet.h";

class SolarSystem
{
public:
	SolarSystem();
private:
	list<unique_ptr<Planet>> planets;
	bool hasBeenVisited;
};

