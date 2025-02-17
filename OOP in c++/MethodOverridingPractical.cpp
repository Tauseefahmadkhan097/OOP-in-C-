// #include<iostream>
// using namespace std;
// class Vehicle{
//     public:
//     void Move(){
//         cout<<"A Vehicle Can Move "<<endl;
//     }
// };
// class Car:public Vehicle{
//     public:
//     void Move(){
//         cout<<"A Car Can Move "<<endl;
//     }
// };


// int main(){
//     Vehicle v;
//     v.Move();
//     Car c;
//     c.Move();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void sound(){
//         cout<<"Animals Makes Sound "<<endl;
//     }
// };
// class Dog:public Animal{
//     public:
//     void sound(){
//         cout<<"Dogs Bark! "<<endl;
//     }
// };
// class Cat:public Animal{
//     public:
//     void sound(){
//         cout<<"Cats Meow! "<<endl;
//     }
// };


// int main(){
//    Animal a;
//    a.sound();
//    Dog d;
//    d.sound();
//    Cat c;
//    c.sound();
//     return 0;
// }
// 



// #include<iostream>
// using namespace std;
// class Shape{
//     public:
//     virtual void draw(){
//         cout<<"Drawing a shape "<<endl;
//     }
// };


// class Circle:public Shape{
//     public:
//     void draw() override{
//         Shape::draw();
//         cout<<"Drawing a Circle "<<endl;
//     }
// };
// int main(){
//     Circle c;
//     c.draw();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     void work(){
//         cout<<"Employees work in an organization."<<endl;

//     }
// };

// class Manager:public Employee{
//     public:
//     void work(){
//         Employee::work();
//         cout<<"Managers plan and oversee projects."<<endl;

//     }
// };
// class Devoloper:public Employee{
//     public:
//     void work(){
//         cout<<"Developers write and debug code."<<endl;

//     }
// };
// int main(){
//    Manager m;
//    m.work();
//    Devoloper d;
//    d.work();

//     return 0;
// }


// Problem 5: Overriding and Access Specifiers

// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     void work(){
//         cout<<"Employees work in an organization."<<endl;

//     }
// };

// class Manager:public Employee{
//     public:
//     void work(){
//         Employee::work();
//         cout<<"Managers plan and oversee projects."<<endl;

//     }
// };
// class Devoloper:public Employee{
//     public:
//     void work(){
//         cout<<"Developers write and debug code."<<endl;

//     }
// };
// int main(){
//    Manager m;
//    m.work();
//    Devoloper d;
//    d.work();

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Documents{
//     public:
//     void read(){
//         cout<<"Reading a documents"<<endl;
//     }
// };

// class PDFDocuments:public Documents{
//     public:
//     void read(){
//         Documents::read();
//         cout<<"Reading a PDFdocuments"<<endl;
//     }
// };
// int main(){
//   PDFDocuments P;
//   P.read();

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class Appliance{
//     public:
//     void Functionality(){
//         cout<<"Appliance Functionality"<<endl;
//     }
// };
// class WashingMachine:public Appliance{
//     public:
//     void Functionality(){
//         Appliance::Functionality();
//         cout<<"Washing Clothes"<<endl;
//     }
// };
// class smartWashingMachine:public WashingMachine{
//     public:
//     void Functionality(){
//         WashingMachine::Functionality();
//         cout<<"Washing Clothes with smart Features"<<endl;
//     }
// };

// int main(){
//     smartWashingMachine SWM;
//     SWM.Functionality();

//     return 0;
// }


#include<iostream>
using namespace std;
class User{
    public:
    string userAccount;
    User(string u){
        userAccount=u;
    }
    void DisplayInfo(){
        cout<<"User Info"<<endl;
        cout<<"User Account "<<userAccount<<endl;

    }
};
class Admin:public User{
    public:
    string email;
    string password;
    Admin(string u,string e,string p):User(u){
    email=e;
    password=p;
    }
    void DisplayInfo(){
        User::DisplayInfo();
        cout<<"Admin Information Info"<<endl;
        cout<<"Email "<<email<<endl;
        cout<<"Password "<<password<<endl;

    }
};

int main(){
    Admin a("Facebook Accoutnt","T@edu.pk","373647HP");
    a.DisplayInfo();
    return 0;
}