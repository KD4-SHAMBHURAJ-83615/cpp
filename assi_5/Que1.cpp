#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    Date()//parameterless constructor
    {
        day=00;
        month=00;
        year=0000;
    }
    Date(int day, int month, int year)//parameterized constructor
    {
        this->day = day;
        this->month = month;
        this->year = year;
    };

    void set_day(int day)
    {
        this->day = day;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    int get_day()
    {
        return day;
    }
    int get_month()
    {
        return month;
    }
    int get_year()
    {
        return year;
    }
    void acceptDate()
    {
        cout << "Enter DAY -";
        cin >> day;
        cout << "Enter MONTH -";
        cin >> month;
        cout << "Enter YEAR -";
        cin >> year;
    }
    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
    string name;
    string addres;
    Date DOB;

public:
    Person() : DOB()
    {
        name = "";
        addres = "";
    }
    Person(string name, string addres, Date DOB) : DOB(DOB)
    {
        this->name = name;
        this->addres = addres;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_addres()
    {
        return addres;
    }
    void set_addres(string addres)
    {
        this->addres = addres;
    }
    Date get_dob()
    {
        return DOB;
    }
    void set_dob(Date DOB)
    {
        this->DOB = DOB;
    }
    void accept_person()
    {
        cout << "Enter the name -";
        cin >> name;
        cout << "Enter the Addres -";
        getchar();
        getline(cin, addres); // cin>>name;
        DOB.acceptDate();
    }
    void display()
    {
        cout << "NAME -" << name << endl;
        cout << "ADDRESS -" << addres << endl;
        cout << "Enter your date of birth" << endl;
        DOB.displayDate();
    }
};
class Employee
{
    int id;
    float salary;
    string depat;
    Date joining;

public:
    Employee()
    {
        id=0;
        salary=0000;
        depat="default";

    }
    Employee(int id, float salary, string depat, Date joining)
    {
    }
    int get_id()
    {
        return id;
    }
    float get_salary()
    {
        return salary;
    }
    string get_depat()
    {
        return depat;
    }
    Date get_joining_date()
    {
        return joining;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_salary(float salary)
    {
        this->salary = salary;
    }
    void set_depart(string depat)
    {
        this->depat = depat;
    }
    void set_joining_date(Date joining)
    {
        this->joining = joining;
    }

    void acceptEmployee()
    {
        cout << "Enter id -";
        cin >> id;
        cout << "Enter salary for epmloyee -";
        cin >> salary;
        cout << "Enter your depart -";
        cin >> depat;
        joining.acceptDate();
    }
    void displayEmployee()
    {
        cout << "Employee id -" << id << endl;
        cout << "salary for epmloyee -" << salary<<endl;
        cout << "Enter your depart -" << depat<<endl;
        joining.displayDate();
    }
};

int main()
{
    Employee *e1;
    Person *p1;
    int choice;
    do
    {
        cout << "Enter 0 for exit" << endl;
        cout << "Enetr 1 for create employee object " << endl;
        cout << "Enter 2 for accept Employee details" << endl;
        cout << "Enter 3 for display Employee details" << endl;
        cout << "enter 4 for create person class object" << endl;
        cout << "enter 5 for accept person details" << endl;
        cout << "enter 6 for display person details" << endl;
        cout << "Enter your choice" << endl;
        cin>>choice;
        switch (choice)
        {
        case 0:
            cout << "THANK YOU...................................." << endl;
            break;
        case 1:
            e1 = new Employee;
            break;
        case 2:
            e1->acceptEmployee();

            break;
        case 3:
            e1->displayEmployee();

            break;
        case 4:
            p1 = new Person;
            break;
        case 5:
            p1->accept_person();
            break;
        case 6:
            p1->display();
            break;

        default:
        cout<<"Enter valid choice"<<endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

