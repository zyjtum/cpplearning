#include <iostream>

using namespace std;

int main(){

    // Ex1: count lower and upper case chars

    int lower_count = 0, upper_count = 0;

    string my_string = "Roses are Red, Violets are Blue";

    for(char ch:my_string){
        if(isupper(ch)){
            upper_count += 1;
        }
        else if(islower(ch)){
            lower_count += 1;
        }
        else{
            continue;
        }
    }

    cout <<"Upper case count: " << upper_count <<endl;
    cout <<"Lower case count: " << lower_count <<endl;


    //Ex2: reverse print a string

    my_string = "The brown dog jumps over the lazy fox";

    for(int i = my_string.length(); i > 0; i--){
        cout <<my_string.at(i-1);
    }
    cout << endl;

    //Ex3: swap case of chars

    string original_string = "THE BROWN DOG JUMPS over the lazy fox!";
    string modified_string;

    for(char ch: original_string){
        if(isupper(ch)){
            modified_string.push_back(char(tolower(ch)));
        }
        else if(islower(ch)){
            modified_string += toupper(ch);
        }
        else{
            modified_string.push_back(ch);
        }
    }
    cout << modified_string << endl;
    return 0;

    


}