#pragma once

#include "gamedata.h"


class Player {


public:

	Location* currentLocation = nullptr;
	std::vector<Location*> locationsVisited;
	std::string name;
	int moves = 0;


};


