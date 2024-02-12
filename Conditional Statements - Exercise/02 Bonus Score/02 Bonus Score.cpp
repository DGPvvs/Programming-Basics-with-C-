// 02 Bonus Score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    const int Less101 = 101;
    const int Great1000 = 1000;
    const int BonussLess101 = 5;
    const int Ends5 = 2;
    const double BonusGreat1000 = .1;
    const double BonusBetween100And1000 = .2;

    int num;
    cin >> num;

    double bonus = .0;

    if (num < Less101)
    {
        bonus = BonussLess101;
    }
    else if (num > Great1000)
    {
        bonus = num * BonusGreat1000;
    }
    else
    {
        bonus = num * BonusBetween100And1000;
    }

    bonus += 1 - (num % 2);

    if (num % 10 == 5)
    {
        bonus += Ends5;
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