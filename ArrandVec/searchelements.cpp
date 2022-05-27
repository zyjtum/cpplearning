#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> cars(0);
    string Camry = "A Camry is not available";

    cars.push_back("Corolla");
    cars.push_back("Highlander");
    //cars.push_back("Camry");
    cars.push_back("Prius");
    cars.push_back("RAV4");
    
    bool flag = true;
    for(string i : cars){
        if(i == "Camry"){
            cout <<"A Camry is available" << endl;
            flag = false;
            break;
        }
        cout <<"Current car is: " << i <<endl;
    }
    if(flag){
        cout << Camry << endl;
    }

    return 0;
}
