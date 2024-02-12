// 09 Left and Right Sum ver 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        int num;
        cin >> num;

        leftSum += num * (1 - (i / n));
        rightSum += num * (i / n);
    }

    int diff = abs(leftSum - rightSum);

    string output = EMPTY;

    if (diff == 0)
    {
        output.append("Yes, sum = ")
            .append(to_string(leftSum));
    }
    else
    {
        output.append("No, diff = ")
            .append(to_string(diff));
    }

    cout << output << endl;
}

//�� �� ������ ��������, ����� ���� 2*n-�� ���� ���� �����, �������� �� �����������, � ��������� ���� ������ �� ������� n ����� (���� ����) � ����� �� ������ �� ������� n ����� (����� ����). ��� ��������� ������ " Yes, sum = " + ������; ����� ������ " No, diff = " + ���������. ��������� �� ��������� ���� ����������� ����� (�� ��������� ��������). 