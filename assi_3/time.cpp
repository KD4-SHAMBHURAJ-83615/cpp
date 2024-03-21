#include <iostream>
using namespace std;

class Time{

private:
  int h;
  int m;
  int s;

public:
Time(){
 h=0;
 m=0;
 s=0;


}
Time(int h,int m,int s){
this->h=h;
this->m=m;
this->s=s;

 
}
int getHour(){
    return h;
}
int getMinute(){
    return m;
}
int getSeconds(){
    return s;
}
void printTime(){
   cout<<"HOUR : "<<h<<endl;
   cout<<"MINUTE : "<<m<<endl;
   cout<<"SECOND : "<<s<<endl;


}


void setHour(){
 this->h=h;
}


void setMinute(){
 this->m=m;

}

void setSeconds(){
 this->s=s;

}
};
int main()
{
    
    Time *ptr2=new Time(10,20,30);
    Time *ptr1=new Time;

    ptr2->printTime();
    ptr1->printTime();
   


    return 0;
};