// 03 Deposit Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double deposit;
    int period;
    double persent;

    cin >> deposit >> period >> persent;

    double tottalSum = deposit + period * ((deposit * persent / 100.0) / 12.0);

    cout << tottalSum << endl;
}

//�������� ��������, ����� ��������� ����� ���� �� �������� � ���� �� ���������� ������ ��� ��������� ������ �������. ����������� �������� �������: 
//���� = ���������� ���� + ���� �� �������� * ((���������� ���� * ������� ������ �������) / 12)
//����
//�� ��������� �� ����� 3 ����:
//1.	���������� ���� � ������ ����� � ���������[100.00 � 10000.00]
//2.	���� �� ��������(� ������) � ���� ����� � ���������[1�12]
//3.	������� ������ ������� � ������ ����� � ���������[0.00 �100.00]
//�����
//�� �� �������� �� ��������� ������ � ���� �� �����.

