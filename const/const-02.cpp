//
// Created by homoefficio on 18. 5. 4.
//
#include <iostream>
using namespace std;

class Tmp {
private:
    int a;

public:
    Tmp(int a) {
        this->a = a;
    }

    int getA() {
        return a;
    }

    void setA(int a) const {  // const를 붙이면
        this->a = a;  // Field 'a' is assigned inside a const function 컴파일 에러 발생
    }
};

int main() {

    Tmp tmp1 {1};
    const Tmp tmp2 {2};

    tmp1 = tmp2;
    tmp2 = tmp1;  // Variable is declared constant and is not assignable

    tmp2.getA();  // Non-const function 'getA' is called on the const object
}
