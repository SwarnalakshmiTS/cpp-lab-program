#include<iostream>
using namespace std;

class Employee
{
        int eid;
        char ename[100];
        float basic_salary, hra, da, i_tax, net_salary;

        public:
        void accept_details()
        {
                cout<<"\n Enter Employee Id : ";
                cin>>eid;
                cout<<"\n Enter Employee Name : ";
                cin>>ename;
                cout<<"\n Enter Basic Salary : ";
                cin>>basic_salary;

                hra = 800;
                da = 0.25 * basic_salary;
                i_tax = 0.15 * basic_salary;
                net_salary = basic_salary + da + hra - i_tax;
        }
        void display_details()
        {
                cout<<"\n ----------------------- ";
                cout<<"\n Employee Id        : "<<eid;
                cout<<"\n Employee Name  : "<<ename;
                cout<<"\n Basic Salary         : "<<basic_salary;
                cout<<"\n HRA                      : "<<hra;
                cout<<"\n DA                        : "<<da;
                cout<<"\n I-Tax                      : "<<i_tax;
                cout<<"\n Net Salary             : "<<net_salary;
        }
};
int main()
{
        Employee e;
        e.accept_details();
        e.display_details();
        return 0;
}


