
// #include<iostream>
// using namespace std;
// example0: shapes
//class Shape{
// private:
// string color;
//
// public:
//
// void setColor(string c){
// color = c;
// }
//
// void getColor(){
// cout<<"Color: "<<color<<endl;
// }
//
// void draw();
//};
//
//class Circle : public Shape{
// public:
// void draw(){
// cout<<"Drawing a circle."<<endl;
// }
//};
//
//class Square : public Shape{
// public:
// void draw(){
// cout<<"Drawing a square."<<endl;
// }
//};
//
//

//int main(){
// Circle c;
// c.setColor("Black");
// c.getColor();
// c.draw();
//
// Square s;
// s.setColor("Crimson");
// s.getColor();
// s.draw();
// return 0;
//}
//
// EXAMPLE01: BOOKS
//class Book{
// private:
// string title;
// string author;
//
// public:
// void setDetails(string t, string a){
// title = t;
// author = a;
// }
//
// void showDetails(){
// cout<<"Title: "<<title<<endl<<"Author: "<<author<<endl;
// }
//
// void showCategory();
//};
//
//class Fiction : public Book{
// public:
// void showCategory(){
// cout<<"Category: Fiction"<<endl;
// }
//};
//
//class NonFiction : public Book{
// public:
// void showCategory(){
// cout<<"Category: NonFiction"<<endl;

// }
//};
//
//int main(){
// Fiction f;
// f.setDetails("The power of your subconcious mind","Raymond Murphy");
// f.showDetails();
// f.showCategory();
// cout<<"------------------------------------------"<<endl;
// NonFiction nf;
// nf.setDetails("Deep work","unknown");
// nf.showDetails();
// nf.showCategory();
// return 0;
//}
//
//EXAMPLE02: PAYMENT METHODS
// class Payment{
// public:
// void processPayment(){
// cout<<"Your payment is being processed."<<endl;
// }
// void paymentType();
// };
// class CreditCard : public Payment{
// public:
// void paymentType(){
// cout<<"Payment Type: Credit Card"<<endl;
// }
// };
// class PayPal : public Payment{
// public:
// void paymentType(){
// cout<<"Payment Type: PayPal"<<endl;
// }
// };
// int main(){
// CreditCard cd;
// cd.paymentType();

// cd.processPayment();
// PayPal pp;
// pp.paymentType();
// pp.processPayment();
// return 0;
// }


// #include<iostream>
// using namespace std;
// class Shape{
//     public:
//     void calculateArea();
// };
// class Circle:public Shape{
//     public:
//     double radius;
//     Circle(double r){
//         radius=r;
//     }
//     void calculateArea(){
//         cout<<"Area of a circle "<<2*3.14*radius*radius<<endl;
//     }


// }
// ;
// class Rectangle:public Shape{
//     public:
//     double length;
//     Rectangle(double l){
//         length=l;
//     }
//     void calculateArea(){
//         cout<<"Area of Rectangle "<<length*length*length<<endl;
//     }


// };

// int main(){
// Circle c(5);
// c.calculateArea();
// Rectangle r(5);
// r.calculateArea();

//     return 0;
// }


#include<iostream>
using namespace std;
class Employee{
    protected:
    string name;
    int iD;
    public:
    void CalculateSalary();
    Employee(string n,int i){
        name=n;
        iD=i;
    }
};

class Manager:public Employee{

    public:
    double salary=40000;
    Manager(string n,int i):Employee(n,i){
        name=n;
        iD=i;
    }
        void CalculateSalary(){
            cout<<"Manager Name "<<name<<endl;
            cout<<"Manager ID "<<iD<<endl;
cout<<"Salary Of Manager:"<<salary<<endl;
        }

};
class Devoloper:public Employee{

    public:
    double salary=400000;
    Devoloper(string n,int i):Employee(n,i){
        name=n;
        iD=i;
    }
        void CalculateSalary(){
            cout<<"Devoloper Name "<<name<<endl;
            cout<<"Devoloper ID "<<iD<<endl;
cout<<"Salary Of Devoloper:"<<salary<<endl;
        }

};



int main(){
    Devoloper d("Tauseef Ahmad",786);
    d.CalculateSalary();
    Manager m("Haroon Khan",3776);
    m.CalculateSalary();

    return 0;
}