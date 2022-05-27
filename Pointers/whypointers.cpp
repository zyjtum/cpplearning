#include <iostream>

using namespace std;

int main(){
    char names[3][6]={"Alan",
                      "Bob",
                      "Carol"};  //note that row option 3 is optional

    for(int i = 0; i< sizeof(names)/sizeof(names[0]); i++){
        cout << names[i] <<endl;
    }

    // Why not array : waste of memory space,
    // column number unknown if name is too long
    // pointer saves memory

    // Note that C++ requires the keyword const for pointers 
    // that point to characters within an array. 
    // Why is it not nessassary to tell the compiler the length??
    const char* names_p[] = {"Alan",
                            "Bob",
                            "ChristopherJones"};
    
    for(int i =0; i< sizeof(names_p) < sizeof(names_p[0]); i++){
        cout << names_p[i] << endl;
    }

    return 0;
}
