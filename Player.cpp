//
// Created by Mia Seppi on 8/17/22.
//

#include "Headers/Player.hpp"

Player::Player(const std::string &name) : name(name) {
    //Set Starting Values with a player is created
    income = 0;
    reputation = 1;
    bank = 15;
    population = 0;
}

std::string Player::toString() {
    std::stringstream ss;

    ss << "Player: " << name << std::endl;
    ss << "\t" << "Income: " << income << "   |   " << "Reputation: " << reputation << std::endl;
    ss << "\t" << "Bank: " << bank << std::endl;
    ss << "\t" << "Population: " << population << std::endl;

    return ss.str();
}

std::string Player::cityToString() {
    std::stringstream ss;

    for (std::pair tile : city) {
        ss << "T" << tile.first << ":";
        std::string sep = "";
        for (int adjTile : tile.second) {
            ss << sep << "R" << adjTile;
            sep = ", ";
        }
        ss << std::endl;
    }

    return ss.str();
}

void Player::addTile(Tile newTile) {
    city.insert({newTile.getID(), {}});
}
