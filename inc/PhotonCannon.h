//
// Created by JoonHo Son on 2019-01-24.
//

#ifndef STARCRAFT_LIB_PHOTONCANNON_H
#define STARCRAFT_LIB_PHOTONCANNON_H

#include <iostream>
#include <cstring>

using namespace std;

/**
 * Photon Cannon
 */
class PhotonCannon {
    int hp, shield;
    int coord_x, coord_y;
    int damage;
    char *name;

public:
    /**
     * Constructor
     *
     * @param _x x좌표
     * @param _y  y좌표
     */
    PhotonCannon(int _x, int _y);

    PhotonCannon(int _x, int _y, const char *_name);

    PhotonCannon(const PhotonCannon &pc);

    ~PhotonCannon();

    void showStatus();
};


#endif //STARCRAFT_LIB_PHOTONCANNON_H
