#include<iostream>
using namespace std; 
int reverse(int x){
    
    int rev =0;
    while (x !=0)
    {
        // int y = x%10;
        // x = x/10;
        // rev = rev*10 + y;
        rev = rev*10 + (x%10);
        x = x/10;
    }
    cout << rev;  
    return rev; 
}
int main(){
    int rev_num;
    cout <<" enter number to reverse :" << endl;
    cin >> rev_num;
    reverse(rev_num);
    return 0;
}