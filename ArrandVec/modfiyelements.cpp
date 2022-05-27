#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
    vector<string> contact(0);
    contact.push_back("First name");
    contact.push_back("Second name");
    contact.push_back("Phone number");
    cout << contact.at(0) << " "
         << contact.at(1) << " " 
         << contact.at(2) <<endl;
    contact.at(1) = "Nick name";
    contact.at(2) = "Email";
    cout << "After modification" <<endl;
    cout << contact.at(0) <<" "
         << contact.at(1) <<" "
         << contact.at(2) <<endl;
    return 0;
}