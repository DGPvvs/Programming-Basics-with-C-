// 05 Godzilla vs Kong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double DecorCost = .1;
    const double StatistsCost = 1 - .1;

    const int StatistCountrange = 150;

    double budget, priceClothsPesStatist;
    int statistsCount;
    cin >> budget >> statistsCount >> priceClothsPesStatist;

    double discont = 1.0;

    if (statistsCount > StatistCountrange)
    {
        discont = StatistsCost;
    }

    double tottalSum = budget * DecorCost + statistsCount * priceClothsPesStatist * discont;

    double diff = budget - tottalSum;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if (diff >= 0)
    {
        cout << "Action!" << endl << "Wingard starts filming with " << diff << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money!" << endl << "Wingard needs " << (-1 * diff) << " leva more." << endl;
    }
}

//�������� �� �������������� ���� "������� ����� ����" ��������.����������� ���� ������� �� ���� �� �������� ��������, ����� �� ������� ���� ������������ �������� �� ���������� �� ��������� �� �����.�� ��������  �� ����� ����� ��������� ���� ��������, ������� �� ����� ���� ������� � �����.
//�������� �, ��:
//�	������� �� ����� � �� �������� 10 % �� �������.
//�	��� ������ �� 150 ��������, ��� �������� �� ��������� �� �������� 10 % .
//����
//�� ��������� �� ����� 3 ���� :
//    ��� 1.	������ �� ����� � ������ ����� � ���������[1.00 � 1000000.00]
//    ��� 2.	���� �� ���������� � ���� ����� � ���������[1 � 500]
//    ��� 3.	���� �� ������� �� ���� ������� � ������ ����� � ���������[1.00 � 1000.00]
//    �����
//    �� ��������� ������ �� �� ��������� ��� ���� :
//�	���  ������ �� ������ � ������� �� ������ �� ������� :
//o	"Not enough money!"
//o	"Wingard needs {������ ����������� �� �����} leva more."
//�	��� ������ �� ������ � ������� �� �� ����� ��� ����� �� ������� :
//o	"Action!"
//o	"Wingard starts filming with {���������� ����} leva left."
//���������� ������ �� � ���������� �� ������ ���� ���� ����������� �������.