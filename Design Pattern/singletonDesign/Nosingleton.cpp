#include <iostream>
using namespace std;

class Nosingleton {
public:
    Nosingleton() {
        cout << "Singleton Contructor Called. New Objected created." << endl;

    }

};

int main (){
 
    Nosingleton* s1 = new Nosingleton();
    Nosingleton* s2 = new Nosingleton();

    cout << (s1 == s2) << endl;
}
