// 06 Flower Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    const double Magnolias = 3.25;
    const double Hyacinths = 4.0;
    const double Roses = 3.5;
    const double Cacti = 8.0;

    string input;
    getline(cin, input);
    int countMagnolias = stoi(input);

    getline(cin, input);
    int countHyacinths = stoi(input);

    getline(cin, input);
    int countRoses = stoi(input);

    getline(cin, input);
    int countCacti = stoi(input);

    getline(cin, input);
    double praceGift = stod(input);

    double diff = (countMagnolias * Magnolias + Hyacinths * countHyacinths + Roses * countRoses + countCacti * Cacti) * .95 - praceGift;

    string output = string();

    if (diff >= 0)
    {
        output.append("She is left with ")
              .append(FormatDoubleNum(floor(diff), 0))
              .append(" leva.");
    }
    else
    {
        output.append("She will have to borrow ")
              .append(FormatDoubleNum(ceil((-1) * diff), 0))
              .append(" leva.");
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

//����� ���� �� ���� ������� �� ���� ��. �� ������ � ������� �� �����. � �������� ���� ������� �� �����. �������� ��������, ����� �������� ������ �� ��������� � ���� ��������� � ���������� �� ��������. ������� ���� �������� ����:

//�	�������� � 3.25 ����
//�	������� � 4 ����
//�	���� � 3.50 ����
//�	������� � 8 ����
//�� ������ ����, ����� ������ �� ����� 5% ������.


//����
//������ �� ���� �� ��������� � �� ������ �� 5 ����:
//�	���� �������� � ���� ����� � ��������� [0 � 50]
//�	���� ������� � ���� ����� � ��������� [0 � 50]
//�	���� ���� � ���� ����� � ��������� [0 � 50]
//�	���� ������� � ���� ����� � ��������� [0 � 50]
//�	���� �� �������� � ������ ����� � ��������� [0.00 � 500.00]
//�����
//�� ��������� ������ �� �� �������� ���� ���.
//�	��� ������ �� ��������: "She is left with {��������} leva." � ������ ������ �� � ���������� ��� ��-����� ���� ����� (��. 1.90 -> 1).
//�	��� ������ �� ��������: "She will have to borrow {��������} leva." � ������ ������ �� � ���������� ��� ��-������ ���� ����� (��. 1.10 -> 2).
