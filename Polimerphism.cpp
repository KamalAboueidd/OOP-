#include <iostream>
using namespace std ;
  class Shape
  {
     private : 

      string color ;
      public :
      Shape(string c):color(c){}
      virtual int area ()
      {
         cout << "Parent classs area : "<<"\n";
         return 0 ;
      }
      virtual void draw (){
         cout << " Draw Parent shape in "<< color <<" Color ." << "\n";
      }
      virtual void earse ()
      {
          cout<< "erase the parent shape" << "\n";
      }
  };
  class rectangle : public Shape 
  {
private :
 int length ;
 int width ;
 public :
    rectangle(int l , int w ,string c):Shape(c)
    {
         length = l;
         width = w ;
    }
    int area()
    {
         cout << "Rectangle class area : " << (width * length) << "\n";
         return 0 ;
    }
    void draw ()
    {
         cout << "Draw Rectangle " << "\n";
    }
    void erase ()
    {
        cout << "The Rectangle Earased " << "\n";
    }
  };
  class Circle :public  Shape
  {
     private :
     int radius;
     public : 
       Circle(int r , string c ):Shape(c)
       {
         radius = r ; 
       }
       int area()
       {
         cout << "Circle area : "<< 3.14 * (radius * radius)  << "\n";
         return (3.14 * radius * radius);
       }
       void draw ()
       {
         cout << "Draw Circle . " << "\n";
       }
       void erase ()
       {
         cout << "The circle Earased . " << "\n";
       }
  };
int main ()
{
   Shape* shap_ptr;
    rectangle rec(10,7,"Red");
    Circle c(5 , "Yellow");
    shap_ptr = &rec ;
    shap_ptr->area();
    shap_ptr->draw();
        shap_ptr = &c;
        shap_ptr->area();
        shap_ptr->draw();
    return 0 ;
}