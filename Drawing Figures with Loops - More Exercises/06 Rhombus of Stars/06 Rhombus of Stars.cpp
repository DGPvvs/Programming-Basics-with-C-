// 06 Rhombus of Stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define SPACE " "
#define NEW_LINE "\r\n"
#define STAR "*"


int main()
{
    string input;
    getline(cin, input);
    int n = stoi(input);

    string output = string();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            output.append(SPACE);
        }

        output.append(STAR);

        for (int j = 1; j <= i - 1; j++)
        {
            output.append(SPACE).append(STAR);
        }

        output.append(NEW_LINE);
    }

    for (int i = n; i >= 2; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            output.append(SPACE);
        }

        for (int j = 1; j <= i - 1; j++)
        {
            output.append(SPACE).append(STAR);
        }

        output.append(NEW_LINE);
    }

    cout << output;
}

//�������� ��������, ����� ���� ���� ����������� ����� n, �������� �� �����������, � ������ ������ �� ��������� � ������ n ���� � ��������� ��-����:
//�������� ���� � �����
//����	�����		����	�����		����	�����		����	�����
//1	*		2	 *
//* *
// *		3	  *
// * *
//* * *
// * *
//  *		4	   *
//  * *
// * * *
//* * * *
// * * *
//  * *
//   *
//���������:
//�	��������� ����� �� ����� � ����� ���� � �� ��������� � ��� ������� ������.
//�	�� ������� ���� ��������� ����� �� row �� 1 �� n:
//o ����������� n-row ���������.
//o	����������� �*�.
//o	����������� row-1 ���� � *�.
//�	������� ���� ����������� ���������� �� ������� � ����� �� 1 �� n-1.
