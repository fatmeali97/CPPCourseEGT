



#include <iostream>
#include <string>
using namespace std;
// деклариране на клас
class Student {
public:
    // attributes: datatype + name
    string FirstName;
    string LastName;
    int age;
    string dateOfBirth;
    string Subject;
};

int main(){
    // създаване на обект от клас;
    Student aboutStudent;

    // добавяме стойност на класа чрез обекта;
    aboutStudent.FirstName = "Fatme";
    aboutStudent.LastName = "Ali";
    aboutStudent.age = 26;
    aboutStudent.dateOfBirth = "09/12/1997";
    aboutStudent.Subject = "Nedical biology";


    cout << "Name " << aboutStudent.FirstName << " " << aboutStudent.LastName << endl;

    return 0;
}



// ако трябва да създадем още един обект трябва отново да опишем всичко, гореспменато 
// с друго име на обекта пример:     
    // Student aboutStudent2;
    // aboutStudent2.FirstName = "Mincho";
    // aboutStudent2.LastName = "Ali";
    // aboutStudent2.age = 33;
    // aboutStudent2.dateOfBirth = "28/09/1990";
    // aboutStudent2.Subject = "none";

// Използваме конструктури, когато ни се налага да повтаряме или пресъздаваме обектите няколко пъти;



#include <iostream>
#include <string>
using namespace std;
// деклариране на клас
class Student {
public:
    // attributes: datatype + name
    string FirstName;
    string LastName;
    int age;
    string dateOfBirth;
    string Subject;
    
// Конструктура е метод(методът е вид функция, която се извиква всеки път, в който искаме да създадем обект от клас)
// правила:
// конструктура няма ретърн!
// констуктураима същото име като класа
    Student (string FirstName, string LastName)
    {
        FirstName = FirstName;
        LastName = LastName;

    }

    // метод
    void GetInfo()
    {
        cout << "Name " << FirstName << endl;
        cout <<"last  " << LastName << endl;
        cout <<"subjects:  " << dateOfBirth << endl;
    }
};

int main(){

    Student aboutStudent("Fatme", "Ali");
    Student aboutStudent2("Mincho", "Ali");


   aboutStudent.GetInfo();
   aboutStudent2.GetInfo();

    return 0;
}