#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "../include/Location.h"
#include "../include/Item.h"
#include "../include/Character.h"

using namespace std;


void Location::display(){
    if(firstVisit){
        cout << firstDescription << endl;
        displayItems();
        firstVisit = false;
    }
    else{
        cout << "You are at " << name << " again." << endl; 
        displayItems();
    }
}

void Location::displayExits() const{
    //Not a thing in the current version of the game, however added in case of future expansions
    if (roomExits.empty()){
        cout<< "There are no exits out of this room" << endl;
    }
    else{
        cout << "Available exits: " << endl;
        for (const pair<string, Location*>& exit : roomExits){
            cout << exit.first << " " ;
        }
        cout << endl;
    }
}

void Location::displayItems() const{
    
    for (int i = 0; i < items.size(); i++){
         
    }
}
