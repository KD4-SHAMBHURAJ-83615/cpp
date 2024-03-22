#include <iostream>
using namespace std;

class Address{

    private:
    string building;
    string street;
    string city;
    int pin;

    public:

    Address(){

    };
    Address(string building,string street,string city, int pin){

    };

    string get_building(){
      return building;
    }

    void set_building(){
        this->building=building;
    }
    string get_street(){
      return street;
    }

    void set_street(){
        this->street=street;
    }
    string get_city(){
      return city;
    }

    void set_city(){
        this->city=city;

    }
    int get_pin(){
      return pin;
    }

    void set_pin(){
        this->pin=pin;
    }


    void accept(){
        cout<<"ENTER BUILDING NAME"<<endl;
        cin>>building;
        cout<<"ENTER STREET NAME "<<endl;
        cin>>street;
        cout<<"ENTER CITY NAME"<<endl;
        cin>>city;
        cout<<"ENTER THE PIN CODE"<<endl;
        cin>>pin;

    }

    void display(){
            cout<<"BUILDING NAME : "<<building<<endl;
            cout<<"STREET NAME : "<<street<<endl;
            cout<<"CITY NAME : "<<city<<endl;
            cout<<"PIN CODE : "<<pin<<endl;




    };

   

};
int main(){
    Address a1;
    a1.accept();
    a1.display();
    //GET LINE FUCTION
};