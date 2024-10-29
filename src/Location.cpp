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
        firstVisit = false;
    }
    else{
        cout << "You are at " << name << " again." << endl; 
        displayExits();
    }
}

void Location::displayExits() const{
    cout<<"There are a few exits out of here" << endl;
}
