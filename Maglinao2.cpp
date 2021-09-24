//Name: Nikosh Maglinao
//Activity Number: OE2
//Description: POS Computer System that computes at least 3 kinds of product input, plus TAX
//Date: September 15, 2021

#include <iostream>
#include <string>

const double TAX = 0.12;

using namespace std;

int main(){
    string cname,pn1,pn2,pn3;
    int pq1,pq2,pq3;
    long int prc1,prc2,prc3,t_price;
    double TA,t_price1,t_price2,t_price3,VAT,PT;
    
    cout<< " ------------------------------------------------------" << endl;
    cout<< "|            S A M P L E  R E C E I P T                |" << endl;
    cout<< " ------------------------------------------------------" << endl;
    
    cout<< "\nEnter Customer Name                 :";
    getline(cin,cname);

    cout<< "\nEnter Product Purchase no.1 Name    :";
    cin >>pn1;
    cout<< "Enter Product Purchase no.2 Name    :";
    cin >>pn2;
    cout<< "Enter Product Purchase no.3 Name    :";
    cin >>pn3;

    cout<< "\nEnter Quantity of Product no.1      :";
    cin >>pq1;
    cout<< "Enter Quantity of Product no.2      :";
    cin >>pq2;
    cout<< "Enter Quantity of Product no.3      :";
    cin >>pq3;

    cout<< "\nEnter Product no.1 Price            :";
    cin >>prc1;
    cout<< "Enter Product no.2 Price            :";
    cin >>prc2;
    cout<< "Enter Product no.3 Price            :";
    cin >>prc3;
    
    prc1 = pq1 * prc1;
    prc2 = pq2 * prc2;
    prc3 = pq3 * prc3;
    TA = prc1+ prc2+ prc3;

    t_price1= prc1 * TAX;
    t_price2= prc2 * TAX;
    t_price3= prc3 * TAX;
    VAT= t_price1+ t_price2+ t_price3;
    
    PT = TA+ VAT;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<< "\n ------------------------------------------------------" << endl;
    cout<< "|                   P R I N T O U T                    |" << endl;
    cout<< " ------------------------------------------------------" << endl;

    cout<< "Customer Name                    :" << cname <<endl;
    cout<< "\nProduct no.1                     :" << pn1 <<endl;
    cout<< "Product no.2                     :" << pn2 <<endl;
    cout<< "Product no.3                     :" << pn3 <<endl;
    cout<< "\nQuantity no.1                    :" << pq1 <<endl;
    cout<< "Quantity no.2                    :" << pq2 <<endl;
    cout<< "Quantity no.3                    :" << pq3 <<endl;
    cout<< "\nPrice no.1                       :" << "P" <<prc1 <<endl;
    cout<< "Price no.2                       :" << "P" <<prc2 <<endl;
    cout<< "Price no.3                       :" << "P" <<prc3 <<endl;

    cout<< "========================================================" << endl;
    cout<< "\nTotal Price of the Product       :" << "Php. " << TA <<endl;
    
    cout<< "\nTotal Tax                        :" << "Php. " << VAT << endl;
    
    cout<< "\nTotal Amount                     :" << "Php. " << PT << endl;
    


    return 0;
}
