#include <iostream>
using namespace std;

int main () {

//    въвеждаме квадратна матрица N na n, да се изведе сумата от всичкитте елементи на матрицата

    int n;
    cin >> n;
    int arr[100][100];
    int sum = 0;

    for (int i = 0; i < n; i++) 
    {   
        for (int k = 0; i < n; k++) 
        {
            cin >> arr[i][k];
        }
    }

    
    for (int i = 0; i < n; i++) 
    {   
        for (int k = 0; i < n; k++) 
        {
            sum += arr[i][k];
        }
    }



    // всички елемнти, които са по главния диагонал;
    int n;
    cin >> n;
    int arr[100][100];
    int sum = 0;

    for (int i = 0; i < n; i++) 
    {   
        for (int k = 0; i < n; k++) 
        {
            cin >> arr[i][k];
        }
    }

    
    for (int i = 0; i < n; i++) 
    {   
        for (int k = 0; k < n; k++) 
        {
            if ( i == k ) 
            {
            sum += arr[i][k];
            }
        }
    }
    cout << sum << endl;

// кой е максималния елемент от главния хоризонтал;
    int n;
    cin >> n;
    int arr[100][100];
    int sum = 0;

    for (int i = 0; i < n; i++) 
    {   
        for (int k = 0; k < n; k++) 
        {
            cin >> arr[i][k];
        }
    }

    maxEl = arr[n-1][0];
    for (int i = 0; i < n; i++) 
    {   
        for (int k = 0; k < n; k++) 
        {
            if ( k > i) 
            {
                if (maxEl < arr[i][k])
                {
                    maxEl = arr[i][k];
                }
            }

        }
    }


    // матрица н на н, да  се намери матрица 2 на 2 с най-голямата сума в дадената матрица;

    int n, m;
    cin >> n, m;
    int arr[100][100];
    int sum = 0;
    int maxSum = 0;

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




    // матрица n на m, да  се намери матрица 2 на 2 с най-голямата сума в дадената матрица;


    // да е изкарат всички месеци, в която има петък 13, на входа виокосна/невиокосна година и кога е първи януари


    int january;
    bool visokosna;
    int month [] = {0,0,0,0,0,0,0,0,0,0,0,0,0}
    cin >> january >> visokosna;
    int tekushPurvi = january;

    int monthSize [] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

    monthSize[1] += visokosna;

    for (int i = 0; i < 12; ++i)
    {
       if ((tekushPurvi + 12) % 7 == 4)
       {
            month(i) += i;
       }
      tekushPurvi = (tekushPurvi + monthSize[i] % 7) + 1;
    }

    for ( int i = 0; i < 12; ++i)
    {
        cout << month[i] << " ";
    }
     cout << endl;






    // имаме улица  къщи от двете страни, четни и нечетни, даден е номера на първата къща, да се пресметне, колко къщи има след това(цифри), да се намерят, колко табелки с всяка цифра да се вземат
    // номера на първата къща 5, къщите след 5 са още 4 къщи


    int initialNumber, numberOfHouses;
    cin >> initialNumber << numberOfHouses;

    int TekushtaKushta = 0;
    int cifri[]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tekushtNomer;

    for (int i = initialNumber; TekushtaKushta++ < numberOfHouses; i +=2)
    { 
        tekushtNomer = i;
        cout << tekushtNomer << " ";
        while (tekushtNomer > 0) 

        {
           cifri[tekushtNomer % 10]++;
           tekushtNomer /= 10;
        }

    }

    for (int i = 0; i < 10; ++i)
    {
        cout << cifri[i]<< " ";
    }


    return 0;
}






