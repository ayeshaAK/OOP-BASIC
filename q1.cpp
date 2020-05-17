#include <iostream>
using namespace std;

struct Employee
{
    private:
    
    char *name ;
    double salary ;

    public:

    Employee()
    {
        name = new char [20] ;
        name [0] = '\0' ;
        salary = 0 ;
    }
    Employee ( char *set_Name , double set_Salary )
    {
        name = new char [20] ;
        name = set_Name ;
        salary = set_Salary ;
    }
    char *getName()
    {
        return name ;
    }
    double getSalary()
    {
        return salary ;
    }
};

void TestEmployee()
{
    cout << "Creating a new employee." << endl ;
    char *Name = new char[20] ; double Salary ;
    cout << "Please Enter the Name : " ; cin >> Name ;
    cout << "Please Specify the Salary : " ; cin >> Salary ;
    Employee e1( Name , Salary ) ;
    cout << "Name of Employee : " << e1.getName() << endl ;
    cout << "Salary : " << e1.getSalary() << endl ;
    cout << "Thank You for Testing Structure Employee." << endl ;
}

