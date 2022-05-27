#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> numbers(3);
    int digits[3];

    cout << numbers.size()<< endl;
    cout << sizeof(digits)/sizeof(digits[0]) <<endl;
    cout <<"First element of vector number is " << numbers.at(2)<<endl;

    return 0;

}