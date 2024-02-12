// 05 Account Balance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<sstream>

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

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}


int main()
{
    const string NoMoreMoney = "nomoremoney";

    const string InvalidOperation = "Invalid operation!";

    double sum = .0;

    bool isLoopExit = false;
    string sb = EMPTY;

    while (!isLoopExit)
    {
        string input;
        getline(cin, input);

        input = convertstring(input, TOLOWER);

        if (input == NoMoreMoney)
        {
            isLoopExit = true;
        }
        else
        {
            double income = stod(input);

            if (income < 0)
            {
                sb.append(InvalidOperation)
                    .append(NEW_LINE);

                isLoopExit = true;
            }
            else
            {
                sum += income;

                sb.append("Increase: ")
                    .append(formatDoubleNum(income, 2))
                    .append(NEW_LINE);
            }
        }
    }

    sb.append("Total: ")
        .append(formatDoubleNum(sum, 2))
        .append(NEW_LINE);

    cout << sb << endl;
}

//�������� ��������, ����� �������� ����� ���� ���� ��� � ��������, ���� ���� ��������� ��������� ���� ������.
//�� ����� ��� �� ���������� ������, ����� ������ �� ������� � ��������, �� ���������� �� ������� "NoMoreMoney".
//��� ����� �������� ���� �� ��������� ������ �� �� ������� "Increase: " + ������ � �� �� �� ������� � ��������.
//��� �������� ����� ��-����� �� 0 �� ��������� ������ �� �� ������ "Invalid operation!" � ���������� �� ��������.
//������ ���������� �������� ������ �� �� �������� "Total: " + ������ ���� � �������� ����������� �� ������ ���� ���� ����������� �������. 