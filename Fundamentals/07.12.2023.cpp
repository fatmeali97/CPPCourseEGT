#include <iostream>
using namespace std;
#include <string>;

int main () {

    //двумерни масиви;
    // деклариране;
    // row, col
    int arr[2][4] = {
        {11, 12, 12, 55}, // нулев ред
        {23, 45, 56, 77} 
    };

    // обхождане;
    // за достъпване на row
    for (int i = 0; i < 2; i++)
    {
    // за достъпване на col
        for ( int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int rows;
    cout << "Enter array rows:";
    cin >> rows;
    int cols;
    cout << "Enter array columns:";
    cin >> cols;
  int number[rows][cols];

    long product = 1;

  


    for  (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "Enter element";
            cin >> number[i][j];
        }
    }

    
    for  (int i = 0; i < rows; i++) 
    {
    
        for (int j = 0; j < cols; j++){
            cout << number[i][j] << " ";
        }
        cout << endl;

    }


    for (int row = 0; row < rows; row++){
        for (int col = 0; col < cols; col++)
        {
            if (number[row][col] % 5 == 0)
            {
                product = product + number[row][col];
            }
            
        }

    }      

    cout << product << " " << endl;




// tempreture
    int rows, cols;
    cout << "Enter array rows:";
    cin >> rows;
    cout << "Enter array columns:";
    cin >> cols;

    int count = 0; 
    string months[12] = {"януари", "февруари", "март", "април", "май", "юни", "юли", "август", "септемри", "октомври", "ноември", "декември"};
    int number[rows][cols];


    for  (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++) 
        {
            cin >> number[row][col];
        }
    }

    
    for  (int row = 0; row < rows; row++) 
    {
    
        for (int col = 0; col < cols; col++){
            if (number[row][col] == 20){
                cout << "month is:" << months[row] << endl;
                cout << "day is:" << col + 1 << endl;
                count ++;
            }
        }
        cout << "temp 20 count" << count << endl;

    }


    return 0;
}






// - изпит не средата на първата част

// изпит понеделник 11.12.2023 - на момента е прави задачата със шерване на екрана; от 18:30 до 21 часа горе долу; 1-2 задачи;

// задачите задължително с масив, но не с вектор;