// 06 Operations Between Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    string operation;
    cin >> n1 >> n2 >> operation;

    string s = "";
    bool isNotDevide = true;
    int intResult = 0;

    if (operation == "+")
    {
        intResult = n1 + n2;
        cout << n1 << " + " << n2 << " = " << intResult << " - ";
    }
    else if (operation == "-")
    {
        intResult = n1 - n2;
        cout << n1 << " - " << n2 << " = " << intResult << " - ";
    }
    else if (operation == "*")
    {
        intResult = n1 * n2;
        cout << n1 << " * " << n2 << " = " << intResult << " - ";
    }
    else if (n2 != 0)
    {        
        if (operation == "%")
        {
            intResult = n1 % n2;
            cout << n1 << " % " << n2 << " = " << intResult << endl;
            isNotDevide = false;
        }
        else if (operation == "/")
        {
            double doubleResult = n1 * 1.0 / n2;
            cout << n1 << " / " << n2 << " = ";

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            cout << doubleResult << endl;
            isNotDevide = false;
        }
    }
    else
    {
        cout << "Cannot divide " << n1 << " by zero" << endl;
        isNotDevide = false;
    }

    if (isNotDevide)
    {
        if (intResult % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}

//Напишете програма, която чете две цели числа(N1 и N2) и оператор, с който да се извърши дадена математическа операция с тях.Възможните операции са : Събиране(+), Изваждане(-), Умножение(*), Деление(/ ) и Деление с остатък(%).При събиране, изваждане и умножение на конзолата трябва да се отпечата резултатът и дали той е четен или нечетен.При обикновеното деление – резултатът.При модулното деление – остатъка.Трябва да се има предвид, че делителят може да е равен на 0 (нула), а на нула не се дели.В този случай трябва да се отпечата специално съобщениe.
//Вход
//От конзолата се прочитат 3 реда, въведени от потребителя :
//•	N1 – цяло число в интервала[0...40 000]
//•	N2 – цяло число в интервала[0...40 000]
//•	Оператор – един символ измежду : "+", "-", "*", "/", "%"
//Изход
//Да се отпечата на конзолата един ред :
//•	Ако операцията е събиране, изваждане или умножение :
//o	 "{N1} {оператор} {N2} = {резултат} – {even/odd}"
//•	Ако операцията е деление :
//o	"{N1} / {N2} = {резултат}" – резултатът е форматиран до вторият знак след дес.запетая
//•	Ако операцията е деление с остатък :
//o	"{N1} % {N2} = {остатък}"
//•	В случай на деление с 0 (нула) :
//    o	"Cannot divide {N1} by zero"