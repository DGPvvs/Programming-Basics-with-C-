// 09 Weather Forecast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string Sunny = "sunny";

    string input;
    getline(cin, input);

    if (input == Sunny)
    {
        cout << "It's warm outside!" << endl;
    }
    else
    {
        cout << "It's cold outside!" << endl;
    }
}

//�������� ��������, ����� ������� ���� � ����� ��� ������� �����. �� ��������� �� ���� ���� ��� � �����, ����� ��������� ����� � �������. ��� ��������� �� "sunny" ������ �� �� �������� "It's warm outside!". ��� ������ �������� ������ ������ �� �� �������� "It's cold outside!". 