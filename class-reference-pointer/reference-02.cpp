//
// Created by homoefficio on 18. 5. 3.
//
#include <iostream>
#include <string>
using namespace std;

class CellPhone {
private:
    string phoneNumber;
    string deviceBrand;
    string teleBrand;

public:
    const string &getPhoneNumber() const {
        return phoneNumber;
    }

    void const setPhoneNumber(const string &phoneNumber) {
        CellPhone::phoneNumber = phoneNumber;
    }

    const string &getDeviceBrand() const {
        return deviceBrand;
    }

    void setDeviceBrand(const string &deviceBrand) {
        CellPhone::deviceBrand = deviceBrand;
    }

    const string &getTeleBrand() const {
        return teleBrand;
    }

    void setTeleBrand(const string &teleBrand) {
        CellPhone::teleBrand = teleBrand;
    }
};

class Card {
private:
    int cardNumber;
    string cardProvider;

public:
    int getCardNumber() const {
        return cardNumber;
    }

    void setCardNumber(int cardNumber) {
        Card::cardNumber = cardNumber;
    }

    const string &getCardProvider() const {
        return cardProvider;
    }

    void setCardProvider(const string &cardProvider) {
        Card::cardProvider = cardProvider;
    }
};

class Person {
private:
    CellPhone myPhone;
    Card myCard;

public:
    Person(const CellPhone &myPhone, const Card &myCard) : myPhone(myPhone), myCard(myCard) {}

    const CellPhone &getMyPhone() const {
        return myPhone;
    }

    void setMyPhone(const CellPhone &myPhone) {
        Person::myPhone = myPhone;
    }

    const Card &getMyCard() const {
        return myCard;
    }

    void setMyCard(const Card &myCard) {
        Person::myCard = myCard;
    }
};

int main() {
    CellPhone* cellPhone = new CellPhone();
    Card* card = new Card();

    Person *person = new Person(*cellPhone, *card);
    const CellPhone &cp = person->getMyPhone();

    cp.setPhoneNumber("010 8298 2369");  // 컴파일 에러 Non-const function is called on the const object


}