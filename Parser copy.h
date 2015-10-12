//@author Mike Marfo
//@version 2015.10.01
#include <iostream>
#include <set>
#include <string>
#include "CommandWords.h"
using namespace std;

#ifndef PARSER_H
#define PARSER_H
class Parser
{
	private:
			CommandWords commands;
	public:
			Parser();
			Command getCommand();
			void showCommands();
};
#endif
