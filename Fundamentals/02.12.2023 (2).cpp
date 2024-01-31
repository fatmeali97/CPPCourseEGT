// Упражнение - Събота

// цикли
#include <iostream>
using namespace std;

int main () {

    int N, a, b;
    cin >> N >> a >> b;

    for (int i = 1; 1 <= N; ++i) 
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    

    // просто число дели се единствено на себе си и на 1;
    // броим на колко числа се дели числото, кеото сме въвели;
    int n;
    cin >> n;

    int counter = 0;
    for (int i = 1; i <= n; ++i) {
        for (int k = 2; k < i; ++k) {
            if (i % k == 0) {
                ++counter;
            }
            // делители
             if (counter == 0) {
                cout << i << " ";
            }
            counter = 0;
        }
    }


    // дадено е число N, да се намери к на трера да е по-малко от N;

    int n; // k на трета < n, max k;
    cin >> n;
    int stepen = 3;
    int temp;
    int maxK =1;
    for ( int i = 1; i < n; ++i)
    {
        for ( int k = 0; k < stepen; ++k){
        temp *= i;
        }
        if (temp < n && temp > maxK) {
        temp = 1;
        }
        cout << maxK << " ";
    }

    // сума на всички числа между а и б;

    int a, b;
    cin >> a >> b;
    int sum = 0;
     
    for (int i = a +1; i < b; ++i){
        sum += i;
    }
        cout << sum << endl;


//  разпечатай фигура;

    int n;
    cin >> n;
    for ( int i = 0; i < n ; ++i) {
        for (int k = 0; k < i; ++k){
             cout << "*";
        }
         cout << endl;
    }
//  разпечатай фигура  наобратно;

    int n;
    char symbol = 'x';
    cin >> n;
     for ( int i = 0; i < n ; ++i) {
       for (int k = n; k > i; --k){
            cout << symbol;
        }
         cout << endl;
    }
//  изпечатайте всички числа по-малки от N , които са точен квадрат;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        if (i * i < n ) {
            cout << i* i << " ";
        }
        cout << endl;
    }

    // Всички числа, които са точенн куб 3-та степен; i* i * i
    
    // да се изпечатат всики числа по малки от n, така че n от степен m да са по-малки от n;
    // разпечатай фигура на елха;





    return 0;
}





    