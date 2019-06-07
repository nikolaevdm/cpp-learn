#include "Level.h"
#include <fstream>
#include <string>
#include <iostream>

Level::Level() {
	this->init();
}

void Level::init() {
	std::ifstream myfile("test.txt");
	for (std::string line; std::getline(myfile, line);) {
		std::cout << line << std::endl;
	}
}

std::vector<Location> Level::getLocations() {
	return this->locationList;
}