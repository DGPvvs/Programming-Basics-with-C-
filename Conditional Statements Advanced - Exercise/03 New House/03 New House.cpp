// 03 New House.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double RosesPrice = 5.0;
    const double DahliasPrice = 3.8;
    const double TulipsPrice = 2.8;
    const double NarcissusPrice = 3.0;
    const double GladiolusPrice = 2.5;

    const string Roses = "Roses";
    const string Dahlias = "Dahlias";
    const string Tulips = "Tulips";
    const string Narcissus = "Narcissus";
    const string Gladiolus = "Gladiolus";

    const double RosesDiscont = 1 - .1;
    const double DahliasDiscont = 1 - .15;
    const double TulipsDiscont = 1 - .15;
    const double NarcissusDiscont = 1.15;
    const double GladiolusDiscont = 1.2;

    const int MoreRosesCount = 80;
    const int MoreDahliasCount = 90;
    const int MoreTulipsCount = 80;
    const int LessNarcissusCount = 120;
    const int LessGladiolusCount = 80;

    string kindOfFlowers;
    int numberOfFlowers, budget;
    cin >> kindOfFlowers >> numberOfFlowers >> budget;

    double price = 0.0;
    double discont = 1.0;

    if (kindOfFlowers == Roses)
    {
        if (numberOfFlowers > MoreRosesCount)
        {
            discont = RosesDiscont;
        }

        price = RosesPrice;
    }
    else if (kindOfFlowers == Dahlias)
    {
        if (numberOfFlowers > MoreDahliasCount)
        {
            discont = DahliasDiscont;
        }

        price = DahliasPrice;
    }
    else if (kindOfFlowers == Tulips)
    {
        if (numberOfFlowers > MoreTulipsCount)
        {
            discont = TulipsDiscont;
        }

        price = TulipsPrice;
    }
    else if (kindOfFlowers == Narcissus)
    {
        if (numberOfFlowers < LessNarcissusCount)
        {
            discont = NarcissusDiscont;
        }

        price = NarcissusPrice;
    }
    else
    {
        if (numberOfFlowers < LessGladiolusCount)
        {
            discont = GladiolusDiscont;
        }

        price = GladiolusPrice;
    }

    price = price * numberOfFlowers * discont;

    double difference = budget * 1.0 - price;
    
    if (difference >= 0)
    {
        cout << "Hey, you have a great garden with " << numberOfFlowers;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout << " " << kindOfFlowers << " and " << difference << " leva left." << endl;
    }
    else
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        std::cout << "Not enough money, you need " << -difference << " leva more." << endl;
    }    
}

//����� � ���� �� ������� ���� �� ����� �� �����. ���� ������� ����� ����� �������, �� �� �������� �� �������� �������� ����� �� ������� �����  �� �� ������, �� �� ������� ��������� ���� ����� � ���� �������� ������ �� �� � ����������. ���������� ����� �� � �������� ����. 
//�����             	����	�����	����	������	��������
//���� �� ���� � ����	5	    3.80	2.80	3	    2.50
//����������� �������� ��������:
//�	��� ���� ���� ������ �� 80 ���� - 10% �������� �� �������� ����
//�	��� ���� ���� ������ �� 90  ����� - 15% �������� �� �������� ����
//�	��� ���� ���� ������ �� 80 ������ - 15% �������� �� �������� ����
//�	��� ���� ���� ��-����� �� 120 ������� - ������ �� �������� � 15%
//�	��� ���� ���� ��-����� �� 80 �������� - ������ �� �������� � 20%
//�� ��������� �� ����� 3 ����:
//�	��� ����� - ����� � ����������� - "Roses", "Dahlias", "Tulips", "Narcissus", "Gladiolus"
//�	���� ����� - ���� ����� � ��������� [10�1000]
//�	������ - ���� ����� � ��������� [50�2500]
//�� �� �������� �� ��������� �� ���� ���:
//�	��� ������� �� � ���������� - "Hey, you have a great garden with {���� �����} {��� �����} and {���������� ����} leva left."
//�	��� ������� �� � �� ���������� - "Not enough money, you need {������� ����} leva more."
//������ �� ���� ����������� �� ������ ���� ���� ����������� �������.