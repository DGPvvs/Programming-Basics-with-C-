// 10 Invalid Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int ValidLower = 100;
    const int ValidUpper = 200;
    const int ValidZero = 0;

    const string Invalid = "invalid";
    const string Empty = "";

    int num;
    cin >> num;

    string output = (num == ValidZero || (num >= ValidLower && num <= ValidUpper))
        ? Empty
        : Invalid;
    cout << output << endl;
}

//������ ����� � �������, ��� � � ���������[100�200] ��� � 0. �� �� ������ ��������, ����� ���� ���� �����, �������� �� �����������, � ������ "invalid" ��� ���������� ����� �� � �������.