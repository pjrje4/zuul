#include "room.h"

#if 0
Justin Iness
C++ Programming
12/7/21
Main for Zuul project
#endif

using namespace std;

void go(int dir);
void pick();
void drop();

int main() {
	while (true) {
		char input[20];
		cout << "Enter a command (N, W, E, S, PICK, DROP, QUIT): ";
		cin.getline(input, 19);
		if (strcmp(input, "N") == 0) {
			go(1);
		}
		else if (strcmp(input, "W") == 0) {
                        go(2);
                }
		else if (strcmp(input, "E") == 0) {
                        go(3);
                }
		else if (strcmp(input, "S") == 0) {
                        go(4);
                }
		else if (strcmp(input, "PICK") == 0) {
                        pick();
                }
		else if (strcmp(input, "DROP") == 0) {
                        drop();
                }
		else if (strcmp(input, "PICK") == 0) {
                        pick();
                }





			
