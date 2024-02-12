// 01 Match Tickets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const double priceVIP = 499.99;
    const double priceNormal = 249.99;

    const string VIP = "VIP";

    string input;
    getline(cin, input);
    double budget = stod(input);

    string category;
    getline(cin, category);

    getline(cin, input);
    int countHumman = stoi(input);

    double transportPrice = countHumman < 5
        ? budget * .75
        : countHumman < 10
        ? budget * .6
        : countHumman < 25
        ? budget * .5
        : countHumman < 50
        ? budget * .4
        : budget * .25;

    double ticketPrice = category == VIP
        ? priceVIP * countHumman
        : priceNormal * countHumman;

    double diff = budget - (transportPrice + ticketPrice);

    string output = string();

    if (diff >= 0)
    {
        output.append("Yes! You have ")
            .append(FormatDoubleNum(diff, 2))
            .append(" leva left.");
    }
    else
    {
        output.append("Not enough money! You need ")
            .append(FormatDoubleNum(((-1.0) * diff), 2))
            .append(" leva.");
    }

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//������ ������� �������� �� ���� 2016, ����� ������������ ������ �� �� �������. �������� ���� ��� ��������� � �������� ����:
//�	VIP � 499.99 ����.
//�	Normal � 249.99 ����.
//�������������� ���� ��������� ������, � ����� �� ������ � ������� �������� ����� ������� �� ������� ������ �� �� ������ �� ��������� 1 �� 4 � 75% �� �������.
//�	�� 5 �� 9 � 60% �� �������.
//�	�� 10 �� 24 � 50% �� �������.
//�	�� 25 �� 49 � 40% �� �������.
//�	50 ��� ������ � 25% �� �������.
//�������� ��������, ����� �� �������� ���� � ���������� ���� �� ������� ����� �� �� ����� ������ �� ��������� ���������. � ����� ���� �� �� ������� ��� �� �� �� �����.
//����
//������ �� ���� �� ��������� � ������� ����� 3 ����:
//�	�� ������ ��� � �������� � ������ ����� � ��������� [1 000.00 ... 1 000 000.00]
//�	�� ������ ��� � ����������� � "VIP" ��� "Normal"
//�	�� ������ ��� � ����� �� ������ � ������� � ���� ����� � ��������� [1 ... 200]
//�����
//�� �� �������� �� ��������� ���� ���:
//�	��� �������� � ����������:
//o "Yes! You have {���������� ���� �� �������} leva left."
//�	��� �������� �� � ����������:
//o "Not enough money! You need {������, ����� �� �������} leva."
//������ ������ �� �� ����������� � ������� �� ��� ����� ���� ����������� �������.
