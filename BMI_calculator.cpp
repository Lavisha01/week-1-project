#include<iostream>
using namespace std; 

int main(){
     float weight, height;
     cout << "enter weight in kg and height in metres" << endl;
     cin >> weight >> height;
     float bmi = weight / (height* height);
     cout << "your body mass index is: " << bmi << endl;

    return 0;
}