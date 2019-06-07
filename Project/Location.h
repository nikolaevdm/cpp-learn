#pragma once
#include <string>

class Location {
public:
	Location(std::string str);
	std::string getTitle();
private:
	std::string title;
	std::string description;
};