#include <iostrem>

using namespace std;

int main()
{

   // variables
   float homework = 0.0f;
   float h_score = 0.0f;
   float exam = 0.0f;
   float e_score = 0.0f;
   float final_exam = 0.0f;
   float project = 0.0f;

   float final_grade = 0.0f;
   //User to define each scores on each section
   for(int i=0; i <5; i++){
       cout<<"Grade for homework"<<i + 1<<": ";
       cin >>homework;

       h_score += homework;
   }
   h_score /= 5.0f;

   for(int i=0; i <2; i++){
       cout<<"Grade for Exam"<<i + 1<<": ";
       cin >>e_score;

       e_score += exam;
   }
   e_score /= 2.0f;

   cout <<"Homework Score: "<< h_score;
   cout <<"Exam Score    : "<< e_score;
   //Calculate final Grade 

   //Display Final Letter Grade  
   return0;
}