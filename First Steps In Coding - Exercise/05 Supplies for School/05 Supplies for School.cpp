// 05 Supplies for School.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const double packageChemicals = 5.8;
    const double packMarkers = 7.2;
    const double detergent = 1.2;

    int chemicalsCount, markersCount, detergentCount, percent;

    cin >> chemicalsCount >> markersCount >> detergentCount >> percent;

    double result = (chemicalsCount * packageChemicals + markersCount * packMarkers + detergentCount * detergent) * (1 - percent / 100.0);

    cout << result << endl;
}

//�������� ������ ���� � ��������� � �������������� �� 10� ���� - ��� ������ �� ���� ��������� ���� ��������� � ��������, ��������� � �������, ����� � �������� �� ���������� �� �����.�� � ������� �������� �� ���� ����������, ������ ��� ��������� �� ���, ����� ������������ ������� ������� �� ������ ����.�������� ��������, ����� ��������� ����� ���� �� ������ �� ������ ���, �� �� ����� ��������, ���� ����� ������� ������� ���������� :
//�	����� �������� - 5.80 ��.
//�	����� ������� - 7.20 ��.
//�	�������� - 1.20 ��(�� �����)
//����
//�� ��������� �� ����� 4 ����� :
//    �	���� ������ �������� - ���� ����� � ���������[0...100]
//    �	���� ������ ������� - ���� ����� � ���������[0...100]
//    �	����� �������� �� ���������� �� ����� - ���� ����� � ���������[0�50]
//    �	������� ��������� - ���� ����� � ���������[0...100]
//    �����
//    �� �� �������� �� ��������� ����� ���� �� �� ����� �� ���, �� �� �� ����� ��������.

