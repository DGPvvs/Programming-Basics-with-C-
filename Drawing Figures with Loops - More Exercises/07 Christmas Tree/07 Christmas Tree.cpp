// 07 Christmas Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define SPACE " "
#define NEW_LINE "\r\n"
#define STAR "*"
#define STEM " | "

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    for (int i = 0; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            output.append(SPACE);
        }

        for (int j = 1; j < i + 1; j++)
        {
            output.append(STAR);
        }

        output.append(STEM);

        for (int j = 1; j < i + 1; j++)
        {
            output.append(STAR);
        }
        output.append(NEW_LINE);
    }

    cout << output;
}

//Напишете програма, която чете число n (1 ≤ n ≤ 100), въведено от потребителя, и печата коледна елха с размер n като в примерите по-долу:
//Примерен вход и изход
//вход	изход		вход	изход		вход	изход		вход	изход
//1	  |
//* | *		2	   |
// * | *
//** | **		3	    |
//  * | *
// ** | **
//*** | ***		4	     |
//   * | *
//  ** | **
// *** | ***
//**** | ****
//Подсказки: 
//•	В цикъл за i от 0 до n печатайте (за лявата част на елхата):
//o n-i интервала; n звездички; вертикална черта.
//•	Аналогично довършете дясната част на елхата.
