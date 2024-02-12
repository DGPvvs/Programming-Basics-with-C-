// 08 Lunch Break.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    const double lunchRange = 1.0 / 4;
    const double recessRange = 1.0 / 8;


    string movieName;
    int movieTime, restTime;
    getline(cin, movieName);
    cin >> movieTime >> restTime;

    double lunchTime = restTime * lunchRange;
    double recessTime = restTime * recessRange;

    double diff = (restTime - movieTime - lunchTime - recessTime);

    if (diff < 0)
    {
        cout << "You don't have enough time to watch "
             << movieName
             << ", you need "
             << ceil((-1) * diff)
             << " more minutes."
             << endl;
    }
    else
    {
        cout << "You have enough time to watch "
             << movieName
             << " and left with "
             << ceil(diff)
             << " minutes free time."
             << endl;
    }
}

//�� ����� �� �������� ������� ������ �� ��������� ������ �� ���� ����� ������.������ ������ � �� �������� ��������, � ����� �� ��������� ���� ����� ���������� ����� �� ��������� �������.�� ����� �� ��������� �������� ����� �� ���� � ����� �� �����.������� �� ���� �� ���� 1 / 8 �� ������� �� �������, � ������� �� ����� �� ���� 1 / 4 �� ������� �� �������.
//����
//�� ��������� �� ����� 3 ����:
//1.	��� �� ������ � �����
//2.	��������������� �� ������  � ���� ����� � ���������[10� 90]
//3.	��������������� �� ���������  � ���� ����� � ���������[10� 120]
//�����
//�� ��������� �� �� ������ ���� ��� :
//�	��� ������� � ���������� �� ��������� ������� :
//"You have enough time to watch {��� �� ������} and left with {�������� �����} minutes free time."
//�	��� ������� �� �� � ���������� :
//"You don't have enough time to watch {��� �� ������}, you need {����� �����} more minutes."
//������� �� �� �������� �� ��� - �������� ���� ����� ������.