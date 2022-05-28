#include <iostream>

using namespace std;

int main(){
    string my_string = "The brown dog jumps over the lazy fox.";

    string my_slice = my_string.substr();

    cout << my_slice << endl;

    my_slice = my_string.substr(4,50); // to the end

    cout << my_slice << endl;

    my_slice = my_string.substr(1, 1);

    cout << my_slice << endl;

    my_slice = my_string.substr(2); // to the end

    cout << my_slice << endl;

    my_string = "Hello 'world'";

    cout << my_string << endl;
 
    my_string = "Hello \"World\"";

    cout << my_string << endl;

    cout << my_string.substr(0,3) << endl;

    return 0;

}