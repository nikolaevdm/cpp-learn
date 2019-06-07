#include "Location.h"

using namespace std;

Location::Location(std::string str) : title{ str } {}

std::string Location::getTitle() { return title; }