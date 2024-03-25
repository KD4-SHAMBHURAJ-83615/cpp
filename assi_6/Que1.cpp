#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 00;
        month = 00;
        year = 0000;
    }
    Date(int day, int month, int year)
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
        name = "Sunbeam";
        addres = "karad";
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
    void accept_data()
    {
        cout << "Enter your name -";
        cin >> name;
        cout << "Enter your Addres -";
        getchar();
        getline(cin, addres); // cin>>name;
        cout << "Enter your date of birth" << endl;
        DOB.acceptDate();
    }
    void display_data()
    {
        cout << "NAME -" << name << endl;
        cout << "ADDRESS -" << addres << endl;
        cout << "DATE OF BIRTH" << endl;
        DOB.displayDate();
    }
};
class Employee : public Person
{
    int id;
    float salary;
    string depat;
    Date joining;

public:
    Employee()
    {
        id = 0;
        salary = 0000;
        depat = "default";
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

    virtual void accept_data()
    {
        Person::accept_data();
        cout << "Enter id -";
        cin >> id;
        cout << "Enter salary for epmloyee -";
        cin >> salary;
        cout << "Enter your depart -";
        cin >> depat;
        cout << "Enter Joining date -";
        joining.acceptDate();
    }
    void display_data()
    {
        Person::display_data();
        cout << "Employee id -" << id << endl;
        cout << "salary for epmloyee -" << salary << endl;
        cout << "DEPARTMENT -" << depat << endl;
        joining.displayDate();
    }
};

int main()
{
    Person p;
    p.accept_data();
    p.display_data();
   

    Employee e;
    e.accept_data();
    e.display_data();


    Person *ptr=new Employee;
    ptr->accept_data();
    ptr->display_data();
    
     return 0;
}