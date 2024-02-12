// 03 Flowers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);
bool Contains(string, string);

int main()
{
    const string SPRING_SUMMER = "SpringSummer";
    const string WINTER = "Winter";
    const string SPRING = "Spring";
    const char YES = 'Y';

    string input;
    getline(cin, input);
    int chrysanthemumsCount = stoi(input);

    getline(cin, input);
    int rosesCout = stoi(input);

    getline(cin, input);
    int tulipsCout = stoi(input);
        
    string season;
    getline(cin, season);

    getline(cin, input);
    char isHolly = input[0];

    double price = .0;

    if (Contains(SPRING_SUMMER, season))
    {
        price = chrysanthemumsCount * 2.0 + rosesCout * 4.1 + tulipsCout * 2.5;
    }
    else
    {
        price = chrysanthemumsCount * 3.75 + rosesCout * 4.5 + tulipsCout * 4.15;
    }

    if (isHolly == YES)
    {
        price *= 1.15;
    }

    if (season == SPRING && tulipsCout > 7)
    {
        price *= .95;
    }

    if (season == WINTER && rosesCout > 9)
    {
        price *= .9;
    }

    if (chrysanthemumsCount + rosesCout + tulipsCout > 20)
    {
        price *= .8;
    }

    string output = string().append(FormatDoubleNum((price + 2), 2));

    cout << output << endl;
}

bool Contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//������� �� ����� �������� 3 ���� �����: ����������, ���� � ������. ������ ������� �� ������.
//�����	        ����������	    ����	        ������
//������ / ����	2.00 ��./��.	4.10 ��./��.	2.50 ��./��.
//���� / ����	    3.75 ��./��.	4.50 ��./��.	4.15 ��./��.
//� ��������� ��� ������ �� ������ ����� �� ���������� � 15%. ��������� �� �������� ��������:
//�	�� �������� ������ �� 7 ������ ���� �������� � 5% �� ������ �� ������ �����.
//�	�� �������� 10 ��� ������ ���� ���� ������ � 10% �� ������ �� ������ �����.
//�	�� �������� ������ �� 20 ����� ���� ���� ������ ������ � 20% �� ������ �� ������ �����.
//���������� �� ������ �� ���� ��������� ��� � ����� �� �� ���������! ������ �������� ����� ���� ������������ �� ��������� ���!
//������ �� ���������� �� ������ ������ � 2��. �������� ��������, ����� ��������� ������ �� ���� �����.
//����
//������ �� ���� �� ��������� � ������� ����� 5 ����:
//�	�� ������ ��� � ����� �� ���������� ���������� � ���� ����� � ��������� [0 ... 200]
//�	�� ������ ��� � ����� �� ���������� ���� � ���� ����� � ��������� [0 ... 200]
//�	�� ������ ��� � ����� �� ���������� ������ � ���� ����� � ��������� [0 ... 200]
//�	�� ��������� ��� � ������� ������ � [Spring, Summer, �utumn, Winter]
//�	�� ����� ��� � �������� ���� ����� � ������� � [Y � �� / N - ��]
//�����
//�� �� �������� �� ��������� 1 ����� � ������ �� �������, ����������� �� ������� ���� ���� ����������� �������.