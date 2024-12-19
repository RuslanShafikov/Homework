/*# Assignment 6
Shafikov Ruslan Alvirtovich, group 24.Б83 - мм
st112650@stdudent.spbu.ru
*/
#include "Class2.h"

bool Class2::bar(int &d, std::vector<float>& vec) {
    if (!vec.empty()) {
        vec[0] = d;
        return true;
    }
    return false;
}
int Class2::c_2_1() {
    return 2;
}
float Class2::c_2_2() {
    return 2.0;
}
void Class2::c_2_3() {}
