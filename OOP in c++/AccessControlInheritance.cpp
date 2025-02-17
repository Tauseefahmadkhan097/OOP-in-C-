#include<iostream>
using namespace std;
class Animal{
    public:
    string specie;

    
    void printSpecieDetails(){
        cout<<"Specie "<<specie<<endl;
    }
};
class Mammal:public Animal{
    public:
    bool WarmBLood=true;
};
class Dog:public Mammal{
    public:
    string Breed;
    void Display(){
        Animal::printSpecieDetails();
        cout<<"Warmblood" <<WarmBLood<<endl;
        cout<<"Breed "<<Breed<<endl;

    }
} ;


int main(){
    Dog d;
    d.specie="Group";
    d.Breed="Dog";
    d.printSpecieDetails();


    return 0;
}