// 05 Journey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const string Bulgaria = "Bulgaria";
    const string Balkans = "Balkans";
    const string Europe = "Europe";

    const string Summer = "summer";

    const string Camp = "Camp";
    const string Hotel = "Hotel";

    double budget;
    string season;
    cin >> budget >> season;

    string place = Hotel;
    string destination = Europe;
    double spendPercentWinter = .9;
    double spendPercentSummer = .9;

    if (budget <= 100)
    {
        spendPercentWinter = .7;
        spendPercentSummer = .3;
        destination = Bulgaria;
    }
    else if (budget <= 1000)
    {
        spendPercentWinter = .8;
        spendPercentSummer = .4;
        destination = Balkans;
    }

    double spendPrice = spendPercentWinter;

    if (season == Summer && destination != Europe)
    {
        place = Camp;
        spendPrice = spendPercentSummer;
    }

    double price = budget * spendPrice;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl << place << " - " << price << endl;
}

//�������, �� �������� ���� �� �������� �� ���� ���������.���� ���������� ��������� � ��������� ������ � �������� ����� � ����� �����.�������� ��������, ����� �� ������ �� ����� ������� � ������, � �� ������ �� �������, ���� �� ������ ����������� � ����� �� �������.
//������� �������� ������������, � ������ �������� ����� �� ������� �� �������.��� � ���� �� ������ �� �������, � ������ � �����.��� � � ������, ���������� �� ������ �� ������ � �����.����� ������� ��� �����, ������ ������������, ��� ��������� ���� ����� �������� �� ����� ������� �� ������� :
//�	��� 100��.��� �� - ����� � ������ � ��������
//o	���� � 30 % �� �������
//o	���� � 70 % �� �������
//�	��� 1000��.��� �� ����� � ������ �� ���������
//o	���� � 40 % �� �������
//o	���� � 80 % �� �������
//�	��� ������ �� 1000��.� ������ �� ������
//o	��� �������� �� ������, ���������� �� ������ �� ������� 90 % �� �������.
//����
//������ �� ���� �� ��������� � �� ������ �� ��� ����, �������� �� ����������� :
//�	����� ��� � ������, ������ ����� � ���������[10.00...5000.00].
//�	����� ��� �  ���� �� ����� �������� ������ : "summer" ��� "winter"
//�����
//�� ��������� ������ �� �� ��������� ��� ����.
//�	����� ��� � "Somewhere in {����������}" ������� "Bulgaria", "Balkans" � "Europe"
//�	����� ��� � "{��� �������} � {��������� ����}"
//o	��������� ���� �� � ����� "Camp" � "Hotel"
//o	������ ������ �� � ���������� � ������� �� ������� ���� ���� ����������� �������