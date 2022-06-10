#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void delimiter(void);
void token(void);
void nested_tokens(void);

int main(){

    nested_tokens();

    return 0;
}

void delimiter(){
    string path = "student/text/readpractice.txt";

    try{
        ifstream file;
        string read;
        file.open(path);
        if(!file){
            throw runtime_error("File failed to open");
        }
        //note that the delimiter will not be printed
        //replace delimiter with a char, the char will be
        //printed!! 
        while(getline(file, read, ',')){
            cout << read << endl;
        }
        file.close();
    }
    catch(exception & e){
        cerr << e.what() << endl;
    }

    return;
}


void token(){
    string path = "student/text/names.txt";
    string last_name = "Smith";
    int count = 0;

    try{
        ifstream file;
        string read;
        vector<string> names;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open");
        }
        while (getline(file, read, ' ')) {
            names.push_back(read);
        }
        file.close();
        for (int i =0; i < names.size(); i++) {
            if (i % 2 == 1){
                if (names.at(i) == last_name){
                    count++;
                }
            }
        }
        cout << "There are " << count << " people are Smith" << endl;
    }
    catch(exception & e){
        cerr << e.what() << endl;
    }

    return;
}


void nested_tokens(){

    // try names2.txt and names.txt to see difference
    string path = "student/text/names.txt";
    vector<string> names;
    string last_name = "Smith";
    int count = 0;

    try{
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open");
        }
        while (getline(file, read)) { // newline delimiter
            cout << read << endl;
            stringstream ss(read); // create string stream of read
            while (getline(ss, read, ' ')){
                cout << read << endl;
                names.push_back(read);
            }
        }
        file.close();
        for (int i = 0; i < names.size(); i++) {
            if (i%2 == 1) {
                if(names.at(i) == last_name) {
                    count ++;
                }
            }
        }
        cout << "There are " << count << " Smithes here" << endl;


    }
    catch (exception & e){
        cerr << e.what() << endl;
    }

    return;
}