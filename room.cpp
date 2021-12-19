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

Room::Room (char* inName) {
	strcpy(this->name, inName);
}
Room::~Room() {
	
}
char* Room::getName() {
	return this->name;
}
void Room::getItems() {
	cout << "Items in the room: ";
	for (vector<Item*>::iterator i = this->roomitems.begin(); i != this->roomitems.end(); i++) { //iterate vector
		cout << (*i)->name << ", ";
	}
	cout << endl;
}
void Room::newItem(char* inName) {
	Item* i = new Item();
	strcpy(i->name, inName);
	this->roomitems.push_back(i);
}
