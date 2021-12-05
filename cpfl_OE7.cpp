//Name:Nikosh O. Maglinao
//Date:December 5,2021
//Activity no.7
//Description:Implement login Credentials using c-string.

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char username[10]; 
    char password[10]; 
    string name, gender, address, yearandsection, course;
    int age;
    long long int cnumber;
 
    cout << "\n Enter your Login Credentials " <<endl;
    cout << "Enter your Username: "; 
    cin >> username;
 
    cout << "Enter your Password: "; 
    cin >> password;
 
    if(strcmp(username,"Brixxton007")==0)
    { 
        if(strcmp(password,"aintcool")==0)
    {
    cout << ("\nLogin is a Success, Welcome!") <<endl;
    cout<<"Hello CS and IT" <<endl;
    cout<<"Welcome to Computer Programming Fundamentals"<< endl;

    cout<<"Enter your Name                  :";
    cin >> name;
    cout<<"Enter your Gender                :";
    cin >> gender;
    cout<<"Enter your Age                   :";
    cin >>age;
    cout<<"Enter your Address               :";
    cin >> address;
    cout<<"Enter your Year and Section      :";
    cin >> yearandsection;
    cout<<"Enter your Course                :";
    cin >> course;
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
    }
    else
    { 
    cout << ("\nThe password you've inputted is wrong!") <<endl;
    } 
    }
    else
    { 
    cout << ("\nThe user you've inputted does not exist!") <<endl;
    } 
  
    return 0; 
}