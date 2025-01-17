#include<iostream>
using namespace std; 

int main(){
     int num, sum =0;
     cout << "enter the number to find out its sum" << endl;
     cin >> num;


     while (num %10 != 0)
     {
        sum += (num%10);
        num = num/10;
     }
     cout <<" sum of the digits is " << sum << endl;
     
    return 0;
}