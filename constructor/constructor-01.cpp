//
// Created by homoefficio on 18. 5. 6.
//
#include <iostream>
using namespace std;

class Tmp {
private:
    const int a;

public:
    Tmp(const int a) : a {a} {}

    const int getA() const {
        return a;
    }
};

int main() {
    Tmp tmp1 {1};

    cout << tmp1.getA() << endl;
}
