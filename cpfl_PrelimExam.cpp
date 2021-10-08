//Nikosh Maglinao
//Prelim hands-on exam
//Description: Payroll program including the calculation of tax
//Date: October 8,2021

#include<iostream>
#include<string>

using namespace std;

int main(){

    string EN, Eno, DPD;
    int Hpr, Hw, Philhealth = 150, SSS = 250, Pagibig = 200;
    double GrP, WHT, NP;

    cout <<"\nEnter Employee Name    :";
    getline(cin,EN);
    cout <<"Enter Employee Number  :";
    cin >> Eno;
    cout <<"Enter Date of Payday   :";
    cin >> DPD;
    cout <<"Enter Hourly pay rate :";
    cin >> Hpr;
    cout <<"Enter Hours Worked    :";
    cin >> Hw;
    
    GrP = Hpr * Hw;
    WHT = GrP * 0.12;
    NP = GrP - (Philhealth + SSS + Pagibig);

    if ( NP <= 5000){
        cout <<"Contractual";
    }else if ( NP > 5000-10000){
        cout <<"Probationary";
    }else if ( NP > 10000){
        cout <<"Regular";
    }
    cout <<"================================================="<< endl;
    cout <<"\nPayroll Summary for  :"<< EN << endl;
    cout <<"Employee no.         :"<< Eno << endl;
    cout <<"Payroll Date         :"<< DPD << endl;
    cout <<"\nYou earned "<< GrP <<" at "<< Hw <<" per hour"<< endl;
    cout <<"Gross pay            :Php "<< GrP <<endl;
    cout <<"Withholding tax      :"<< WHT << endl;
    cout <<"Philhealth           :"<< Philhealth << endl;
    cout <<"SSS                  :"<< SSS << endl;
    cout <<"Pagibig              :"<< Pagibig << endl;
    cout <<"--------------------------------------------------"<< endl;
    cout <<"\n\nNet pay               Php "<< NP <<endl;
    cout <<"Employee Status:"<< NP <<endl;
    cout <<"\n\n"<<endl;
   
    return 0;
}