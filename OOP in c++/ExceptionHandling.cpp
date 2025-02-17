// Objectives
// 1. Understand the concept of exception handling in C++.
// 2. Learn about try, catch, and throw keywords.
// 3. Explore examples of exception handling for runtime errors.
// 4. Develop a systematic approach to error handling in your programs.
// 1. Introduction to Exception Handling
// In C++, exception handling is a mechanism to handle runtime errors. Instead of letting the
// program crash, exception handling allows you to detect, intercept, and handle errors gracefully.
// Key Concepts
// 1. Exception: An error or unexpected event.
// 2. Handling: Managing the error and allowing the program to continue.
// 2. Keywords in Exception Handling
// 1. try: A block of code where exceptions might occur.
// 2. catch: A block to handle the exception.
// 3. throw: Used to signal an exception.
// Basic Syntax:
// try {
// // Code that may throw an exceptio

// #include<iostream>
// #include<stdexcept>
// using namespace std;
// int squareRoot(int x){
//     if(x<0){
//         throw "Cannot find square root of -ve Numberss ";
//     }
//     return x*x;
// }

// int main(){
    // int num,den;
    // cout<<"Enter Numerator ";
    // cin>>num;
    // cout<<"Enter DeNumerator ";
    // cin>>den;

    // try
    // {
    //  if(den==0){
    //     throw "Divison by zero";
    //  }
    //  cout<<"REsult:"<<num/den<<endl;
    // }
    // catch(const char* e)
    // {
    //     cout<<"Exception "<< e <<endl;
    // }

    // 3.2 Multiple Catch Blocks
// C++ allows multiple catch blocks to handle different exception types.
    // try
    // {
    //  int x;
    //  cout<<"Enter value:";
    //  cin>>x;

    //  if(x<0) throw "Negative numbers are not allowed";
    //  if(x==0) throw 0;
    //  if(x==100) throw 100.0;


    // }
    // catch(const char* e)
    // {
    //     cout<<"Exception :"<<e<<endl;
    // }
    // catch(const int  e)
    // {
    //     cout<<"Exception :"<<e<<endl;
    // }
    // catch(const double e)
    // {
    //     cout<<"Exception :"<<e<<endl;
    // }
    // Interactive Example: Exception in a Function
// int num;
// cout<<"Enter number For sqrt NOte( num cannot be negative )";
// cin>>num;

// try
// {
//  cout<<"SquareRoot:"<<squareRoot(num)<<endl;
// }
// catch(const char* e)
// {
//     cout << e << '\n';
// }

// cout<<"My name is khan"<<endl;
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++=

// in Constructor
// #include<iostream>
// #include<stdexcept>
// using namespace std;

// class Myclass{
//     public:
//     string n;
//     Myclass(string name){
//         if(name.empty()){
//             throw "Error Give the name";
//         }
//         n=name;
//     }
// };

// int main(){
//     try
//     {
//         Myclass m("Khan");
        
//     }
//     catch(const char* e)
//     {
//         cout<< e <<" is your name";
//     }
    
// }





// #include<iostream>
// #include<stdexcept>
// #include<string>
// using namespace std;

// class BankAccount{
//     public:
//     int AccountNumber;
//     string AccountHolder;
//     double balance;
//     // int amo/unt=1000;

//     BankAccount(int A,string a,double b){
//         AccountNumber=A;
//         AccountHolder=a;
//         balance=b;
//     }
//     int withdraw(double amount){
//         if(amount>balance){
//             throw "InsufficientFundsException";
//         }
//         else{
//             balance-=amount;
//         }
//     }
//     void Display(){
//         cout<<"Your New Balance is "<<balance<<endl;
//     }

//     };


// int main(){
// try
// {
//     BankAccount b(3442,"Heyy",22.0);
//     b.withdraw(11);
//     b.Display();
// }
// catch(const char* e)
// {
//     cout<< e<<endl;;
// }



//     return 0;
// }

// #include<iostream>
// #include<stdexcept>
// #include<string>
// using namespace std;

// class CustomException{
//     public:

//         void CheckNumber(int num){
//         if(num<0){
//             throw customException(" -Ve numbers Are not allowed");
//         }
//         else if(num==0){
//             throw customException(" Number is invalid");
//         }
//        else{
//         cout<<"Valid Number "<<num<<endl;
//        }
//     }

//     // string message;
//    string customException(string m){
//         cout<<m<<endl;
//     }

//     // string Message(){
//     //     return message;
//     // }
// };

// int main(){

// try
// {
//     CustomException c;
//     c.CheckNumber(7);
//     c.customException("");
// }
// catch(const char* e)
// {
//     cout<< e;
// }



//     return 0;
// }

// #include<iostream>
// #include<stdexcept>
// #include<string>
// using namespace std;


// int main(){

// try
// {
// int arr[5]={1,24,5,6,6};
// for(int i=0;i<=5;i++){
//     if(i==5){
//         throw "Error Its an oVerflow of an array";
//     }
//     cout<<arr[i]<<endl;

// }

// }
// catch(const char* e)
// {
//     cout<<"Exception:"<<e;
// }


//     return 0;
// }


// Program Questions on Multiple Catch Clauses in C++:

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int main() {
//    try
//    {
//     int x;
//     cout<<"Enter any number:";
//     cin>>x;
//     if(x<10){
//         throw int(x);
//     }
//     else if(x>10 && x<20){
//         throw float(x);
//     }
//     else if(x>20){
//         throw "VARIABLE IS GREATER THAN 20";
//     }
//    }
//    catch(const int e)
//    {
//     cout<<"Int:"<<e;
//    }
//    catch(const float e)
//    {
//     cout<<"float:"<<e;
//    }
//    catch(const char* e)
//    {
//     cout<<"String:"<<e;
//    }
   
// }
// 4. Standard Exceptions in C++
// C++ provides a standard set of exceptions in the <stdexcept> library:
// 1. std::runtime_error
// 2. std::logic_error
// 3. std::overflow_error
// 4. std::underflow_error

// #include<iostream>
// #include<stdexcept>
// using namespace std;

// int main(){
// try
// {
//     throw runtime_error("Standard Runtime error!");
// }

// catch(const runtime_error& e)
// {
//     cout<< e.what() << '\n';
// }

//     return 0;
// }


//  Write a program to:
// ○ Prompt the user to enter two integers.
// ○ Handle division by zero using exception handling.
// Create a function to calculate the factorial of a number. Throw an exception if the input is;
// negative or larger than 30.

#include<iostream>
#include<stdexcept>
using namespace std;

int calculateFactorial(int num){
    int fact=1;
    if(num<0 || num>30){
  throw "Error Exception";
    }
    else{
for(int i=1;i<=num;i++){
fact*=i;
}
// cout<<"Factorial "<<fact<<endl;
    return fact;

    }
    // return fact;
}

int main(){
int num;
        cout<<"Enter number For Factorial ";
        cin>>num;
    try
    {
        
       cout<<"Factorial of "<<num<<" is "<<calculateFactorial(num);
    }
    catch(const char* e)
    {
        cout<< e<< '\n';
    }
    

    return 0;
}