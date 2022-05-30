#include <iostream>

using namespace std;

int main(){
    string my_string = "this is his dog";

    int hah = my_string.find_first_of("his",0);

    cout << hah << endl;

    my_string.insert(5,"hah");

    cout << my_string << endl;

    my_string.push_back('d');

    cout << my_string << endl;

    return 0;
}