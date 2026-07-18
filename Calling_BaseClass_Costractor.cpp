 
 #include <iostream>
 using namespace  std ;
  class Base 
  {
     
      public :
      int x ;
       Base()
       {
          cout << "Default constractor Base is calling" << "\n";
       }
       void dispaly_X()
       {
         cout << "X value Equall : "<< x << "\n";
       }
  };
  class Drived:public Base
  {
      public :
       Drived()
       {
         cout << " Default drived class constractor calling" << "\n";
       }
       Drived(int xx)
       {
           x =xx ;
       }

  };
   
 int main()
 {
   cout << "beforee" << "\n";
    Base b1;
    Drived d1;
    Drived d2(12);
    d2.dispaly_X();

    return 0 ;
 }