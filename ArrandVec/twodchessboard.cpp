#include <iostream>
using namespace std;

int main() {
  
  string chessboard[8][8];
  
  int row = sizeof(chessboard) / sizeof(chessboard[0]);
  int col = sizeof(chessboard[0]) / sizeof(string);
  
  //add code below this line
  for(int i = 0; i<row; i++){
    if(i%2 == 0){
      for(int j=0; j<col; j++){
        if(j%2==0){
          chessboard[i][j] = "O";
        }
        else{
          chessboard[i][j] = "X";
        }
      }
    }
    else{
      for(int j=0; j<col; j++){
        if(j%2 == 0){
          chessboard[i][j] = "X";
        }
        else{
          chessboard[i][j] = "O";
        }
      }
    }
    
  }


  //add code above this line
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == col - 1) {
        cout << chessboard[i][j] << endl;
      }
      else {
        cout << chessboard[i][j];
      }
    }
  }
  
  return 0;
  
}