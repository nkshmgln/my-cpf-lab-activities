//Performance Task 2:
//Description: Conversation COnsole App using functions {Dollar to Peso & Peso to Dollar}
//             This is also a debugging activity
//Name: Maglinao, Nikosh O.

#include <iostream>

using namespace std;

struct group_facet: public numpunct<char> {
    protected:
        string do_grouping() const {return "\003"; }
};

  void promptAndWait();

void dollarsToPeso(float rate, unsigned dollars );

void PesoTodollar(float rate, unsigned peso );

int main () {
    float conversionRate = 50.73; // $1 = 50.73 Pesos
    float conversionRatee = 0.02;
    unsigned dollarsIN, Peso;
    int ch, ans=0;

    do{
       system("cls");
       cout << endl;
       cout << "Dollar to Peso Conversion App" << endl << endl;
       cout << "[1] Dollar to Peso" << endl;
       cout << "[2] Peso to Dollar" << endl;
       cout << "[0] Exit the Conversion App" << endl;
       cout << "Select Comversion :  ";
       cin >> ch;

       switch (ch){
            case 1:{
               cout <<"\n<< Convert Dollar to Peso >>" << endl;
               //Promt the user and take US dollars input.
               cout << "Enter a US dollar amount (without the dollar sign, commas or decimals) : [####] ";
               cin >> dollarsIN;
               dollarsToPeso(conversionRate, dollarsIN); 
               promptAndWait(); 
               break; 
            }
            case 2:{
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "Enter a Peso amount(without the Peso sign, commas or decimals) : [####] ";
                cin >> Peso;
                PesoTodollar(conversionRatee, Peso);
                promptAndWait();
                break;
            }
            case 0:{
                promptAndWait();
                cout << "Conversion App Terminated \nThank you for using the app!";
            }
            option:{
                cout << "Invalid Input";
                promptAndWait();
            }

       }

    }while(ans == 0);     

return 0;
} 

void promptAndWait(){
    cin.ignore(100, '\n');
    cout << "\nPress Endter or Return to continue...";
    cin.get();
}
void dollarsToPeso(float rate, unsigned dollar) {
 
    cout.setf(ios::fixed);
    cout.precision(2);

    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$ " << dollar << "US = " << (rate * dollar) <<"Peso.\n";
}
void PesoTodollar(float rate, unsigned peso ) {
    cout.setf(ios::fixed);
    cout.precision(2);

    cout.imbue(locale(cout.getloc(), new group_facet));
    cout <<"\nP " << peso << "Peso = " << (rate * peso) << "Dollar.\n";

}