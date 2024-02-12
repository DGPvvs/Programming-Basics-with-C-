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

//��� ����� �� ������ � ���� ���� ������ �� ������ ������� �������� ����������.
//���� �� ������ ����������, �� ������� ����� ���� �� � �������, �� �� ����� �� ��� � �� ������� �� ��������.
//������ � �������� ����������, �� ���� �� ������.
//�� ��������� ����� ��� �� �� ����� ����� ������������ � ���������� ������, ����� �� � ����� �� ����������. 
//���� ���� �� �� ����� ������� ����, ����� ��� �������� ���� ������ � ������ ����� �� ������ ���������� �� ����������, �� ��������, ���� �� ��������� ������ �� �� ������:
// "Going to {������������}!" 
//������ � �������� ������ ����������, ����� ����, ������ ���������� �� ������ "End" � ���������� �� ��������.
