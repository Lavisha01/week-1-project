#include<iostream>
using namespace std; 

int main(){
     int num, check_odd, check_even;
     cout <<" enter the number to check odd or even "<< endl;
     cin >> num;

    int check = num%2;
    if (check ==1){
        cout <<"number is odd"<< endl;
    }
    else{
        cout << "number is even" << endl;
    }
    return 0;
}