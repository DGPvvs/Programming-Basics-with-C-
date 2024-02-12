// 12 The song of the wheels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

bool IsControl(int, int, int, int, int);

int main()
{
    string input;
    getline(cin, input);
    int controlSum = stoi(input);

    string machNum = "No!";
    int count = 0;
    string output = EMPTY;

    for (int a = 1; a <= 9; a++)
    {
        for (int b = a + 1; b <= 9; b++)
        {
            for (int c = 1; c <= 9; c++)
            {
                for (int d = 1; d < c; d++)
                {
                    if (IsControl(a, b, c, d, controlSum))
                    {
                        count++;
                        output.append(to_string(a))
                              .append(to_string(b))
                              .append(to_string(c))
                              .append(to_string(d))
                              .append(SPACE);

                        if (count == 4)
                        {
                            machNum = EMPTY;
                            machNum.append("Password: ")
                                   .append(to_string(a))
                                   .append(to_string(b))
                                   .append(to_string(c))
                                   .append(to_string(d));
                        }
                    }
                }
            }
        }
    }

    output.append(NEW_LINE)
          .append(machNum);

    cout << output << endl;
}

bool IsControl(int a, int b, int c, int d, int control)
{
    return (a * b) + (c * d) == control;
}

//��������������� �� ���� ���� � ������� ���������� - ���� � ������ - ������ �����. � ���� � ��������� ������� �� ������� ������. ��� ��� ���������� � �� ������ �� �������, ������ � ����� �� ������� ������ ������. �������� �, �� �������� � ������ � �������� ������:
//������� �� �������, ��� �����  ���� ���� �����, ��������� ��������  �� ������ ��,
//������ � ��������� �� 4 �� 144 �����������, �� �� �� ������� ���� �� �� � ���������. �
//�������� ��� ������: "abcd" � ����������� �������� ������ �� � ����� ��  a*b + c*d , �� ������ �� ����� ������� �������� �������: 
//�	��� ���������� �� � � b: a < b
//�	��� �������� ��  c � d: c > d
//�	a, b, c � d �� ����� � ��������� [1 - 9]
//�������� ��� ������ ������, ������ �������� �� � �������� �����, ����� ������ �� �� ��������.
//� ������, �� �� �� ������ ������ �����, ��������� �� �No!�.
//����
//�� ��������� �� ���� ���� ���� ����� (����������� ��������): M � ���� ����� � ��������� [4 � 144] ;
//�����
//������������� �� ��������� ������ �� ���������:
//�	��� �� �������� �������� ����� (�bcd), ���������� �� ���������, �� ����������� �������� � ���������� ��������: �{�}{b}{c}{d} �
//�	��������� �� ���� �� ����� ���� �� ��� ���:
//�	��� ���������� �������� �������� �� ���������: �Password: {�}{b}{c}{d}�
//�	��� �� �� �������� ������ ����� ��� ����  �������� �������� �����������: �No!�