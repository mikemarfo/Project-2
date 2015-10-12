//@author Mike Marfo
//@version 2015.10.01
#include <iostream>
#include <set>
#include <string>
#include <map>
using namespace std;

#ifndef ROOM_H
#define ROOM_H
class Room
{
	private:
			string description;
			map<string, Room*> exits;
			string getExitString();
	public:
			Room(string description);
			void setExit(string direction, Room* neighbor);
			string getShortDescription();
			string getLongDescription();
			Room* getExit(string direction);
			
};
#endif
