#include<iostream>
using namespace std; 
float circle(){
    float r;
    cout << "enter the radius of the circle" << endl;
    cin>> r;
    float ar_circle = 3.14*r*r;
    cout <<"area of circle is :" << ar_circle << endl;
    return ar_circle;
}
float rectangle(){
    float l,  b;
    cout << "enter the length and breadth of the rectangle" << endl;
    cin >> l>>b;
    float ar_rect = l*b;
    cout <<"area of rectangle is :" << ar_rect << endl;
    return ar_rect;
}
float square(){
    float a;
    cout << "enter the size of the square" << endl;
    cin >> a;
    float ar_square = a*a;
    cout <<"area of square is :" << ar_square << endl;
    return ar_square;
}

int main(){
    char area;
    cout <<" to calculate the area of circle/ square/ rectangle type 'c'/ 's'/ 'r' respectively" << endl;
    cin >> area;

    if (area == 'c')
    {
      circle();
    }
    else if( area == 's'){
      square();
    }
    else if (area == 'r'){
      rectangle();
    }
    else{
        cout <<"enter a valid option";
    }
     
    return 0;
}