#pragma once

#include <vector>

#include "Location.h"

class Level {
private:
	std::vector<Location> locationList;

	void init();
public:
	Level();
	std::vector<Location> getLocations();
};