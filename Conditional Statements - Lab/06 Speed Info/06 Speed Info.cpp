// 06 Speed Info.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr auto EMPTY_STRING = "";

int main()
{
    const int SpeedSlow = 10;
    const int SpeedAverage = 50;
    const int SpeedFast = 150;
    const int SpeedUltraFast = 1000;

    const string Slow = "slow";
    const string Average = "average";
    const string Fast = "fast";
    const string UltraFast = "ultra fast";
    const string ExtremelyFast = "extremely fast";

    double speed;
    cin >> speed;

    string output = EMPTY_STRING;

    if (speed <= SpeedSlow)
    {
        output = Slow;
    }
    else if (speed <= SpeedAverage)
    {
        output = Average;
    }
    else if (speed <= SpeedFast)
    {
        output = Fast;
    }
    else if (speed <= SpeedUltraFast)
    {
        output = UltraFast;
    }
    else
    {
        output = ExtremelyFast;
    }

    cout << output << endl;
}

//�� �� ������ ��������, ����� ���� �������(������ �����), �������� �� ����������� � ��������� ���������� �� ���������.
//�	��� ������� �� 10 (�����������)����������� "slow"
//�	��� ������� ��� 10 � �� 50 (�����������)����������� "average"
//�	��� ������� ��� 50 � �� 150 (�����������)����������� "fast"
//�	��� ������� ��� 150 � �� 1000 (�����������)����������� "ultra fast"
//�	��� �� - ������ ������� ����������� "extremely fast"