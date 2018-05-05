//
// Created by homoefficio on 18. 5. 2.
//
#include <iostream>
using namespace std;

int main() {
    char* pChar = const_cast<char *>("ABCDE");
    cout << *pChar << endl;
    cout << *(pChar + 2 * sizeof(char)) << endl;

    int a = 1;
    int& rA = a;
    cout << rA << endl;

    return 0;
}
