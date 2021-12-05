//Name:Nikosh O. Maglinao
//Date:December 5,2021
//Activity no.:7
//Description:Create a Program that show the correct and incorrect password

#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int sub(void){
 int i,j,k;

 for(i=1;i<=10;i++){
   for(j=1;j<=10-i;j++){
     printf(" ");
   }
   for(k=1;k<=i*2-1;k++){
     printf("*");
 }
 printf("\n");
}

return 0;
}

int main(){
    char my_password[10] = "Test1";
    char password[10];

    cout << "Enter password : ";
    cin >> password;

    if(!(strcmp(my_password,password))){
        cout << "\nCorrect password..." << endl;
        cout << "Welcome to My Outcomes Evaluation 7!" << endl;
    }else{
        cout << "\nIncorrect password..." << endl;
    }

    return 0;
}