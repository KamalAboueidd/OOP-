 #include <iostream>
 #include <string>
 #include <vector>
 #include <algorithm>
 using namespace std;

   class Person 
   {
    

     public :
       string name ="Unknown" ;
     string gender ="Unknown";
        float age = 0 ;
        Person(){}
        Person(string n , string g , float a):name(n),gender(g),age(a){}
         void setname(string  n)
         {  
              name = n; 
         }
         string getname()
         {
             return name;
         }
         void setGender(string g)
         {
              gender = g;
         }
         string getGender()
         {
             return gender ;
         }
         void setAge(int a)
         {
             age = a;
         }
         void printDetails()
         {
            cout << "name : " << name << " Gender : " << gender << " Age : " << age <<"\n";
         }
   };
class Student:public Person  // class studnt is a person ,  and ihert all features from base class
   {
        private :
         int level;
          float Gpa ;
          string department;
         public :
          Student(){}
          Student(int l , float g , string d):level(l),Gpa(g),department(d){}
         void setLevel(int l)
         {
           level = l;
         }
         int getLevel( )
         {
          return level ;
         }
     void setGPA(float g)
      {
       Gpa = g ;
      }
     float getGPA()
      {
      return Gpa ;
      }
     void setDepartment(string d)
      {
       department = d ;
      }
     string getDepartment()
      {
      return department ;
      }
   };
 int main ()
 {
    // Person p1("ahmed","male" ,22.1); 
    Student s1;
    s1.printDetails();
    s1.setAge(22);
    s1.setname("OMAR");
    s1.setGender("MALE");
    s1.printDetails();      
    s1.setLevel(121);
     cout << s1.getLevel() << " ... \n";
     
     
     return 0;
 }


