// 02 Half Sum Element.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <climits>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    int count;
    cin >> count;

    int sum = 0;
    int max = INT_MIN;

    for (int i = 0;i < count; i++)
    {
        int num;
        cin >> num;

        sum += num;

        if (num > max)
        {
            max = num;
        }
    }

    int sumWithoutMax = sum - max;

    string output = EMPTY;

    if (sumWithoutMax == max)
    {
        output.append("Yes")
              .append(NEW_LINE)
              .append("Sum = ")
              .append(to_string(max));
    }
    else
    {
        output.append("No")
              .append(NEW_LINE)
              .append("Diff = ")
              .append(to_string(abs(max - sumWithoutMax)));
    }

    cout << output << endl;
}

//�� �� ������ ��������, ����� ���� n-�� ���� ���� �����, �������� �� �����������, � ��������� ���� ���� ��� ���������� �����, ����� � ����� �� ������ �� ������ ��������. ��� ��� ����� �������, ������ "Yes", "Sum = "  + �������� ��������; ����� ������ "No", "Diff = " + ��������� ����� ���-������� ������� � ������ �� ���������� (�� ��������� ��������). 