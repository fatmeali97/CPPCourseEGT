// от всички трицифрени числа, да се изведът тези с еднакви цифри, или с 1 по-голямо;


#include <iostream>

using namespace std;

int main()
{
    

int sizeOfArray;
cout << "Enter array size:";
cin >> sizeOfArray;

int array[sizeOfArray];
int sameDigits = 0;
int increasingDigits = 0;

for (int i = 0; i < sizeOfArray; ++i)
{
    cout << "Enter element of array on " << i << " index ";
    cin >> array[i];
}

for (int i = 0; i < sizeOfArray; ++i)
{
    // 123
    int firstDigits = array[i] / 100 % 10;
    int secondDigits = array[i] / 10 % 10;
    int lastDigits = array[i] % 10;

    if (firstDigits == secondDigits == lastDigits)
    {
       cout << " The number " << array[i] << " has same digits" << endl;
       sameDigits++;
    }

    if (firstDigits == secondDigits + 1 && secondDigits + 1 == lastDigits)
    {
    cout << " The number " << array[i] << " has increasing digits" << endl;
    increasingDigits++;
    }
}
    cout << "We have same digit number - " << sameDigits << " time" << endl;
    cout << "We have increasing digit number - " << increasingDigits << " time" << endl;

    return 0;
}
