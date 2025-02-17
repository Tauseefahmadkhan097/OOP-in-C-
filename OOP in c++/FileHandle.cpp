// // File Handling in C++
// File handling enables a program to interact with files on a storage device. Common operations
// include:
// ● Creating a file
// ● Writing data to a file
// ● Reading data from a file
// ● Appending data to an existing file

// The fstream library allows us to work with files.

// To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

// Class	Description
// ofstream	Creates and writes to files
// ifstream	Reads from files
// fstream	A combination of ofstream and ifstream: creates, reads, and writes to files
// To create File
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
// ofstream File_01("MyFile.txt");
// if(File_01.is_open()){
// File_01<< "My name is khan";
// File_01<< "\nI am from mardan";
// cout<<"File Has been created"<<endl;
// }
// else{
//     cout<<"Some issue file has not been created"<<endl;
// }
//     return 0;
// }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// To read File
// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){
// ifstream File_01("MyFile.txt");
// string line;
// if(File_01.is_open()){
// while (getline(File_01,line))
// {
//     cout<<line<<endl;
// }

// }
// else{
//     cout<<"Error While Reading file "<<endl;
// }
//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++++
// to append file 
// #include<iostream>
// #include<fstream>
// // #include<string>
// using namespace std;

// int main(){
// ofstream File_01("MyFile.txt",ios::app);
// // string line;
// if(File_01.is_open()){
//    File_01<<"\nI am student of Cyber Security"<<endl;
//  cout<<"File append successfull"<<endl;
// }
// else{
//     cout<<"Error While Reading file "<<endl;
// }
//     return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 3.4 Error Handling
// Check if the file opened successfully:
// #include <fstream>
// #include <iostream>
// using namespace std;
// int main() {
// ifstream File_01("nonexistent.txt");
// if (!File_01) {
// cout << "File not found or unable to open." << endl;
// }
// File_01.close();
// return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// A program to create, write, read, and append data:

// #include<iostream>
// #include<fstream>
// #include<string>
// using namespace std;

// int main(){
//     // For creation of file
// ofstream FileIn("OthersFile.txt");

// if(FileIn.is_open()){
//     FileIn<<"Hello World!\n";
//     FileIn<<"I am a programmer!\n";
//     cout<<"File Created Successful"<<endl;
//     FileIn.close();
// }
// else{
//     cout<<"Error File Not created"<<endl;
// }
// // Read File
// ifstream FileOut("OthersFile.txt");
// string line;

// if(FileOut.is_open()){
// while(getline(FileOut,line)){
//         cout<<line<<endl;
//     }
//     FileOut.close();

// }
// // File_2.close();

// else{
//     cout<<"Error Opening File For reading"<<endl;
// }
// // to append
//   ofstream FileAppend("OthersFile.txt",ios::app);
// // string line;

// if(FileAppend.is_open()){
// FileAppend<<"\nI am King of programming";
// FileAppend.close();

// }

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++

// practice questions
// 1. Implement a mini-student record system:
// ○ Save student names and grades to a file.
// ○ Display all records by reading the file.
// ○ Allow adding more student records

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ofstream File("Student_Record");

//     if(File.is_open()){
//         File<<"Tauseef Ahmad \n Grade:A1";
//         File<<"Gandu Bhai \n Grade:A+";
//         File<<"Izaz Ahmad \n Grade:A";
//         cout<<"Saved Record successfully"<<endl;
//     }

//     else{
//         cout<<"Record not saved"<<endl;

//     }


//     ifstream File1("Student_Record");
// string line;
//     if(File1.is_open()){
//         while(getline(File1,line)){
// cout<<line<<endl;
//         }
//     }

//     else{
//         cout<<"File Not readed and print"<<endl;

//     }

//         ofstream File2("Student_Record",ios::app);
// // string line;
//     if(File2.is_open()){
//        File2<<"\nMuhammd Yaseen Grade:B";
        
//         cout<<"New Record Saved Successfully";
//     }

//     else{
//         cout<<"New Record not saved"<<endl;

//     }

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//     string filename = "StudentRecords.txt";
//     int choice;

//     do {
//         cout << "\nMini-Student Record System\n";
//         cout << "1. Add Student Record\n";
//         cout << "2. Display All Records\n";
//         cout << "3. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             ofstream fileOut(filename, ios::app); // Open file in append mode
//             if (fileOut.is_open()) {
//                 string name;
//                 int grade;

//                 cout << "Enter student name: ";
//                 cin.ignore(); // Clear input buffer
//                 getline(cin, name);

//                 cout << "Enter student grade: ";
//                 cin >> grade;

//                 fileOut << name << "," << grade << endl;
//                 fileOut.close();

//                 cout << "Record added successfully.\n";
//             } else {
//                 cout << "Error: Unable to open file for writing.\n";
//             }
//         } else if (choice == 2) {
//             ifstream fileIn(filename);
//             if (fileIn.is_open()) {
//                 string line;
//                 cout << "\nStudent Records:\n";
//                 cout << "----------------\n";

//                 while (getline(fileIn, line)) {
//                     cout << line << endl;
//                 }

//                 fileIn.close();
//             } else {
//                 cout << "Error: Unable to open file for reading.\n";
//             }
//         } else if (choice == 3) {
//             cout << "Exiting program.\n";
//         } else {
//             cout << "Invalid choice. Please try again.\n";
//         }

//     } while (choice != 3);

//     return 0;
// }
// Programm including create read and appent of programm
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