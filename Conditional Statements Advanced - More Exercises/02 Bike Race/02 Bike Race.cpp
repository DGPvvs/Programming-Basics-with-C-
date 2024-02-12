// 02 Bike Race.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string TRAIL = "trail";
    const string CROSS_COUNTRY = "cross-country";
    const string ROAD = "road";

    string input;
    getline(cin, input);
    int juniorsCount = stoi(input);

    getline(cin, input);
    int seniorsCount = stoi(input);

    string traceType;
    getline(cin, traceType);

    double price = .0;

    if (traceType == TRAIL)
    {
        price = juniorsCount * 5.5 + seniorsCount * 7.0;
    }
    else if (traceType == CROSS_COUNTRY)
    {
        price = juniorsCount * 8.0 + seniorsCount * 9.5;

        if (juniorsCount + seniorsCount >= 50)
        {
            price *= .75;
        }
    }
    else if (traceType == ROAD)
    {
        price = juniorsCount * 20.0 + seniorsCount * 21.5;
    }
    else
    {
        price = juniorsCount * 12.25 + seniorsCount * 13.75;
    }

    price = price * .95;

    string output = string().append(FormatDoubleNum(price, 2));

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

//�������� ���� ���������� �� ����������������� � ����� ����������� �� ������������ � ������("juniors") � ������("seniors") �����.������ �� ������� �� ������� �� ������� �� ���������������. ������ ������������ ����� � ���� �� ������� �� ����� �� �� �������� ������������, ������� � ��������.
//�����	    trail	cross-country	downhill	road
//juniors	    5.50	8	            12.25	    20
//seniors	    7	    9.50	        13.75	    21.50
//��� � "cross-country" ������������ �� ������� 50 ��� ������ ���������(���� ������ � ������), ������� �������� � 25%. �������������� ������� 5% �������� �� ��������� ���� �� �������.
//����
//�� ��������� �� ����� 2 ����� � ���� ������, ����� �� ������� ���:
//�	������� ��� � ����� ������ �������������. ���� ����� � ��������� [1�100]
//�	������� ��� � ����� ������ �������������. ���� ����� � ��������� [1� 100]
//�	������� ��� � ��� ����� � "trail", "cross-country", "downhill" ��� "road"
//�����
//�� �� �������� �� ��������� ���� �����:
//"{�������� ����}" - ����������� � ������� �� 2 ����� ���� ����������� �������.
