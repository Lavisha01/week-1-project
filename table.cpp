#include<iostream>
using namespace std; 

int main(){
    int num;
     cout <<" enter the number to view its table" << endl;
     cin>> num;

     for (int i=1; i <=10; i++){
        cout << num << " * " << i << " = " << num*i << endl;
             }

    return 0;
}