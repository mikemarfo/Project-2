#include <iostream>
#include <string>
#include <sstream>
#include "Command.h"
#include "CommandWords.h"
#include "Parser.h"
using namespace std;
/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 * 
 * This parser reads user input and tries to interpret it as an "Adventure"
 * command. Every time it is called it reads a line from the terminal and
 * tries to interpret the line as a two word command. It returns the command
 * as an object of class Command.
 *
 * The parser has a set of known command words. It checks user input against
 * the known commands, and if the input is not one of the known commands, it
 * returns a command object that is marked as an unknown command.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author Mike Marfo
 * @version 2011.08.08
 * @version 2015.10.01
 */
    
    /**
     * Create a parser to read from the terminal window.
     */
    Parser::Parser() 
    {
        commands = CommandWords();

    }

    /**
     * @return The next command from the user.
     */
    Command Parser::getCommand() 
    {
        string inputLine;   // will hold the full input line
        string word1 = "";
        string word2 = "";

        getline(cin,inputLine);

        istringstream iss(inputLine);
        string word;
        while(iss >> word) {

        // Find up to two words on the line.
        
        }

        // Now check whether this word is known. If so, create a command
        // with it. If not, create a "null" command (for unknown command).
        if(commands.isCommand(word1)) {
            return Command(word1, word2);
        }
        else {
            return Command("", word2); 
        }
    }

    /**
     * Print out a list of valid command words.
     */
    void Parser::showCommands()
    {
        commands.showAll();
    }
