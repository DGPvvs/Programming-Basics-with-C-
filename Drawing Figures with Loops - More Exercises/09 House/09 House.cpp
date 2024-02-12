// 09 House.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"
#define ASTERISK '*'
#define VERTICAL_LINE '|'
#define DASH '-'

string setString(int, int, char);

int main()
{
    string input;
    getline(cin, input);

    int n = stoi(input);

    string output = string();

    if (n == 2)
    {
        output.append(setString(1, 2, ASTERISK))
            .append(NEW_LINE)
            .append(setString(1, 2, VERTICAL_LINE));
    }
    else
    {
        int star = n;
        int dash = ((n + 1) / 2) - 1;

        if ((star % 2) == 0)
        {
            star = 2;
        }
        else
        {
            star = 1;
        }

        for (int i = 1; i < (n + 1) / 2; i++)
        {
            if (star < n)
            {
                output.append(setString(1, dash, DASH));
            }

            output.append(setString(1, star, ASTERISK));

            if (star < n)
            {
                output.append(setString(1, dash, DASH));
            }

            star += 2;
            dash--;

            output.append(NEW_LINE);
        }

        output.append(setString(1, n, ASTERISK))
            .append(NEW_LINE);

        for (int i = 1; i <= (n / 2); i++)
        {
            output.append(setString(1, 1, VERTICAL_LINE))
                .append(setString(1, (n - 2), ASTERISK))
                .append(setString(1, 1, VERTICAL_LINE))
                .append(NEW_LINE);
        }
    }

    cout << output;

    return 0;
}

string setString(int start, int end, char simbol)
{
    string result = string();

    for (int i = start; i <= end; i++)
    {
        result.append(1, simbol);
    }

    return result;
}

//Напишете програма, която чете число n (2 ≤ n ≤ 100), въведено от потребителя, и печата къщичка с размер n x n:
//Примерен вход и изход
//вход	изход		вход	изход		вход	изход		вход	изход		вход	изход
//2	**
//||		3	-*-
//***
//|*|		4	-**-
//****
//|**|
//|**|		5	--*--
//-***-
//*****
//|***|
//|***|		6	--**--
//-****-
//******
//|****|
//|****|
//|****|
//Подсказки:
//•	Отпечатайте в цикъл покрива на къщичката:
//o Той съдържа (n + 1) / 2 реда.
//o На първия си ред съдържа 1 звездичка при нечетно n или 2 звездички при четно n.
//o	На всеки следващ ред съдържа с 2 звездички повече.
//•	Отпечатайте в цикъл основата на къщичката: n / 2 - 1 реда.
