// Лекция 2

#include <iostream>
using namespace std;

int main () 
{
     // logical OR ||
     int number;

     cout << "enter number" << endl;
     cin >> number;

     if (number > 0) 
     {
          // сменя на приоритета се прави със скоби
          //  if (number > 0 && (number % 5 == 0 && number % 7 == 0)) 

          if (number % 5 == 0 && number % 7 == 0) 
          {
               cout << "number is:" << number << "devisible" << endl;
          } 
          else 
          {
               cout << "not devisible"<< endl;
          }
     }
     else  
     {
          cout << "it' negative number"<< endl;
     }

     // обхожда 
     // разпечатай всички числа до 100 включително;
     for (int i = 1; i <= 100; i++) 
     {
          cout << i << " " ;
     }

     int g = 0;
     for (int k = 0; g < 100; k = k + 5)
     {
          cout << k << " " ;
          g++;
     }

     // от 1 до 1000, кои се делят на 5 и 7

     int sum = 0;
     long prod = 1;
     for (int i = 1; i <= 1000; i++) 
     {
          if (i % 5 == 0 && i % 7 == 0) 
          {
               cout << i << endl;
               // if (i == 280) {
               // cout << "прескочи" <<
               // continue;

               sum = sum + i;
               prod = prod * i;
               cout << sum << endl;
          }
     }
     
    return 0;
}



// Домашно
// намерете сумата на нечетните числа в интервал от 1 до 100, които не се делят на 7;

// намерете сумата от цифрите за всяко число от 100 до 999 (за трицифрените числа) ; резултатите не трябва да се събират, а да се дисплейват като отделен резултат;