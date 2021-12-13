#include "room.h"
#include <iostream>
#include <cstring>

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
Room::~Room() {
	
}
char* Room::getName() {
	return this->name;
}
