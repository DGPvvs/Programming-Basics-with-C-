// 02 Bonus Score_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    int num;
    cin >> num;

    double bonus = .0;

    if (num < 101)
    {
        bonus = 5;
    }
    else if (num > 1000)
    {
        bonus = .1 * num;
    }
    else
    {
        bonus = .2 * num;
    }

    bonus += 1 - (num % 2);

    if (num % 10 == 5)
    {
        bonus += 2;
    }

    cout << bonus << endl;
    cout << num + bonus << endl;
}

//������ � ���� ����� � ������� ���� �����.����� ���� �� ���������� ����� ����� �� ���������, ������� �� - ����.�� �� ������ ��������, ����� �������� ����� �������, ����� �������� ������� � ����� ���� �����(������� + ������).
//�	��� ������� � �� 100 �����������, ����� ������� �� 5.
//�	��� ������� � �� - ������ �� 100, ����� ������� �� 20 % �� �������.
//�	��� ������� � �� - ������ �� 1000, ����� ������� �� 10 % �� �������.
//
//�	������������ ����� �����(���������� �� ������� �� �����������) :
//    o	�� ����� ����� -> + 1 �.
//    o	�� �����, ����� �������� �� 5 -> + 2 �.