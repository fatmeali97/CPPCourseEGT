
#include <iostream>
using namespace std;

int main () {

    // даден е н мерен маив, намереете елемент к, и изведете индекса му ако няма изведете -1

    int n, k;
    cin >> n;
    cin >> k;
    char arr[n];

    for (int i = 0; i < n ; ++i)
    {   
        cin >> arr[i];
    }

    for (int i = 0; i < n ; ++i) {
         if (arr[i] == k) {
            char  namernIndex = i;
            break;
        }
    }


    // даден е масив и число к, да се намери, колко пъти се реща числото в масива;

    int n, k;
    cin >> n >> k;
    char arr[100];

    int counter = 0;


    for (int i = 0; i < n ; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n ; ++i) {
        if (arr[i] == k) {
            counter++;
        }
    }

    cout << counter << endl;



// да се изведе най-голямото чило и да е изпише индека му (мястото му)

    int n;
    cin >> n;
    int arr[100];
    int maxEl;
    int maxIndex = 0; 

    // инициализация
    for ( int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    maxEl = arr[0];

    for (int i = 0; i < n; ++i) {
        if (maxEl < arr[i]) {
            maxEl = arr[i];
            maxIndex = 1;
        }
    }

    cout << "element: " << maxEl << endl <<"index: " << maxIndex << endl;
    


// Да е намери максималния  и минималния елемент

    int n;
    con >> n;
    int arr[100];

    int maxEl, minEl;
    // инизиализация; пълним масива
    for ( int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    maxEl = arr[0];
    minEl = arr[0];

    for ( int i = 0; i < n; ++i) {
        if (maxEl < arr[i]) {
            maxEl = arr[i];
        } 

        if (minEl > arr[i]) {
            minEl = arr[i];
        }
    }

    cout << "max: " << maxEl << endl <<"min: " << minEl << endl;


// да се намери най-малкия елемент и да се изприти на кой индек се намира

    int n;
    con >> n;
    int arr[100];

    int  minEl;
    int minIndexes[100];

    for ( int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    minEl = arr[0];

    for ( int i = 0; i < n; ++i) {
      if (minEl > arr[i]) {
            minEl = arr[i];
        }
    }
    int k = 0;
    for ( int i = 0; i < n; ++i) {
      if (minEl ==  arr[i]) {
          minIndexes[k] = i;
          k++;
        }
    }

   for ( int i = 0; i < k; ++i) {
          cout << minIndexes[i]<< " ";

    }
          cout << endl;



//  да се дисплейнат всички елементи, които са по-големи от средното аритметично (числото)


    int n;
    cin >> n;
    int arr[100];

    double average = 0;
    int sum = 0;


    for ( int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for ( int i= 0; i < n ; ++i){
        average += arr[i];
    }

    average/= n;

     cout << "average:" << average << endl;

    for ( int i = 0; i < n; ++i) {
        if (arr[i] < average) {
            cout << arr[i]<< " ";
        }    
    }         
     cout << endl


    // да се изпечатат всики числа по малки от n, така че n от степен m да са по-малки от n;

    int n, m;
    cin >> n >> m;
    int t = 1;
    bool nameren = false;

    for ( int i = 2; i < m; ++i){
        for (int k = 0; k < n; ++k)
        {
            t *= 1;
        }
        if (t > m) {
            cout << i -1 << endl;
            nameren = true;
            break;
        }

    // нулира втория фор
        t = 1;

        if (nameren)
        {
            break;
        }
    }




// n мерен масив с 3 цифрени числа, да се  изведат всички елементи, на които сумата от цифрите е равна на 9, ако няма такива изпиши - "няма елементи"


    int n;
    cin >> n;
    int arr[100];
    bool Equal = false;


    // инициализация
      for ( int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for ( int i = 0; i < n ; ++i){
        
        int sum =  (arr[i] % 10) +((arr[i] / 10) % 10) + ((arr[i] / 100) % 10);   
          cout <<sum<< "sum "<< endl;
      

      if (sum == 9 ) {
            cout << arr[i]<< " "<< endl;
            Equal = true;
        }    
       if (Equal == false ) {
         cout << " няма числа, чиито  сбор е 9 " << endl;
        }
     }   




    return 0;
}