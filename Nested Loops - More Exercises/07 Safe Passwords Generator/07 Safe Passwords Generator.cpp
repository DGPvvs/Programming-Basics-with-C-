// 07 Safe Passwords Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    const char MIN_A = (char)35;
    const char MAX_A = (char)55;
    const char MIN_B = (char)64;
    const char MAX_B = (char)96;

    string input;
    getline(cin, input);
    int a = stoi(input);

    getline(cin, input);
    int b = stoi(input);

    getline(cin, input);
    int maximumNumber = stoi(input);

    char charA = MIN_A;
    char charB = MIN_B;
    bool isExitNumber = false;
    bool isExitA = false;
    bool isExitB = false;
    int curentNumber = 1;
    int aCurent = 1;
    int bCurent = 1;

    string output = EMPTY;

    while (!isExitNumber && !isExitA && !isExitB)
    {
        while (!isExitNumber && !isExitA)
        {
            isExitB = false;
            bCurent = 1;

            while (!isExitNumber && !isExitB)
            {
                output.append(1, charA)
                    .append(1, charB)
                    .append(to_string(aCurent))
                    .append(to_string(bCurent))
                    .append(1, charB)
                    .append(1, charA)
                    .append("|");

                curentNumber++;

                if (curentNumber > maximumNumber)
                {
                    isExitNumber = true;
                }

                charA++;

                if (charA > MAX_A)
                {
                    charA = MIN_A;
                }

                charB++;

                if (charB > MAX_B)
                {
                    charB = MIN_B;
                }

                bCurent++;

                if (bCurent > b)
                {
                    isExitB = true;
                }
            }

            aCurent++;

            if (aCurent > a)
            {
                isExitA = true;
            }
        }
    }

    cout << output << endl;

    return 0;
}

//��� �� �������� �� ����, �� �� � ���� ������ ����� �� ��������� � ���������� �����, ������ ������ �� ������� ��������� �� ������, ����� �� ����� ���������� �������.
//������ ������ � �� � ��������� �� ������ ��������, ����� �� �������� ���� ������, ��������� ���� �� ����� �� ����� "|".
//�� �� ������ ��������, ����� �������� ����� �� ������� ���� � �������:
//ABxyBA
//���� ��� ����� ���������� �� ��� ���, ����������� �� ��������� �� ���������� � 1. ��� A ��������� 55, �� ����� �� 35. ��� B ��������� 96, �� ����� �� 64.
//����
//�� ��������� �� ���� 1 ���:
//�	�� ������ ��� a � ���� ����� � ��������� [1 � 1000]
//�	�� ������ ��� b � ���� ����� � ��������� [1 � 1000]
//�	�� ������ ��� ���������� ���� ���������� ������ � ���� ����� � ��������� [1 � 1000000]
//�����������:
//�	A � ������ � ASCII �������� � ��������� [35� 55]
//�	B � ������ � ASCII �������� � ��������� [64 � 96]
//�	x e ���� ����� � ��������� [1� a] 
//�	y e ���� ����� � ��������� [1� b]
//�����:
//�� �� �������� �� ���������:
//�	������������ ���.��� ����� �� ������������ � ��-����� �� ����������� �� ����, �� �� �������� �� ���������� ��������, � �������� ������ �� �� �������� �� ������� ���� �� ������������.