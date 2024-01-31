
// Лекция 1
#include <iostream>
using namespace std;
// ако се напише тук - долу не трябва да се обявява

int main () {

    // променлива за цели чиста - int
    // int с име age присвоява стойноста 25;
    // int age = 25;
    long  distance2 = 51315624;

    // float за десетични числа; floating point;
    // f се слага задължително след float - literal;
    float grade = 5.50f;

    // за double се заделя по-голямо място в паметта, по детайлни единици;
    double distance = 45.678;

    cout << "hello world" << endl;
    // std::cout << "hello world" << std::endl;
    // ако горe не е опеменато тук се изписва с дългия синтаксис


    // int a = 23;
    // int b = 45;
   

     // може само да се декларира
    int f;
    // int c;
    // c = a + b;
    int c = a % b;
    // разликата
    //  45: 23 = 1;
    //  45 - 23 => 22;
    cout << c << endl;

    int number = 1549;
    int last = number % 10;
    int third = (number / 10) % 10;
    int second = (number / 100) % 10;
    int first = (number / 1000) % 10;

    cout <<" last digit is: " << last << endl;
    cout <<" thirth digit is: " << third << endl;
    cout <<" second digit is: " <<second << endl;
    cout <<" first digit is: " << first << endl;
    
    int age;
    cout << "Your age?" << endl;
    cin >> age;

    if (age > 30)  {
    cout << "20lv bonus" << endl;
    }

    if (age < 30)  {
        cout << "no bonus" << endl;
    }

    if (age == 30)  {
        cout << "30lv bonus" << endl;
    }



    int score;
    cout << "enter score " << endl;
    cin >> score;

    // break e част от синтаксиса; ако го няма слиза надолу по случаите;

    switch (score) {
        case 70: cout << "your grade is 3" << endl;
             break;
        case 80: cout << "your grade is 4" << endl;
              break;
        case 90: cout << "your grade is 5" << endl;
             break;
        case 100: cout << "your grade is 6" << endl;
             break;
        default: cout << " you must enter score 70, 80, 90 or 100" << endl;
    }


    bool age;
    bool exp;

    cin >> age;
    cin >> exp;

    // logical and
    // трябва и двете условия да са true!
    if ( age > 30 && exp > 5) {
         cout << "bonus 50lv" << endl;
    }
    else {
         cout << "no bonus" << endl;
    }


   


    return 0;
}


