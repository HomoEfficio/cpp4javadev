//
// Created by homoefficio on 18. 5. 1.
//
#include <iostream>
using namespace std;

class Hello {
public:
    Hello() {
        cout << "Hello 생성자 호출" << endl;
    }

    void sayHello() {
        cout << "Hello C++" << endl;
    }
};

int main() {
    Hello hello;  // 선언만 해도 생성자가 호출된다.
    hello.sayHello();  // 선언만 하고 메소드를 호출해도 NullPointerException이 발생하지 않는다.

    return 0;
    // hello는 main 함수의 Stack에서 생성되므로
    // 별도로 hello의 메모리를 회수하지 않아도
    // main 함수의 종료와 함께 메모리에서 사라진다.
}
