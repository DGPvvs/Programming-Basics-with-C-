// 02 Equal Sums Even Odd Position.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    string input;
    getline(cin, input);
    int firstNum = stoi(input);

    getline(cin, input);
    int secondNum = stoi(input);

    string s = EMPTY;

    for (int i = firstNum; i <= secondNum; i++)
    {
        int oddSum = 0;
        int evenSum = 0;

        int currentNum = i;
        int position = 1;

        while (currentNum > 0)
        {
            int n = currentNum % 10;
            currentNum /= 10;

            evenSum += n * (1 - position % 2);
            oddSum += n * (position % 2);

            position++;
        }

        bool isEqual = evenSum == oddSum;
        if (isEqual)
        {
            s.append(to_string(i)).append(" ");
        }
    }

    cout << s << endl;
}

//�������� ��������, ����� ���� �� ��������� ��� ����������� ���� ����� � ��������� �� 100000 �� 300000. ������ ������� �������� ����� �� ���� �� ����� �� �������. �� ��������� �� �� ��������� �� 1 ��� ��������� � �������� ������ �����, ����� �� ������� ����� �����, ��������� �� ��������� ����� � ��������� �� �������� �������:
//�	������ �� ������� �� ����� � ������� ������� �� �� �����. ��� ���� �����, ���������� �� ��������� �� ��������� �� �� ������� ��������. 