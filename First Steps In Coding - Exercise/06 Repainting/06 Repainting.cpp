// 06 Repainting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double protectiveNylon = 1.5;
    const double paint = 14.5;
    const double paintThinner = 5;

    int nylonCount, paintCount, paintThinnerCount, hours;
    cin >> nylonCount >> paintCount >> paintThinnerCount >> hours;

    double matherialsPrice = (nylonCount + 2) * protectiveNylon + 1.1 * paintCount * paint + paintThinnerCount * paintThinner + .4;
    double workPrice = matherialsPrice * .3 * hours;

    double tottalPrice = matherialsPrice + workPrice;

    cout << tottalPrice << endl;
}

//����� ���� �� ���������� ���� � �� ����� � ���� ��������. �������� ��������, ����� ��������� ��������� �� �������, ������� �������� ����:
//�	��������� ������ - 1.50 ��.�� ��.�����
//�	��� - 14.50 ��.�� �����
//�	���������� �� ��� - 5.00 ��.�� �����
//�� ����� ������, ��� ������������ ���������, ����� ���� �� ������ ��� 10 % �� ������������ ��� � 2 ��.�.������, ������� �� � 0.40 ��.�� ��������.������, ����� �� ������� �� ���������� �� 1 ��� ������, � ����� �� 30 % �� ����� �� ������ ������� �� ���������.
//����
//������ �� ���� �� ��������� � ������� ����� 4 ����:
//1.	���������� ���������� ������(� ��.�.) - ���� ����� � ���������[1... 100]
//2.	���������� ���������� ���(� �����) - ���� ����� � ���������[1�100]
//3.	���������� ����������(� �����) - ���� ����� � ���������[1�30]
//4.	��������, �� ����� ���������� �� ������� �������� - ���� ����� � ���������[1�9]
//�����
//�� �� �������� �� ��������� ���� ��� :
//�	"{������ �� ������ �������}"
