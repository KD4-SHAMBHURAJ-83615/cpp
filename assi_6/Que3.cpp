#include <iostream>
using namespace std;

class Employee{

private:
int id;
double salary;


public:

Employee()
{
    id=0;
    salary = 00.00;
}

Employee(int id, double salary)
{
     this->id=id;
   this->salary=salary;

}

void setid(int id){
    this->id=id;
};

int getid(){
  return id;
}

void setSalary(double salary){

   this->salary=salary;

}

double getSalary(){
    return salary;
}

virtual void accept(){

    cout<<"ENTER THE ID";
    cin>>id;
    cout<<"ENTER THE SALARY";
    cin>>salary;

}
virtual void display(){
    cout<<"Employee ID = " <<id<<endl;
    cout<<"Employee SALARY = " <<salary<<endl;

}
virtual ~Employee()
    {
    }
};

class Manager : virtual public Employee
{
private:

double bonus;

public:
Manager(){
    bonus=0;
}
Manager(int id , double salary,double bonus){

}

void setBonus(double bonus){

 this->bonus=bonus;

}
virtual void accept(){
    accept();
    cout<<"ENTER THE BONUS";
    cin>>bonus;

}


void acceptManager(){
    cout<<"ENTER THE BONUS";
    cin>>bonus;


}
virtual void display(){
    display();
    cout<<"BONUS IS = "<<bonus<<endl;


}

void displayManager(){
cout<<"BONUS IS = "<<bonus<<endl;

}

virtual ~Manager()
    {
    }

};


class Salesman : virtual public Employee
{
private:
    double commission;

public:
Salesman(){
    commission=0;
}

Salesman(int id , double salary,double commission ){

}

void setCommission(double commission){
    this->commission=commission;
}


double getCommission(){
    return commission;
}

virtual void accept(){
    accept();
    cout<<"ENTER THE COMMISSION";
    cin>>commission;
}

void aceeptSalesman(){

    cout<<"ENTER THE COMMISSION";
    cin>>commission;

}

virtual void display(){
    display();
    cout<<"COMMISSION IS = "<<commission<<endl;


}

void displaySalesman(){

    cout<<"COMMISSION IS = "<<commission<<endl;

}

virtual ~Salesman()
    {
    }

};


class SalesManager : public Manager,public Salesman
{

   
public:

SalesManager(){

}

SalesManager(int id , double salary,double commission,double bonus){

}

void accept (){
    Employee::accept();
    Manager::acceptManager();
    Salesman::aceeptSalesman();
}
void display(){
    Employee::display();
    Manager::displayManager();
    Salesman::displaySalesman();
}
virtual ~SalesManager()
    {
    }


};

int main(){
    Employee *ptr= new SalesManager;
    ptr->accept();
    ptr->display();
    delete ptr;
    ptr=NULL;
}



int main3(){
    Employee *ptr= new Salesman;
    ptr->accept();
    ptr->display();
    delete ptr;
    ptr=NULL;
}


int main2(){

    Employee *ptr= new Manager;
    ptr->accept();
    ptr->display();
    delete ptr;
    ptr=NULL;
}


int main1(){

    Employee *ptr=new Employee();
    ptr->accept();
    ptr->display();

    delete ptr;
    ptr=NULL;



}

