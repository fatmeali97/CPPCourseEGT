// да се намери броя на всички 4-тири цифрени числа, чийто сбор е еди колко си;

// от всички трицифрени числа, да се изведът тези с еднакви цифри, или с 1 по-голямо;

// да се делят на 7 или да не се делят в него;

// под  или над диагонала, да се пресметне сума; 





int elementsOfArray;
cout << "Enter array lenght ";
cin >> elementsOfArray;
int Array[elementsOfArray];

int sum = 0;
bool Equal = false;

for (int i = 0; i < elementsOfArray; ++i)
{
    cout << "Enter you element on " << i << " index";
    cin >> Array[i];
}

for (int i = 0; i < elementsOfArray; ++i)
{
   
    sum = Array[i] % 10 + 
    (Array[i] /10 % 10 ) +
    (Array[i]/100 % 10 ) +
    (Array[i]/1000 % 10 );
            
    if (sum == 9 ) 
    {
        cout << Array[i]<< " "<< endl;
        Equal = true;
    }    
    
    if (Equal == false ) 
    {
        cout << "няма числа, чиито  сбор е 9 " << endl;
    }
           
}




int elementsOfArray;
cout << "Enter array lenght ";
cin >> elementsOfArray;
int Array[elementsOfArray];

int sum = 0;

for (int i = 0; i < elementsOfArray; ++i)
{
    cout << "Enter you element on " << i << " index ";
        
    cin >> Array[i];
        
}

for (int i = 0; i < elementsOfArray; ++i)
{
    if (Array[i] % 7 == 0)
    {
        if (Array[i] % 10 == Array[i] /10 % 10 == Array[i]/100 % 10) 
        {
        cout << Array[i]<< " "<< endl;
        }    
    }
  
    
}









int elementsOfArray;
cout << "Enter array lenght ";
cin >> elementsOfArray;
int Array[elementsOfArray];

int sum = 0;

    for (int i = 0; i < elementsOfArray; ++i)
    {

    int fourthDigit = Array[i] % 10;
    int thirdDigit = (Array[i] / 10) % 10;
    int secondDigit = (Array[i] / 100) % 10;
    int firstDigit = (Array[i] / 1000) % 10;



        if (firstDigit == 0 && secondDigit != 0)
        {
            if (secondDigit == thirdDigit && thirdDigit == fourthDigit)
            {
                cout << "All the digits in " << Array[i] << " are the same." << endl;
            }

            if (secondDigit + 1 == thirdDigit && thirdDigit + 1 == fourthDigit)
            {
                cout << "The digits in " << Array[i] << " are consecutive." << endl;
                count++; // Броим колко пъти се срещат 3-цифрени числа с последователни цифри.
            }
        }
    }   
    if (count == 0) // 3-цифрени, чиито цифри са последователни
        {
            cout << "There are no 3-digit numbers whose digits are consecutive." << endl;
        }
        else
        {
            count == 1 ? cout << "There is " << count << " 3-digit number whose digits are consecutive." << endl : cout << "There are " << count << " 3-digit numbers whose digits are consecutive." << endl;
        }


    return 0;
}