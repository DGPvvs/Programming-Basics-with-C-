// 06 Bills.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int months = stoi(input);

    double sumElectrisity = 0;
    double sumOther = 0;

    for (int i = 1; i <= months; i++)
    {
        string input;
        getline(cin, input);
        double electricityBill = stod(input);

        sumElectrisity += electricityBill;
        sumOther += (electricityBill + 35) * 1.2;

    }

    double sumWater = months * 20.0;
    double sumIntrnet = months * 15.0;

    string lvNewLine = string().append(" lv").append(NEW_LINE);

    string output = string().append("Electricity: ")
                            .append(FormatDoubleNum(sumElectrisity, 2))
                            .append(lvNewLine)
                            .append("Water: ")
                            .append(FormatDoubleNum(sumWater, 2))
                            .append(lvNewLine)
                            .append("Internet: ")
                            .append(FormatDoubleNum(sumIntrnet, 2))
                            .append(lvNewLine)
                            .append("Other: ")
                            .append(FormatDoubleNum(sumOther, 2))
                            .append(lvNewLine)
                            .append("Average: ")
                            .append(FormatDoubleNum(((sumElectrisity + sumWater + sumIntrnet + sumOther) / months), 2))
                            .append(lvNewLine);

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

//�������� �������� ����� �� �������� �������� ������ �� ����� �� ��������� �� ����� ������ �����. �� ����� ����� ��������� �� ��������:
//�	�� ��� � ����� ����� � ��������, �� �� ���� �� ���������
//�	�� ���� � 20 ��.
//�	�� �������� � 15 ��.
//�	�� ����� � ������� �� ����, ������ � ��������� �� ������ � ��� ������ �� �������� 20%.
//�� ����� ������ ������ �� �� ��������� ����� ���� � ������� �� ������ ������.
//����
//������ �� ���� �� ���������:
//�	����� ��� � �������� �� ����� �� ����� �������� ������ � ���� ����� � ��������� [1...100]
//�	�� ����� ����� � �������� �� ��� � ������ ����� � ��������� [1.00...1000.00]
//�����
//�� �� �������� �� ��������� 5 ����:
//�	1�� ���: "Electricity: {��� �� ������ ������} lv"
//�	2�� ���: "Water: {���� �� ������ ������} lv"
//�	3�� ���: "Internet: {�������� �� ������ ������} lv"
//�	4�� ���: "Other: {����� �� ������ ������} lv"
//�	5�� ���: "Average: {������ ������ ������� �� �����} lv"
//������ ����� ������ �� �� ����������� �� ������� ���� ���� ���������.
