#include <iostream>
#include <vector>

using namespace std;

int main(){
    int digits[][3]={{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    int row = sizeof(digits)/sizeof(digits[0]);
    //int col = sizeof(digits[0])/sizeof(digits[0][0]);
    int col = sizeof(digits[0])/sizeof(int);

    for(auto &i: digits){
        for(auto j :i){
            if(j%3==0){
                cout << j << endl;
            }
            else{
                cout <<j <<" ";
            }
        }
    }
    cout << digits <<endl; // name and address
    cout << digits +1 <<endl; //unit is the secondary array
    cout << &digits <<endl;
    cout << *digits <<endl;
    cout << digits[2][3] <<endl; //index over range, print random number
    //at given memory or error;

    return 0;
}