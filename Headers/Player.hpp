//
// Created by Mia Seppi on 8/17/22.
//

#ifndef SUBURBIA_PLAYER_HPP
#define SUBURBIA_PLAYER_HPP

#include <set>
#include <sstream>
#include <string>
#include <map>
#include "Tile.hpp"

class Player {
private:
    std::string name;
    int income;
    int reputation;
    int bank;
    int population;
    std::map<int, std::set<int>> city;

public:
    Player() {}
    Player(const std::string &name = "Unknown");

    std::string toString();

    std::string cityToString();

    void addTile(Tile newTile);
};


#endif //SUBURBIA_PLAYER_HPP
