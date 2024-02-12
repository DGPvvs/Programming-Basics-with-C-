// 08 Secret Door's Lock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int hundreds = stoi(input);

    getline(cin, input);
    int dozens = stoi(input);

    getline(cin, input);
    int ones = stoi(input);

    string output = EMPTY;

    for (int firstNum = 1; firstNum <= hundreds; firstNum++)
    {
        if ((firstNum % 2) == 0)
        {
            for (int secondNum = 1; secondNum <= dozens; secondNum++)
            {
                bool isSimple = (secondNum == 2) || (secondNum == 3) || (secondNum == 5) || (secondNum == 7);

                if (isSimple)
                {
                    for (int thirdNum = 1; thirdNum <= ones; thirdNum++)
                    {
                        if ((thirdNum % 2) == 0)
                        {
                            output.append(to_string(firstNum))
                                .append(SPACE)
                                .append(to_string(secondNum))
                                .append(SPACE)
                                .append(to_string(thirdNum))
                                .append(NEW_LINE);
                        }
                    }
                }
            }
        }
    }

    cout << output;

    return 0;
}

//� ����� ��� ����� �����, �� ����� ������ �����, �� ����� �� � ������� �� � ������� � �� ���� ����� ��� ��� ���. �� �� ���� ��������� ������ �� �� ������ ��������� ���.
//�������� ��������, ����� �������� ���������� ������ �������� ����� � ������������� �� �����������.
//�� ��������� �� �������� ��� �����. ���� ����� �� ����� ������� �������, �� ����� ��� ������ �� ������� ������ ���������� �����, �� ����� ����� ���� ����� �������� �� �������� �������:
//�	������� �� ��������� � ������� �� ��������� ������ �� ���� �����
//�	������� �� ���������� �� ���� ������ ����� � ��������� (2...7).
//���� �� �� ���������� ���������� ������ ���������� ������������� �� �����������, � ����� �� ���� ���������� �� �� ������� �������.
//����
//�� ��������� �� ����� 3 ����:
//�	������� ������� �� ��������� - ���� ����� � ��������� (1-9)
//�	������� ������� �� ���������� - ���� ����� � ��������� (1-9)
//�	������� ������� �� ��������� - ���� ����� � ��������� (1-9)
//�����
//�� �� ��������� �� ��������� ������ ���������� �����, �� ����� ����� ���� ���� �������� �� ��������� ��-����.
