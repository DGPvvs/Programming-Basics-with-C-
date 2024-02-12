// 09 Clock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    const int Max_Minutes = 1439;

    int currentMinute = 0;

    string output = string();

    do
    {
        int hour = currentMinute / 60;
        int minute = currentMinute % 60;

        output.append(to_string(hour))
              .append(" : ")
              .append(to_string(minute))
              .append(NEW_LINE);

        currentMinute++;
    } while (currentMinute < Max_Minutes + 1);

    cout << output;
}

//�������� ��������, ����� ��������� �������� � ����������� �� 0:0 �� 23:59, ����� �� ������� ���. �������� ������ �� �� �������� ��� ������ "{���} : {������}"