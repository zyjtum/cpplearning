#include <iostream>

using namespace std;

int main(){
    /* Three ways of iteration:
    1. for loop
    2. enhanced for loop
    3. while loop
    */

   string my_string = "This fucked up world";

   cout << "for loop result" << endl;
   for(int i = 0; i< my_string.length(); i++){
       cout << my_string.at(i);
   }

   cout <<"\nenhanced for loop result: "<< endl;

   for(char c : my_string){
       cout << c;
   }

   cout <<"\nwhile loop result: "<<endl;

   int i = 0, len = my_string.length();

   while(i<len){
       cout << my_string.at(i);
       i++;
   }
   cout << endl;

   return 0;
}