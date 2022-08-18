//
// Created by Mia Seppi on 7/29/22.
//

#include <iostream>
#include <string>

#include "Headers/Player.hpp"
#include "Headers/Tile.hpp"

using namespace std;

int main() {
    cout << "----- Suburbia -----" << endl;

//    map<int, Tile> allTiles;
//    Tile communityPark = Tile(CIVIC, "Community Park", 4);
//    Tile communityPark2 = Tile(CIVIC, "Community Park", 4);
//    allTiles.insert({1, communityPark});
//    allTiles.insert({2, communityPark2});



    Player mia = Player("Mia");
    cout << mia.toString();

    cout << endl;

    Tile communityPark = Tile(CIVIC, "Community Park", 4);
    Tile communityPark2 = Tile(CIVIC, "Community Park", 4);

    cout << communityPark.toString() << endl;
    cout << communityPark2.toString() << endl;

    mia.addTile(communityPark);
    mia.addTile(communityPark2);

    cout << mia.cityToString() << endl;



    return 0;
}
