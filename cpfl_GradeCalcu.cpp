//Name: Nikosh Malinao
//Activity

#include<iostream>

using namespace std;

int main()
{
   int eng, mth, scs, prgm, pe;
   float total, average, percentage;
   cout<<" Please Enter the marks of Five subjects :  \n";
   cin >> eng >> mth >> scs >> prgm >> pe;
   total = eng + mth + scs + prgm >> pe;
   average = total/ 5;
   percentage = ( total / 500) * 100;
   cout <<"\nTotal Marks         = "<< total;
   cout <<"\nAverage Marks       = "<< average;
   cout <<"\nMarks Percentage    = "<< percentage;

   if (percentage >= 95 && percentage <=100)
   {
       cout <<"\nGrade is Excellent";
   }
   if (percentage >= 90 && percentage <=94)
   {
       cout <<"\nGrade is Very Satifactory ";
   }
   if (percentage >= 85 && percentage <=89)
   {
       cout <<"\nGrade is Satifactory";
   }
   if (percentage >= 80 && percentage <=84)
   {
       cout <<"\nGrade is Very Good";
   }
   if (percentage >= 75 && percentage <=79)
   {
       cout <<"\nGrade is Good";
   }
   else
    {
        cout<<" You are Poor "<<endl;
    }
   return 0;
}