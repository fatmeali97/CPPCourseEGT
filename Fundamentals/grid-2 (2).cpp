#include <iostream>

using namespace std;

int main()
{

    int rows;
    int cols;
    int sum = 0;
    int maxSum = 0;
    
    cout << "Enter rows number of array: ";
    cin >> rows;
    cout << "Enter cols number of array: ";
    cin >> cols;

    int numbers[rows][cols];
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++i)
        {
            cout << "Enter Element:";
            cin >> numbers[i][j];
        }
      
    }
    
    
    for (int i = 0; i < rows - 1; ++i)
    {
        for (int j = 0; j < cols -1 ; ++i)
        {
            sum = numbers[i][j] + numbers[i + 1][j + 1];

            if (maxSum < sum)
            {
                maxSum = sum;
                cout << "max: " << maxSum << endl;
            }
        }
    }
    

    //cout << "max: " << theBigestNumber << endl;

    

    return 0;
}























#include <iostream>

using namespace std;

int main()
{

 
    int rows;
    int cols;
    int sum = 0;
    int maxSum = 0;
    
    cout << "Enter rows number of array: ";
    cin >> rows;
    cout << "Enter cols number of array: ";
    cin >> cols;

    int numbers[rows][cols];
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter Element:";
            cin >> numbers[i][j];
        }
      
    }
    
     for  (int i = 0; i < rows; i++) 
    {
    
        for (int j = 0; j < cols; j++){
            cout << numbers[i][j] << " ";
        }
        cout << endl;

    }
    
    for  (int i = 0; i < rows - 1; ++i) 
    {
        for (int j = 0; j < cols - 1 ; ++j)
        {
            int topLeft = numbers[i][j];
            int topRight = numbers[i + 1][j];
            int bottomLeft = numbers[i][j + 1];
            int bottomRight = numbers[i + 1][j + 1];
            sum = topLeft + topRight + bottomLeft + bottomRight;
            
            if (maxSum < sum)
            {
                maxSum = sum;
                cout << topLeft <<" + " << topRight <<" + " << bottomLeft <<" + "<< bottomRight<< endl;          
            }
        }
    }
    
    cout << "max: " << maxSum << endl;

    

    return 0;
}























#include <iostream>

using namespace std;

int main()
{

 
    int rows;
    int cols;
    int maxSum = 0;
    
    cout << "Enter rows count: ";
    cin >> rows;
    cout << "Enter cols count: ";
    cin >> cols;

    int numbers[rows][cols];
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter Element:";
            cin >> numbers[i][j];
        }
      
    }
    
     for  (int i = 0; i < rows; i++) 
    {
    
        for (int j = 0; j < cols; j++){
            cout << numbers[i][j] << " ";
        }
        cout << endl;

    }
    
    int k = 2;
    
    for  (int i = 0; i <= rows - k; ++i) 
    {
        for (int j = 0; j <= cols - k; ++j)
        {
            int sumK = 0;
            for(int innerI = 0; innerI < k; innerI++)
            {
                for(int innerJ = 0; innerJ < k; innerJ++)
                {
                    sumK += numbers[i + innerI][j + innerJ];
                }
            }

            if (maxSum < sumK)
            {
                maxSum = sumK;
                // cout << topLeft <<" + " << topRight <<" + " << bottomLeft <<" + "<< bottomRight<< "=" << maxSum << endl;          
            }
        }
    }
    
    cout << "max: " << maxSum << endl;

    

    return 0;
}
