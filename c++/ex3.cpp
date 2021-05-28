#include<iostream>
using namespace std;

int box(int lenght = 1, int width = 1, int height = 1) {
    return lenght * width * height;
}

int main ( void ) {
    cout<<"Value: "<<box();
    cout<<"\nValue2: "<<box(1, 3, 4);
    cout<<"\nValue3: "<<box(2, 4, 6);
}