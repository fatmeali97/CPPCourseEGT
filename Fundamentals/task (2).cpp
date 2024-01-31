#include <iostream>

using namespace std;

int main()
{

    int numberOfElements;
    int theBigestNumber = 0;
    int sum = 0;
    int maxSum = 0;
    
    cout << "Enter number of array: ";
    cin >> numberOfElements;

    int numbers[numberOfElements];
    
    for (int i = 0; i < numberOfElements; ++i)
    {
        cout << "Enter Element:";
        cin >> numbers[i];
        
        if (theBigestNumber < numbers[i])
        {
            theBigestNumber = numbers[i];
        }
        
        sum = sum + numbers[i];
        
        if ( sum > maxSum)
        {
            sum = sum + numbers[i];
            maxSum = sum;
            cout << "maxSum: " << maxSum << endl;

        }
        

    }
    
    cout << "max: " << theBigestNumber << endl;

    

    return 0;
}






#include <iostream>

using namespace std;

int main()
{

    int numberOfElements;
    int theBigestNumber = 0;
    int sum = 0;
    int maxSum = 0;
    int target;
    
    cout << "Enter number of array: ";
    cin >> numberOfElements;
    
    cout << "Enter target number: ";
    cin >> target;

    int numbers[numberOfElements];
    
    for (int i = 0; i < numberOfElements; ++i)
    {
        cout << "Enter Element:";
        cin >> numbers[i];
    }
    
    
    for (int i = 0; i < numberOfElements; ++i)
    { 
        sum = sum + numbers[i];
        
        if (sum == target)
        {
            cout << numbers[i] << "+" << numbers[i]<< endl;
            cout <<"sum"<< sum << endl;
            
        }

    }
    

    //cout << "max: " << theBigestNumber << endl;

    

    return 0;
}














#include <iostream>

using namespace std;

int main()
{

    int numberOfElements;
    int theBigestNumber = 0;
    int sum = 0;
    int maxSum = 0;
    int target;
    bool targetReached = false;
    
    cout << "Enter number of array: ";
    cin >> numberOfElements;
    
    cout << "Enter target number: ";
    cin >> target;

    int numbers[numberOfElements];
    
    for (int i = 0; i < numberOfElements - 1; ++i)
    {
        cout << "Enter Element:";
        cin >> numbers[i];
    }
    
    
    for (int i = 0; i < numberOfElements; ++i)
    { 
        sum = numbers[i] + numbers[i + 1];
        
        if (sum == target)
        {
            cout << numbers[i] << "+" << numbers[i+ 1]<< endl;
            cout <<"sum "<< sum << endl;
            targetReached = true;
            break;
        }
        
        if (targetReached == false) 
        {
            cout << " There is no sum = " << target << endl;

        }

    }
    

    //cout << "max: " << theBigestNumber << endl;

    

    return 0;
}




#include <iostream>

using namespace std;

int main()
{

    int numberOfElements;
    int theBigestNumber = 0;
    int sum = 0;
    int maxSum = 0;
    int target;
    bool targetReached = false;
    
    cout << "Enter number of array: ";
    cin >> numberOfElements;
    
    //cout << "Enter target number: ";
    //cin >> target;

    int numbers[numberOfElements];
    
    for (int i = 0; i < numberOfElements; ++i)
    {
        cout << "Enter Element:";
        cin >> numbers[i];
    }
    
    
    for (int i = 0; i < numberOfElements - 1; ++i)
    { 
        sum = numbers[i] + numbers[i + 1];

        if (maxSum < sum)
        {
            maxSum = sum;
            cout << "max: " << maxSum << endl;
        }
    }
    

    //cout << "max: " << theBigestNumber << endl;

    

    return 0;
}
