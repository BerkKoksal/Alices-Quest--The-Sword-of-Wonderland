//Check to see if the file has been included before, if not include it
#ifndef location_h
#define location_h 


#include <iostream>
#include <string>
#include <vector>
#include <map>

//Include the item header file so that we can declare the item vector that stores all the items in the room
#include "Item.h"
#include "Character.h"

using namespace std;

class Location{
    protected:
        bool firstVisit = true;
        string name;
        string firstDescription;
        //Vector since we do not have a item cap for the room
        vector<Item> items; 
        vector<Character> characters;
        //Using a map so we can make the four cardinal directions as keys to other Locations/ Exits. 
        map<string, Location*> roomExits;

    public:

        Location();

        virtual void display();
        virtual void displayExits() const;
        void displayItems() const;
        void addExit();
        void addItems();

        //Return a pointer to the Room a player is trying to go to. 
        Location getExit(const string &direction) const;
};

/*
Child Classes for Individual Rooms
*/

class Tree : public Location{

    Tree();
    void display() override;
    void displayExits() const override;
};

class DoorHallway : public Location{

    DoorHallway();
    void display() override;
    void displayExits() const override;
};

class PhantomForest : public Location{
    
    PhantomForest();
    void display() override;
    void displayExits() const override;

};

class RedCastle : public Location{

    RedCastle();
    void display() override;
    void displayExits() const override;
};

class RedCastleCourt : public Location{

    RedCastleCourt();
    void display() override;
    void displayExits() const override;
};

class RedRoad : public Location{

    RedRoad();
    void display() override;
    void displayExits() const override;
};

class Lake : public Location{

    Lake();
    void display() override;
    void displayExits() const override;
};

class MadHouse : public Location{

    MadHouse();
    void display() override;
    void displayExits() const override;
};

class WhiteCastle: public Location{

    WhiteCastle();
    void display() override;
    void displayExits() const override;
};

//Create a generic MazeRoom class and make instances of it when the game starts.
class MazeRoom: public Location{

    MazeRoom();
    void display() override;
    void displayExits() const override;
};

class DeadForest: public Location{

    DeadForest();
    void display() override;
    void displayExits() const override;
};

#endif