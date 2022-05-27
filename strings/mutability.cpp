#include <iostream>

using namespace std;

int main(){
    string my_string = "The brown dog jumps over the lazy fox.",
    hel = "hello world";

    string * p_hel = &hel;

    cout << my_string << " " << hel << endl;
    cout << "Address of my_string: " << p_hel <<endl;
    hel[0] = 'Y'; // only single quotes do the mutation
    hel = "Fuck off my pressure";
    p_hel = &hel;
    cout << "After reassignment, address of my_string" << p_hel <<endl;
    cout << my_string << endl << hel <<endl;

    return 0;


}