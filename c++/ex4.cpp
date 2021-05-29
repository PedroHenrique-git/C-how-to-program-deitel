#include<iostream>
using namespace std;

int number = 7;

int main ( void ) {
    double number = 10.5;

    cout<<"valor local double number = "<<number<<"\nValor global int de number = "<<::number<<endl;
}
