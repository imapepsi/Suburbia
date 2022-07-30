//
// Created by Mia Seppi on 7/29/22.
//

#include <iostream>
#include <string>

#include "Tile.hpp"

using namespace std;

int main() {
    cout << "----- Suburbia -----" << endl;

    Effect* cpEffect = ForEachAdjacent();

    Tile communityPark = Tile(CIVIC, "Community Park", 4);



    return 0;
}
