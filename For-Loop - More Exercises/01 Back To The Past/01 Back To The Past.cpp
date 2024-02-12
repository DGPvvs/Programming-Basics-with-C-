// 01 Back To The Past.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    double inheritedMoney = stod(input);

    getline(cin, input);
    int year = stoi(input);

    int age = 18;

    for (int i = 1800; i <= year; i++)
    {
        inheritedMoney = (i % 2) == 0
            ? inheritedMoney - 12000
            : inheritedMoney - (12000 + (50 * age));

        age++;
    }

    string output = string();

    if (inheritedMoney >= 0)
    {
        output.append("Yes! He will live a carefree life and will have ")
              .append(FormatDoubleNum(inheritedMoney, 2))
              .append(" dollars left.");
    }
    else
    {
        inheritedMoney *= (-1.0);
        output.append("He will need ")
              .append(FormatDoubleNum(inheritedMoney, 2))
              .append(" dollars to survive.");
    }

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//������ � �� 18 ������ � �������� ����������, ����� �� ������ �� X ���� ���� � ������ �� �������.
//��� ������ �� �� ����� �� 1800 ������, �� �� ���� ���� ������ �� �� ����������, �� �� ����� ��� �� ������.
//�������� ��������, ����� ��������, ���� ������ �� ��� ���������� ����, �� �� �� �� ������ �� ������ �� ������ ������ �����������.
//���� �������, �� �� ����� ����� (1800, 1802 � �.�.) ������ �� ����� 12 000 ����.
//�� ����� ������� (1801,1803  � �.�.) �� ����� 12 000 + 50 * [��������, ����� � �������� ���� �������� ������].
//����
//������ �� ���� �� ��������� � ������� ����� 2 ����:
//�	����������� ���� � ������ ����� � ��������� [1.00 ... 1 000 000.00]
//�	��������, �� ����� ������ �� ����� (�����������) � ���� ����� � ��������� [1801 ... 1900]
//�����
//�� �� �������� �� ��������� 1 ���. ������ ������ �� � ����������� �� ��� ����� ���� ����������� �������:
//�	��� ������ �� ����������:
//o "Yes! He will live a carefree life and will have {N} dollars left." � ������ N �� ������, ����� �� �� �������.
//�	��� ������ �� �� ����������:
//o "He will need {�} dollars to survive." � ������ M � ������, ����� �� �������.