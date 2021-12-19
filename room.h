#include <vector>

#if 0
Justin Iness
C++ Programming
12/7/21
Room class for Zuul project
#endif

using namespace std;

struct Item {
        char name[30];
};

class Room {
	public:
		int north;
		int west;
		int east;
		int south;

		Room(char*);
		~Room();
		char* getName();
		void newItem(char*);
		void getItems();
		vector<Item*> roomitems;
	protected:
		char name[50];
};

