#include <iostream>
#include <string>
#include <Algorithm>
#include <vector>
using namespace std;

class Calculator
{
public:
    // Calculator();
    ~Calculator()
    {
        cout << "this message will apper here after object termination" << "\n";
    }
    // method overloading
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    int add(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
    float add(float num1, float num2)
    {
        return num1 + num2;
    }
    string add(string str1, string str2) // add acts here as conctnation .
    {
        return str1 + " " + str2;
    }
};

class Car
{
private:
    string model;
    int year;
    string color;

public:
     Car(); // default constractor , empty no body no parametrs
     Car(string mod, int ye, string col); // constractor decleration
      
    string getModel()
    {
        return model;
    }
    int getYears()
    {
        return year;
    }
    string getcolor()
    {
        return color;
    }
    void PrintCarDetails()
    {
        cout << "The car details is " << " Model : " << model << " Year : " << year << " Color : " << color << "\n";
    }
};

 Car::Car(string mod, int ye, string col):model(mod), year(ye), color(col)
    // this constractor have two intialization way for the attribute
    // 1 - if the object not passing any values to the constr.. the valuse of the attributes will be the defult intialized values
    // -2 if the user  passing values to the obj this values willl be assigned to the attributes of that obj
    {
        // model = mod;
        // year = ye;
        // color = col;
    }
    Car::Car():model("honda"), year(2022), color("red")
    {

    }

int main()
{
    // Calculator calc1;
    // cout << calc1.add(2, 2) << "\n";
    // cout << calc1.add(2, 2, 2) << "\n";
    // cout << calc1.add("Hello", "user") << "\n";
      Car c1("BMW" , 2026 , "red");
      Car c2;
      c1.PrintCarDetails();
      c2.PrintCarDetails();
  cout <<c1.getcolor() << "\n"; 
  cout <<  c2.getcolor() << "\n"; 
}