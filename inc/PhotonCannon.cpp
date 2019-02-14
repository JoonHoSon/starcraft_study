//
// Created by JoonHo Son on 2019-01-24.
//

#include "PhotonCannon.h"

PhotonCannon::PhotonCannon(int _x, int _y) {
    cout << "생성자 호출!" << endl;
    hp = shield = 200;
    coord_x = _x;
    coord_y = _y;
    damage = 20;
    name = nullptr;
}

PhotonCannon::PhotonCannon(int _x, int _y, const char *_name) {
    cout << "생성자 호출(이름 포함)!" << endl;
    hp = shield = 200;
    coord_x = _x;
    coord_y = _y;
    damage = 20;
    name = new char[strlen(_name) + 1];

    strcpy(name, _name);
}

PhotonCannon::PhotonCannon(const PhotonCannon &pc) {
    cout << "복사 생성자 호출!" << endl;
    hp = pc.hp;
    shield = pc.shield;
    coord_x = pc.coord_x;
    coord_y = pc.coord_y;
    damage = pc.damage;
    name = new char[strlen(pc.name) + 1];

    strcpy(name, pc.name);
}

PhotonCannon::~PhotonCannon() {
    if (name) {
        delete[]name;
    }
}

void PhotonCannon::showStatus() {
    cout << "Photon Cannon : " << name << endl;
    cout << "Location : (" << coord_x << ", " << coord_y << ")" <<endl;
    cout << "HP : " << hp << endl;
}