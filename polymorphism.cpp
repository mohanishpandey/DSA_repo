// The word “polymorphism” means having many forms. 
// In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.
// A real-life example of polymorphism is a person who at the same time can have different characteristics.
// A man at the same time is a father, a husband, and an employee. 
// So the same person exhibits different behavior in different situations. 
// This is called polymorphism. 
// Polymorphism is considered one of the important features of Object-Oriented Programming.

// Types of Polymorphism
// Compile-time Polymorphism->  function overloading, operator overloading
// Runtime Polymorphism -> virtual functions


// fucntion overloading 
// Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. 
// In simple terms, it is a feature of object-oriented programming providing many functions that have the same name 
// but distinct parameters when numerous tasks are listed under one function name.

#include <bits/stdc++.h> 
using namespace std;

//RUNTIME POLYMORPHISM, FUNCTION OVERLOADING
class Base
{
   public:
   void show_val()
   {
      cout << "Class::Base"<<endl;
   }
   void show_val(int n)
   {
      cout << "eg of function overloading, depends on fucntion parameter type and number of parameters"<<endl;
   }

};
class Derived:public Base
{
   public:
   void show_val() 
   {
      cout << "The same name function but at runtime derived class is called"<<endl;
   }
}; 


//OPERATOR OVERLOADING
class Frac {
   private:
    int a;
    int b;

   public:
    Frac() : a(0), b(0) {}

    void in() {
        cout << "Enter the numerator : ";
        cin >> a;
        cout<< "Enter the denominator : ";
        cin >> b;
    }

    // Overload the * operator
    Frac operator * (const Frac &obj) {
        Frac temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;
       
        return temp;
    }

    void out() {
      cout<<"The fraction is  "<< a<<"/ "<<b;
    }
};




int main(){
    Derived d;
    d.show_val();//RUNTIME POLYMORPHISM
    Base b;
    b.show_val(5);//FUNCTION OVERLOADING
    Frac F1, F2, result;

    cout << "Enter the first fraction:\n";
    F1.in();

    cout << "Enter the second fraction:\n";
    F2.in();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = F1 * F2;
    result.out();

    
    
}