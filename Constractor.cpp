#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
  
 class Distance 
 {
     private:
         int feet;
         float inches;
     public :
        Distance():feet(0),inches(0){};
        Distance(int f , float i):feet(f),inches(i){};
        void printDistance ()
         {
             cout << "Feet : " << feet << " Inches : " << inches << "\n";
         }
         void setDistance(int f , float i)
         {
             feet = f ;
             inches = i;
         }  
         Distance add_distance(Distance d2) // 
         {
             Distance result;
                result.feet = feet + d2.feet;
                result.inches = inches + d2.inches;
                return result;
         }     
    };

int main()
{
//   Distance d1;
//   Distance d2(5 , 3.5);
//   Distance d3(d2); // copy constractor will be called here to copy the values of d2 to d3
//    d3.printDistance();
//    d3.setDistance(10, 6.5);
//    Distance d4 = d3; // this is copy constractor , it will copy the values of d3 to d4
//    d4.printDistance();         
     Distance obj1(12,4.5);
     Distance obj2(14,4.5);
    Distance obj3 = obj1.add_distance(obj2); 
     obj3.printDistance();
}
