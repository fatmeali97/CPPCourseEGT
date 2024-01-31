#include <iostream>
#include <string>
#include <vector>


using namespace std;


int main()
{

// Задача 1
// Create a class called Account that a bank might use to represent customers' bank accounts. Your class should include one data member of type int to represent the account balance. Your class should provide a constructor that receives an initial balance and uses it to initialize the data member. The constructor should validate the initial balance to ensure that it is greater than or equal to 0. If not, the balance should be set to 0 and the constructor should display an error message, indicating that the initial balance was invalid. The class should provide three member functions. Member function credit should add an amount to the current balance. Member function debit should withdraw money from the Account and should ensure that the debit amount does not exceed the Account's balance. If it does, the balance should be left unchanged and the function should print a message indicating "Debit amount exceeded account balance." Member function getBalance should return the current balance. Create a program that creates two Account objects and tests the member functions of class Account.




 
// Задача 2 
//We are given a school. In the school there are classes of students. Each class has a set of teachers. Each teacher teaches a set of disciplines. Students have name and unique class number. Classes have unique text identifier. Teachers have name and title. Disciplines have name, number of lectures and number of exercises.
// 2. Define C++ classes for the school (School, Class, Student, Teacher, Discipline). Keep the member fields private. Add constructors and accessor methods. Write a testing class to construct and print a sample school.





return 0;
}