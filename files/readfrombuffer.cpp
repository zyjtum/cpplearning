#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string path = "student/text/readpractice.txt";
    try{
        ifstream file;
        file.open(path);
        if(!file){
            throw runtime_error("File failed to open");
        }
        file.close();
        cout << file.rdbuf();
        // file.close();  if switch the order, nothing printed
    }
    catch(exception & e){
        cerr << e.what() << endl;
    }

    return 0;
}
