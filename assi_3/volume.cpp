#include <iostream>
using namespace std;

class Cylinder{

private:
  double radius;
  double height;
  
 const static double PI;

public:
  Cylinder()
  {
    radius=0.0;
    height=0.0;

  }
  Cylinder(double radius, double height)
  {
    this->radius = radius;
    this->height = height;
  }
  double getRadius(){
    return radius;
  }

  void setRadius(){
     this->radius=radius;
  }

  double getHeight(){
      return height;
  }

  void setHeight(){
       this->height=height;
  }
  double getVolume(){
    return PI * radius * radius * height;
  }

  void printVolume()
    {
        cout << "VOLUME OF CYLINDER = "<<getVolume()<< endl;
    }

};double const Cylinder::PI=3.14;


int main (){


   Cylinder c1(10,12);
   Cylinder c2;
   c1.printVolume();
   c2.printVolume();
   

   return 0;
   
   



}