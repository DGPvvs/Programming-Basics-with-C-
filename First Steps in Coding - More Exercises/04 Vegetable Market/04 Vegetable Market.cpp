// 04 Vegetable Market.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const double EuroToLv = 1.94;

    string input;
    getline(cin, input);
    double pricePerKgVigitable = stod(input);

    getline(cin, input);
    double pricePerKgFruct = stod(input);

    getline(cin, input);
    int valueVegitable = stoi(input);

    getline(cin, input);
    int valueFruct = stoi(input);

    string output = string().append(FormatDoubleNum((pricePerKgVigitable * valueVegitable + pricePerKgFruct * valueFruct) / EuroToLv, 2));

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

//�������� �������� ��������� �� ��������� �� �� ������������� �����. ������� ��������� �� N ���� �� �������� � ������� �� M ���� �� ��������. �������� ��������, ����� �� �������� ��������� �� ��������� � ���� ( ��� �������, �� ���� ���� � ����� �� 1.94��).
//����
//�� ��������� �� ����� 4 �����, �� ���� �� ���:
//�	����� ��� � ���� �� �������� ��������� � ������ �����[0.00� 1000.00]
//�	����� ��� � ���� �� �������� ������� � ������ �����[0.00� 1000.00]
//�	����� ��� � ���� ��������� �� ����������� � ���� �����[0� 1000]
//�	�������� ��� � ���� ��������� �� ��������� � ���� �����[0� 1000]
//�����
//�� �� �������� �� ��������� ���� �����: ��������� �� ������ ������� � ��������� � ����.
//��������� �� �� ��������� �� ������ ���� ���� ���������� ����������.