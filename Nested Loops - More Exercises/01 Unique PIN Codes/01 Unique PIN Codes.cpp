// 01 Unique PIN Codes.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int firstNum = stoi(input);

    getline(cin, input);
    int secondNum = stoi(input);

    getline(cin, input);
    int thirdNum = stoi(input);

    string output = EMPTY;

    for (int i = 1; i <= firstNum; i++)
    {
        if ((i % 2) == 0)
        {
            for (int j = 1; j <= secondNum; j++)
            {
                bool isSimple = ((j == 2) || (j == 3) || (j == 5) || (j == 7));

                if (isSimple)
                {
                    for (int k = 1; k <= thirdNum; k++)
                    {
                        if ((k % 2) == 0)
                        {
                            output.append(to_string(i))
                                .append(SPACE)
                                .append(to_string(j))
                                .append(SPACE)
                                .append(to_string(k))
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

//�� �� ������ ��������, ����� �������� ���������� PIN ������, ���� ������� �� ����� PIN ��� �� � ��������� ��������.
//�� �� ���� ������� ���� PIN ��� ��� ������ �� �������� �� �������� �������:
//�	������� � ������� ����� ������ �� ����� �����.
//�	������� ����� ������ �� ���� ������ ����� � ��������� [2...7].
//����
//�� ��������� �� ����� 3 ����:
//�	������� ������� �� ������� ����� - ���� ����� � ��������� [1...9]
//�	������� ������� �� ������� ����� - ���� ����� � ��������� [1...9]
//�	������� ������� �� ������� ����� - ���� ����� � ��������� [1...9]
//�����
//�� �� ��������� �� ��������� ������ ������� ���������� PIN ������, ����� ����� ��������� �� ����������� ���������.
