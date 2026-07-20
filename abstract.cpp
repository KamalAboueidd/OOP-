#include <iostream>
using namespace std ;
  class Shape
  {
      

      string color ;
      public :
      Shape(string c):color(c){}
      virtual int area () = 0 ;
      virtual void draw () =0 ;
      virtual void earse () = 0;
      virtual void display () final
      {
        cout << "this is shape : " << "\n";
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
         return 0;
    }
    void draw ()
    {
         cout << "Draw Rectangle " << "\n";
    }
    void earse ()
    {
        cout << "The Rectangle Earased " << "\n";
    }
    // void display()          // xxxxxxxxx cannot ooverrid final function .
    // {
    //      cout << "hhhhhhh" << "\n";
    // }
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
       void earse ()
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