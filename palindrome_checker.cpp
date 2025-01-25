#include<iostream>
using namespace std; 

int palindrome(int n){
    int original, reversed =0; 
    original = n;
    if (n<0 || (n%10 == 0 && n!=0))
    {
        cout<<"not  a palindrome"<<endl;
        return false;
    }
    
    while (n !=0){
        reversed = reversed*10 + (n%10);
        n= n/10;
    }

    if (original == reversed){
        cout <<"the number " << original << " is palindrome"<< endl;
    }
    else{
        cout<< original <<" is not palindrome"<< endl;
    } 
    return original;
}

int main(){
    int num;
   
    cout <<"enter the number to check for palindrome :" << endl;
    cin>> num;
    palindrome(num);    
     
    return 0;
}