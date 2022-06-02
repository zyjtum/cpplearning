#include <iostream>

using namespace std;

int main(){
    string string1 = "It's Friday!", string2 = "It\'s Friday!";

    cout << (string1 == string2 )<< endl;
    // cout << string1 == string2 << endl;
    // dose not work

    cout << boolalpha << (string1 == string2) << endl;

    string1 = "It's Friday!";
    string2 = "It's Monday.";

    cout << (string1 != string2) << endl;

    /*
    compare the lexicographical order
    Lexicographically speaking, 
    empty strings always come first, 
    followed by numbers, 
    then uppercase letters, 
    and finally lowercase letters.
      */

    string1 = "apple";
    string2 = "cat";

    if (string1.compare(string2) < 0) {
        cout << "string1 comes first" << endl;
    }
    else if (string1.compare(string2) > 0) {
        cout << "string2 comes first" << endl;
    }
    else {
        cout << "the strings are equal" << endl;
    }

    char star ='d';
    cout << isupper(star) << " " << islower(star) <<endl;
    //note if isupper/islower returns integer if true
    //but maybe not 1


    return 0;
}