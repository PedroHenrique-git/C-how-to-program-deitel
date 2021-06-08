#include<iostream>
#include<iomanip>
#include "Time.h"
using namespace std;

Time::Time() {
    hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s) {
    hour = ( h >= 0 && h <= 24 ) ? h : 0;
    minute = ( m >= 0 && m < 60 ) ? m : 0;
    second = ( s >= 0 && s < 60 ) ? s : 0;
}

void Time::printUniversal() {
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
}

void Time::printStandard() {
    cout<<( ( hour == 0 || hour == 12) ? 12 : hour % 12 )<<
    ":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<( hour < 12 ? " AM" : " PM" );
}

int main ( void ) {
    Time t;

    cout<<"O horario universal inicial e: ";
    t.printUniversal();
    cout<<"\nO horario padrao inicial e: ";
    t.printStandard();

    t.setTime(13, 27, 6);

    cout<<"\n\nO horario universal apo setTime e: ";
    t.printUniversal();
    cout<<"\nO horario padrao apos setTime e: ";
    t.printStandard();

    t.setTime(99, 99, 99);

    cout<<"\n\nDepois de tentar usar valores invalidos: "<<"\nHorario universal: ";
    t.printUniversal();
    cout<<"\nHorario padrao: ";
    t.printStandard();
    cout<<endl;
}
