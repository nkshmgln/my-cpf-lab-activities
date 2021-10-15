//Name: Nikosh Maglinao
//Activity no.:OE4
//Description:
//Date: October 15, 2021

#include<iostream>
using namespace std;

int main()
{
   int rows, n, m, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(n = 1; n <= rows; m++)
   {
      for (space = n; space < rows; space++)
         cout << " ";

      for(m = 1; m <= (2 * rows - 1); m++)
      {
         if(n == rows || m == 1 || m == 2*n - 1)
            cout << "*";
         else
            cout << " ";
      }
      for (space = n; space < rows; space++)
         cout << " ";

      for(m = n *2; m <= (2 * rows + 1); m++)
      {
         if(n == rows || m == 1 || m == 2*n - 1)
            cout << "*";
         else
            cout << " ";
      }
      for (space = n; space < rows; space++)
         cout << " ";

      for(m = n *2; m <= (2 * rows + 1); m++)
      {
         if(n == rows || m == 1 || m == 2*n - 1)
            cout << "*";
         else
            cout << " ";
      }
      cout<<"\n";
   }
   return 0;
}
    