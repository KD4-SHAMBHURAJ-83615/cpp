#include <iostream>
using namespace std;

class Student{
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
        cout<<"ENTER ROLL NUMBER"<<endl;
        cin>>rollno;
        cout<<"ENTER NAME"<<endl;
        cin>>name;
        cout<<"ENTER MARKS"<<endl;
        cin>>marks;
     };
    void printStudentOnConsole(){
        cout<<"STUDENT ROLL NUMBER -"<<rollno<<endl;
        cout<<"STUDENT NAME -"<<name<<endl;
        cout<<"STUDENT MARKS -"<<marks<<endl;
    };

};
int main(){
    
    Student s;
    void initDate();
     int choice;

   do
   {
    cout<<"0.EXIT"<<endl;
    cout<<"1.ADD STUDENT DETAILS"<<endl;
    cout<<"2.SHOW STUDENTS DETAILS"<<endl;
    cout<<"ENTER THE CHOICE"<<endl;
    cin>>choice;


    switch (choice)
    {
    case 0:
        cout<<"THANK YOU FOR VISIT"<<endl;
        break;
    

    case 1:
        s.acceptStudentFromConsole();
        break;

    case 2:
       s.printStudentOnConsole();
       break;
    
    default:
         cout<<"ENTER VALID OPTION"<<endl;
        break;
    }


    
   } while (choice!=0);
   
   return 0;
};