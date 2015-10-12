//@author Mike Marfo
//@version 2015.10.01
#include <iostream>
#include <vector>
#include <string>
#include "Command.h"
#include <algorithm>
using namespace std;

#ifndef COMMANDWORDS_H
#define COMMANDWORDS_H
class CommandWords
{
	private:
			vector<string> myCommands;
	public:
			CommandWords();
			bool isCommand(string aString);
			void showAll();
};
#endif
