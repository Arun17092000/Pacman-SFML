#include "Game.h"
#include<iostream>

using namespace sf;


int main(){
    //Init Srand
    srand(static_cast<unsigned>(time(NULL)));
    //INIt game engine
    Game game;
 
    //Structure
  
    //Game loop
    while (game.running()) {
        //Update
        game.update();

        //Render
        game.render();
    }
    //end
    return 0;
}