// 08 Pet Shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double DOG_FOOD_PRICE = 2.5;
    const double CAT_FOOD_PRICE = 4;

    int dogFoodCount, catFoodCount;

    cin >> dogFoodCount;
    cin >> catFoodCount;

    double result = dogFoodCount * DOG_FOOD_PRICE + catFoodCount * CAT_FOOD_PRICE;

    cout << result <<  " lv." << endl;

    return 0;
}

//�������� ��������, ����� �������� ������� ������� �� ������������ �� ����� �� ������ � �����.  ������� �� �������� �� ����������, ���� ���� �������� ����� �� ������ � �� ���� 2.50 ��, � �������� ����� �� ����� ������ 4 ��.
//����
//�� ��������� �� ����� 2 ����:
//1.	����� �� ���������� ����� �� ������ � ���� ����� � ���������[0� 100]
//2.	����� �� ���������� ����� �� ����� �  ���� ����� � ���������[0� 100]
//�����
//�� ��������� �� ��������� :
//"{�������� ����} lv."
