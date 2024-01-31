#include <iostream>

using namespace std;

main() {
    

    int n;
    cout << "Enter matrix size:";
    cin >> n;

    int matrix[n][n];


    for (int i = 0; i < n; i++) // i = 0 ; i = 1 ; i = 2; i = 3 ...
    {
        //докато i = o; j се пълни до 4 (или до N);
        for (int j = 0; j < n; j++) //j = 0 ; j = 1 ; j = 2; j = 3 ... 
        {
            cout << "Enter matrix element" << endl;
            // i и j - индексът, където е клетката
            cin << matrix[i][j];
        }

    }

    
    // Главен диагонал;
    // сбора на числата по главния диагонал;

    int n;
    cout << "Enter matrix size:";
    cin >> n;

    int sum = 0;

    int matrix[n][n];


    // при квадрат;
    for (int i = 0; i < n; i++) 
    {
        cout << matrix[i][i];
    }
    // 



    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << "Enter matrix element" << endl;
            cin >> matrix[i][j];
        }

    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
                cout << matrix[i][j];
            }
        }
    }
    cout << sum;



    // поддиагонал

    // 23 44 2 32 67 44

    int max = 0;
    int min = INT16_MAX; // НАЙ-ГОЛЯМОТО ВЪЗМОЖНО В ПРОГРАМАТА

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i < j) // над главния диагонал 

            if (i > j) // поджглавния диагонал 
            {
                // if (matrix[i][j] < min)

                if (matrix[i][j] > max)
                {
                    max = matrix[i][j];
                }
            }
        }
    }

// за да не обхождаме цевлия масив

    for (int i = 1; i < n; ++i) // от 1, защото 1-ви ред го нямаме
    {
        for (int j = 0; j < n - 1; ++j)
        {
            if (i < j) // над главния диагонал 

            if (i > j) // поджглавния диагонал 
            {
                // if (matrix[i][j] < min)

                if (matrix[i][j] > max)
                {
                    max = matrix[i][j];
                }
            }
        }
    }

// или
  for (int i = 1; i < n; ++i) // от 1, защото 1-ви ред го нямаме
    {
        for (int j = 0; j < i; ++j) // 
        {
                // if (i > j) // поджглавния диагонал 
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            
        }
    }





 // деклариран масив
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}
    // };

    // за броя променливи нужни за нов масив поддиагонала, диагонала е равен на n;299
    // n x n = sum - n => newN / 2
    // 4 x 4 = 16 - 4 => 12 / 2;

    return 0;

}

// класове, обекти, функции, стрингове (библиотеката), вектори;
// краен проект SDL - прави се игра, от екип, защитава се пред EGT;

// тест и задачи с подточки;


// да се намери броя на всички 4-тири цифрени числа, чийто сбор е еди колко си;

// от всички трицифрени числа, да се изведът тези с еднакви цифри, или с 1 по-голямо;
// да се делят на 7 или да не се делят в него;

// под  или над диагонала, да се пресметне сума; 