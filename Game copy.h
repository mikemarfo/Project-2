//@author Mike Marfo
//@version 2015.10.01
#include <iostream>
#include <set>
#include <string>
#include "Room.h"
#include "Command.h"
#include "CommandWords.h"
#include "Parser.h"
using namespace std;

#ifndef GAME_H
#define GAME_H
class Game
{
	private:
			Parser parser;
    		Room* currentRoom;
    		void createRooms();
			void printWelcome();
			bool processCommand(Command command);
			void printHelp();
			void goRoom(Command command);
			bool quit(Command command);
	public:
			Game();
			void play();
};
#endif
