//
// Created by homoefficio on 18. 5. 2.
//
#include <iostream>
using namespace std;

int main() {
    char* pointer = const_cast<char *>("ABCDE");
    cout << *pointer << endl;
    cout << *(pointer + 2 * sizeof(char)) << endl;

    int a = 1;
    int& rA = a;
    cout << rA << endl;

    return 0;
}
