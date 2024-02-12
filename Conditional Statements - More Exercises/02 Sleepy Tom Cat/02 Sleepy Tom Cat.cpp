// 02 Sleepy Tom Cat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    const int Norm_Per_Year = 30000;
    const int Norm_Per_WorkDay = 63;
    const int Norm_Per_Holly = 127;
    const int Day_Per_Year = 365;

    string input;
    getline(cin, input);
    int hollyDays = stoi(input);

    int tottalMinutes = (Day_Per_Year - hollyDays) * Norm_Per_WorkDay + hollyDays * Norm_Per_Holly;

    int diff = Norm_Per_Year - tottalMinutes;

    string output = string();

    if (diff >= 0)
    {
        output.append("Tom sleeps well")
              .append(NEW_LINE)
              .append(to_string(diff / 60))
              .append(" hours and ")
              .append(to_string(diff % 60))
              .append(" minutes less for play")
              .append(NEW_LINE);
    }
    else
    {
        output.append("Tom will run away")
              .append(NEW_LINE)
              .append(to_string((-1) * diff / 60))
              .append(" hours and ")
              .append(to_string((-1) * diff % 60))
              .append(" minutes more for play")
              .append(NEW_LINE);
    }

    cout << output;
}

//������� ��� ����� �� ��� ��� �� ���, �� ������ ��������� ���������� �� �� ����� � ���� ������ ������  ��� �������� �����. �� �� �� ����� �����, ������� �� ���� �� ��� � 30 000  ������ � ������. ������� �� ���� �� ��� ������ �� ��������� ��� �� ��������� ��:
//�	������ � �� ������, ���������� �� �� ����� � ���� �� 63 ������ �� ���.
//�	������ ������, ���������� �� �� ����� � ����  �� 127 ������ �� ���.
//�������� ��������, ����� ������� ���� ������� ��� � ��������� ���� ��� ���� �� �� ����� ����� � ����� � ��������� �� ������� �� �������� ������, ���� ������� �� �������� ��� 365 ���.
//������: 20 ������� ��� -> ��������� ��� �� 345 (365 � 20 = 345). �������� ����� �� ���� � 24 275 ������ (345 * 63 + 20 *127).  ��������� �� ������� � 5 725 ������ (30 000 � 24 275 = 5 725) ��� 95 ���� � 25 ������.
//����
//������ �� ���� �� ��������� � �� ������ �� ���� ����� � ����� ������� ��� � ���� ����� � ��������� [0...365]
//�����
//�� ��������� ������ �� �� ��������� ��� ����.
//�	��� ������� �� ���� �� ��� � ��� ������� �� �������� ������:
//o �� ������ ��� �����������: �Tom will run away�
//o	 �� ������ ��� ����������� ��������� �� ������� ��� ������:
//�{ H}
//hours and { M }
//minutes more for play�
//�	��� ������� �� ���� �� ��� � ��� ������� �� �������� ������:
//o �� ������ ��� �����������: �Tom sleeps well�
//o	 �� ������ ��� ����������� ��������� �� ������� ��� ������:
//�{ H}
//hours and { M }
//minutes less for play�
