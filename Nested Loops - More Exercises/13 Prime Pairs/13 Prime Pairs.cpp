// 13 Prime Pairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"
#define SPACE " "

bool isPrime(int);

int main()
{
    string input;
    getline(cin, input);    
    int firstPair = stoi(input);

    getline(cin, input);
    int secondPair = stoi(input);

    getline(cin, input);
    int firstInterval = stoi(input);

    getline(cin, input);
    int secondInterval = stoi(input);

    string output = EMPTY;

    for (int i = firstPair; i <= firstPair + firstInterval; i++)
    {
        if (isPrime(i))
        {
            for (int j = secondPair; j <= secondPair + secondInterval; j++)
            {
                if (isPrime(j))
                {
                    output.append(to_string(i))
                          .append(to_string(j))
                          .append(NEW_LINE);
                }
            }
        }
    }

    cout << output;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n == 2 || n == 3)
    {
        return true;
    }
    
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

//�������� ��������, ����� �������� � �������� �� ��������� ������������� �����, � ����� ������� � ������� ������ ����� ��������� ���������� ������ ����� (������ �� ������ ����� 1723). �������� �������� �� ����� ������ �� �� ��������� �������� �� �������� �� ����� 2 �����, �������� ���� ����, ����� ��������� � ����� �������� �������� � ��-������ �� ���������.
//����
//�� ��������� �� ����� ������ ����:
//�	�� ������ ��� � ��������� �������� �� ������� ������� ������ ����� � ���� ����������� ����� � ��������� [10� 90]
//�	�� ������ ��� � ��������� �������� �� ������� ������ ����� � ���� ����������� ����� � ��������� [10� 90]
//�	�� ������ ��� � ��������� ����� ��������� � �������� �������� ��  ������� ������ ����� � ���� ����������� ����� � ��������� [1� 9]
//�	�� ��������� ��� � ��������� ����� ��������� � �������� �������� ��  ������� ������ ����� � ���� ����������� ����� � ��������� [1� 9]
//�����:
//�� �� ��������� �� ��������� ��������������� �����, � ����� ������� ��� � ������� ��� ����� �� ������ ���������� �����.