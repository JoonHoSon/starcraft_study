//
// Created by JoonHo Son on 2019-01-24.
//

#include "Marine.h"

int Marine::total_marine_num = 0;

Marine::Marine() : hp(50), coord_x(0), coord_y(0), default_damage(5), is_dead(false), name(nullptr) {
    total_marine_num++;
}

Marine::Marine(int _x, int _y) : coord_x(_x), coord_y(_y), hp(50), default_damage(5), is_dead(false), name(nullptr) {
    total_marine_num++;
}

Marine::Marine(int _x, int _y, int _damage) : hp(50),
                                              coord_x(_x),
                                              coord_y(_y),
                                              default_damage(_damage),
                                              is_dead(false),
                                              name(nullptr) {
    total_marine_num++;
}

Marine::Marine(int _x, int _y, const char *_name) : hp(50),
                                                    coord_x(_x),
                                                    coord_y(_y),
                                                    default_damage(5),
                                                    is_dead(false) {
    name = new char[strlen(_name) + 1];

    strcpy(name, _name);

    total_marine_num++;
}

Marine::~Marine() {
    if (name) {
        cout << name << "의 소멸자 호출!" << endl;
    } else {
        cout << "소멸자 호출!" << endl;
    }

    if (name != nullptr) {
        delete[] name;
    }

    total_marine_num--;
}

void Marine::move(int _x, int _y) {
    coord_x = _x;
    coord_y = _y;
}

int Marine::attack() const {
    return default_damage;
}

Marine &Marine::be_attacked(int damage_earn) {
    hp -= damage_earn;

    if (hp <= 0) {
        is_dead = true;
    }

    return *this;
}

void Marine::showStatus() {
    if (name) {
        cout << "*** Marine : " << name << " ***" << endl;
    } else {
        cout << "*** Marine ***" << endl;
    }

    cout << "Location : (" << coord_x << ", " << coord_y << ")" << endl;
    cout << "HP : " << hp << endl;
    cout << "현재 총 마린 수 : " << total_marine_num << endl;
}

void Marine::showTotalMarine() {
    cout << "전체 마린 수(static) : " << total_marine_num << endl;
}