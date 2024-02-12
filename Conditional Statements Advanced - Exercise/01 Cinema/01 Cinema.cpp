// 01 Cinema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string Premiere = "Premiere";
    const string Normal = "Normal";
    const string Discount = "Discount";

    const double PremierePrice = 12.0;
    const double NormalPrice = 7.5;
    const double DiscountPrice = 5.0;

    string projectionType;
    int row, col;
    cin >> projectionType >> row >> col;

    double income = row * col;

    if (projectionType == Premiere)
    {
        income *= PremierePrice;
    }
    else if (projectionType == Normal)
    {
        income *= NormalPrice;
    }
    else
    {
        income *= DiscountPrice;
    }

    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    std::cout.precision(2);

    std::cout << income << " leva" << endl;
}

//� ���� �������� ��������� �� �������� � ����������� ����� � r ���� � c ������.��� ��� ���� ��������� � ������ �� �������� ���� :
//�	Premiere � ��������� ���������, �� ���� 12.00 ����.
//�	Normal � ���������� ���������, �� ���� 7.50 ����.
//�	Discount � ��������� �� ����, ������� � �������� �� �������� ���� �� 5.00 ����.
//�������� ��������, ����� ���� ��� ���������(������), ���� ������ � ���� ������ � ������(���� �����), �������� �� �����������, � ��������� ������ ������� �� ������ ��� ����� ����.���������� �� �� �������� ��� ������ ���� � ��������� �� - ����, � 2 ����� ���� ����������� �����.