// 05 Special Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    string input;
    getline(cin, input);
    int devider = stoi(input);

    string s = EMPTY;

    for (int i = 1111; i <= 9999; i++)
    {
        bool flag = true;
        int num = i;

        while (flag && num > 0)
        {
            int n = num % 10;

            if (n == 0 || devider % n != 0)
            {
                flag = false;
            }

            num /= 10;
        }

        if (flag)
        {
            s.append(to_string(i)).append(" ");
        }
    }

    s.erase(s.length() - 1, s.length());

    cout << s << endl;
}

//�� �� ������ ��������, ����� ���� ���� ���� ����� N, �������� �� �����������, � �������� ������ �������� "���������" ����� �� 1111 �� 9999. �� �� ���� "��������o" ���� �����, �� ������ �� �������� �� �������� �������: 
//�	N �� �� ���� �� ����� ���� �� �������� ����� ��� �������.
//������: ��� N = 16, 2418 � ��������� �����:
//�	16 / 2 = 8 ��� �������
//�	16 / 4 = 4 ��� �������
//�	16 / 1 = 16 ��� �������
//�	16 / 8 = 2 ��� �������
//����
//������ �� ���� �� ��������� � �� ������ �� ���� ���� ����� � ��������� [1�600000]
//�����
//�� ��������� ������ �� �� ��������� ������ "���������" �����, ��������� � ��������