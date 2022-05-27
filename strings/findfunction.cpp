#include <iostream>

using namespace std;

int main(){
    string my_string = "The brown dog jumps over the lazy fox.";

    int string_len = my_string.length();

    int result_dog = my_string.find("dog", 20); // second parameter is starting index of search
    int result_she = my_string.find("he",27);
    
    // 18445744073709551615
    int result = my_string.find(my_string);  // returns 0 obviously
    int result_space = my_string.find(" ");
    cout << string_len << endl;
    cout << result_dog << endl; //returns the starting index of "dog"
    cout << result_she << endl;
    cout << result << endl;
    cout << result_space << endl; //returns the index first space 

    return 0;
}