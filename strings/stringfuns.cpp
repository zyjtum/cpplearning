#include <iostream>

using namespace std;

int main(){
    string my_string = "this is his dog";

    int hah = my_string.find_first_of("his",0);

    cout << hah << endl;

    my_string = "this is his string";

    hah = my_string.find_last_of("his");

    cout << hah <<endl;

    return 0;
}