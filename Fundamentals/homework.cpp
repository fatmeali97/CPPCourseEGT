// Homework 29.11
// Домашна работа:
// Обърни от целзий в фаренхайт; 
    double c;
    cin >> c;

    // ℉ =℃ * 1.8000+ 32.00
    // T (° C) = (68 ° F - 32) × 5/9 = 20 ° C

     double f = c * (9/5.0) +32;

     cout << f << "F" << endl;


// изпринти числата отзад напред;

    int number;
    cin >> number;
    int last = number % 10;
    int third = (number / 10) % 10;
    int second = (number / 100) % 10;
    int first = (number / 1000) % 10;

    cout <<" last digit is: " << last << endl;
    cout <<" thirth digit is: " << third << endl;
    cout <<" second digit is: " <<second << endl;
    cout <<" first digit is: " << first << endl;


    
// n мерен масив с 3 цифрени числа, да се  изведат всички елементи, на които сумата от цифрите е равна на 9, ако няма такива изпиши - "няма елементи"



    int NumberofArray;
    cin >> NumberofArray;

    int arr[NumberofArray];
    bool Equal = false;
    
    int sum = 0;

    // инициализация
    for ( int i = 0; i < NumberofArray; ++i) 
    {
        cin >> arr[i];
    }

    for ( int i = 0; i < NumberofArray ; ++i)
    {
         sum =  (arr[i] % 10) +
         ((arr[i] / 10) % 10) + 
         ((arr[i] / 100) % 10);   

      
        if (sum == 9 ) 
        {
            cout << "the number: " << arr[i]<< " is divisible by 9"<< endl;
            Equal = true;

        }   
    } 
    if (Equal == false ) 
    {
        cout << "There are no numbers that are divisible by 9" << endl;
    }
      
      






    // Домашна

    // матрица n na n, да се намери най-високата сума на подматрицаа k на k


    int n, m;
    cin >> n, m;
    int arr[100][100];
    int sum = 0;
    int maxSum = 0;


    for  (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            cout << "Enter element";
            cin >> number[i][j];
        }
    }


    for (int i = 0; i < m; i++) 
    {   
        for (int k = 0; k < n; k++) 
        {
            cin >> arr[i][k];
        }
    }
    maxSum = arr[0][0] + arr[0][1] + arr[1][0] + arr[1][1];
    // намиране 
     for (int i = 0; i < m; i++) 
    {   
        for (int k = 0; k < n; k++) 
        {
            sum += arr[i][k];
            sum += arr[i][k+1];
            sum += arr[i+1][k];
            sum += arr[i+1][k+1];

        }
        if ( sum > maxSum)
        {
        maxSum = sum;
        sum = 0;
        }
    }




/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main() {


    int rows;
    cout << "Enter array rows:";
    cin >> rows;
    int cols;
    cout << "Enter array columns:";
    cin >> cols;
    cout << "Enter mini array:";
    cin >> k;
    int sum = 0;
    int maxSum = 0;



    int number[rows][cols];

    // ИНИЦИАЛИЗАЖИЯ НА МАСИВ
    for  (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "Enter element";
            cin >> number[i][j];
            if ( k < i || k < j) {
                
            }
        }
    }

    
    for  (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
           
            cout << number[i][j] << " ";
        }
        cout << endl;

    }
    
    
    return 0;
}







    //  въведен ден 1-вия януари, дали е високосна годината 
    // - да се потърси всеки месец включващ деня вторник 7-ми; понеделник 6-ти;
