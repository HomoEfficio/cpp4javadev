//
// Created by homoefficio on 18. 5. 4.
//
#include <iostream>
using namespace std;

int main() {

    const int z = 9;
    int const y = 8;

    int c = 2;
    const int* pC1 = &c;
    int* const pC2 = &c;

    int d = 4;
    pC1 = &d;
    cout << *pC1 << endl;
    *pC1 = 6;  // 컴파일 에러 'const int *' is a read-only pointer

    pC2 = &d;  // 컴파일 에러 'Variable is declared constant and is not assignable
    *pC2 = 6;
    cout << *pC2 << endl;
}
