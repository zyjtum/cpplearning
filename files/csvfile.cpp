#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>

using namespace std;


void read_csv(void);
void ignore_the_head();
void print_csv_data();

int main(){

    //read_csv();
    //ignore_the_head();
    print_csv_data();
    return 0;
}

void read_csv(void){
  string path = "student/csv/monty_python_movies.csv";

  try{
    ifstream file;
    string read;
    file.open(path);
    if(!file){
      throw runtime_error("File failed to open");
    }
    while(getline(file, read, ',')){
      cout << read + ' ';
    }
    file.close();
  }
  catch (exception& e){
    cerr << e.what()<< endl;
  }
  return;
}

void ignore_the_head(void) {
  string path = "student/csv/monty_python_movies.csv";

  try{
    ifstream file;
    file.open(path);
    string read;

    if(!file){
      throw runtime_error ("File failed to open");
    }
 while(getline(file, read)){
      cout << read << endl;
    }
    file.close();
  }

  catch(exception & e){
    cerr << e.what()<< endl;
  }

  return;

}

void print_csv_data(void){
  string path = "student/csv/homeruns.csv";

  try{
    ifstream file;
    file.open(path);
    string read;
    vector<string> data;

    if(!file){
      throw runtime_error ("File failed to open.");
    }
    while(getline(file, read)){
      //cout << "first read: " << read << endl;
      stringstream ss(read);
      while(getline(ss, read, ',')){
        //cout << "second read: " << read <<  endl;
        data.push_back(read);

      }
    }
    file.close();

    for (int i = 0; i<data.size(); i++){
      if (i % 3 == 0) {
        cout << left << setw(20) << data.at(i);
      // by default, it is right,
      // setw(num) is the width of that column
      // left or right affcts the line and below lines
      // but not above code lines
      }
      else if (i %3  == 1)
      {
        cout << setw(16) << data.at(i);
      }
      else{
        cout <<setw(16) << data.at(i) << endl;
      }
      
    }
  }

  catch(exception & e){
    cerr << e.what() << endl;
  }
  return;
}