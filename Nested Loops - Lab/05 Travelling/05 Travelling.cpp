// 05 Travelling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum StrFlags
{
    TOLOWER = 0b00000000000000000000000000000001,
    TOUPPER = 0b00000000000000000000000000000010,
    LOWEROROPPER = TOLOWER | TOUPPER,
    ALLFLAGS = 0b11111111111111111111111111111111
};

#define EMPTY ""
#define NEW_LINE "\r\n"

string convertstring(string str, StrFlags flag)
{
    string s = EMPTY;

    const StrFlags LU = LOWEROROPPER;
    const StrFlags LOW = TOLOWER;
    const StrFlags UPP = TOUPPER;

    bool caseConvert = ((flag & LOWEROROPPER) == TOLOWER) || ((flag & LOWEROROPPER) == TOUPPER);

    if (caseConvert)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if ((flag & TOLOWER) == LOW)
            {
                s.append(1, tolower(str[i]));
            }

            if ((flag & TOUPPER) == UPP)
            {
                s.append(1, toupper(str[i]));
            }
        }

        return s;
    }

    return EMPTY;
}

bool tryparsedouble(string num)
{
    try
    {
        double n = stod(num);
    }

    catch (exception& e)
    {
        return false;
    }

    return true;
}



int main()
{
    const string End = "end";

    bool isLoopExit = false;

    string output = EMPTY;
    string destination = EMPTY;
    double budget = .0;
    bool isEnough = false;

    do
    {
        string input;
        getline(cin, input);

        double number = .0;

        string inputToLower = convertstring(input, TOLOWER);

        if (inputToLower == End)
        {
            isLoopExit = true;
        }
        else
        {
            bool isNumber = tryparsedouble(input);
            if (!isNumber)
            {
                destination = input;

                string budgerAsString;
                getline(cin, budgerAsString);
                budget = stod(budgerAsString);
                isEnough = false;
            }
            else
            {
                number = stod(input);

                budget -= number;
                if (budget <= 0 && !isEnough)
                {
                    output.append("Going to ")
                          .append(destination)
                          .append("!")
                          .append(NEW_LINE);
                    isEnough = true;
                }
            }
        }
    } while (!isLoopExit);

    cout << output;
}

//Ани обича да пътува и иска тази година да посети няколко различни дестинации.
//Като си избере дестинация, ще прецени колко пари ще й трябват, за да отиде до там и ще започне да спестява.
//Когато е спестила достатъчно, ще може да пътува.
//От конзолата всеки път ще се четат първо дестинацията и минималния бюджет, който ще е нужен за пътуването. 
//След това ще се четат няколко суми, които Ани спестява като работи и когато успее да събере достатъчно за пътуването, ще заминава, като на конзолата трябва да се изпише:
// "Going to {дестинацията}!" 
//Когато е посетила всички дестинации, които иска, вместо дестинация ще въведе "End" и програмата ще приключи.
