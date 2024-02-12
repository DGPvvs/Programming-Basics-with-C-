// 07 Football League.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

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
#define PERSENT "%"

string ConvertString(string, StrFlags);
string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int capacityStadium = stoi(input);

    getline(cin, input);
    int numberFans = stoi(input);

    int countA, countB, countV, countG;
    countA = countB = countV = countG = 0;

    for (int i = 1; i <= numberFans; i++)
    {
        string sector;
        getline(cin, sector);
        sector = ConvertString(sector, TOLOWER);

        if (sector == "a")
        {
            countA++;
        }
        else if (sector == "b")
        {
            countB++;
        }
        else if (sector == "v")
        {
            countV++;
        }
        else
        {
            countG++;
        }
    }

    string percentNewLine = string().append(PERSENT).append(NEW_LINE);

    string output = string().append(FormatDoubleNum(((countA * 100.0) / (1.0 * numberFans)), 2))
                            .append(percentNewLine)
                            .append(FormatDoubleNum(((countB * 100.0) / (1.0 * numberFans)), 2))
                            .append(percentNewLine)
                            .append(FormatDoubleNum(((countV * 100.0) / (1.0 * numberFans)), 2))
                            .append(percentNewLine)
                            .append(FormatDoubleNum(((countG * 100.0) / (1.0 * numberFans)), 2))
                            .append(percentNewLine)
                            .append(FormatDoubleNum(((numberFans * 100.0) / (1.0 * capacityStadium)), 2))
                            .append(PERSENT);

    cout << output << endl;
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

    return EMPTY;
}


string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//������ �� ������� �� ���������� �������� ������.
//������������ ��������� �� ��������� ���������� �� �������� � ����� �� ������ ������.
//���� ���� �� ����� ��� �� ���� ��������, � ����� �� ������.
//�������� �� ������ ����� �� � ������ � � �, � �� ������ � � � �.
//�� �� ������ ��������, ����� ��������� ���������� �� �������� ��� ����� ������, ������ ����� ���� ������ �� ��������,
//����� � ������ ������� �� �������� �� ����� ������, ������ ���������� �� ��������.
//������ ���� �� �������� �� ��������� ���������� �� ��������.
//����
//�� ��������� �� ����� �������� �� �����, ����� �� ������� ���:
//1.����������� �� �������� � ���� ����� � ��������� [1 � 10000];
//2.����� �� ������ ������ � ���� ����� � ��������� [1 � 10000].
//�� ����� ���� ���, �� ������� ��� �� �������:
//1.��������, �� ����� �� ������ � ����� � "A", "B", "V" � "G".
//�����
//�� �� ��������� �� ��������� 5 ����, ����� �� ����� ������� ������� ����� 0.00% � 100.00%, ����������� �� ������� ����� ���� ����������� �������:
//1.��������� �� �������� � ������ �
//2.	��������� �� �������� � ������ �
//3.	��������� �� �������� � ������ �
//4.	��������� �� �������� � ������ �
//5.	��������� �� ������ ������, ������ ���������� �� ��������.
