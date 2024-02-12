// 09 Sum of Two Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int startInterval = stoi(input);

    getline(cin, input);
    int endInterval = stoi(input);

    getline(cin, input);
    int magicNumber = stoi(input);

    int count = 0;
    int i = startInterval;
    int j = startInterval;

    bool isMagic = false;
    bool isExitI = false;
    bool isExitJ = false;

    string output = EMPTY;

    while (!isMagic && !isExitI)
    {
        isExitJ = false;
        j = startInterval;

        while (!isExitJ && !isMagic)
        {
            count++;

            if ((i + j) == magicNumber)
            {
                output.append("Combination N:")
                    .append(to_string(count))
                    .append(" (")
                    .append(to_string(i))
                    .append(" + ")
                    .append(to_string(j))
                    .append(" = ")
                    .append(to_string(magicNumber))
                    .append(")")
                    .append(NEW_LINE);

                isMagic = true;
            }

            j++;

            if (j > endInterval)
            {
                isExitJ = true;
            }
        }

        i++;

        if (i > endInterval)
        {
            isExitI = true;
        }
    }

    if (!isMagic)
    {
        output.append(to_string(count))
            .append(" combinations - neither equals ")
            .append(to_string(magicNumber))
            .append(NEW_LINE);
    }

    cout << output;

    return 0;
}

//�������� �������� ����� ��������� ������ �������� ���������� �� ������ ����� � ��������� �� ��� ������ �����.
//�� ������ �� ���������, ��� ����� � ������������ ����� ���� �� ������� � ����� �� ������ ��������� �����.
//��� ���� ���� ���� ���������� ���������� �� ��������� �� ������ ���������, �� �� � ��������.
//����
//������ �� ���� �� ��������� � �� ������ �� ��� ����:
//�	����� ��� � ������ �� ��������� � ���� ����� � ��������� [1...999]
//�	����� ��� � ���� �� ��������� � ���� ����� � ��������� [��-������ �� ������� �����...1000]
//�	����� ��� � ����������� ����� � ���� ����� � ��������� [1...10000]
//�����
//�� ��������� ������ �� �� �������� ���� ���, ������ ���������:
//�	��� � �������� ���������� ����� ���� �� ������� � ����� �� ����������� �����
//o	"Combination N:{������� �����} ({������� �����} + {����� �����} = {����������� �����})"
//�	��� �� � �������� ���������� ���������� �� ���������
//o	"{����� �� ������ ����������} combinations - neither equals {����������� �����}"
