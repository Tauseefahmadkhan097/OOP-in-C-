// #include<iostream>
// using namespace std;
// class Book{
//     string title;
//     string author;
//     string ISBN;
//     int publishYear;
//     public:
//     void SetDetails(string t,string a,string I,int P){
//         title=t;
//         author=a;
//         ISBN=I;
//         publishYear=P;

//     }
//     void PrintDetails(){
//         cout<<title<<endl;
//         cout<<author<<endl;
//         cout<<ISBN<<endl;
//         cout<<publishYear<<"AD"<<endl;

//     }
// };

// int main(){
//     Book b;
//     b.SetDetails("Quran","Allah","Muhammad",5000);
//     b.PrintDetails();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class CourseClass{
//     public:
//     string CourseName;
//     string CourseCode;
//     int Credits;

//     CourseClass(string c,string C,int Ch){
//         CourseName=c;
//         CourseCode=C;
//         Credits=Ch;
//     }
//     ~CourseClass(){
//         cout<<"Course Object Desstroyed"<<endl;
//     }

//     void DisplayCourseDEtails(){
//         cout<<"CourseName "<<CourseName<<endl;
//         cout<<"CourseCode "<<CourseCode<<endl;
//         cout<<"Credits "<<Credits<<" hrs"<<endl;
//     }


// };

// int main(){
//    CourseClass c("C++","2332#",3);
//    c.DisplayCourseDEtails();

//     return 0;
// }

// #include<iostream>
// using namespace std;


// class Complex
// {
// private:
//     float real;
//     float img;

// public:
//     Complex(float r = 0.0, float i = 0.0)
//     {
//         this->real = r;
//         this->img = i;
//     }

//     Complex operator+(Complex C)
//     {
//         return Complex(real + C.real, img + C.img);
//     }

//     bool operator==(Complex C)
//     {
//         return real == C.real, img == C.img;
//     }

//     void display()
//     {
//         cout << real << " + " << img << "i\n";
//     }
// };

// int main()
// {
//     Complex num1(3.5, 2.0);
//     Complex num2(2.5, 1.5);

//     Complex sum = num1 + num2;
//     // Complex sum2 = num1 = num2;

//     cout << "Sum: ";
//     sum.display();
//         // cout << "Sum2: ";

//     // sum2.display();

//     if(num1==num2){
//         cout<<"c1 & c2 are equal "<<endl;

//     }
//     else{
//         cout<<"Numbers are not equal";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Printer{
//     public:
//     int Printspeed;
//     Printer(int p){Printspeed=p;}
//     void DisplayprintSpeed(){
//         cout<<"Speed "<<Printspeed<<" Km/hr"<<endl;
//     }
// };
// class Scanner{
//     public:
//     int ScanResolution;
//     Scanner(int s){ScanResolution=s;}
//     void  displayScanResolution() {
//         cout<<"ScanResoltion "<<ScanResolution<<endl;
//     }



// };
// class AllinOne:public Printer,public Scanner{
//     public:
//     AllinOne(int p,int s):Printer(p),Scanner(s){};
//     void AllInOne(){
//         DisplayprintSpeed();
//         displayScanResolution();
//     }
// };

// int main(){
//     // Printer p(157);
//     // Scanner s(3);
//     AllinOne a(157,3);
//     a.AllInOne();



//     return 0;
// }

// Shape Class Hierarchy with Protected Inheritance


#include<iostream>
using namespace std;
class Shape{
    protected:
    double area;
    public:
    string name;
    Shape(string n):name(n){};
};
class Circle :protected Shape{
    public:
    int radius;
    Circle(string n):Shape(n){};
    void SetRadius(int r){
radius=r;
area=3.14*radius*radius;
    }

    void GetDetails(){
        cout<<"Name "<<name<<endl;
        cout<<"Area "<<area<<endl;
    }

};
int main(){
Circle c("Radius");
c.SetRadius(5);
c.GetDetails();
    return 0;
}

