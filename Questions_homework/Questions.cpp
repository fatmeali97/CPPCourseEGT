Questions on C++ #1
Answer the questions below in writing both in English and Bulgarian Language
Note : Including real life examples is mandatory for every question below!
Point out your resources - slides, books, documentation, online resources, etc.with links.Add links after the answer you used the resource / s for.
NO CHAT BOTS ALLOWED!NO GOOGLE TRANSLATE!EXPLAIN IN YOUR WORDS


1 Syntax Explanation :
Describe what the following line of C++ code does : int* ptr = &var;
the integer ptr is holding the adress of var variable;
when we cout the* ptr, we can see that the* ptr is holding not only
the adress of& var but also their value;

променливата* ptr e равна на адреса на променливата var, както съхранява адреса, тайак и приема нейната стойност,
при повикване поинтър от Ptr ще изпринти стойността на var;

пример: в тетрадка се съхранява адреса ми, но знаейки адреса ми  се знае и моето име, години и т.н

//........................................................................................................................

2. Concept Clarification :

Explain the difference between a while loop and a do - while loop in C++.
while loop is used to repeat the block of code until the condition is done;
we should be careful because the statement should have end or we can made infinite loop;
Оn the other hand when we have do - while, make it until condition, so if the condition
isn't met, we have at least 1 performance done;

While цикълът, се изпълнява докато условието не се изпълни, ако не подберем условеито правилно
можем да създадем безкраен цикъл; Do - while прави това, а след товс провери условеито, гарантираме си
че кода ни ще се изпълни поне 1 път преди да бъде прекъснат от невярното условие;

пример: правя вечеря всяка вечер следователно имам какво да ям - пример за  while;
когато търся книгата, която искам да прочета в семейната библитека, размествам / дърпан поне една книга преди това;


//........................................................................................................................


3. Code Analysis :
Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.

we made 3 statements; the dfirst statements is before starting the loop, the second is the condition
loop have to run, the last one is what to do in every runing;
Имаме 3 условия, пъреото е от къде да започне, второто е,
колко пъти да се изпълни кода, третото е какво да се направи, за да се изпълни еди колко си пъти;

for (int i = 0; i < 5; i++) {
	cout << i << "\n";
}

the code is ruuning 5 times because of second statement;
кода  ще се изпълни 2 пъти, заради второто условеия
пример : годините ни, заповаме от 0, всяка година добавяме година към живот;





//........................................................................................................................



Function Usage :
4. Write about how functions prevent code duplication and
give an example of a simple C++ function that calculates the square of a number.

Because once we write the function, we can call it when we need it;
Когато веднъж опишем функцията, можем да я повикаме когато ни трябва и където ни потрябва

#include <iostream>
using namespace std;
void CalculateSquare()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int square = n * n;
	cout << "Square of " << n << " is: " << square;

}

int main()
{

	CalculateSquare();
}







//........................................................................................................................



5. Memory Management :
Discuss the Importance of memory management in C++ and explain the difference between stack and heap memory allocation.

https ://www.baeldung.com/cs/memory-stack-vs-heap#:~:text=Stack%20memory%20is%20a%20sort,longer%20lifespan%20than%20stack%20memory.
	https ://trekto.info/algoritmi-strukturi-danni/1-pregovor-c++/

	Stack memory is the first memory that is set before the program is started.In the heap is
	the dynamic memory that is set only when the program is runong;

Статичнаата памет се заделя преди програмата да е стартирала, а динамичната памет е момента на изпълнение на програмата;



//........................................................................................................................



6. Object - Oriented Programming :
Explain the concept of encapsulation in C++ and how it is achieved using classes.
The meaning of encapsulation is to make sure that the data we give should be hidden, to make this we declare
variables in private (hidden, not accessible) when we declare our headers of classes;
Encapsulation се нарича тогава, коагто декларираме променливите в полето private, за да сме сигурни,
че никой от външния свят не може да ги достъпи без нужните методи;



//........................................................................................................................


7: Error Handling :
Describe how exceptions are used in C++ for error handling, with an example of a try - catch block.

https ://www.youtube.com/watch?v=kjEhqgmEiWY
	https ://www.geeksforgeeks.org/exception-handling-c/

#include <iostream>
	using namespace std;

int main() {
	try {
		int age = 15;
		if (age >= 18) {
			cout << "You can drive";
		}
		else {
			throw (age);
		}
	}
	catch (int myNum) {
		cout << "You can't drive. You must be at least 18 years old and have license." << endl;
		cout << "Age is: " << myNum;
	}
	return 0;
}

TRY - mean try to execute this code, but if there is exeption, you are going
to CATCH it and handle it inside the chatch();


//........................................................................................................................



8. STL Containers :
Write about the purpose and use of the std::vector container in C++.

Vectors are dynamic arrays, they can be resized, and have methods, for insertion, deleting, sorting.
Векторите са динамични масиви, които нямат фиксиан размер, могат да го променят и имат удобно методи,
с които лесно се добавят и изтриват данните.

пример : в реалния живот точките трупаши се в някое волейнболно състезание;



//........................................................................................................................




9. Pointers and References :
Discuss the difference between pointers and references in C++ and provide scenarios where one might be preferred over the other.
https ://www.geeksforgeeks.org/pointers-vs-references-cpp/

	The pointer is holding the memory adress of variable.
	The Reference is like a variable with another name, but already existed one, can also sotre adress;

Поинтъра съхранява адреса в паметта,
Референцията е като нова "визия" на вече съществуваща променлива, само името ги различава,
референцията също пази данни за паметта;


//........................................................................................................................



10. Advanced Features :
Explain the concept of templates in C++ and how they support generic programming.Include a simple example of a template function.

We need the template function when we have to adapt our function to the diffrent data types;
We write it once and use it eith every type we need;

Нуждаем се от темпелйтна функция, когато ще извършваме фунцията за няколко различни типа променливи, примерно
int, double;
// function template
#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b)
{
	T result;
	result = (a > b) ? a : b;
	return (result);
}


