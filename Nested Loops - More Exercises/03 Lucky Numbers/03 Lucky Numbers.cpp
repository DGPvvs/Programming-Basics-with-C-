// 03 Lucky Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int devider = stoi(input);

    string output = EMPTY;

    for (int i = 1111; i <= 9999; i++)
    {
        bool notZeroFlag = true;
        int num = i;
        int pos = 1;
        int sum = 0;
        int halfSum = 0;

        while (notZeroFlag && num > 0)
        {
            int n = num % 10;

            if (n == 0)
            {
                notZeroFlag = false;
            }

            halfSum += n * (pos / 3);
            sum += n;
            pos++;
            num /= 10;
        }

        sum -= 2 * halfSum;

        bool flag = notZeroFlag && (devider % halfSum == 0) && (sum == 0);

        if (flag)
        {
            output.append(to_string(i))
                .append(SPACE);
        }
    }

    output.erase(output.length() - 1, output.length());

    cout << output << endl;

    return 0;
}

//�� �� ������ ��������, ����� ������� ���� ���� ����� N � �������� ������ �������� "��������" � �������� 4-������� �����(����� ����� �� ������� � � ��������� [1...9]). 
//������� ������ �� �������� �� �������� �������: 
//�������� ����� � 4-������� �����, �� ����� ����� �� ������� ��� ����� � ����� �� ����� �� ���������� ���. ������� N ������ �� �� ���� ��� ������� �� ����� �� ������� ��� ����� �� "����������" �����.
//����
//������ �� ���� �� ��������� � �� ������ �� ���� ���� ����� � ��������� [2...10000]
//�����
//�� ��������� ������ �� �� ��������� ������ "��������" � �������� 4-������� �����, ��������� � ��������
