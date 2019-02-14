//
// Created by JoonHo Son on 2019-01-24.
//

#ifndef STARCRAFT_LIB_MARINE_H
#define STARCRAFT_LIB_MARINE_H


#include <iostream>
#include <cstring>

using namespace std;

class Marine {
    static int total_marine_num;
    const static int i = 0;

    int hp;
    int coord_x, coord_y;
    bool is_dead;
    char *name;

    const int default_damage;

public:
    Marine();

    Marine(int _x, int _y);

    Marine(int _x, int _y, int _damage);

    Marine(int _x, int _y, const char *_name);

    ~Marine();

    int attack() const;

    Marine& be_attacked(int damage_earn);

    void move(int _x, int _y);

    void showStatus();

    static void showTotalMarine();
};


#endif //STARCRAFT_LIB_MARINE_H
