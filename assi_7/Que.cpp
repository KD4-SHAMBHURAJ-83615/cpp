#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        //cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        //cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        //cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        //cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        //cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        //cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        //cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        //cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        //cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        //cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        //cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        //cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice , index = 0;
    int option;
    Employee *earr[10];
do
{
    cout << "0) To Exit "<< endl;
    cout << "1) To Accept Employee "<< endl;
    cout << "2) To Display Count of Employee Based on Designation "<< endl;
    cout << "3) To Display All Manager "<< endl;
    cout << "4) To Display All SalesMan "<< endl;
    cout << "4) To Display All SalesManager "<< endl;
    cout << "Enter choice = ";
    cin >> choice;

    switch (choice)
    {
    case 0:
        cout << "Thank You ..." << endl;
        break;
    case 1:
        
        cout << "0) To Exit " << endl;
        cout << "1) To Accept Manager " << endl;
        cout << "2) To Accept SalesMan " << endl;
        cout << "3) To Accept SalesManager " << endl;
        cout << "Enter Choice = ";
        cin >> option;

        switch (option)
        {
        case 0:
            cout << "Thank you ..." << endl;
            break;
        case 1:
            if (index < 10)
            {
            earr[index] = new Manager();
            earr[index]->accept();
            index++;
            }
            break;
        case 2:
            if (index < 10)
            {
            earr[index] = new Salesman();
            earr[index]->accept();
            index++;
            }
            break;
        case 3:
            if (index < 10)
            {
            earr[index] = new SalesManager();
            earr[index]->accept();
            index++;
            }
            break;
        
        default:
            cout << "Invalid Choice " << endl;
            break;
        }

        break;

    case 2:
        int man=0, salM=0, salMang=0;
        for (int i=0 ; i<index ; i++)
        {
            if (typeid(*earr[i]) == typeid(Manager))
            man++;

            else if (typeid(*earr[i]) == typeid(Salesman))
            salM++;
            
            else if (typeid(*earr[i]) == typeid(SalesManager))
            salMang++;
        }
        cout << "Total Number of Manager = " << man << endl;
        cout << "Total Number of SalesMan = " << salM << endl;
        cout << "Total Number of SalesManagers = "<< salMang << endl;
        break;
    case 3:
        for (int i=0 ; i<index ; i++)
        {
            if (typeid(*earr[i]) == typeid(Manager))
            earr[i] -> display();
            cout << "****************" << endl;
        }
        break;
    case 4:
        for (int i=0 ; i<index ; i++)
        {
            if (typeid(*earr[i]) == typeid(Salesman))
            earr[i] -> display();
            cout << "****************" << endl;
        }
        break;
    case 5:
        for (int i=0 ; i<index ; i++)
        {
            if (typeid(*earr[i]) == typeid(SalesManager))
            earr[i] -> display();
            cout << "****************" << endl;
        }
        break;
    
    default:
        cout << "Invalid Choice "<< endl;
        break;
    }


}while(choice != 0);
for (int i = 0; i < index; i++)
        delete earr[i];
    return 0;
}