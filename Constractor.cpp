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
         Distance operator + (Distance d2) // operator overloading for addition of two distance objects
         {
             Distance res;
                res.feet = feet + d2.feet;
                res.inches = inches + d2.inches;
                return res;
         }    
    };
    class Calculator 
    {
        public :
          static int x ;
         static int add (int num1 , int num2) // static method can be called without creating an object of the class
         {
             return num1 + num2 ;
         }
         static int multiply (int num1 , int num2)
         {
            return  num1 * num2 ;
         }
         static int divide (int num1 , int num2)
         {
             return num1 / num2 ;
         }
      
    };
    int Calculator::x = 1000; // static variable initialization outside the class
   class Counter 
   {
      private :
      unsigned int count ;
    public : 
       Counter():count (0){}
       Counter(int c):count (c){}
      unsigned int getCount()
      {
         return count ;
      }
       //
       Counter operator ++ () // prefix counter 
       {
         ++count ;
         return Counter(count);
       }
       Counter operator ++ (int) // postfix counter .
       {
         count++ ;
         return Counter(count);
       }
       Counter operator -- ()
       {
         --count ;
         return Counter(count);
       }
       Counter operator -- (int)
       {
         count-- ;
         return Counter(count);
       }
       Counter operator + (Counter c2) // operator overloading for addition of two counter objects
       {
         return Counter(count + c2.count);
       }
    };

int main()
{
//   Distance d1(1,2.1);
//   Distance d2(5 , 3.5);
// //   Distance d3(d2); // copy constractor will be called here to copy the values of d2 to d3
// //    d3.printDistance();
// //    d3.setDistance(10, 6.5);
// //    Distance d4 = d3; // this is copy constractor , it will copy the values of d3 to d4
// //    d4.printDistance();         
//     //  Distance obj1(12,4.5);
//     //  Distance obj2(14,4.5);
//     //  Distance obj3 = obj1.add_distance(obj2); 
//      Distance d3 =d1 + d2; // operator overloading for addition of two distance objects
//      d3.printDistance(); // operator overloading for addition of two distance objects
//     //  obj3.printDistance();
//     //   // static methods ex 
//     //     // int sum = Calculator::add(5, 10);
//     //     // int product = Calculator::multiply(5, 10);
//     //     // int quotient = Calculator::divide(10, 5);
//     //     // cout << "Sum: " << sum << "\n";
//     //     // cout << "Product: " << product << "\n";
//     //     // cout << "Quotient: " << quotient << "\n";
//     //     // cout << "Static variable x: " << Calculator::x << "\n";
        Counter c1(12);
        Counter c2(23);
         cout << "Count of c1: " <<  c1.getCount() << "\n";
         cout << "Count of c2: " << c2.getCount() << "\n"; 
        c1++;
        c2--;
       cout << "Count of c1 after applying Operator Operloading : " <<  c1.getCount() << "\n";
         cout << "Count of c2  after applying Operator Operloading: " << c2.getCount() << "\n"; 
         Counter c3 = c1 + c2;
      cout << "After apply overload oprrator to add abject to another obj : " <<     c3.getCount() << "\n";
      Counter c4 = c3 + c1;
      cout << "Count of c4: " << c4.getCount() << "\n";
}
