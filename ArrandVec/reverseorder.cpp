#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> letters{"A","B","C","D", "E", "F"};

    //string fuck[] = {"F", "U", "C","K"};

    int ori = letters.size();

    //cout << "Length of the vector is: " <<ori << endl;

    // attach the letters in reversed order
    for(int i=ori-1; i>=0 ;i--){
        letters.push_back(letters.at(i));
    }

    for (int i =0; i<ori; i++){
        letters.erase(letters.begin());
    }

    for (auto i : letters){
        std::cout << i << endl;
    }

    return 0;
}