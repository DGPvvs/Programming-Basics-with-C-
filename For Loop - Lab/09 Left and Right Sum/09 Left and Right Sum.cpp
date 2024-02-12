// 09 Left and Right Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

        leftSum += num * (i < n ? 1 : 0);
        rightSum += num * (!(i < n) ? 1 : 0);
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