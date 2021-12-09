//Name:Nikosh O. Maglinao
//Activity: Performance Task 4
//Date: December 8, 2021
//Description: Program of Grading System.

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<string>
#include<cstdlib>

using namespace std;

int main(){

    ifstream in_stream;
    ofstream ou_stream;

    char username[10];
    char password[10];
    string name;
    int eng, mth, scs, prgm, pe; 
    int sum;
    long long int average;

    in_stream.open("in_file.txt");
    ou_stream.open("ou_file.txt", ios::app);

    cout << "\n Enter your Login Credentials " <<endl;
    cout << "Enter your Username: "; 
    cin >> username;
 
    cout << "Enter your Password: "; 
    cin >> password;
 
    if(strcmp(username,"Nikosh08")==0)
    { 
        if(strcmp(password,"nksh68")==0)
    {
    cout <<"\nYou have logged in successfully" <<endl;
    cout<<"Welcome to Grading System"<< endl;
    cout<<"Enter your name : ";
    cin >>name;

    cout<<"Enter Grade in English            : ";
    cin >>eng;
    cout<<"Enter Grade in Mathematics        : ";
    cin >>mth;
    cout<<"Enter Grade in Science            : ";
    cin >>scs;
    cout<<"Enter Grade in C++ Programming    : ";
    cin >>prgm;
    cout<<"Enter Grade in Physical Education : ";
    cin >>pe;

    sum = eng +mth +scs +prgm +pe;
    average = sum / 5;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    ou_stream <<"Enter your Name : "<<endl;
    ou_stream <<"\nGrade in English       : "<< eng <<endl;
    ou_stream <<"Grade in Mathematics     : "<< mth <<endl;
    ou_stream <<"Grade in Science         : "<< scs <<endl;
    ou_stream <<"Grade in C++ Programming : "<< prgm <<endl;
    ou_stream <<"Grade in Phys. Education : "<< pe << endl;
    ou_stream <<"\nYour Average is : "<< average <<endl;
    ou_stream <<endl;
    cout<<"\nYour Average is : "<<average <<endl;

    if (average >= 95 && average <=100)
    {
        cout <<" You are Excellent "<<endl;
    }
    else if (average >= 90 && average <=94)
    {
        cout<<" You are Very Satifactory "<<endl;
    }
    else if (average >= 85 && average <=89)
    {
        cout<<" You are Satifactory "<<endl;
    }
    else if (average >= 80 && average <=84)
    {
        cout<<" You are Very Good "<<endl;
    }
    else if (average >= 75  && average <=79)
    {
        cout<<" You are Good "<<endl;
    }
    else
    {
        cout<<" You are Poor "<<endl;
    }
    }
    else
    { 
       cout << ("\nThe password you've input is wrong!") <<endl;
    }
    } 
    else
    { 
         cout << ("\nThe user you've input does not exist!") <<endl;
    } 
    
    in_stream.close();
    ou_stream.close();
    return 0; 
}