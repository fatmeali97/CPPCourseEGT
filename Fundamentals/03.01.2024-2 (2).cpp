#include <iostream>
#include <string>

using namespace std;

// стринг е готов клас, който има библиотека от готови методи за улеснение; държи текст; #include <string>


int main()
{

// всяка буква си заема мястото, както при масивите и си има позиция; пак започва от 0;
// има дължина; length; 
// за array e sizeof
string s = "Hello, C++";

int len = s.length();

for (int i = 0; i < s.length(); ++i)
{
    cout << "s[" << i <<"] = " << s.at(i) << endl;
}


cout << len << endl;

char ch = s.at(3); // за да вземем елемент на точно определено ямсто от дължината на стринга!!!
cout  << ch << endl; 


string ss;
cout << "Enter stirng value: ";
cin >> ss; //  чете само до 1 първия интервал, ако ще добавяме повече от 1 дума е нужно да изпозлваме метода getline;

getline(cin, ss);
cout << ss;


string s3 = s + ss; // конкретенация или още казано слепване
string sss = s + " " + ss; // конкетенация или още казано слепване може и разтояние, коеот отново трябва да слепим с +;



// сравняване на стрингове; campare
string as = "I'm from Varna";
string bs = "I'm from Sofia";


// if (as == bs)
// {
//     cout << "Equal";
// }

// if (as > bs)
// {
//     cout << "AS is before BS";
// }

// if (as < bs)
// {
//     cout << "BS is before AS";
// }


if (as == bs)
{
    cout << "Equal";
}

if (as < bs)
{
    cout << "AS is before BS";
}

if (as > bs)
{
    cout << "BS is before AS";
}

// горните редове ги заменя
if (s.compare(bs) > 0)
{
    cout << "BS is before AS";
}

string s3 = s3.append(as); // append = конкретенация; по правилен начин 


// (словосъчетание кеото търсим или позицията [44] ) търси от пред назад първтото намерено
s.find_first_of("atv", 44);

// търси отзад напред първтото намерено
s.find_last_of("atv", 44);

// само .finf търси цялото;
// .find of търси някоя от буквите;







return 0;
}