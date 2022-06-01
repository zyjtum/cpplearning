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

    return 0;
}