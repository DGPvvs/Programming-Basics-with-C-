// 09. Yard Greening.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double OnePrice = 7.61;
    const double Discont = 0.18;

    double area;
    cin >> area;

    double pricePerArea = area * OnePrice;
    double discontPrice = pricePerArea * Discont;

    double tottalPrice = pricePerArea - discontPrice;

    cout << "The final price is: " << tottalPrice << " lv." << endl;
    cout << "The discount is: " << discontPrice << " lv." << endl;
}

//�������� ��������� � ������� ���� �� ������������ � ����� �� ������� ��������� �� ����� �� ���, ���� �� ���� ����� ������� ����� ���������� � ������� �� ������� ��. �� ����� � ����� �����.
//�������� ��������, ����� ��������� ������������ ����, ����� �������� �� ������ �� ������� �� ������� ���������� �� �������. ������ �� ���� ��. �. � 7.61 �� ��� ���. ������ ������� ���� � ����� �����, ������� ���������� �������� 18% �������� �� �������� ����.
//����
//�� ��������� �� ������� ���� ���� ���:
//1.	��. �����, ����� �� ����� ��������� � ������ ����� � ��������� [0.00 � 10000.00]
//�����
//�� ��������� �� ���������� ��� ����:
//�	"The final price is: {������ ���� �� ��������} lv."
//�	"The discount is: {��������} lv."
