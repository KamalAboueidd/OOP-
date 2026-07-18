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
        Person(){
          cout << "value from base class " << " \n";
        }
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
          Student(){
            cout << "Value fom child or drived class" << "\n";
          }
          Student(string n , string g , float a ,int l , float gp , string d):Person(n ,g ,a)
           {
               level = l ;
               Gpa = gp;
               department = d;
          }
            
           
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
       void printDetails() // overriding 
       {
         Person::printDetails();
          cout << "LEVEL : "<< level << " GPA : " << Gpa << " Department : " << department << "\n";
       }
   };
     class PostGraduatedStudent:public Student 
     {
       private :
       string research_interest ;

       public : 
         PostGraduatedStudent()
         {
           cout << "defualt constractor of PostGraducatedStudent" << "\n";
         }
         PostGraduatedStudent(string n , string g , float a ,int l , float gp , string d ,string re):Student(n,g,a,l,gp,d){
             research_interest = re ;
         }
         void set_research_interest(string rarea)
         {
          research_interest = rarea ;
         }
         string get_Research_interest()
         { 
            return research_interest ;
         }
         void printDetails()
         {
          Student::printDetails();
          cout << " Research interest  : " << research_interest  << "\n";
         }
     };
 int main ()
 {
      // Student s1;
      // Student s2("KAMAL" ,"MALE",21.10,4,3.22,"IT");
      // s2.printDetails();
      PostGraduatedStudent p1("Kamal","Male",22,5,3.22,"IT","JavaScript") ;
      p1.printDetails();
    
     return 0;
 }


