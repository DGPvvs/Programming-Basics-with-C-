// 07 Food Delivery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const double ChickenMenuPrice = 10.35;
    const double FishMenuPrice = 12.40;
    const double VegetarianMenuPrice = 8.15;
    const double DeliveryPrice = 2.5;
    const double DessertsPrice = .2;

    int chickenMenuCount, fishMenuCount, vegetarianMenuCount;
    cin >> chickenMenuCount >> fishMenuCount >> vegetarianMenuCount;

    double totalChickenMenuPrice = ChickenMenuPrice * chickenMenuCount;
    double totalFishMenuPrice = FishMenuPrice * fishMenuCount;
    double totalVegetarianMenuPrice = VegetarianMenuPrice * vegetarianMenuCount;

    double tottalPrice = totalChickenMenuPrice + totalFishMenuPrice + totalVegetarianMenuPrice;

    double dessertPrice = DessertsPrice * tottalPrice;

    double orderPrice = tottalPrice + dessertPrice + DeliveryPrice;

    cout <<orderPrice << endl;
}

//��������� ������ ����� � �������� ������� ������ �� �������������� ����: 
//�	������� ���� �  10.35 ��. 
//�	���� � ���� � 12.40 ��. 
//�	������������� ����  � 8.15 ��. 
//�������� ��������, ����� ��������� ����� �� ������ �� ����� ���� �� �� ������� ����� �� �����.
//������� �� �� ������ � ������, ����� ���� � ����� �� 20% �� ������ ������ (��� ����������). 
//������ �� �������� � 2.50 �� � �� ��������� ���-������.  
//����
//�� ��������� �� ����� 3 ����:
//�	���� ������� ������ � ���� ����� � ��������� [0 � 99]
//�	���� ������ � ���� � ���� ����� � ��������� [0 � 99]
//�	���� ������������� ������ � ���� ����� � ��������� [0 � 99]
//�����
//�� �� �������� �� ��������� ���� ���:  "{���� �� ���������}"
