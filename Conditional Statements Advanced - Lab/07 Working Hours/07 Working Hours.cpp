// 07 Working Hours.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool contains(string s, string f)
{
    int idx = s.find(f);
    return idx > -1;
}

int main()
{
    const string Closed = "closed";
    const string Open = "open";

    const string WorkDays = "MondayTuesdayWednesdayThursdayFridaySaturday";

    const int WorkingHoursStart = 10;
    const int WorkingHoursEnd = 18;

    int hour;
    string day;

    cin >> hour >> day;

    string output = Closed;

    bool isWorkTime = (contains(WorkDays, day) && hour >= WorkingHoursStart && hour < WorkingHoursEnd);

    if (isWorkTime)
    {
        output = Open;
    }

    cout << output << endl;
}

//�� �� ������ ��������, ����� ���� ��� �� �����������(���� �����) � ��� �� ���������(�����) - �������� �� ����������� � ��������� ���� ������ �� ����� � �������, ���� ��������� ����� �� ������ � �� 10 - 18 ����, �� ���������� �� ������ �����������