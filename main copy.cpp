//@author Mike Marfo
//@version 2015.10.01
/**
* 
* Runs the zuul game
**/
#include <iostream>
#include "Command.h"
#include "CommandWords.h"
#include "Parser.h"
#include "Room.h"
#include "Game.h"

using namespace std;
int main()
{
	Game theGame;
	theGame.play();
}