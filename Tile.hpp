//
// Created by Mia Seppi on 7/29/22.
//

#ifndef SUBURBIA_TILE_HPP
#define SUBURBIA_TILE_HPP

#include <map>
#include <string>
#include <vector>

#include "Effect.hpp"

enum TileType { RESIDENTIAL, CIVIC, INDUSTRIAL, COMMERICAL, LAKE };

class Tile {
private:
    TileType type;
    std::string name;
    int cost;
    std::vector<Effect*> effects;


public:
    Tile();
    Tile(TileType t, std::string n, int c, std::vector<Effect*> e = {}) {
        type = t;
        name = n;
        cost = c;
        effects = e;
    }

    TileType getType() { return type; }
    std::string getName() { return name; }
    int getCost() { return cost; }
    std::vector<Effect*> getEffects() { return effects; }

    void setType(TileType t) { Tile::type = t; }
    void setName(std::string n) { name = n; }
    void setCost(int c) { cost = c; }
    void setEffects(std::vector<Effect*> e) { effects = e; }

    std::string getTypeName() {
        switch(type) {
            case RESIDENTIAL:
                return "Residential";
        }
    }

    void applyEffects() {
        //Loop through each effect
            //if isRecurring
            //if condition1 -> apply condition1 and return calc
            //if condition2 -> apply condition2 and return calc
            //....

        //done
    }



};

#endif //SUBURBIA_TILE_HPP
