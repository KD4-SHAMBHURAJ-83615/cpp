#include <iostream>
using namespace std;



class Product{
int id;
string title;
double price;
public:
virtual void accept(){
    cout<<"ENTER THE ID = ";
    cin>>id;
    cout<<"ENTER THE TITLE = ";
    cin>>title;
    cout<<"ENTER THE PRICE = ";
    cin>>price;

// partial complete function
//todo to accept id,title,price;
}
virtual double getDiscountPrice();



void setPrice(double price){
  this->price=price;
}

string getTitle(){
    return title;
}
double getPrice(){
    return price;
}

virtual void display(){

cout<<"ID = "<<id<<endl;
cout<<"TITLE = "<<title<<endl;
cout<<"PRICE = "<<price<<endl;

// partial complete function
//todo to accept id,title,price;
}
};
class Book : public Product{
string author;
void accept(){
    Product::accept();
    
    cout<<"ENTER THE AUTHOR = ";
    cin>>author;

    

    
//complete function by accepting author;
//also reuse the function of Product(Base) class accept
//give discount of 10% on price and update the price.use mutators and inspector for price
}
 double getDiscountPrice()
    {
        int price = Product::getPrice();
        int discount = (price * 10) / 100;
        price = price - discount;
        return price;
    }
virtual void display(){
     Product::display();
    cout<<"AUTHOR = "<<author<<endl;

//complete function by displaying author;
//also reuse the function of Product(Base) class display
}
};
class Tape : public Product{
string artist;
void accept(){

    Product::accept();
    cout<<"ENTER THE ARTIST = ";
    cin>>artist;

    


//complete function by accepting artist
//also reuse the function of Product(Base) class accept
//give discount of 5% on price and update the price.use mutators and inspector for price
}
 double getDiscountPrice()
    {
        int price = Product::getPrice();
        int discount = (price * 5) / 100;
        price = price - discount;
        return price;
    }


virtual void display(){


     Product::display();
    cout<<"ARTIST = "<<artist<<endl;
//complete function by displaying artist;
//also reuse the function of Product(Base) class display
//todo to display artist;
}
};
int main()
{
    Product *pptr[3];
    int index = 0;
    int choice;
    double totalprice = 0;
    do
    {
        cout << "0.Exit" << endl;
        cout << "1.BUY BOOK" << endl;
        cout << "2.BUY TAPE" << endl;
        cout << "3.DISPLAY PRODUCT" << endl;
        cout << "4.GENERATE BILL" << endl;
        cout << "ENTER YOUR CHOICE -";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "THANK YOU FOR VISITING ......................................" << endl;
            break;
        case 1:
            if (index < 3)
            {
                pptr[index] = new Book;
                pptr[index]->accept();
                index++;
            }
            else
                cout << "LIMIT FOR BUYING EXISTED" << endl;
            break;
        case 2:
            if (index < 3)
            {
                pptr[index] = new Tape;
                pptr[index]->accept();
                index++;
            }
            else
                cout << "LIMIT FOR BUYING EXISTED" << endl;

            break;
        case 3:
            for (int i = 0; i < index; i++)
            {
                pptr[i]->display();
            }
            break;
        case 4:
             if (index != 0)
            {
                {
                    int i;
                    cout << "\t\t" << "---------BILL---------------" << endl;
                    for (i = 0; i < index; i++)
                    {
                    totalprice = totalprice + pptr[i]->getDiscountPrice();
                    }
                }
                cout << "\t\t"<< "Total BILL:-" << totalprice<< endl;
            }
            else
            cout<<"PRODUCTS ARE NOT ADDED IN AAREY............"<<endl;
            break;
        default:
            break;for (int i = 0; i < index; i++)
            {
                pptr[i]->display();
            }
        }
    } while (choice != 0);
    for(int i=0; i<index; i++)
    {
        delete  pptr[i];
        pptr[i]=NULL;
    }


}