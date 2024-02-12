// 02 Letters Combinations.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    char startChar = input[0];

    getline(cin, input);
    char endChar = input[0];

    getline(cin, input);
    char omittedChar = input[0];

    int count = 0;

    string output = EMPTY;

    for (char firstchar = startChar; firstchar <= endChar; firstchar++)
    {
        if (firstchar != omittedChar)
        {
            for (char secondchar = startChar; secondchar <= endChar; secondchar++)
            {
                if (secondchar != omittedChar)
                {
                    for (char thirdchar = startChar; thirdchar <= endChar; thirdchar++)
                    {
                        if (thirdchar != omittedChar)
                        {
                            output.append(1, firstchar)
                                .append(1, secondchar)
                                .append(1, thirdchar)
                                .append(SPACE);

                            count++;
                        }
                    }
                }
            }
        }
    }

    output.append(to_string(count)).append(NEW_LINE);

    cout << output;

    return 0;
}

//�������� ��������, ����� �� �������� �� ��������� ������ ���������� �� 3 ����� � ������� ��������, ���� �� ��������� ������������ ��������� �������� �� ��������� �����.
//������ ������ �� �� ���������� ����� �� ������������ ����������.
//����
//������ �� ���� �� ��������� � ������� ����� 3 ����:
//��� 1.����� ����� �� ����������� ������ �� ������ �� ��������� � �� �a� �� �z�.
//��� 2.	����� ����� �� ����������� ������ �� ���� �� ���������  � �� ������� ����� �� �z�.
//��� 3.	����� ����� �� ����������� ������ � �� �a� �� �z� � ���� ������������ ��������� ���� ������� �� ���������.
//�����
//�� �� ��������� �� ���� ��� ������ ���������� ���������� �� ��������� ���� ����� �� ��������� � ��������.
