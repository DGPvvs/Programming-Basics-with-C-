// 06 Fishland.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const double Bonito = 1.6;
    const double Safrid = 1.8;
    const double Mussels = 7.5;

    string input;
    getline(cin, input);
    double mackerelPrice = stod(input);

    getline(cin, input);
    double spratPrice = stod(input);

    getline(cin, input);
    double weightBonito = stod(input);

    getline(cin, input);
    double weightSafrid = stod(input);

    getline(cin, input);
    int weightMussels = stoi(input);

    double tottalSum = weightMussels * Mussels + weightSafrid * Safrid * spratPrice + weightBonito * Bonito * mackerelPrice;

    string output = string(FormatDoubleNum(tottalSum, 2));

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

//������ �� ��� ����� ������� � ������ �� �� ������� � �������, ������ � ����. ������ ����� �� ������� �����, �� �� �� ���� �� ������� ���������. O� ��������� �� �������� ������ � ���� �� ��������� � ������. ���� ������������ �� �������, ������ � ���� � ���������. ����� ���� �� �� �� ����������, �� �� ����� �������� ��, ��� ������ �� ������� ��:
//�	������� � 60 % �� - ���� �� ���������
//�	������ � 80% ��-���� �� ������
//�	���� � 7.50 ��. �� ��������
//����
//�� ��������� �� ����� 5 �����:
//�	����� ��� � ���� �� ��������� �� ��������. ������ ����� � ��������� [0.00�40.00]
//�	����� ��� � ���� �� ������ �� ��������. ������ ����� � ��������� [0.00�30.00]
//�	����� ��� � ��������� �������. ������ ����� � ��������� [0.00�50.00]
//�	�������� ��� � ��������� ������. ������ ����� � ��������� [0.00� 70.00]
//�	���� ��� � ��������� ����. ���� ����� � ��������� [0 ... 100]
//�����
//�� �� �������� �� ��������� ���� ����� � ������� �������: ����� ���� �� �� ����� �� ������, �� �� �� ����� ��������. ������� ������ �� � ����������� �� ������� ���� ���� ����������� ������� (1.2457 -> 1.25).
