#include<iostream>
using namespace std;
int main(){
int date, month, year;
 cout<<"Enter your date of birth to calculate your age in the format ' date month year' " <<endl;
 cin >> date >> month >> year; 
//  cout<<"Enter your month of birth to calculate your age: " <<endl;
//  cin >> month; 
//  cout<<"Enter your year of birth to calculate your age: " <<endl;
//  cin >> year; 

int c_date, c_month, c_year;
 cout <<" enter current date in the format 'date month year' " << endl;
 cin >> c_date >> c_month >> c_year;  

int age_days = c_date - date;
int age_mon = c_month -month;
int age_year = c_year - year;

 cout<<" your age is :" << age_days << " days " << age_mon <<" month " << age_year << " year " << endl;

 return 0;

}