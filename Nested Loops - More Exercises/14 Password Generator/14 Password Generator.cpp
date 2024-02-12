// 14 Password Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
#define EMPTY ""
#define SPACE " "

int main()
{
    const char Base_A = 'a';

    string input;
    getline(cin, input);
    int n = stoi(input);

    getline(cin, input);
    int l = stoi(input);

    string output = EMPTY;

    for (int digit1 = 1; digit1 <= n; digit1++)
    {
        for (int digit2 = 1; digit2 <= n; digit2++)
        {
            for (char symbol3 = Base_A; symbol3 <= Base_A - 1 + l; symbol3++)
            {
                for (char symbol4 = Base_A; symbol4 <= Base_A - 1 + l; symbol4++)
                {
                    for (int digit5 = max(digit1, digit2) + 1; digit5 <= n; digit5++)
                    {
                        output.append(to_string(digit1))
                            .append(to_string(digit2))
                            .append(1, symbol3)
                            .append(1, symbol4)
                            .append(to_string(digit5))
                            .append(SPACE);
                    }
                }
            }
        }
    }

    cout << output << endl;

    return 0;
}

//�� �� ������ ��������, ����� ���� ��� ���� ����� n � l, �������� �� �����������, � �������� �� ������� ��� ������ ��������  ������, ����� �� ������� �� �������� 5 �������:
//�	������ 1: ����� �� 1 �� n.
//�	������ 2: ����� �� 1 �� n.
//�	������ 3: ����� ����� ������� ������� l ����� �� ���������� ������.
//�	������ 4: ����� ����� ������� ������� l ����� �� ���������� ������.
//�	������ 5: ����� �� 1 �� n, ��-������ �� ������� 2 �����.
//����
//������ �� ���� �� ��������� � �� ������ �� ��� ���� ����� n � l � ��������� [1�9], �� ���� �� ���.
//�����
//�� ��������� ������ �� �� ��������� ������ ������ �� ������� ���, ��������� � ��������.