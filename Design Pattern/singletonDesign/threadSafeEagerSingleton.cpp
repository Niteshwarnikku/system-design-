#include<iostream>
#include<mutex>

using namespace std;

class Singleton{
private:
    static Singleton* instance;

    Singleton(){
        cout << "Singleton COnstructor called" << endl;

    }
public:
    static Singleton* getInstance(){
        return instance;
    }
};

// intialize static members

Singleton* Singleton::instance = new Singleton();


int main(){
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    cout << (s1 == s2) << endl;
    return 0;

}