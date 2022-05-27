#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int * p; // * can be anywhere btw data_type and var_name
    // int* p, int * p, int *p are all equivalent;
    p = &a;  // Reference operator &

    cout << "a =" << a <<endl;
    cout << "Address of a is: " << p <<endl;
    cout << "a = " << *p <<endl;  // Dereference operator *


    // pointer to another pointer
    int b = 3;
    int* po = &b;
    int** po2 = &po;

    cout <<"b = " << b << endl;
    cout <<"po: " << po <<endl;
    cout <<"value of po points to:" << *po <<endl;
    cout << "Value of what po2 points to: "<< *po2 <<endl;
    cout <<"Value of what po2 points to points to: " << **po2 <<endl; 

    // Note: * and & are excuted from Right to left

    cout << a++ <<endl; // return a, then a = a+1
    cout << a <<endl;   
    cout << ++a <<endl; // a = a+1, return a
    cout << a<< endl;

    // Dereference an array
    int array[] = {24,53,99};
    cout << array << endl;  // array name is the address
    cout << *array << endl;  //my guess for what happened here: 
    //compiler find the addresss(array), then with data_type,
    //which is int, read 4 bytes, then return the value
    // a pointer must point to a var that is already declared



    return 0;
}