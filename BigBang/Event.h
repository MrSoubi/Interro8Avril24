#pragma once
class Event
{
public:
	Event();
private:
	const int NOTHING_PROB = 85;
	const int INCIDENT_PROB = 15;

	enum Type {
		OXYGEN,
		FUEL,
		HULL
	};

	enum Severity {
		LOW,
		MEDIUM,
		HIGH
	};

	const int LOW_SEVERITY_MIN = 3;
	const int LOW_SEVERITY_MAX = 5;
	const int MEDIUM_SEVERITY_MIN = 10;
	const int MEDIUM_SEVERITY_MAX = 15;
	const int HIGH_SEVERITY_MIN = 15;
	const int HIGH_SEVERITY_MAX = 30;
};

