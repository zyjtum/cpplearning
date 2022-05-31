#include <iostream>

using namespace std;

int main(){
    string my_string = "the big brown dog";
    /*
    single quote is for char
    double quote is for string
    */
    // toupper() and tolower() return ASCII code
    //use char() to convert into char
    cout << char(toupper(my_string.at(0))) <<endl;

    cout << char(toupper('d'))<<endl;

    cout << char(tolower('F')) <<endl;

    // char(my_string) is not allowed


    return 0;
}