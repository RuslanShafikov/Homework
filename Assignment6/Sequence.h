/*# Assignment 6
Shafikov Ruslan Alvirtovich, group 24.Б83 - мм
st112650@stdudent.spbu.ru
*/
#include <vector>
#include <iostream>
#ifndef Seq_H
#define Seq_h
template <typename T>
class Sequence {
private:
    int d;
    std::vector<float> vec;
    T typeOfSequence;
public:
    Sequence(T &typeOfSequence, int &num, std::vector<float>& vec);

    bool foo();
};

template <>
class Sequence<float> {
private:
    float typeOfSequence;
    int d;
    std::vector<float> vec;
public:

    Sequence(float typeOfSequence, int d, std::vector<float> vec)
        : typeOfSequence(typeOfSequence), d(d), vec(vec) {}
    bool foo() {
        return true;
    }
};

template <>
class Sequence<int> {
private:
    int typeOfSequence;
    int d;
    std::vector<float> vec;
public:
    Sequence(int typeOfSequence, int d, std::vector<float> vec)
        : typeOfSequence(typeOfSequence), d(d), vec(vec) {}

    bool foo() {
        return true;
    }
};

#endif
