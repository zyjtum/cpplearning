#include <iostream>

using namespace std;

int main(){
    string my_string = "this is his dog";
//find_first/last_of()
    int hah = my_string.find_first_of("his",0);

    cout << "find any char in str \"his\": "<< hah << endl;

    my_string.insert(5,"hah");

    cout << "After insert\"hah\": " << my_string << endl;

    my_string.push_back('a');

    cout <<"push_back \"a\" to the end: " << my_string << endl;

    my_string.pop_back();

    cout << "pop_back last char: " << my_string <<endl;

// erase function: no para, 1 para, 2 para;

    my_string = "Today is my birthday!";

    my_string.erase(); // erase all chars

    cout << my_string << endl;

    my_string = "Today is my birthday!";

    my_string.erase(5); // starting index(included) to the end

    cout << my_string << endl;

    my_string = "Today is my birthday!";

    my_string.erase(5,4); // starting_index, length

    cout << my_string << endl;

//replace method is combi of erase and insert

    my_string = "Hello world!";

    my_string.replace(6,5, "zhiyuan");

    cout << my_string <<endl;

// append method
    string a = "High ";
    string b = "Five";

    cout << a.append(b) << endl;

    cout << a.append(b+"!") << endl;

    /* a.append("Five" + "!") not allowed, when using + ,as least
    one para of + MUST be var, similarly

    "High" + "Five" + "!" is not allowed

    but the nexe line is allowed
    */

   cout << a + "this fucked up world" + "!" << endl;

    return 0;
}