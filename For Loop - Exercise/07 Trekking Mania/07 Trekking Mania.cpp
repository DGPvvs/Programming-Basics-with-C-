// 07 Trekking Mania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<sstream> 
#include<cmath> 

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

int main()
{
    const int MUSALA_INDEX = 0;
    const int MONBLAN_INDEX = 1;
    const int KILIMANDJARO_INDEX = 2;
    const int K2_INDEX = 3;
    const int EVEREST_INDEX = 4;

    const int MUSALA_COUNTS = 5;
    const int MONBLAN_COUNTS = 12;
    const int KILIMANDJARO_COUNTS = 25;
    const int K2_COUNTS = 40;

    int grups[] = {0, 0, 0, 0, 0};

    string input;
    getline(cin, input);
    int numOfGroups = stoi(input);

    int tottalPeople = 0;

    for (int i = 0; i < numOfGroups; i++)
    {
        getline(cin, input);
        int peopleCount = stoi(input);

        tottalPeople += peopleCount;

        int index = peopleCount <= MUSALA_COUNTS ? MUSALA_INDEX : peopleCount <= MONBLAN_COUNTS ? MONBLAN_INDEX : peopleCount <= KILIMANDJARO_COUNTS ? KILIMANDJARO_INDEX : peopleCount <= K2_COUNTS ? K2_INDEX : EVEREST_INDEX;

        grups[index] += peopleCount;
    }

    string output = EMPTY;

    for (int i = 0; i < 5; i++)
    {
        output.append(formatDoubleNum(grups[i] * 100.0 / tottalPeople, 2))
              .append("%")
              .append(NEW_LINE);
    }

    cout << output;
}

//�������� �� ���� �������� �� ������� �� ����� � ���������� ���������� ������� �� ���������. ������ ������� �� �������, ���������� �� �������� �������� �������.
//�	����� �� 5 ������ � �������� ������
//�	����� �� 6 �� 12 ������ � �������� �������
//�	����� �� 13 �� 25 ������ � �������� ������������
//�	����� �� 26 �� 40 ������ �  �������� �2
//�	����� �� 41 ��� ������ ������ � �������� �������
//�� �� ������ ��������, ����� ��������� �������� �� ���������� ��������� ����� ����.
//����
//�� ��������� �� ����� �������� �� �����, ����� �� ������� ���:
//�	�� ������ ��� � ���� �� ������� �� �������� � ���� ����� � ��������� [1...1000]
//�	�� ����� ���� ����� �� ������� ��� � ���� �� ������ � ������� � ���� ����� � ��������� [1...1000]
//�����
//�� �� ��������� �� ��������� 5 ����, ����� �� ����� ������� ������� ����� 0.00% � 100.00% � ������� �� ������� ����� ���� ����������� �������.
//�	����� ��� - ��������� ��������� ������
//�	����� ��� � ��������� ��������� �������
//�	����� ��� � ��������� ��������� ������������
//�	�������� ��� � ��������� ��������� �2
//�	���� ��� � ��������� ��������� �������