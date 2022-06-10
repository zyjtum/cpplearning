#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string path = "student/text/readpractice.txt";
    try{
        fstream file;
        string read;
        file.open(path);

        if (!file) {
            throw runtime_error("File failed to open");
        }
        file.ignore(30);  // ignore the first 30 chars
        // aka go to index 30 and start from there
        // note index start from 0

        while(getline(file, read)){
            cout << read;
        }

        file.close();
    }

    catch(exception & e){
        cerr << e.what() << endl;
    }

    return 0;
}