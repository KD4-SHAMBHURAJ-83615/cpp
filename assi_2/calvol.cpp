#include <iostream>
using namespace std;


class Calvolume
{
private:
    int length;
    int width;
    int height;
    
public:
    Calvolume(){
     length=1;
     width=1;
      height=1;
    };
    Calvolume(int l,int w,int h){
     
     length= l;
     width= w;
     height= h;
    };

    Calvolume(int value){
        this->length= value;
        this->width= value;
        this->height= value;
    }
    

    
    int volume(){
        return length*width*height;
    }



   
    
       
    
};


int main(){

    Calvolume c;
    
    int choice;

    do
    {
        cout<<"0.EXIT"<<endl;
        cout<<"1.SHOW DEFAULT VOLUME"<<endl;
        cout<<"2.ENTER SINGLE VALUE"<<endl;
        cout<<"3.ENTER AS PER REQURIMENT"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 0:
             cout<<"THANKS FOR VISITING....."<<endl;
            break;

        case 1:
                   
           {Calvolume c;
               cout<<"volume is"<<c.volume()<<endl;
           }
            break;


        case 2:
           {int value;
           cout<<"enter value"<<endl;
           cin>>value;
            Calvolume c(value);
            cout<<"volume is"<<c.volume()<<endl;
           }
            break;
        
        case 3:
        
        
        {
            int l,w,h;
         cout<<"ENTER THE LENGTH"<<endl;
         cin>>l;
         cout<<"ENTER THE WIDTH"<<endl;
         cin>>w;
         cout<<"ENTER THE HEIGHT"<<endl;
         cin>>h;
         Calvolume c(l,w,h);
        cout<<"volume is :"<<c.volume()<<endl;
        }         

            break;

        
        default:
         cout<<"ENTER THE VALID OPTION"<<endl;
            break;
        }


    } while (choice!=0);
    


}

