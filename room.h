#include <vector>

#if 0
Justin Iness
C++ Programming
12/7/21
Room class for Zuul project
#endif

using namespace std;

struct Item {
        char name[30]; // name of item
};

class Room {
	public:
		int north; // exits
		int west;
		int east;
		int south;

		Room(char*); // constructor
		~Room(); // deconstructor
		char* getName(); // getters / setters / newitems
		void newItem(char*);
		void getItems();
		vector<Item*> roomitems; // item vector 
	protected:
		char name[50]; // name of room
};

