// Упражнение
#include <iostream>
using namespace std;

int main () {
     // намиране на периметър на квадрат
     int starna;
     cin >> strana;
     
     cout << 4* strana << endl;

     int a;
     cin >> a;
     cout << a%10<< endl;
     cout << (a/10) % 10<< endl;
     cout << (a/100) % 10<< endl;

   while (a > 0)
   {
     cout << a%10 << endl;
     a = a/10;
   }

     for (;a > 0;)
     {
           cout << a % 10 << endl;
          a = a / 10;
     }



     int a;
     cin >> a;
     int temp = a;
     int i = 0;
     while(temp>0) {
          temp/=10;
          ++i
     }
     temp = a;
     for (int k = i, k > 0; k -=1) {
     cout << temp/10 << endl;

     }
     cout << i << endl;



  // четно нечетно 

     int a, b, c;
     cin >> a;
     cout << "a:" << endl;
     cin >> b;
     cout << "b:" << endl;
     cin >> c;
     cout << "c:" << endl;

     if (a%2 == 0 || b%2 == 0 || c%2 == 0) {
          cout << "има поне 1 четно число" << endl;
     }

     else {
          cout << "има поне 1 нечетно число" << endl;
     }


     // Колко секунди са изминали от наччалото на последния час;
     // N броя секунди от началото на деня
     int N;
     cin >> N;

     int secondsinMinutes = 60;
     int MinutesinHours = 60;
     int secondsinHours = secondsinMinutes * MinutesinHours;
     // секунди делено на секунди в часовете
     cout << N / secondsinHours << endl;
     // секунди остатък
     cout << N % secondsinHours << endl;




     // разпечатва дни от седмицата:
     switch (a) {
          case 1: cout << "понеделник";
               break;
          case 2: cout << "вторник";
               break;
          case 3: cout << "сряда";
               break;
          case 4: cout << "четвъртък";
               break;
          case 5: cout << "петък";
               break;
          case 6: cout << "събота";
               break;
          case 7: cout << "неделя";
               break;
          default:  cout << "не е ден от седмицата";

     }          


     char a[15] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o'};

     int b;

     cin >> b;

     cout << a[b-1] << endl;


// фаренхаит в целзий;
     double f;
     cin >> f;
     // T (° C) = (68 ° F - 32) × 5/9 = 20 ° C

     double c = (f-32) * (5.0/9);

     cout << c << endl;


     // Домашна работа:
     // Обърни от целзий в фаренхайт; 
     // Въвежда се температура по целзий, да е изведе темепратура по фаренхайт; (дробни числа)

     // изпринти числата отзад напред;

    return 0;
}


