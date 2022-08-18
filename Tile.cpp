//
// Created by Mia Seppi on 8/17/22.
//

#include "Headers/Tile.hpp"


Tile::Tile(TileType t, std::string n, int c): type(t), name(n), cost(c) {
    id= ++idCounter;
}

Tile& Tile::operator=(const Tile& orig) {
    id = orig.id;
    return(*this);
}

int Tile::idCounter = 0;

std::string Tile::getTypeName() {
    switch(type) {
        case RESIDENTIAL:
            return "RESIDENTIAL";
        case CIVIC:
            return "CIVIC";
        case INDUSTRIAL:
            return "INDUSTRIAL";
        case COMMERCIAL:
            return "COMMERCIAL";
        case LAKE:
            return "LAKE";
    }
}

std::string Tile::toString() {
    std::stringstream ss;

    ss << "Name: " << name << "   |   " << "ID: " << id << std::endl;
    ss << "\t" << "Type: " << getTypeName() << std::endl;
    ss << "\t"<< "Cost: " << cost << std::endl;

    return ss.str();
}

    void Tile::applyEffects() { //Only do the recurring effects
//        //Loop through each effect
//            //if effectType == ONCE
//                //Skip :) no code
//            //if effectType for each adjacent
//                //Get all adjacent tiles
//                //if adjacent
//
//            //if condition2 -> apply condition2 and return calc
//            //....
//
//        //done
    }