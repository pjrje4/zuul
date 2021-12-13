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

using namespace std;

void go(int dir, vector<Room*>&);
void pick(vector<Room*>&);
void drop(vector<Room*>&);

int main() {
	vector<Room*> rooms;
	Room* m = new Room("potato");
	rooms.push_back(m);
	char currentRoom[50] = "potato";
	while (true) {
		char input[20];
		cout << "Enter a command (N, W, E, S, PICK, DROP, QUIT): ";
		cin.getline(input, 19);
		if (strcmp(input, "N") == 0) {
			go(1, rooms);
		}
		else if (strcmp(input, "W") == 0) {
                        go(2, rooms);
                }
		else if (strcmp(input, "E") == 0) {
                        go(3, rooms);
                }
		else if (strcmp(input, "S") == 0) {
                        go(4, rooms);
                }
		else if (strcmp(input, "PICK") == 0) {
                        pick(rooms);
                }
		else if (strcmp(input, "DROP") == 0) {
                        drop(rooms);
                }
		else if (strcmp(input, "QUIT") == 0) {
                        return 0;
                }
	}
}
void go(int dir, vector<Room*>&) {
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
void pick(vector<Room*>& in/*, inRoom*/) {
	for (vector<Room*>::iterator i = in.begin(); i != in.end(); i++) { //iterate vector
		//if (strcmp((*i)->getName, currentRoom) == 0) { // if the input = title
			 cout << (*i)->getName() << endl; // output info
	//	}
        }
}
void drop(vector<Room*>&) {

}
