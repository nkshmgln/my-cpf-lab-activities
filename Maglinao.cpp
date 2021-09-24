//Name: Nikosh O. Maglinao
//Activity Name: OE1
//Description: Input and Output
//Date: September 9, 2021

#include <iostream>
#include <string>

using namespace std;
int main() 
{
 string name, gender, address, yearandsection, course;
 int age;
 long int cnumber;

 cout<<"Hello CS and IT" <<endl;
 cout<<"Welcome to Computer Programming Fundamentals"<< endl;

 cout<<"Enter your Name                  :";
 getline(cin,name);
 cout<<"Enter your Gender                :";
 getline(cin,gender);
 cout<<"Enter your Age                   :";
 cin>>age;
 cin.ignore();
 cout<<"Enter your Address               :";
 getline(cin,address);
 cout<<"Enter your Year and Section      :";
 getline(cin,yearandsection);
 cout<<"Enter your Course                :";
 getline(cin,course);
 cout<<"Enter your Contact Number (+63)  :";
 cin>>cnumber;
 cin.ignore();


 cout<<"\n---------------------------------------------------------" <<endl;
 cout<<"\nYour Name is "<<name <<endl;

 cout<<"\nYour Gender is "<<gender <<endl;

 cout<<"\nYou are "<<age<<" years old"<<endl;

 cout<<"\nYour Address is "<<address <<endl;

 cout<<"\nYour Year and Section is "<<yearandsection <<endl;

 cout<<"\nYour Course is "<<course <<endl;

 cout<<"\nYour Contact Number is (+63)"<<cnumber <<endl;

 return 0;
}