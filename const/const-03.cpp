//
// Created by homoefficio on 18. 5. 4.
//
#include <iostream>
using namespace std;

class Embedded {
private:
    long b;

public:
    Embedded(long b) {
        this->b = b;
    }

    long getB() const {
        return b;
    }

    void setB(long b) {
        Embedded::b = b;
    }
};

class Tmp {
private:
    Embedded emb;

public:
    Tmp(const Embedded &emb) : emb(emb) {}

    const Embedded getEmb() const {
        return this->emb;
    }

    void setA(Embedded emb) {
        this->emb = emb;
    }
};

int main() {

    Embedded emb {99L};
    Tmp tmp {emb};

    Embedded result = tmp.getEmb();  // getEmb가 const를 반환하더라도 const가 아닌 result에 할당되면
    result.setB(100L);  // const가 아닌 메서드를 호출해서 상태 변경 가능

    cout << result.getB() << endl;
}
