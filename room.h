#include "item.h"
#if 0
Justin Iness
C++ Programming
12/7/21
Room class for Zuul project
#endif

class Room {
	public:
		Room(char*);
		~Room();
		char* getName;
		void newItem(char*);
		char* getItems;
	protected:
		char name[50];
		vector<Item*> roomitems;
}

