// 01 Sum Seconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int timeOne, timeTwo, timeThree;
    cin >> timeOne >> timeTwo >> timeThree;

    int tottalTime = timeOne + timeTwo + timeThree;
    int minutes = tottalTime / 60;
    int seconds = tottalTime % 60;

    string output = to_string(minutes) + ":" + to_string(seconds);

    if (seconds < 10)
    {
        output = to_string(minutes) + ":0" + to_string(seconds);
    }

    cout << output << endl;
}

//����� ������� ����������� ��������� �� ������� ���� �������(����� 1 � 50).�� �� ������ ��������, ����� ���� ��������� �� ������������� � �������, �������� �� ����������� � �������� ��������� �� ����� ��� ������ "������:�������".��������� �� �� ������� � ������ ����(2 -> "02", 7 -> "07", 35 -> "35").
