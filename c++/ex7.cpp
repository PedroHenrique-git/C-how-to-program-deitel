#include<iostream>
#include "template.hpp"
using namespace std;

int main ( void ) {
    int n1, n2, n3;
    cout<<"Digite tres valores int: ";
    cin>>n1>>n2>>n3;
    cout<<"O valor int maximo e: "<<maximum(n1, n2, n3);

    double d1, d2, d3;

    cout<<"\n\nDigite tres valores double: ";
    cin>>d1>>d2>>d3;
    cout<<"O valor double maximo e: "<<maximum(d1, d2, d3);

    char c1, c2, c3;

    cout<<"\n\nDigite tres valores de caracteres: ";
    cin>>c1>>c2>>c3;
    cout<<"O valor maximo de caractere e: "<<maximum(c1, c2, c3)<<endl;
}
