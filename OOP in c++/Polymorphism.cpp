// #include<iostream>
// using namespace std;
// EXAMPLE0: CALCULATOR
//class Calculator {
// public:
//
// int add(int a, int b) {
// return a + b;
// }
//
// double add(double a, double b) {
// return a + b;
// }
//};
//
//int main() {
// Calculator calc;
// cout << "Integer Addition: " << calc.add(5, 3) << endl;
// cout << "Double Addition: " << calc.add(2.5, 3.8) << endl;
// return 0;
//}
// EXAMPLE1: ANIMAL
//class Animal {
// public:
// virtual void makeSound() {
// cout << "Animal sound!" << endl;
// }
//};
//
//class Dog : public Animal {
//public:
// void makeSound() override {
// cout << "Bark!" << endl;
// }

//};
//
//class Cat : public Animal {
// public:
// void makeSound() override { // override yha optional h, is k bagher b code
// cout << "Meow!" << endl;
// }
//};
//
//int main() {
// Animal* animal; // pointer variable
// Dog dog;
// Cat cat;
//
// animal = &dog; // address store kr rhe hn hm
// animal->makeSound(); // member access operator or arrow operato, for dereferencing
// animal = &cat;
// animal->makeSound();
//
// return 0;
//}
// EXAMPLE2: EMPLOYEE
//class Employee {
// public:
// virtual void work() {
// cout << "Employee is working." << endl;
// }
//};
//
//class Manager : public Employee {
// public:
// void work() override {
// cout << "Manager is planning and managing." << endl;
// }
//};
//
//class Developer : public Employee {
// public:
// void work() override {
// cout << "Developer is writing code." << endl;
// }

//};
//int main() {
// Employee* emp;
// Manager mgr;
// Developer dev;
//
// emp = &mgr;
// emp->work();
//
// emp = &dev;
// emp->work();
//
// return 0;
//}
// CONFUSION ABOUT YESTERDAY CLASS
//class Shape{
// private:
// string color;
//
// public:
//
// virtual void draw()=0;
//};
//
//class Circle : public Shape{
// public:
// void draw(){
// cout<<"draw"<<endl;
// }
//};
//
//class Square : public Shape{
// public:
//};
//
//int main(){
// Circle c;
//
// Square s;
// return 0;
//}
// Comfiletime polymorphism
// #include<iostream>
// using namespace std;
// class Calculator{
//     public:
//     int add(int a,int b){
//         return a+b;
//     }
//     int add(int a,int b,int c){
//         return a+b+c;
//     }
//     double add(double a,double b){
//         return a+b;
//     }
// };

// int main(){
//     Calculator c;
//     cout<<"Sum of two numbers "<<c.add(3,5)<<endl;
//     cout<<"Sum of two floats "<<c.add(3.2,5.3)<<endl;
//     cout<<"Sum of three numbers "<<c.add(3,5,7)<<endl;
//         return 0;

// }
// Runtime Polymorphism
// #include<iostream>
// using namespace std;
// class Shape{
//     public:
//     int l,b;
//     double area();
//     Shape(int l,int b){
//         this->l=l;
//         this->b=b;}
//     };
//     class Square:public Shape{
//     public:
//     int radius;
//     // double area();
//     Square(int r){
//         radius=r;
//         // this->b=b;
//     }
//         double area(){
//             cout<<"Area of a square "<<2*3.14*radius*radius<<endl;
//         }

//     };
//     class Rectangle:public Shape{
//     public:
//     int height;

//     Rectangle(int l,int b,int h):Shape(l,b),height(h){

//     }
//         double area(){
//             cout<<"Area of Rectangle "<<l*b*height<<endl;
//         }

//     };


// int main(){
//     Rectangle r(2,3,4);
//     r.area();
//     Square s(5);
//     s.area();
    
//         return 0;

// }

// Virtual Method Implementation

// clear

// Attributes in Polymorphism
// Create a base class Account with attributes balance and type. Derive classes SavingsAccount and CurrentAccount. Add specific attributes like interestRate in SavingsAccount and overdraftLimit in CurrentAccount. Write a polymorphic method showDetails() to display the appropriate attributes.

#include<iostream>
using namespace std;
class Account{
    public:
    double balance;
    string type;
    Account(double b,string t){
        balance=b;
        type=t;
    }
virtual void showDetails()=0;
};
class SavingsAccount:public Account{
    public:
    int interestRate;
    SavingsAccount(double b,string t,int i):Account(b,t),interestRate(i){}

void showDetails() override{
    cout<<"Balance Type "<<type<<endl;
    cout<<"Balance "<<balance<<endl;
    cout<<"interestRate "<<interestRate<<endl;
}
};
class CurrentAccount:public Account{
    public:
    int overDrafTLimit;
    CurrentAccount(double b,string t,int o):Account(b,t),overDrafTLimit(o){}

void showDetails() override{
    cout<<"Balance Type "<<type<<endl;
    cout<<"Balance "<<balance<<endl;
    cout<<"overDrafTLimit "<<overDrafTLimit<<endl;
}
};

int main(){
    SavingsAccount s(1363776.3,"Jazzcash",23737);
    s.showDetails();
    CurrentAccount c(12322,"Easy paisa",1283);
    c.showDetails();


    return 0;
}