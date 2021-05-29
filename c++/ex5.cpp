#include<iostream>
using namespace std;

int square(int x) {
    cout<<"quadrado do int "<<x<<" e ";
    return x * x;
}

double square( double y ) {
    cout<<"quandrado do double "<<y<<" e ";
    return y * y;
}

int main ( void ) {
    cout<<square(7);
    cout<<endl;
    cout<<square(7.5);
    cout<<endl;
}
