#include<iostream>
#include "GradeBook.hpp"
using namespace std;

GradeBook::GradeBook( string name ) {
    setCourseName( name );
}

void GradeBook::setCourseName( string name ) {
    if ( name.length() <= 25 ) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
        cout<<"\n\nA string foi truncada, pois execedeu 25 caracteres";
    }
}

string GradeBook::getCourseName() {
    return courseName;
}

void GradeBook::displayMessage() {
    cout<<"Bem-vindo ao grade book para\n"<<getCourseName()<<"!"<<endl;
}