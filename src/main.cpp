#include <iostream>
#include <bitset>
#include "../inc/Marine.h"


void create_marine() {
    Marine marine3(10, 10, 4);

    Marine::showTotalMarine();
}

int main() {
    Marine *marines[100];

    marines[0] = new Marine(2, 3, 10);

    Marine::showTotalMarine();

    marines[1] = new Marine(3, 5, 10);

    Marine::showTotalMarine();

    create_marine();

    cout << endl << "마린1이 마린2 두 번 공격" << endl;
    marines[1]->be_attacked(marines[0]->attack()).be_attacked(marines[0]->attack());

    marines[0]->showStatus();
    marines[1]->showStatus();

    delete marines[0];
    delete marines[1];

    cout << bitset<4>(1) << endl;

    cout << "_________---------______" << endl;

    return 0;
}