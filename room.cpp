#include "room.h"
#include <iostream>

#if 0
Justin Iness
C++ Programming
12/7/21
Room class for Zuul project
#endif

using namespace std;

Room::Room (char* inName) {
	strcpy(this->name, inName);
}
Games::~Games() {
	
}
char* Games::getName() {
	return this->name;
}
