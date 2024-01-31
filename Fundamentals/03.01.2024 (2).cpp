#include <iostream>
using namespace std;

// void е когато няма return + не връща резултат;
void printSignOfNumber()
{
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "+";
    }
    else {
        cout << "-";
    }
}


int printSignOfNumberInt()
{
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "+" << endl;
    }
    else {
        cout << "-" << endl;
    }

    return number;
}



void SumOfNumbers() 
{
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int sum;
    sum = a + b;
    cout << sum; 

}


int SumOfNumbersInt() 
{
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int sum;
    sum = a + b;
    cout << sum << endl;

    return sum;
}

// задължително се пише вида на параметъра дали е инт дали е стинг и т.н;

int Sum(int a, int b) 
{
   return a + b;
}


int main()
{

// при функции, които са void:
   printSignOfNumber();

// при фунцкии които са int, string, double и т.н;
// трябва нова променлива в мейн да я съхранява

    int x;
    x = printSignOfNumberInt();



    int sum;
    sum = SumOfNumbersInt();
    int sum_2;
    sum_2 = SumOfNumbersInt();
    cout << sum << " "<< sum_2;

    
    int res = Sum(5, 6);
    cout << res;

// при деклариране от потребител 
    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int res = Sum(a, b);
    cout << res;
// или 
    cout << Sum(a, b);

return 0;
}