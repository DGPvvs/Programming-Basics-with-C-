// 02 Triangle Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

double Area(double, double);
string FormatDoubleNum(double, int);

int main()
{
    string input;
    getline(cin, input);
    double a = stod(input);

    getline(cin, input);
    double hA = stod(input);

    cout << FormatDoubleNum(Area(a, hA), 2) << endl;
}

string FormatDoubleNum(double number, int precision)
{    
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

double Area(double a, double hA)
{
    return a * hA / 2;
}

//�������� ��������, ����� ���� �� ��������� ������ � �������� �� ���������� � �������� �������� ����. ����������� ��������� �� ���� �� ����������: area = a * h / 2.����������� ������ �� ������ ���� ���� ����������� �������.