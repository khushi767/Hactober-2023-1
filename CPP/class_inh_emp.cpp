// C++ code of derived class of Employee like FullTimeEmployee and PartTimeEmployee

#include<iostream>
using namespace std;

class Employee
{
    int eid;
    string name;

    public:
        Employee(int i, string n)
        {
            eid = i;
            name = n;
        }

        int getId(){ return eid; }
        string getName(){ return name; }
};

class FullTimeEmployee : public Employee
{
    int salary;

    public:
        FullTimeEmployee(int i, string n, int s) : Employee(i,n)
        {
            salary = s;
        }

        int getSalary(){ return salary; }
};

class PartTimeEmployee : public Employee
{
    int hours;

    public:
        PartTimeEmployee(int i, string n, int h) : Employee(i,n)
        {
            hours = h;
        }

        int getHours(){ return hours; }
};

int main()
{
    int i,i1, s, h;
    string n, n1;

    cout<<"** Details of Full Time Employee **"<<endl;
    cout<<"Employee ID: ";
    cin>>i;
    cout<<"Name: ";
    cin>>n;
    cout<<"Salary: ";
    cin>>s;

    cout<<endl<<"** Details of Part Time Employee **"<<endl;
    cout<<"Employee ID: ";
    cin>>i1;
    cout<<"Name: ";
    cin>>n1;
    cout<<"Hours working: ";
    cin>>h;

    FullTimeEmployee e1(i,n,s);
    PartTimeEmployee e2(i1,n1,h);

    cout<<e1.getName()<<"("<<e1.getId()<<") earns ₹"<<e1.getSalary()<<endl;
    cout<<e2.getName()<<"("<<e2.getId()<<") works for "<<e2.getHours()<<" hours"<<endl;

    return 0;
}