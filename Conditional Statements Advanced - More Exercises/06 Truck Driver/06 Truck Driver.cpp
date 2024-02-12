// 06 Truck Driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string SUMMER = "Summer";
    const string WINTER = "Winter";
    const double TAX = 1 - .1;

    string season;
    getline(cin, season);


    string input;
    getline(cin, input);
    double kmPerMount = stod(input);

    double profit = 1.45 * kmPerMount;

    if (kmPerMount <= 5000)
    {
        if (season == WINTER)
        {
            profit = 1.05 * kmPerMount;
        }
        else if (season == SUMMER)
        {
            profit = .9 * kmPerMount;
        }
        else
        {
            profit = .75 * kmPerMount;
        }
    }
    else if (kmPerMount <= 10000)
    {
        if (season == WINTER)
        {
            profit = 1.25 * kmPerMount;
        }
        else if (season == SUMMER)
        {
            profit = 1.1 * kmPerMount;
        }
        else
        {
            profit = .95 * kmPerMount;
        }
    }

    profit *= TAX * 4;

    cout << FormatDoubleNum(profit, 2) << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//�������� �������� ����� �������� ����� ���� �� ������ ������ �� ��� �� ���� �����. �� ����� ���������� �������� ���� ��� ����� �� ������ �������, ����� � ����� ��������� �� ����� �� ����. ���� ����� � 4 ������. ������ ������ ������ � ���� ��������� �� ����� �� �� �� ������� �������� ���� �� ���������:

//	                                ������ / ����   ����            ����
//�� �� ����� <= 5000	                0.75 ��./��	    0.90 ��./��	    1.05 ��./��
//5000 < �� �� ����� <= 10000	        0.95 ��./��	    1.10 ��./��	    1.25 ��./��
//10000 < �� �� ����� <= 20000	    1.45 ��./�� � �� ����� � �� � �����

//���� ���� �� �������� 10% �� ������ �� ���������� ���������� ����.
//����
//������ �� ���� �� ��������� � �� ������ �� ��� ����:
//�	����� ��� � ����� � ����� "Spring", "Summer", "Autumn" ��� "Winter"
//�	����� ��� �  ��������� �� ����� � ������ ����� � ��������� [10.00...20000.00]
//�����
//�� ��������� ������ �� �� ��������� ���� �����:
//�	��������� �� ������� ���� ��������, ����������� �� ������ ���� ���� ����������� �������.
