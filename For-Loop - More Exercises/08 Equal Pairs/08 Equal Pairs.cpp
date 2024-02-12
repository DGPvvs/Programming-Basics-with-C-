// 08 Equal Pairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    bool isEqual = true;
    int value = 0;
    int diff = -1;

    for (int i = 1; i <= n; i++)
    {
        getline(cin, input);
        int n1 = stoi(input);

        getline(cin, input);
        int n2 = stoi(input);

        int curentValue = n1 + n2;
        int curentDiff = abs(curentValue - value);

        if (i != 1)
        {
            if (value != curentValue && isEqual)
            {
                isEqual = false;
            }

            if (curentDiff > diff)
            {
                diff = curentDiff;
            }

            value = curentValue;
        }
        else
        {
            value = curentValue;
        }
    }

    string output = string();

    if (isEqual)
    {
        output.append("Yes, value=")
              .append(to_string(value));
    }
    else
    {
        output.append("No, maxdiff=")
              .append(to_string(diff));
    }

    cout << output << endl;
}

//������ �� 2*n-�� ���� �����.
//������� � ������� �������� ������, ������� � ���������� ���� � �.�.
//����� ������ ��� �������� � ������ �� ����������� � �����.
//�������� ��������, ����� ��������� ���� ������ ������ ���� ������� �������� ��� ������ ������������ ������� ����� ��� �������������� ������.
//��� ������ ������ ���� ������� ��������, ����������� "Yes, value = {Value}" + ����������.
//� �������� ������ ����������� "No, maxdiff = {Difference}" + ������������ �������.