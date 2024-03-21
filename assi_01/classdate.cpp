#include <iostream>
using namespace std;


class Date{
    private:
       int day;
       int month;
       int year;
    public:
    
    void initDate(){ 
      day=1;
      month=1;
      year=2001;

    };

    void acceptDateFromConsole(){
        cout<<"ENTER THE DAY"<<endl;
        cin>>day;
        cout<<"ENTER THE MONTH"<<endl;
        cin>>month;
        cout<<"ENTER THE YEAR"<<endl;
        cin>>year;

       };
    void printDateOnConsole(){
        cout<<"DAY = "<<day<<endl;
        cout<<"MONTH = "<<month<<endl;
        cout<<"YEAR = "<<year<<endl;
    };
    bool isLeapYear()
    {
        if(year%400==0)
        {
        return true;
        }
        else
        {
        return false;
        }
    }
     

};

int main(){

     Date d;
     void initDate();
    int choice;

    do
    {
        cout<<"0.EXIT"<<endl;
        cout<<"1.ENTER THE DAY DETAILS"<<endl;
        cout<<"2.SHOW THE DAY"<<endl;
        cout<<"CHOOSE THE OPTION"<<endl;
        cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"THANKS FOR VISITING"<<endl;
        break;

      break;
    case 1:
        d.acceptDateFromConsole();
        break;

    case 2:
         d.printDateOnConsole();
         if(d.isLeapYear())
            {
                cout<<"leap year"<<endl;
            }
            else
            {
                cout<<"not leap year"<<endl;
            }
        break;   

    default:
     cout<<"ENTER VALID CHOICE....."<<endl;
        break;
    }
        
    } while (choice!=0);
    
  
 
};