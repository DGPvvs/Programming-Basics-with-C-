// 07 Shopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double GraphicsPrice = 250;
    const double ProcesorCost = .35;
    const double RAMsCost = .1;
    const double ExtraDiscont = .15;

    double budget;
    int graphicsCard, procesors, rams;
    cin >> budget >> graphicsCard >> procesors >> rams;

    double buyedGraphics = GraphicsPrice * graphicsCard;
    double procesorsPirce = buyedGraphics * ProcesorCost;
    double ramsPirce = buyedGraphics * RAMsCost;
    double fullCost = buyedGraphics + procesors * procesorsPirce + rams * ramsPirce;

    if (graphicsCard > procesors)
    {
        fullCost -= fullCost * ExtraDiscont;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if (budget >= fullCost)
    {
        double leftMoney = budget - fullCost;
        cout << "You have " << leftMoney << " leva left!" << endl;
    }
    else if (fullCost > budget)
    {
        double neededMoney = fullCost - budget;
        cout << "Not enough money! You need " << neededMoney << " leva more!" << endl;
    }    
}

//����� ���� �� ���� N ����������, M ��������� � P �� ���� ��� �����.��� ���� �� ������������ � �� - ����� �� ���� �� ����������� �������� 15 % �������� �� �������� ������.����� �������� ���� :
//�	���������� � 250 ��. / ��.
//�	�������� � 35 % �� ������ �� ���������� ���������� / ��.
//�	��� ����� � 10 % �� ������ �� ���������� ���������� / ��.
//�� �� ������� ������� ���� �� ���������� �� ����������� � �� �� ��������� ���� ������� �� �� ������.
//����
//������ �� ������ �� ������ ���� :
//1.	�������� �� ����� - ������ ����� � ���������[0.0�100000.0]
//2.	����� ���������� - ���� ����� � ���������[0�100]
//3.	����� ��������� - ���� ����� � ���������[0�100]
//4.	����� ��� ����� - ���� ����� � ���������[0�100]
//�����
//�� ��������� �� ��������� 1 ���, ����� ������ �� �������� �� ������� ����� :
//�	��� ������� � ���������� :
//"You have {��������� ������} leva left!"
//�	��� ������ ��������� ������� :
//"Not enough money! You need {����� ����} leva more!"
//���������� �� �� ��������� �� ������ ���� ���� ����������� �������.