
#include <iostream>
using namespace std;

int main () {

    int counter = 1;
    while (counter < 10) 
    {
        counter++;
        if (counter == 5) {
        continue;
        }
    cout << counter << endl;
    }


// arrays

    // просто пример
    // int tempreture[30] = { [0]:14,[1]:15,[2]:16,[3]:5,[4]:7,[5]:1,[6]:12,[7]:16,[8]:11,[9]:13,[10]:15,[11]:17,[12]:12,[13]:12,[14]:11,[15]:10,[16]:15,[18]:9,[19]:9,[20]:7,[21]:10,[22]:11,[23]:14,[24]:12,[25]:13,[26]:10,[27]:8,[28]:4,[29]:8}

    // for (int i = 0; i < 30 ; i++){
    //     cout << tempreture[i] << endl;
    // }

    int tempreture[10];
    for (int i = 0; i < 10 ; i++) {
    cout << "enter tempreture:" << endl;
    cin >> tempreture[i];
    cout << i << "=>" << tempreture[i]<< endl;
    }

    int sum = 0;
    for (int i =0; i < 10; i++) {
        sum = sum + tempreture[i];

    }
        cout << sum << endl;
        cout << "Median tempreture: " << sum / 10 << endl;



    return 0;
}





    