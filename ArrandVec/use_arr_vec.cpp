#include <iostream>
#include <vector>

using namespace std;

int main(){
    string top[] = {"First", "Second", "Third", "Fourth", "Fifth"};
    vector<string> names(0);

    names.push_back("Alan");
    names.push_back("Bob");
    names.push_back("Carol");
    names.push_back("David");
    names.push_back("Ellen");

    names.at(0) = "Carol";
    names.at(2) = "Alan";
    names.at(3) = "Fred";

    names.insert(names.begin()+4,"Grace");
    names.pop_back();

    for(int i=0; i< names.size(); i++){
        cout << top[i] <<": " << names.at(i) << endl;
    }

    return 0;
}