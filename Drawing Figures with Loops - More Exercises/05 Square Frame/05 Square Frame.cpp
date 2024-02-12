// 05 Square Frame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    output.append("+ ");
    for (int i = 1; i <= n - 2; i++)
    {
        output.append("- ");
    }

    output.append("+")
          .append(NEW_LINE);

    for (int i = 1; i <= n - 2; i++)
    {
        output.append("| ");
        for (int j = 1; j <= n - 2; j++)
        {
            output.append("- ");
        }

        output.append("|")
               .append(NEW_LINE);
    }

    output.append("+ ");

    for (int i = 1; i <= n - 2; i++)
    {
        output.append("- ");
    }

    output.append("+")
        .append(NEW_LINE);

    cout << output;
}

//�������� ��������, ����� ���� ���� ����������� ����� n, �������� �� �����������, � ������ �� ��������� ��������� ����� � ������ n * n ���� � ��������� ��-����:
//�������� ���� � �����
//����	�����		����	�����		����	�����		����	�����
//3	+ - +
//  | - |
//  + - +
//4	+ - - +
// | - - |
// | - - |
// + - - +
//5	+ - - - +
// | - - - |
// | - - - |
// | - - - |
// + - - - +
//6	+ - - - - +
// | - - - - |
// | - - - - |
// | - - - - |
// | - - - - |
// + - - - - +
//���������:
//�	����������� ������� ����: ���� �+�, n - 2 ���� ���� �-�, ���� �+�.
//�	����������� �������� ����: � ����� n-2 ���� ��������� ���� �|�, n-2 ���� ���� �-�, ���� �|�.
//�	����������� ������� ����: ���� �+�, n - 2 ���� ���� �-�, ���� �+�.
