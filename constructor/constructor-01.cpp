//
// Created by homoefficio on 18. 5. 6.
//
#include <iostream>
using namespace std;

class OtherTmp {
private:
    const int b;

public:
    OtherTmp(const int b) : b {b} {}

    const int getB() const {
        return b;
    }
};

class Tmp {
private:
    const int a;
    OtherTmp& otherTmp;

public:
    Tmp(const int a, OtherTmp& otherTmp) : a {a}, otherTmp {otherTmp} {}  // ctor-initializer 방식

//    Tmp(const int a, OtherTmp& otherTmp) {
//        this->a = a;  // const 변수에 할당을 시도하면 컴파일 에러
//        this->otherTmp = otherTmp;
//    }

    const int getA() const {
        return a;
    }

    OtherTmp &getOtherTmp() const {
        return otherTmp;
    }
};

int main() {
    OtherTmp otherTmp {3};
    OtherTmp& otherTmpRef = otherTmp;
    Tmp tmp1 {1, otherTmpRef};

    cout << tmp1.getA() << endl;
    cout << tmp1.getOtherTmp().getB() << endl;
}
