#include<iostream>
#include<string>

using namespace std;

int main(){

    string EN, Eno, DPD;
    double Hpr, Hw, GrP, WHT, NP;

    const double philhealth = 150, sss = 250, pagibig = 200;

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
    NP = GrP - (philhealth + sss + pagibig);

    
    cout <<"================================================="<< endl;
    cout <<"\nPayroll Summary for  :"<< EN << endl;
    cout <<"Employee no.         :"<< Eno << endl;
    cout <<"Payroll Date         :"<< DPD << endl;
    cout <<"\nYou earned "<< GrP <<" at "<< Hw <<" per hour"<< endl;
    cout <<"Gross pay            :Php "<< GrP <<endl;
    cout <<"Withholding tax      :"<< WHT << endl;
    cout <<"Philhealth           :"<< philhealth << endl;
    cout <<"SSS                  :"<< sss << endl;
    cout <<"Pagibig              :"<< pagibig << endl;
    cout <<"\n--------------------------------------------------"<< endl;
    cout <<"\nNet pay               Php "<< NP <<endl;
    cout <<"Employee Status:";
    if ( NP <= 5000){
        cout << "Contractual";
    }
    else if ( NP > 5000-10000){
        cout << "Probationary";
    }
    else if ( NP > 10000){
    cout << "Regular";
    }
    cout <<"\n"<<endl;
   
    return 0;
}