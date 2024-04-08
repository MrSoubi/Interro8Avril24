#include "SolarSystem.h"

SolarSystem::SolarSystem()
{
	hasBeenVisited = false;
	int planetCount = (rand() % 2) + 2;

	for (int i = 0; i < planetCount; i++) {
		planets.push_back(make_unique<Planet>());
	}
}