// #include<iostream>
// using namespace std;
// class Person{
//     public:
//     string name;
//     int age;

//     void displayInfo(){
//         cout<<"Name "<<name<<endl;
//         cout<<"Age "<<age<<endl;
//     }
// };
// class Student:public Person{
//     public:
//     int StudentiD;
//     void DisplayStudentInfo(){
//         displayInfo();
//         cout<<"Student ID:"<<endl;

//     }
// };

// int main(){

// Student s;
// s.name="Tauseef Ahmad Khan";
// s.age=22;
// s.StudentiD=556;
// s.DisplayStudentInfo();
//     return 0;
// }




// #include<iostream>
// using namespace std;
// class Book{
//     public:
//     string title;
//     string author;
//   void  displayBookInfo(){
//     cout<<"Title: "<<title<<endl;
//     cout<<"author: "<<author<<endl;
//   }
// };
// class Ebook:public Book{
//     public:
//     double BookSize;
//     void displayEbookInfo(){
// displayBookInfo();
// cout<<"BookSize:"<<BookSize<<endl;
//     }
// };
// int main(){
// Ebook e;
// e.title="Quran";
// e.author="Allah";
// e.BookSize=1000.0;
// e.displayEbookInfo();

//     return 0;
// }

// Mutlilevel Inhertance

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     string specie;
//     void displaySpecie(){
//         cout<<"Specie "<<specie<<endl;
//     }
// };
// class Mammal:public Animal{
//     public:
//     bool WarmBlood=true;
// };
// class Dog:public Mammal{
//     public:
// string breed;
//     void DisplayDogInfo(){
//     displaySpecie();
//     cout<<"WarmBlood result if there is 1 then its true otherwise its will be false "<<WarmBlood<<endl;
//     cout<<"Breeed:"<<endl;
// }
// };


// #include<iostream>
// using namespace std;
// class Employee{
//     public:
//     string name;
//     double salary;
//     void DisplayEmployeeInfo(){
//         // public:
//         cout<<"Employee Name "<<name<<endl<<"Salary "<<salary<<endl;
//     }
// };
// class Manager:public Employee{
//     public:
//     string department;
//     void DisplayManagerInfo(){
//         cout<<"Department "<<department<<endl;
//     }
// };
// class Devoloper:public Employee{
//     public:
//     string ProgrammingLanguage;
//     void displayDevoloperInfo(){
//         DisplayEmployeeInfo();
//         // displayDevoloperInfo();
//         cout<<"Programming language "<<ProgrammingLanguage<<endl;
//     }
// };

// int main(){
    
// Devoloper d;
// d.name="Tauseef Ahmad";

// d.salary=346346;
// d.displayDevoloperInfo();
// Manager m;
//     m.department="Cs";
//     m.DisplayManagerInfo();
//     return 0;
// }


// // int main(){

// // // d.breed="Milk";
// // // d.specie
// // // Animal a;
// // // a.specie="Milk";
// // Dog d;
// // d.breed="Milk";
// // d.DisplayDogInfo();

// //     return 0;
// // }



// Shape Class Hierarchy with Protected Inheritance

// #include<iostream>
// using namespace std;
// class Shape{
//     // protected:
//     // double Area;

//     public:
//      string name;
//      protected:
//     double Area;
   
     
// };
// class Circle:protected Shape{
//     public:
//     // string n;
//      Circle(string n){
//         name=n;
//     }
//     double area(double r){
//         Area=3*r*r;
//     }
//     void PrintDetails(){
//         cout<<"Name of Area "<<name<<endl;
//         cout<<"Area of "<<Area<<endl;
    
//     }
// };

// int main(){
    
// Circle c("Khan");
// c.area(5);
// // c.name="shpere";
// c.PrintDetails();
//     return 0;
// }


// method 2

// #include <iostream>
// #include <string>
// using namespace std;

// class Shape {
// public:
//     string name;
// protected:
//     double area;
//     public:
//     Shape(string n){
//         name=n;
//         area=0;
//     }
 
// };

// class Circle : protected Shape {
//     public:
//     double radius;
//     const double PI=3.14;

//     Circle(string n):Shape(n){
//         radius=0;
//     }

//     double setRadius(double r){
//     radius=r;
//     }
//     void PrintAndCalculateArea(){
//         area=PI*radius*radius;
//         cout<<"Name "<<name<<endl;
//         cout<<"Area "<<area<<endl;
//     }

// };

// int main() {
   
//     Circle c("Cube");
//     c.setRadius(5);
//     c.PrintAndCalculateArea();
//     return 0;
// }

#include<iostream>
using namespace std;
class Appliance{
    protected:
    int power;
    public:
    string brand;

    Appliance(string b):brand(b),power(0){}
};
class WashingMachine:protected Appliance{
    public:
    WashingMachine(string b):Appliance(b){

    }
    double SetPower(int p){
        power=p;
    }

    void PrintDetails(){
        cout<<"Brand "<<brand<<endl;
        cout<<"Power "<<power<<" watts"<<endl;

    }


};
int main(){
    WashingMachine Wm("Refregirator");
    Wm.SetPower(555);
    Wm.PrintDetails();
    return 0;
}