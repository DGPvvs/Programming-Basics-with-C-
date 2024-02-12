// 06 Rhombus of Stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define SPACE " "
#define NEW_LINE "\r\n"
#define STAR "*"


int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            output.append(SPACE);
        }

        output.append(STAR);

        for (int j = 1; j <= i - 1; j++)
        {
            output.append(SPACE).append(STAR);
        }

        output.append(NEW_LINE);
    }

    for (int i = n; i >= 2; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            output.append(SPACE);
        }

        for (int j = 1; j <= i - 1; j++)
        {
            output.append(SPACE).append(STAR);
        }

        output.append(NEW_LINE);
    }

    cout << output;
}

//Напишете програма, която чете цяло положително число n, въведено от потребителя, и печата ромбче от звездички с размер n като в примерите по-долу:
//Примерен вход и изход
//вход	изход		вход	изход		вход	изход		вход	изход
//1	*		2	 *
//* *
// *		3	  *
// * *
//* * *
// * *
//  *		4	   *
//  * *
// * * *
//* * * *
// * * *
//  * *
//   *
//Подсказки:
//•	Разделете ромба на горна и долна част и ги печатайте с два отделни цикъла.
//•	За горната част завъртете цикъл за row от 1 то n:
//o Отпечатайте n-row интервала.
//o	Отпечатайте “*”.
//o	Отпечатайте row-1 пъти “ *”.
//•	Долната част отпечатайте аналогично на горната с цикъл от 1 до n-1.
