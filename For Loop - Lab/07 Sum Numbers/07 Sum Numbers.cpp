// 07 Sum Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        int input;
        cin >> input;

        sum += input;
    }

    cout << sum << endl;
}

//�� �� ������ ��������, ����� ���� n-�� ���� ���� �����, �������� �� ����������� � �� ������.
//�	�� ������ ��� �� ����� �� ������� ����� ����� n.
//�	�� ���������� n ���� �� ������� �� ���� ���� �����.
//���������� ������ �� ������� �������, �� �� ������ � �� �������� ������ ��. 