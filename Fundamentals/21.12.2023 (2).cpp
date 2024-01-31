
#include <iostream>
#include <string>
using namespace std;

 // функции
    void PrintHello()
    {
        cout << "hello world" << endl;
    }

    int Sum(int a, int b)
    {
        return a + b;
    }

    void PrintLine (int start, int end)
    {
        for(int i = start; i <= end; ++i)
        {
            cout << " " << i;

        }
        cout << endl;
    }

    void PrintTriangle ( int start, int end)
    {
        for(int line = 1; line <= end ; ++line)
        {
        PrintLine(1, line);
        };

        for(int line = end-1; line >= 1 ; --line)
        {
        PrintLine(1, line);
        };
    }

int main(){

    PrintHello();
    cout << Sum(3, 2) << endl; 

    int n;
    cin >> n;
    PrintTriangle(1, n);

 
   

    return 0;
}

// PrintTriangle
// 1
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1







#include <iostream>
using namespace std;


    int getMax(int a, int b)
    {
        if ( a > b)
            return a;
            return b;
    }

    int getMax( int a, int b, int c)
    {
        
    }
int main(){

   
    int a, b;
    cin >> a >> b;

    cout << "max{" << a << ", " << b <<"}: " << getMax(a,b);
 
   

    return 0;
}