/*# Assignment 6
Shafikov Ruslan Alvirtovich, group 24.Б83 - мм
st112650@stdudent.spbu.ru
*/

#include "Sequence.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

template <typename T>
Sequence<T>::Sequence(T &typeOfSequence, int &d, std::vector<float>& vec)
    : typeOfSequence(typeOfSequence), d(d), vec(vec) {}

template <typename T>
bool Sequence<T>::foo() {
    return typeOfSequence.bar(d, vec);
}
