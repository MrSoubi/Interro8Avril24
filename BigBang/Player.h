#pragma once
class Player
{
public:
	Player();
	void Refuel(int amount);
	void RefillOxygen(int amount);
	void Repair(int amount);
	void ConsumeFuel(int amount);
	void ConsumeOxygen(int amount);
	void TakeDamage(int amount);

private:
	int fuel;
	int oxygen;
	int hull;
};

