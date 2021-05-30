#include <iostream>
#include "GradeBook.hpp"
using namespace std;

int main ( void ) {
    string courseName;
    
    cout<<"Digite o nome do curso: ";
    getline(cin, courseName);

    GradeBook book("Valor de teste");
    book.setCourseName(courseName);
    book.displayMessage();
}