// 04 Fishing Boat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string SPRING = "Spring";
    const string AUTUMN = "Autumn";
    const string WINTER = "Winter";

    const double SPRING_PRICE = 3000.0;
    const double SUMMER_AND_AUTUMN_PRICE = 4200.0;
    const double WINTER_PRICE = 2600.0;

    const double DISCONT_TO_THE_6_PERSON = .1;
    const double DISCONT_TO_THE_11_PERSON = .15;
    const double DISCONT_TO_THE_MORE_11_PERSON = .25;

    double extraDiscount = 1.0;

    double discont = 1.0;

    int groupBudget, numberFishermen;
    string season;
    cin >> groupBudget >> season >> numberFishermen;

    if (season != AUTUMN)
    {
        extraDiscount -= .05 * (1 - (numberFishermen % 2));
    }

    if (numberFishermen <= 6)
    {
        discont = (1 - DISCONT_TO_THE_6_PERSON);
    }
    else if (numberFishermen >= 12)
    {
        discont = (1 - DISCONT_TO_THE_MORE_11_PERSON);
    }
    else
    {
        discont = (1 - DISCONT_TO_THE_11_PERSON);
    }

    double price = 1.0;

    if (season == SPRING)
    {
        price = SPRING_PRICE;
    }
    else if (season == WINTER)
    {
        price = WINTER_PRICE;
    }
    else
    {
        price = SUMMER_AND_AUTUMN_PRICE;
    }

    price = price * discont * extraDiscount;

    double diff = groupBudget - price;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if (diff >= 0)
    {
        cout << "Yes! You have " << diff << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << -diff << " leva." << endl;
    }    
}

//���� � �������� ����� ������� �� ����� �� ����, �� �� ������� �������� �� ��������, �� ������� �� ������ �� ������� � �����.������ �� ����� �� ������ ������ �� ������ � ���� ������.
//������ ������ �� ������ :
//�	������ �� ���� �� ������ ���� �������� �  3000 ��.
//�	������ �� ���� �� ������ ���� ������ � ������ �  4200 ��.
//�	������ �� ���� �� ������ ���� ������ �  2600 ��.
//� ���������� �� ���� �� ������� ������ �������� :
//�	��� ������� � �� 6 ������ �����������  �  �������� �� 10 % .
//�	��� ������� � �� 7 �� 11 ������ �����������  �  �������� �� 15 % .
//�	��� ������� � �� 12 ������  �  �������� �� 25 % .
//�������� ������� ������������ 5 % ��������, ��� �� ����� ���� ����� ��� �� � ���� - ������ ����� ������������ ��������, ����� �� ��������� ���� ���� �� ��������� ���������� �� ������� ��������.
//�������� ��������, ����� �� �������� ���� �������� �� ������� ���������� ����.
//����
//�� ��������� �� ����� ����� ��� ����.
//�	������ �� ������� � ���� ����� � ���������[1�8000]
//�	����� �  ����� : "Spring", "Summer", "Autumn", "Winter"
//�	���� ������ � ���� ����� � ���������[4�18]
//�����
//�� �� �������� �� ��������� ���� ��� :
//�	��� �������� � ���������� :
//"Yes! You have {���������� ����} leva left."
//�	��� �������� �� � ���������� :
//"Not enough money! You need {������, ����� �� �������} leva."
//������ ������ �� �� ����������� � ������� �� ��� ����� ���� ����������� �������.