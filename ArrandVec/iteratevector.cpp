#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout <<"Array output" << endl;
    int grades[] = {85, 95, 48, 100, 92};
    for(int i =0; i < sizeof(grades)/sizeof(grades[0]); i++){
        cout << grades[i] << endl;
    }
    cout <<"Vector output" << endl;

    vector<int> grades_vec{10,20,30,40,50};

    for(int i=0; i<grades_vec.size(); i++){
        cout << grades_vec.at(i) <<endl;

    }
    // enhanced for loop of array
    cout << "Enhanced for loop of array" << endl;
    for(auto i : grades){
        cout << i <<endl;
    }
    // enhanced for loop of vector  
    // auto can detect the data type
    cout << "Enhanced for loop of vector" << endl;
    for (int i: grades_vec){
        cout << i <<endl;
    }

    // insert at given index,after insertion, occupy the given index
    grades_vec.insert(grades_vec.begin()+3,90); 
    cout << "After inserstion" <<endl;
    for(int i: grades_vec){
        cout << i<< endl;
    }
    return 0;
}