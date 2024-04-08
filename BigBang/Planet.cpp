#include "Planet.h"

using namespace std;

Planet::Planet()
{
	int r = rand() % 100 + 1;

	if (r < TELLURIC_PROB) {
		this->type = TELLURIC;
		this->radius = rand() % (TELLURIC_MAX_RADIUS - TELLURIC_MIN_RADIUS) + TELLURIC_MIN_RADIUS;
		this->gravity = rand() % (TELLURIC_MAX_GRAVITY - TELLURIC_MIN_GRAVITY) + TELLURIC_MIN_GRAVITY;
	}
	else if (r < TELLURIC_PROB + GAS_PROB) {
		this->type = GAS;
		this->radius = rand() % (GAS_MAX_RADIUS - GAS_MIN_RADIUS) + GAS_MIN_RADIUS;
		this->gravity = rand() % (GAS_MAX_GRAVITY - GAS_MIN_GRAVITY) + GAS_MIN_GRAVITY;
	}
	else {
		this->type = DEAD;
		this->radius = rand() % (DEAD_MAX_RADIUS - DEAD_MIN_RADIUS) + DEAD_MIN_RADIUS;
		this->gravity = rand() % (DEAD_MAX_GRAVITY - DEAD_MIN_GRAVITY) + DEAD_MIN_GRAVITY;
	}
}

void Planet::Display()
{
	string display;

	switch (this->type) {
	case TELLURIC:
		display = "Telluric planet";
		break;
	case GAS:
		display = "Gas planet";
		break;
	case DEAD:
		display = "Dead planet";
		break;
	}

	display += " : radius = " + to_string(radius) + ", gravity = " + to_string(gravity);

	cout << display;
}
