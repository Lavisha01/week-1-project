#include<iostream>
using namespace std; 

int main(){
    int num;
     cout << "enter the number to caluclate its factorial" <<endl;
     cin >> num;
      int fact = 1;

     for (int i=1; i<= num; i++){
       
        fact = fact *i;
     }
    cout << "factorial = " << fact << endl;

    return 0;
}