#include<iostream>
using namespace std; 

int main(){
     int num, sum;
     cout << "enter the number, to calculate sum upto the number" << endl;
     cin >> num;
     sum = (num * ( num + 1))/2;
     cout <<"the sum of " << num << " natural numbers is: " << sum;
    return 0;
}