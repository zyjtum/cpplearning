#include <iostream>

using namespace std;

int main(){
    bool b = true;

    bool * p = &b;
    bool ** p2 = & p;

    cout << "Address of p is: " << p2 << endl;
    cout << "The value of p2 points to is: " <<*p2 <<endl;
    cout << boolalpha << **p2 << endl;
    cout << noboolalpha << **p2 << endl;
    cout << **p2 <<endl;
    //boolalpha sets the bool value to be true or false
    //noboolalpha sets bool value to be 1 or 0
    cout << p <<endl;

    return 0;
}