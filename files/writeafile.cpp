#include <iostream>
#include <fstream>

using namespace std;

void writemultiline(void);
void readwrittenfile(void);

int main(){

    //writingtofile();
    //readwrittenfile();
    writemultiline();

    return 0;

}

void writemultiline(){

    string path = "student/text/practice1.txt";

    try{
        ofstream file;
        string text1 = "Nick Fury Motherfucker, hello world";
        double money = 5784;
        string text2 = "Pointer Breaker is muscular";
        file.open(path);
        if(!file){
            throw runtime_error("File failed to open");
        }
        file << text1 << '\n';
        file << money << endl;
        file << text2 << endl;
        file.close();
        cerr << "Finished writing to file"<< endl;

        ifstream stream;
        stream.open(path);
        string read;

        while(getline(stream, read)){
            cout << read << endl;
        }
        
    }
    catch (exception & e){
        cerr << e.what() << endl;
    }

    return;
}

void readwrittenfile(void){
    string path = "student/text/practice2.txt";

    try{
        ofstream file;
        file.open(path);

        if(!file) {
            throw runtime_error("Motherfukcer not opened");
        }
        file << "Nick Fury Motherfucker" << endl;
        file << "Pointer Breaker" << endl;
        file.close();

        ifstream stream;
        char ch;
        stream.open(path);
        while(stream.get(ch)){
            cout << ch;

        }
        stream.close();
    }
    catch(exception&e){
        cerr << e.what() << endl;
    }

    return;

}