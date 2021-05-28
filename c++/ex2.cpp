#include<iostream>
using namespace std;

inline double cude(const double side) {
    return side * side * side;
}

int main ( void ) {
    double sideValue;

    for (int i = 0; i <= 3; i++) {
        cout<<"\nDigite o tamanho do lado do cubo: ";
        cin>>sideValue;

        cout<<"O volume do cube com lado "
            <<sideValue<<" e "<<cude(sideValue);
    }
}