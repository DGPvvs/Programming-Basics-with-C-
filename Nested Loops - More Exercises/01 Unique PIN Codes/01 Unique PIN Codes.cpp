// 01 Unique PIN Codes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int firstNum = stoi(input);

    getline(cin, input);
    int secondNum = stoi(input);

    getline(cin, input);
    int thirdNum = stoi(input);

    string output = EMPTY;

    for (int i = 1; i <= firstNum; i++)
    {
        if ((i % 2) == 0)
        {
            for (int j = 1; j <= secondNum; j++)
            {
                bool isSimple = ((j == 2) || (j == 3) || (j == 5) || (j == 7));

                if (isSimple)
                {
                    for (int k = 1; k <= thirdNum; k++)
                    {
                        if ((k % 2) == 0)
                        {
                            output.append(to_string(i))
                                .append(SPACE)
                                .append(to_string(j))
                                .append(SPACE)
                                .append(to_string(k))
                                .append(NEW_LINE);
                        }
                    }
                }
            }
        }
    }

    cout << output;

    return 0;
}

//Да се напише програма, която генерира трицифрени PIN кодове, като цифрите на всеки PIN код са в определен интервал.
//За да бъде валиден един PIN код той трябва да отговаря на следните условия:
//•	Първата и третата цифра трябва да бъдат четни.
//•	Втората цифра трябва да бъде просто число в диапазона [2...7].
//Вход
//От конзолата се четат 3 реда:
//•	Горната граница на първото число - цяло число в диапазона [1...9]
//•	Горната граница на второто число - цяло число в диапазона [1...9]
//•	Горната граница на третото число - цяло число в диапазона [1...9]
//Изход
//Да се отпечатат на конзолата всички валидни трицифрени PIN кодове, чиито цифри отговарят на съответните интервали.
