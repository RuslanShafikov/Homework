/*# Assignment 6
Shafikov Ruslan Alvirtovich, group 24.Б83 - мм
st112650@stdudent.spbu.ru
*/

#include "Class1.h"

bool Class1::bar(const int &d, std::vector<double>& vec) {
    if (d > 0) {
        return false;
    }

    vec.push_back(0);
    return false;
}

int Class1::c_1_1() {
    return 1;
}
double Class1::c_1_2() {
    return 1.0;
}
void Class1::c_1_3() {}
