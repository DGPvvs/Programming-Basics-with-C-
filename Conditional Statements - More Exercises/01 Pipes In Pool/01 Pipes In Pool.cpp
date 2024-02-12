// 01 Pipes In Pool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"

string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    int v = stoi(input);

    getline(cin, input);
    int p1 = stoi(input);

    getline(cin, input);
    int p2 = stoi(input);

    getline(cin, input);
    double h = stod(input);

    double v1 = p1 * h;
    double v2 = p2 * h;
    double vPipes = v1 + v2;

    double diff = v - vPipes;

    string output = string();

    if (diff >= 0)
    {
        output.append("The pool is ")
              .append(FormatDoubleNum((vPipes * 100 / v), 2))
              .append("% full. Pipe 1: ")
              .append(FormatDoubleNum((v1 * 100 / vPipes), 2))
              .append("%. Pipe 2: ")
              .append(FormatDoubleNum((v2 * 100 / vPipes), 2))
              .append("%.")
              .append(NEW_LINE);
    }
    else
    {
        output.append("For ")
              .append(FormatDoubleNum(h, 2))
              .append(" hours the pool overflows with ")
              .append(FormatDoubleNum(((-1.0) * diff), 2))
              .append(" liters.")
              .append(NEW_LINE);
    }

    cout << output ;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//������ � ���� V ��� ��� ����� �� ����� �� �����. ����� ����� ��� ��������� ����� (������� ���� �������� ���� ���� ����� �� ���� ���). ���������� ����� ������� ������������ � ������ �� N ����. �������� ��������, ����� ������� ����������� �� �������, � �������, ������ ���������� �� �����. 
//����
//�� ��������� �� ����� ������ ����:
//�	������� ��� ������� ������� V � ���� �� ������� � ����� � ���� ����� � ��������� [1�10000].
//�	������� ��� ������� ������� P1 � ����� �� ������� ����� �� ��� � ���� ����� � ��������� [1�5000].
//�	������� ��� ������� ������� P2 � ����� �� ������� ����� �� ��� ���� ����� � ��������� [1�5000].
//�	���������� ��� ������� ������� H � �������� ����� ���������� �������� � ������ ����� � ��������� [1.0�24.00]
//�����
//�� �� �������� �� ��������� ���� �� ����� �������� ���������:
//�	�� ����� �� � �������� ������� � ��� ����� � ����� �������� � ����������.
//o	"The pool is {����������� �� ������� � ��������}% full. Pipe 1: {������� ���� �� ������� �����}%. Pipe 2: {������� ���� �� ������� �����}%."
//A�� �������� �� � ��������� � � ����� ����� � ������ �� �������� �����.
//o	"For {��������, ����� ������� �� ������� ����} hours the pool overflows with {������� ���� � ������} liters."