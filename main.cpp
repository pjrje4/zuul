#include "room.h"
#include <vector>
#include <iostream>
#include <cstring>
#include <map>

#if 0
Justin Iness
C++ Programming
12/7/21
Main for Zuul project
#endif
//test
using namespace std;


int main() {

	vector<Room*> rooms;
	map<int, char*> exits;

	int currentRoom = 0;

	Room* a = new Room("The math classroom");
	exits[0] = "S";
	//a->north = 0;
	//a->west = 0;
	//a->east = 0;
	a->south = 1;
	a->newItem("calculator");
	rooms.push_back(a);
	
	Room* b = new Room("The hallway.  The door behind you shuts.");
	exits[1] = "N, E, S";
	b->north = 0;
	//b->west = 0;
	b->east = 4;
	b->south = 2;
	rooms.push_back(b);
	
	Room* c = new Room("The literature classroom");
	exits[2] = "N";
	c->north = 1;
	//c->west = 0;
	//c->east = 0;
	//c->south = 0;
	c->newItem("book");
	rooms.push_back(c);
	
	Room* d = new Room("The staff room");
	exits[3] = "S";
	//d->north = 0;
	//d->west = 0;
	//d->east = 0;
	d->south = 4;
	d->newItem("graded papers");
	rooms.push_back(d);
	
	Room* e = new Room("The hallway");
	exits[4] = "N, W, E";
	e->north = 3;
	e->west = 1;
	e->east = 6;
	//e->south = 0;
	rooms.push_back(e);
	
	Room* f = new Room("The auditorium");
	exits[5] = "S";
	//f->north = 0;
	//f->west = 0;
	//f->east = 0;
	f->south = 6;
	f->newItem("paint");
	rooms.push_back(f);
	
	Room* g = new Room("The hallway");
	exits[6] = "N, W, E";
	g->north = 5;
	g->west = 4;
	g->east = 7;
	//g->south = 0;
	rooms.push_back(g);
	
	Room* h = new Room("The hallway");
	exits[7] = "W, E";
	//h->north = 0;
	h->west = 6;
	h->east = 8;
	//h->south = 0;
	rooms.push_back(h);
	
	Room* i = new Room("The hallway");
	exits[8] = "W, E, S";
	//i->north = 0;
	i->west = 7;
	i->east = 9;
	i->south = 10;
	rooms.push_back(i);
	
	Room* j = new Room("The janitors closet");
	exits[9] = "W";
	//j->north = 0;
	j->west = 8;
	//j->east = 0;
	//j->south = 0;
	j->newItem("mop");
	rooms.push_back(j);
	
	Room* k = new Room("The exit hallway");
	exits[10] = "N, S";
	k->north = 8;
	//k->west = 0;
	//k->east = 0;
	k->south = 11;
	rooms.push_back(k);
	
	Room* l = new Room("The exit hallway");
	exits[11] = "N, E";
	l->north = 10;
	//l->west = 0;
	l->east = 12;
	//l->south = 0;
	rooms.push_back(l);
	
	Room* m = new Room("The exit hallway");
	exits[12] = "W, E";
	//m->north = 0;
	m->west = 11;
	m->east = 13;
	//m->south = 0;
	rooms.push_back(m);
	
	Room* n = new Room("The exit hallway");
	exits[13] = "W, E";
	//n->north = 0;
	n->west = 12;
	n->east = 14;
	//n->south = 0;
	rooms.push_back(n);
	
	Room* o = new Room("The exit hallway");
	exits[14] = "W";
	//o->north = 0;
	o->west = 13;
	//o->east = 0;
	//o->south = 0;
	rooms.push_back(o);

	vector<Item*> inventory;

	while (true) {
		cout << endl;
		cout << endl;
		cout << endl;
		//room
		cout << "You are in " << rooms[currentRoom]->getName() << endl;
		//items in room
		rooms[currentRoom]->getItems();
		//inventory
		cout << "Items in your inventory: ";
		for (vector<Item*>::iterator i = inventory.begin(); i != inventory.end(); i++) { //iterate vector
			cout << (*i)->name << ", ";
                }
		cout << endl;
		//exits
		cout << "There are exits from this room: " << exits[currentRoom] << endl;

		char input[20];
		cout << "Enter a command (N, W, E, S, PICK, DROP, QUIT): ";
		cin.getline(input, 19);

		if (strcmp(input, "N") == 0) {
			if (rooms[currentRoom]->north != NULL) {
				currentRoom = rooms[currentRoom]->north;
			}
		}
		else if (strcmp(input, "W") == 0) {
			if (rooms[currentRoom]->west != NULL) {
				currentRoom = rooms[currentRoom]->west;
			}
                }
		else if (strcmp(input, "E") == 0) {
			if (rooms[currentRoom]->east != NULL) {
				currentRoom = rooms[currentRoom]->east;
			}
                }
		else if (strcmp(input, "S") == 0) {
			if (rooms[currentRoom]->south != NULL) {
				currentRoom = rooms[currentRoom]->south;
			}
                }
		if (currentRoom == 14) {
			cout << "YOU WIN! YOU ESCAPED THE SCHOOL!";
			return 0;
		}


		else if (strcmp(input, "PICK") == 0) {
                        cout << "Pick up what?" << endl;
                        cin.getline(input, 19);

			for (vector<Item*>::iterator i = rooms[currentRoom]->roomitems.begin(); i != rooms[currentRoom]->roomitems.end(); i++) { //iterate vector
                        	if (strcmp((*i)->name, input) == 0) { // if the input = title
                  	 		Item* item = new Item();
					strcpy(item->name, (*i)->name);
					inventory.push_back(item);
					
					rooms[currentRoom]->roomitems.erase(i);
					break;
                                }
                        }
                }
		else if (strcmp(input, "DROP") == 0) {
			cout << "Drop what?" << endl;
			cin.getline(input, 19);

			for (vector<Item*>::iterator i = inventory.begin(); i != inventory.end(); i++) { //iterate vector
                        	if (strcmp((*i)->name, input) == 0) { // if the input = title
                                	rooms[currentRoom]->newItem((*i)->name);
                  	 		inventory.erase(i);
					break;
				}
                        }
                }
		else if (strcmp(input, "QUIT") == 0) {
                        return 0;
                }
	}
}
