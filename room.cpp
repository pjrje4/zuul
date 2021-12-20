#include "room.h"
#include <iostream>
#include <cstring>
#include <vector>


#if 0
Justin Iness
C++ Programming
12/7/21
Room class for Zuul project
#endif

using namespace std;

Room::Room (char* inName) { // constructor that names it too!  God i'm so smart
	strcpy(this->name, inName);
}
Room::~Room() { // decontrustor
	
}
char* Room::getName() { // get name of room
	return this->name;
}
void Room::getItems() { // get items in room
	cout << "Items in the room: ";
	for (vector<Item*>::iterator i = this->roomitems.begin(); i != this->roomitems.end(); i++) { //iterate vector
		cout << (*i)->name << ", ";
	}
	cout << endl;
}
void Room::newItem(char* inName) { // make new item in room
	Item* i = new Item();
	strcpy(i->name, inName);
	this->roomitems.push_back(i);
}
