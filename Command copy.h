//@author Mike Marfo
//@version 2015.10.01
#include <iostream>
#include <set>
#include <string>
using namespace std;

#ifndef COMMAND_H
#define COMMAND_H
class Command
{
	private:
		 	string commandWord;
    		string secondWord;

    public:
    		Command(string firstWord, string secondWord);
    		string getCommandWord();
    		string getSecondWord();
    		bool	isUnknown();
    		bool	hasSecondWord();


};
#endif
