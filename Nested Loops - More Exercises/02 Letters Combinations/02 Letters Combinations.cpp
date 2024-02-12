// 02 Letters Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    char startChar = input[0];

    getline(cin, input);
    char endChar = input[0];

    getline(cin, input);
    char omittedChar = input[0];

    int count = 0;

    string output = EMPTY;

    for (char firstchar = startChar; firstchar <= endChar; firstchar++)
    {
        if (firstchar != omittedChar)
        {
            for (char secondchar = startChar; secondchar <= endChar; secondchar++)
            {
                if (secondchar != omittedChar)
                {
                    for (char thirdchar = startChar; thirdchar <= endChar; thirdchar++)
                    {
                        if (thirdchar != omittedChar)
                        {
                            output.append(1, firstchar)
                                .append(1, secondchar)
                                .append(1, thirdchar)
                                .append(SPACE);

                            count++;
                        }
                    }
                }
            }
        }
    }

    output.append(to_string(count)).append(NEW_LINE);

    cout << output;

    return 0;
}

//Напишете програма, която да принтира на конзолата всички комбинации от 3 букви в зададен интервал, като се пропускат комбинациите съдържащи зададена от конзолата буква.
//Накрая трябва да се изпринтира броят на отпечатаните комбинации.
//Вход
//Входът се чете от конзолата и съдържа точно 3 реда:
//Ред 1.Малка буква от английската азбука за начало на интервала – от ‘a’ до ‚z’.
//Ред 2.	Малка буква от английската азбука за край на интервала  – от първата буква до ‚z’.
//Ред 3.	Малка буква от английската азбука – от ‘a’ до ‚z’ – като комбинациите съдържащи тази буквата се пропускат.
//Изход
//Да се отпечатат на един ред всички комбинации отговарящи на условието плюс броят им разделени с интервал.
