#include <iostream>
#include <vector>
#include <string>
#include "CommandWords.h"
using namespace std;
/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.
 * 
 * This class holds an enumeration of all command words known to the game.
 * It is used to recognise commands as they are typed in.
 *
 * @author  Michael Kölling and David J. Barnes
 * @author Mike Marfo
 * @version 2011.08.08
 * @version 2015.10.01
 */

CommandWords::CommandWords()
{
        myCommands.push_back("go");
        myCommands.push_back("quit");
        myCommands.push_back("help");
        myCommands.push_back("pick");
        myCommands.push_back("drop");
    }

    /**
     * Check whether a given String is a valid command word. 
     * @return true if it is, false if it isn't.
     */
    bool CommandWords::isCommand(string aString)
    {
        for(int i = 0; i < myCommands.size(); i++) {
            if(myCommands[i] == (aString))
                return true;
        }
        // if we get here, the string was not found in the commands
        return false;
    }

    /**
     * Print all valid commands to System.out.
     */
    void CommandWords::showAll() 
    {
        for (vector<string>::iterator item = myCommands.begin();
            item != myCommands.end();
            item++)
        {
            string word = *item; //dereference the item
            cout << word <<", ";
        }
    }
