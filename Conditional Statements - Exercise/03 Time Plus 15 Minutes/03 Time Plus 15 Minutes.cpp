// 03 Time Plus 15 Minutes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    const int IntervalMinute = 15;

    int hour, minute;
    cin >> hour >> minute;

    int tottalTime = hour * 60 + minute + IntervalMinute;

    int hours = tottalTime / 60;
    int minutes = tottalTime % 60;

    if (hours > 23)
    {
        hours -= 24;
    }

    string output = to_string(hours) + ":" + to_string(minutes);

    if (minutes < 10)
    {
        output = to_string(hours) + ":0" + to_string(minutes);
    }

    cout << output << endl;
}

//�� �� ������ ��������, ����� ���� ��� � ������ �� 24 - ������ ���������, �������� �� ����������� � ��������� ����� �� � ����� ���� 15 ������.���������� �� �� �������� ��� ������ ������ : ������.�������� ������ �� ����� 0 � 23, � �������� ������ �� ����� 0 � 59. �������� �� �������� � ���� ��� ��� �����.�������� �� �������� ������ � �� ��� �����, � ������ ����, ������ � ����������.