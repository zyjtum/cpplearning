#include <iostream>

using namespace std;

int main(){

    // 3 properties: length, index and characters;
    string my_string = "Hello world!";

    int string_len = my_string.length();

    cout <<"Length of string: " << string_len <<endl;


    //
    cout << my_string.at(1) <<endl;
    cout << my_string[1] <<endl;
    cout << my_string.at(my_string.length()-1)<<endl;
    //Reverse indexing is not allowed like in python
    //Below are not allowed
    //cout << my_string[-1] <<endl;
    //cout << my_string.at(-1) <<endl;

    return 0;

        
}