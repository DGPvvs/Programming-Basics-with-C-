// 03 Logistics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"
#define PERSENT "%"

string FormatDoubleNum(double, int);

int main()
{
    const double priceMinibus = 200.0;
    const double priceTruck = 175.0;
    const double priceTrain = 120.0;

    string input;
    getline(cin, input);
    int numberGoods = stoi(input);

    int loadMinibus = 0;
    int loadTruck = 0;
    int loadTrain = 0;

    for (int i = 1; i <= numberGoods; i++)
    {
        getline(cin, input);
        int tonnageLoad = stoi(input);

        if (tonnageLoad <= 3)
        {
            loadMinibus += tonnageLoad;
        }
        else if (tonnageLoad <= 11)
        {
            loadTruck += tonnageLoad;
        }
        else
        {
            loadTrain += tonnageLoad;
        }

    }

    double tottalLoad = (loadMinibus + loadTruck + loadTrain) * 1.0;
    double totalPrice = (loadMinibus * priceMinibus + loadTruck * priceTruck + loadTrain * priceTrain) / tottalLoad;

    string output = string().append(FormatDoubleNum(totalPrice, 2))
                            .append(NEW_LINE)
                            .append(FormatDoubleNum(((loadMinibus / tottalLoad) * 100.0), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append(FormatDoubleNum(((loadTruck / tottalLoad) * 100.0), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append(FormatDoubleNum(((loadTrain / tottalLoad) * 100.0), 2))
                            .append(PERSENT);

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

//���������� �� ����������� �� �������� ������. � ���������� �� ������� �� ������ � ����� �������� �������� ��������.
//������ �� ���, �� ����� �� �������� ������ � �������� �� ����� �������� ��������:
//�	�� 3 ���� � ��������(200 ���� �� ���)
//�	�� 4 �� 11 ���� � ������(175 ���� �� ���)
//�	12 � ������ ���� � ���� (120 ���� �� ���)
//������ ������ � �� ��������� �������� ���� �� ��� �������� �����, ����� � �������� �� ��������  ���������� � ����� �������� ��������, ������ ������ �����(� ������) �� ������ ������.
//����
//�� ��������� �� ����� �������� �� �����, ����� �� ������� ���:
//�	�� ������ ��� � ���� �� �������� �� ������ � ���� ����� � ��������� [1...1000]
//�	�� ����� ���� ����� �� ������� ��� � ������ �� ������ � ���� ����� � ��������� [1...1000]
//�����
//�� �� ��������� �� ��������� 4 ����, ����� ������:
//�	����� ��� � �������� ���� �� ��� �������� ����� (���������� �� ������ ���� ���� ���. �������);
//�	����� ��� � ��������� ���� ���������� � �������� (������� ����� 0.00% � 100.00%);
//�	����� ��� � ���������  ���� ���������� � ������ (������� ����� 0.00% � 100.00%);
//�	�������� ��� � ��������� ���� ���������� � ���� (������� ����� 0.00% � 100.00%).
