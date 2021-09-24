//Name: Nikosh Maglinao
//Activity no. OE3
//Description:Calculates gross pay, tax rate, and net pay in a salary program.
//Date:September 24,2021

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string EN;
    int EID, TWH, RpHr;
    double SLR, GRP, TR, NP;

    cout <<"\nEmployee Name         :";
    getline(cin,EN);
    
    cout << "Empoyee ID            :";
    cin >> EID;

    cout << "Total work time hours :";
    cin >> TWH;

    cout << "Rate of pay per hours :";
    cin >> RpHr;

    SLR = TWH * RpHr;

    if (SLR > 40000){
        TR = SLR * 0.12;
    }
    else if (SLR < 20000){
        TR = SLR * 0.05;
    }
    else if (SLR < 40000){
        TR = SLR * 0.10;
    }

    GRP = RpHr * TWH;
    NP = SLR - TR;

    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "\n\nEmployee Name      :"<< EN <<endl;
    cout << "Employee ID        :"<< EID <<endl;
    cout << "Gross Pay          :"<< GRP << endl;
    cout << "\nTax Rate           :" << TR <<endl;
    cout << "Net Pay            :" << NP << endl;
    cout << "\n\n" << endl;


    return 0;
}