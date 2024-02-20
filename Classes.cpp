// Class in C++ is the building block that leads to Object-Oriented programming. 
// It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. 
// A C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. 
// There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. 
// So here, Car is the class, and wheels, speed limits, and mileage are their properties.
#include <bits/stdc++.h> 
using namespace std;

//checking size of a empty class 
class Animal{};

//Checkout Padding and greedy alignment
class A{
    char ch1;
    int a;
    char ch2;
};
class Car
{
private://an access modifier
    //data
    int speed;

public://an access modifier
    //methods
    int SetSpeed(int speed){
        this->speed = speed;
        return speed;
    }
    void getSpeed(){
        cout<<this->speed;
    }
    void speedUp(int speed){
        (this->speed )++;
    }
    void Brake(){
        this->speed = 0;
    }
    

};
int main(){
    cout<<"animal class size:  "<<sizeof(Animal)<<endl;// to track the class atlest pne byte is allocated
    cout<<"A class size:  "<<sizeof(A)<<endl;
    Car nexon;
    nexon.SetSpeed(40);
    nexon.getSpeed();
    return 0;

}