//
// Created by Mia Seppi on 7/29/22.
//

#ifndef SUBURBIA_TILE_HPP
#define SUBURBIA_TILE_HPP

#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

enum TileType { RESIDENTIAL, CIVIC, INDUSTRIAL, COMMERCIAL, LAKE };

class Tile {
private:
    TileType type;
    std::string name;
    int cost;

    int id;
    static int idCounter;

public:
    Tile() { id= ++idCounter; }
    Tile(TileType t, std::string n, int c);

    Tile& operator=(const Tile& orig);

//    TileType getType() { return type; }
//    std::string getName() { return name; }
//    int getCost() { return cost; }
    int getID() { return id; }
    std::string getTypeName();

//    void setType(TileType t) { Tile::type = t; }
//    void setName(std::string n) { name = n; }
//    void setCost(int c) { cost = c; }

    std::string toString();

    void applyEffects();
};

#endif //SUBURBIA_TILE_HPP
