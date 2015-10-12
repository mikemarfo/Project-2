#include <iostream>
#include <set>
#include <string>
#include "Room.h"
using namespace std;
/**
 * Class Room - a room in an adventure game.
 *
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 *
 * A "Room" represents one location in the scenery of the game.  It is 
 * connected to other rooms via exits.  For each existing exit, the room 
 * stores a reference to the neighboring room.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author Mike Marfo
 * @version 2011.08.08
 * @version 2015.10.01
 */

    /**
     * Create a room described "description". Initially, it has
     * no exits. "description" is something like "a kitchen" or
     * "an open court yard".
     * @param description The room's description.
     */
    Room::Room(string description) 
    {
        this->description = description;
        exits = map<string, Room*>();
    }


    /**
     * Define an exit from this room.
     * @param direction The direction of the exit.
     * @param neighbor  The room to which the exit leads.
     */
    void Room::setExit(string direction, Room* neighbor) 
    {
        exits[direction] = neighbor;
    }

    /**
     * @return The short description of the room
     * (the one that was defined in the constructor).
     */
    string Room::getShortDescription()
    {
        return description;
    }

    /**
     * Return a description of the room in the form:
     *     You are in the kitchen.
     *     Exits: north west
     * @return A long description of this room
     */
    string Room::getLongDescription()
    {
        return "You are " + description + ".\n" + getExitString();
    }

    /**
     * Return a string describing the room's exits, for example
     * "Exits: north west".
     * @return Details of the room's exits.
     */
    string Room::getExitString()
    {
        string returnString = "exits: ";
        string modExit = "";

    for ( map<string, Room*>::iterator it = exits.begin(); it != exits.end(); it++ )
    {
            modExit = it->first;  // string (key)
            returnString = returnString + modExit;              
            
    }   
        
        return returnString;
    }

    /**
     * Return the room that is reached if we go from this room in direction
     * "direction". If there is no room in that direction, return null.
     * @param direction The exit's direction.
     * @return The room in the given direction.
     */
    Room* Room::getExit(string direction) 
    {
        return exits[direction];
    }


