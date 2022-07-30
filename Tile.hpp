//
// Created by Mia Seppi on 7/29/22.
//

#ifndef SUBURBIA_TILE_HPP
#define SUBURBIA_TILE_HPP

#include <map>
#include <set>
#include <string>
#include <vector>

//#include "Effect.hpp"
#include "Effects/OnceEffect.hpp"
#include "Effects/ForEachAdjacentEffect.hpp"

enum TileType { RESIDENTIAL, CIVIC, INDUSTRIAL, COMMERICAL, LAKE };

//enum EffectType { ONCE, FOR_EACH_ADJACENT, EACH_OF_YOUR, EVERY, ALL_OTHERS};
//enum BenefitType { INCOME, REPUTATION, MONEY, POPULATION };



class Tile {
private:
    TileType type;
    std::string name;
    int cost;

//    //EFFECTS
//    struct Effect {
//        EffectType effectType;
//        BenefitType benefitType;
//        int value;
//    };

//    std::vector<Tile::Effect> effects;
    std::set<Effect*> onceEffects;
    std::set<Effect*> forEachAdjacentEffects;



public:
    Tile() {}
    Tile(TileType t, std::string n, int c, std::set<Effect*> oneE = {}, std::set<Effect*> forEachAdjE = {}):
        type(t),
        name(n),
        cost(c),
        onceEffects(oneE),
        forEachAdjacentEffects(forEachAdjE) {}

    TileType getType() { return type; }
    std::string getName() { return name; }
    int getCost() { return cost; }
    //std::vector<Effect*> getEffects() { return effects; }

    void setType(TileType t) { Tile::type = t; }
    void setName(std::string n) { name = n; }
    void setCost(int c) { cost = c; }
    //void setEffects(std::vector<Effect*> e) { effects = e; }

    std::string getTypeName() {
        switch(type) {
            case RESIDENTIAL:
                return "Residential";
        }
    }



    void applyEffects() { //Only do the recurring effects
        //Loop through each effect
            //if effectType == ONCE
                //Skip :) no code
            //if effectType for each adjacent
                //Get all adjacent tiles
                //if adjacent

            //if condition2 -> apply condition2 and return calc
            //....

        //done
    }
};

#endif //SUBURBIA_TILE_HPP
