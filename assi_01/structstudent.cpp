#include <iostream>
using namespace std;


struct Student{
    private:
       int rollno;
       string name;
       double marks;
    public:
    
    void initDate()
    {int rollno=1;
    string name="raju";
    double marks=60.00;

    };

    void acceptStudentFromConsole(){
        cout<<"ENTER THE ROLL NO"<<endl;
        cin>>rollno;
        cout<<"ENTER THE NAME"<<endl;
        cin>>name;
        cout<<"ENTER THE MARKS"<<endl;
        cin>>marks;

       };
    void printDateOnConsole(){
        cout<<"STUDENT ROLL NO = "<<rollno<<endl;
        cout<<"STUNDENT NAME = "<<name<<endl;
        cout<<"STUDENT MARKS = "<<marks<<endl;
    };

   
};





int main(){

    struct Student s;
    void initDate();
    int choice;

    do
    {
        cout<<"0.EXIT"<<endl;
        cout<<"1.ENTER STUDENT DETAILS"<<endl;
        cout<<"2.SHOW STUDENT DETAILS"<<endl;
        cout<<"ENTER VALID OPTION"<<endl;
        cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"THANKS FOR VISITING"<<endl;
        break;
    



    case 1:
        s.acceptStudentFromConsole();
        break;

    case 2:
         s.initDate();
         s.printDateOnConsole();
        break;   

    default:
     cout<<"ENTER VALID CHOICE....."<<endl;
        break;
    }
        
    } while (choice!=0);
    
  
 
};