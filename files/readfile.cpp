#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string path = "student/text/readpractice.txt";

    try{
        ifstream file;
        string read;
        file.open(path);

        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while(getline(file, read)){
            cout << read << endl;
        }
        file.close();
        cerr << "File successfully opened and closed." << endl;
    }

    catch (exception& e){
        cerr << e.what() << endl;
    }

    return 0;
}