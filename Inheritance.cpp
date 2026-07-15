 #include <iostream>
 #include <string>
 #include <vector>
 #include <algorithm>
 using namespace std;

   class person 
   {
     private :
     string name ;
     string gender;
     float age ;

     public :
        person(){}
        person(string n , string g , float a){}
       
   };
class Student:public person  // class studnt is a person ,  and ihert all features from base class
   {
       
   };
 int main ()
 {
    Student s1;
    
     
     return 0;
 }


