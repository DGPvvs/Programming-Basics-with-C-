// 04 Transport Price.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string DAY = "day";

    string input;
    getline(cin, input);
    int n = stoi(input);

    string period;
    getline(cin, period);

    double tax = .7;

    if (period == DAY)
    {
        tax += .79 * n;
    }
    else
    {
        tax += .9 * n;
    }

    if (n >= 20)
    {
        if (tax > .09 * n)
        {
            tax = .09 * n;
        }
    }

    if (n >= 100)
    {
        if (tax > .06 * n)
        {
            tax = .06 * n;
        }
    }

    string output = string().append(FormatDoubleNum(tax, 2));

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

//������� ������ �� ��������� n ���������. ��� ��� ����� ������� ��� ���� ���������:
//�	�����.������� �����: 0.70 ��.������ ������: 0.79 ��. / ��.����� ������: 0.90 ��. / ��.
//�	�������.������ / ����� ������: 0.09 ��. / ��.���� �� �� �������� �� ���������� ������� 20 ��.
//�	����. ������ / ����� ������: 0.06 ��. / ��.���� �� �� �������� �� ���������� ������� 100 ��.
//�������� ��������, ����� ������� ���� ��������� n � ������ �� ���� (��� ��� ���) � ��������� ������ �� ���-������� ���������.
//����
//�� ��������� �� ����� ��� ����:
//�	������� ��� ������� ������� n � ���� ��������� � ���� ����� � ��������� [1�5000]
//�	������� ��� ������� ���� �day� ��� �night� � �������� ���� ���� ��� ���� �����
//�����
//�� �� �������� �� ��������� ���-������� ���� �� ��������� ���� ���������, ����������� �� ������ ���� ���� ���������� ����������.