// 01 Excellent Result.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string OUTPUT = "Excellent!";
    const double RANGE = 5.5;

    double input;
    cin >> input;

    if (input >= RANGE)
    {
        cout << OUTPUT << endl;
    }
}

//������ �������� ��������, ����� ���� ������ (������ �����), �������� �� ����������� � ��������� "Excellent!" ��� �������� � 5.50 ��� ��-������.
