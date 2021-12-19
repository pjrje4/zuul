#include "room.h"
#include <vector>
#include <iostream>
#include <cstring>

#if 0
Justin Iness
C++ Programming
12/7/21
Main for Zuul project
#endif
//test
using namespace std;

void go(int dir, vector<Room*>&, int &inRoom);

int main() {

	vector<Room*> rooms;
	map<int, char*> exits;

	int currentRoom = 0;

	Room* a = new Room("The math classroom");
	exits[0] = "S";
	//a.north = 0;
	//a.west = 0;
	//a.east = 0;
	a.south = 1;
	rooms.push_back(a);
	
	Room* b = new Room("The auditorium");
	exits[1] = "N, E, S";
	b.north = 0;
	//b.west = 0;
	b.east = 0;
	b.south = 0;
	rooms.push_back(b);
	
	Room* c = new Room("The auditorium");
	exits[2] = "N";
	c.north = 0;
	//c.west = 0;
	//c.east = 0;
	//c.south = 0;
	rooms.push_back(c);
	
	Room* d = new Room("The auditorium");
	exits[3] = "S";
	d.north = 0;
	d.west = 0;
	d.east = 0;
	d.south = 0;
	rooms.push_back(d);
	
	Room* e = new Room("The auditorium");
	exits[4] = "N, W, E";
	e.north = 0;
	e.west = 0;
	e.east = 0;
	e.south = 0;
	rooms.push_back(e);
	
	Room* f = new Room("The auditorium");
	exits[5] = "S";
	f.north = 0;
	f.west = 0;
	f.east = 0;
	f.south = 0;
	rooms.push_back(f);
	
	Room* g = new Room("The auditorium");
	exits[6] = "N, W, E";
	g.north = 0;
	g.west = 0;
	g.east = 0;
	g.south = 0;
	rooms.push_back(g);
	
	Room* h = new Room("The auditorium");
	exits[7] = "W, E";
	h.north = 0;
	h.west = 0;
	h.east = 0;
	h.south = 0;
	rooms.push_back(h);
	
	Room* i = new Room("The auditorium");
	exits[8] = "W, E, S";
	i.north = 0;
	i.west = 0;
	i.east = 0;
	i.south = 0;
	rooms.push_back(i);
	
	Room* j = new Room("The auditorium");
	exits[9] = "W";
	j.north = 0;
	j.west = 0;
	j.east = 0;
	j.south = 0;
	rooms.push_back(j);
	
	Room* k = new Room("The auditorium");
	exits[10] = "N, S";
	k.north = 0;
	k.west = 0;
	k.east = 0;
	k.south = 0;
	rooms.push_back(k);
	
	Room* l = new Room("The auditorium");
	exits[11] = "N, E";
	l.north = 0;
	l.west = 0;
	l.east = 0;
	l.south = 0;
	rooms.push_back(l);
	
	Room* m = new Room("The auditorium");
	exits[12] = "W, E";
	m.north = 0;
	m.west = 0;
	m.east = 0;
	m.south = 0;
	rooms.push_back(m);
	
	Room* n = new Room("The auditorium");
	exits[13] = "W, E";
	n.north = 0;
	n.west = 0;
	n.east = 0;
	n.south = 0;
	rooms.push_back(n);
	
	Room* o = new Room("The auditorium");
	exits[14] = "W";
	o.north = 0;
	o.west = 0;
	o.east = 0;
	o.south = 0;
	rooms.push_back(o);

	vector<Item*> inventory;

	while (true) {
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
			go(1, rooms, currentRoom);
		}
		else if (strcmp(input, "W") == 0) {
                        go(2, rooms, currentRoom);
                }
		else if (strcmp(input, "E") == 0) {
                        go(3, rooms, currentRoom);
                }
		else if (strcmp(input, "S") == 0) {
                        go(4, rooms, currentRoom);
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
void go(int dir, vector<Room*>& in, int &inRoom) {
	if (dir == 1) {
		//north
	}
	if (dir == 2) {
		//west
	}
	if (dir == 3) {
		//east
	}
	if (dir == 4) {
		//south
	}
}
