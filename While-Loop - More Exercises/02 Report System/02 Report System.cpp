// 02 Report System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

enum StrFlags
{
    TOLOWER = 0b00000000000000000000000000000001,
    TOUPPER = 0b00000000000000000000000000000010,
    LOWEROROPPER = TOLOWER | TOUPPER,
    ALLFLAGS = 0b11111111111111111111111111111111
};

#define NEW_LINE "\r\n"

string ConvertString(string, StrFlags);
string FormatDoubleNum(double, int);

int main()
{
    const string END = "end";

    string input;
    getline(cin, input);
    int requiredAmount = stoi(input);

    bool isExitLoop = false;
    int countCS = 0;
    int countCC = 0;
    int sumCS = 0;
    int sumCC = 0;
    bool isCS = true;
    string output = string();

    while (!isExitLoop)
    {
        string s;
        getline(cin, s);
        s = ConvertString(s, TOLOWER);

        if (s == END)
        {
            isExitLoop = true;
            output.append("Failed to collect required money for charity.")
                  .append(NEW_LINE);
        }
        else
        {
            int price = stoi(s);
            bool isSold = false;
            switch (isCS)
            {
                case true:
                    if (price <= 100)
                    {
                        countCS++;
                        sumCS += price;
                        isSold = true;
                        requiredAmount -= price;
                    }

                    isCS = false;
                    break;
                case false:
                    if (price >= 10)
                    {
                        countCC++;
                        sumCC += price;
                        isSold = true;
                        requiredAmount -= price;
                    }

                    isCS = true;
                    break;
            }

            if (isSold)
            {
                output.append("Product sold!")
                      .append(NEW_LINE);
            }
            else
            {
                output.append("Error in transaction!")
                      .append(NEW_LINE);
            }

            if (requiredAmount <= 0)
            {
                isExitLoop = true;
            }
        }
    }

    if (requiredAmount <= 0)
    {
        output.append("Average CS: ")
              .append(FormatDoubleNum((1.0 * sumCS / countCS), 2))
              .append(NEW_LINE)
              .append("Average CC: ")
              .append(FormatDoubleNum((1.0 * sumCC / countCC), 2))
              .append(NEW_LINE);
    }

    cout << output;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}


string ConvertString(string str, StrFlags flag)
{
    string s = string();

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

    return "";
}

//�� ��������������� ������� ���������� �� ���������� �������� ������ �� �������: ������� � ���� � ������� � �����. ���������� �� �������� ������� �� ���������:
//�	��� ��������� ��������� 100��., �� ���� �� ���� �� �� ����� � ����
//�	��� ��������� � �� ���� ��� 10��., �� ���� �� ���� �� �� ����� � �������� �����
//���������� ��������� ��� ���� ���� ������� ������� "End" ��� ���� ���� ���������� ����� �������.
//����
//�� ��������� �� �����:
//�	������, ����� �� ������ �� ���� ������� �� ���������� - ���� ����� � ��������� [1 ... 10000]
//�� ����� ������� ���, �� ���������� �� ��������� "End" ��� ������ �� �� ������� ������� ��������: ������ �� ����������, ����� �� ����� �������� - ���� ����� � ��������� [1 ... 500]
//�����
//�� ��������� �� �� ��������:
//�	��� ������� ����������: "Product sold!"
//�	��� ��������� ����������: "Error in transaction!"
//�	��� ������ �� ������ �������� �������� ������� ��� �������� ���������� ����, ���������� ������ �� �������� � �� ��������� �� �� ������� ��� ����:
//o "Average CS: {������ ������� � ��� �� �����}"
//o "Average CC: {������ ������� � ����� �� �����}"

//			  ���������� ������ �� ����� ����������� �� ������� ����� ���� ���������� ����.
//�	��� ���������� �� ������� "End", �� �� ������ ���� ���:
//o "Failed to collect required money for charity."
