#include <iostream>
#include <fstream>

using namespace std;


void read_csv(void);

int main(){

    read_csv();


    return 0;
}

void read_csv(void){

    string path = "student/csv/monty_python_movies.csv";

try {
  ifstream file;
  string read;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  while (getline(file, read, ',')) {
    cout << read + ' ';
  }
  file.close();
}
  
catch (exception& e) {
  cerr << e.what() << endl;
}
return;
}