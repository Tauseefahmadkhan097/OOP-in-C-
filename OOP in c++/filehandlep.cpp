#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
ofstream file("myfile.txt");

if(file.is_open()){
    cout<<"File created Successful "<<endl;
    file<<"This is the creation of the file ";
    file<<"cyber security";
}
else{
    cout<<"File cann,t created"<<endl;
}
file.close();

ifstream File1("myfile.txt");

if(File1.is_open()){
    string line;
    while (getline(File1,line))
    {
        cout<<"Here Reads the lines "<<endl;
    cout<<line<<endl;
    }
    
}
else {
    cout<<"You can`t read files "<<endl;
}

ofstream File2("myfile.txt",ios::app);

if(File2.is_open()){
    cout<<"Here appened this lines"<<endl;
    File2<<"I am tauseef Ahmad "<<endl;
}
else{
    cout<<"You Cant append "<<endl;
}
return 0;
}