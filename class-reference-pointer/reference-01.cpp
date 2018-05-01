//
// Created by homoefficio on 18. 5. 1.
//
#include <iostream>
#include <string>
using namespace std;

class Hello {
public:
    Hello() {
        cout << "Hello 디폴트 생성자 호출" << endl;
        greeting = "Hello";
    }

    Hello(string s) {
        cout << "Hello 생성자 호출" << endl;
        greeting = s;
    }

    void sayHello(string s) {
        cout << greeting << " " << s << endl;
    }
private:
    string greeting;
};

int main() {
    Hello hello;  // 선언만 해도 생성자가 호출된다.
    hello.sayHello("C++");  // 선언만 하고 메소드를 호출해도 NullPointerException이 발생하지 않는다.
    cout << "hello 객체의 주소: " << &hello << "    (1)" << endl;  // (1)

    Hello* pHello = &hello;
    pHello->sayHello("Pointer *****");
    cout << "pHello가 가리키는 객체의 주소: " << pHello << "    (2)" << endl;  // (2)
    cout << "pHello의 주소: " << &pHello << "    (3)" << endl;  // (3)

    Hello& rHello = hello;
    rHello.sayHello("Reference &&&&&");
    cout << "rHello가 가리키는 객체의 주소: " << &rHello << "    (4)" << endl;  // (4)
    // rHello의 주소는 표현할 방법이 없다.

    cout << endl;

    Hello hi {"Hi"};
    cout << "hi 객체의 주소: " << &hi << "    (5)" << endl;  // (5)

    pHello = &hi;
    pHello->sayHello("pHello에 hi 객체 주소 할당 후 *****");
    cout << "pHello가 가리키는 객체의 주소: " << pHello << "    (6)" << endl;  // (2)과 다른 값이 출력된다.
    cout << "pHello의 주소: " << &pHello << "    (7)" << endl;  // (3)과 같은 값이 출력된다.

    rHello = hi;
    rHello.sayHello("rHello에 hi 할당 후 &&&&&");
    cout << "rHello가 가리키는 객체의 주소: " << &rHello << "    (8)" << endl;  // (4)와 같은 값이 출력된다.

    cout << endl;

    cout << "hello로 초기화 되어있던 rHello에 hi을 할당한 후, hello.sayHello(\"???\")를 실행하면 뭐가 출력될까?" << endl;
    cout << "Hello ??? 일까, Hi ??? 일까" << endl;
    cout << "hello.sayHello(\"???\"): ";
    hello.sayHello("???");  // Hello로 출력될까 Hi로 출력될까?
    cout << "hello 객체의 주소: " << &hello << "    (9)" << endl;  // (1)과 같은 값이 출력된다.
    cout << "hello 객체의 주소는 예전과 동일한데 내용이 바뀌었다!!" << endl;
    cout << "hello 객체를 가리키던 reference인 rHello에 hi 객체를 할당하면서" << endl;
    cout << "rHello가 hi 객체를 가리키도록 재할당되는 것이 아니라" << endl;
    cout << "hello 객체가 있던 자리에 hi 객체의 얕은 복사본이 들어가버림" << endl;

    return 0;
}
