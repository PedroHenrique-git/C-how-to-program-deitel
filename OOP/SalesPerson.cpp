#include<iostream>
#include<iomanip>
using namespace std;

class SalesPerson {
    public:
        static const int monthsPerYear = 12;

        SalesPerson() {
            for(int i = 0; i < monthsPerYear; i++) {
                sales[i] = 0.0;
            }
        }

        void getsalesFromUser() {
            double salesFigure;

            for(int i = 1; i <= monthsPerYear; i++) {
                cout<<"Digite valor de vendas para o mes"<<i<<": ";
                cin>>salesFigure;
                setSales(i, salesFigure);
            }
        }

        void setSales(int month, double amount) {
            if(month >= 1 && month <= monthsPerYear && amount > 0) {
                sales[month - 1] = amount;
            } else {
                cout <<"Mes ou valor de vendas invalido"<<endl;
            }
        }

        void printAnnualSales() {
            cout<<setprecision(2)<<fixed<<"\nO total anual de vendas e: $"<<totalAnnualSales()<<endl;
        }

    private:
        double totalAnnualSales() {
            double total = 0.0;

            for(int i = 0; i < monthsPerYear; i++) {
                total += sales[i];
            }

            return total;
        }
        double sales[monthsPerYear];
};

int main ( void ) {
    SalesPerson s;
    s.getsalesFromUser();
    s.printAnnualSales();
}