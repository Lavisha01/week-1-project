#include<iostream>
using namespace std; 

int main(){
     float usd, inr;
     char currency;
     cout <<" Enter 'd' to convert USD in INR or 'i' to convert INR to USD" <<endl;
     cin >> currency;

     if (currency == 'd')
     {
     cout << " enter the amount in dollars to convert in INR"<< endl;
     cin >> usd;
     cout <<"INR = " << 86*usd << endl;
     }
     else
     {
     cout << " enter the amount in Rupees to convert in USD"<< endl;
     cin >> inr;
     cout <<"USD = " << inr/86 << endl;
     }    
     
    return 0;
}