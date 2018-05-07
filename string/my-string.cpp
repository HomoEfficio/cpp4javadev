//
// Created by homoefficio on 18. 5. 5.
//
#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
    char* value;
    const int length;

    void copyStrIntoValue(const char* source, char* target) {
        for (int i = 0; i < length; i++) {
            target[i] = source[i];
        }
    }

public:
//    MyString(char ch) {
//        length = 1;
//        value = new char[length];
//        value[0] = ch;
//    }

    MyString(char ch): length(1) {
        value = new char[length];
        value[0] = ch;
    }

    MyString(const char* str) {
        length = strlen(str);
        value = new char[length];

        copyStrIntoValue(str, value);
    }

    MyString(const MyString& mystr) {
        length = mystr.getLength();

        copyStrIntoValue(mystr.getValue(), value);
    }

    ~MyString() {
        if (value)
            delete[] value;
    }

    char *getValue() const {
        return value;
    }

    void setValue(char *value) {
        MyString::value = value;
    }

    int getLength() const {
        return length;
    }

    void setLength(int length) {
        MyString::length = length;
    }
};

int main() {
    cout << MyString("abcde").getValue() << endl;
}