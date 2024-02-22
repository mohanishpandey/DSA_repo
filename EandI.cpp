#include <bits/stdc++.h> 
using namespace std;
//4 pillars of oops 
//ENCAPSULATION - when data and methods are wrapped into classes. It can be acheived fully if we use Private access modifier.
//INHERITANCE - when a classes uses the methods and data of other class. Its types are: Single, Multilevel, Multiple, Heirarchical, Hybrid



//ENCAPSULATION eg.
// class FullIncapsulation{
//     private: 
//     int val1;
//     char c1;
//     int Method1(){
//         return 0;
//     }
// };

//INHERITANCE 
//single  - when only dig and Rottwiller are considered and 
//It becomes multilevel when we consider shiro too which is a child class to Rottwillwer.

class dog{
    public:
    const int legs = 4;
    int weight;
    void bark (){
        cout<< "dog barking"<< endl;
    }


};
class Rottwiller : public dog{
    public:
        string breed =  "rottie";
        void bark (){
        cout<< "Rottwiller barking"<< endl;
    }        


};

class shiro: public Rottwiller {
    public:
    void bark(){
        cout<< "shiro barking"<<endl;
    }
};

int main(){
    dog* d = new dog;
    cout<< d->legs<<endl;
    shiro* d1= new shiro;
    d1->bark();

    //upcsasting
    Rottwiller* r1 = new shiro;
    
    r1->bark(); //rottwill's obj. is made if we use virtual keyword in base class the that will make shiro's obj.
    cout<<r1->legs;

    
    
    return 0;
}