#include <iostream>
#include <string>
using namespace std;

// Base Class 1
class Employee
{
private:
    string name;
    string job;
    float salary;

public:
    Employee()
    {
        cout << "Employee Default Constructor\n";
    }

    Employee(string n, string j, float s)
    {
        name = n;
        job = j;
        salary = s;
    }

    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setJob(string j)
    {
        job = j;
    }

    string getJob()
    {
        return job;
    }

    void setSalary(float s)
    {
        salary = s;
    }

    float getSalary()
    {
        return salary;
    }

    void printEmployee()
    {
        cout << "Name : " << name << endl;
        cout << "Job : " << job << endl;
        cout << "Salary : " << salary << endl;
    }
};

// Base Class 2
class Student
{
private:
string name;
    string department;
    string researchInterest;

public:
    Student()
    {
        cout << "Student Default Constructor\n";
    }

    Student(string d, string r)
    {
        department = d;
        researchInterest = r;
    }
    void setName(string n)
    {
         name = n ;
    }
    string getName ()
{
     return name ;
}
    void setDepartment(string d)
    {
        department = d;
    }

    string getDepartment()
    {
        return department;
    }

    void setResearchInterest(string r)
    {
        researchInterest = r;
    }

    string getResearchInterest()
    {
        return researchInterest;
    }

    void printStudent()
    {
        cout << "Department : " << department << endl;
        cout << "Research Interest : " << researchInterest << endl;
    }
};

// Derived Class
class TechnicalAssistant : public Employee, public Student
{
private:
    int officeNumber;

public:
    TechnicalAssistant()
    {
        cout << "Technical Assistant Default Constructor\n";
    }

    TechnicalAssistant(string n, string j, float s,
                       string d, string r,
                       int office)
        : Employee(n, j, s), Student(d, r)
    {
        officeNumber = office;
    }

    void setOfficeNumber(int o)
    {
        officeNumber = o;
    }

    int getOfficeNumber()
    {
        return officeNumber;
    }

    void printDetails()
    {
        printEmployee();
        printStudent();
        cout << "Office Number : " << officeNumber << endl;
    }
};

int main()
{
    TechnicalAssistant ta(
        "Kamal",
        "Teaching Assistant",
        7000,
        "Computer Science",
        "Artificial Intelligence",
        305
    );

    ta.printDetails();
    // ta.setName("ahmed") // error "Ambugies" , becuase the emp and student have the same hame of function "stName"
   ta.Employee::setName("ahmed");
    return 0;
}