#include<iostream>
#include<cmath>
using namespace std; 

bool isPrime(int n){
    if (n <= 1) return false;
    if (n ==2 || n==3) return true;
    if (n %2 ==0) return false;
    for (int i=3; i<=sqrt(n); i+=2){
        if(n %i ==0) return false;
    }
    return true;
}

int main(){
    int num;
    cout <<" enter the number to check its primality" << endl;
    cin >> num;
    if (isPrime(num) == true) {
        cout << num << " is a prime number."<<endl;
    }
    else{
        cout <<" it is not a prime number" <<endl;
    }
    return 0;
}