#include <iostream>
using namespace std;


class tollbooth
{
private:
    unsigned int cars;
    unsigned int npcars;

    double money;
    
    
public:
    tollbooth(){
     cars=0;
    npcars=0;
     money=0;
    }
    tollbooth(unsigned int cars,double money,unsigned int npcars){
     
     this->cars= cars;
     this->money= money;
     this->npcars= npcars;

    }

   void payingCar(){
     cars++;;
     money+=0.50;

    }
   void nopayCar(){int npc;
    npcars++;

   }
   void printOnConsole(){
    cout<<"TOLL PLAZA KARAD "<<endl;
    cout<<"TOTAL NUMBER OF CARS = "<<cars+npcars<<endl;
    cout<<"TOTAL MONEY = "<<money<<endl;
    cout<<"TOTAL PAYING CARS = "<<cars <<endl;
    cout<<"TOTAL NON PAYING CARS = "<<npcars<<endl;
    

   }
};

int main(){

tollbooth c;
int choice;

  do
  {
    cout<<"===WELCOME==="<<endl;
    cout<<"0.EXIT"<<endl;
    cout<<"1.CAR PAY AND PASS"<<endl;
    cout<<"2.CAR WITHOUT PAY AND PASS"<<endl;
    cout<<"3.SHOW THE DATA "<<endl;
    cout<<"=ENTER THE VALID OPTION="<<endl;

    cin>>choice;

    switch (choice)
    {
    case 0: 
    cout<<"THANKS FOR VISITING...."<<endl;
    break;
 
    case 1: 
    c.payingCar();
    break;

    case 2: 
    c. nopayCar();
    break;

    case 3: 
    c. printOnConsole();
    break;




      default:
      cout<<"WRONG CHOICE"<<endl;
      break;
    
    
    }

   
  } while (choice!=0);
  



}


  