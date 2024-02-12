// 10 Profit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const int One_Lv = 1;
    const int Two_Lv = 2;
    const int Five_Lv = 5;

    string input;
    getline(cin, input);
    int countOne = stoi(input);

    getline(cin, input);
    int countTwo = stoi(input);

    getline(cin, input);
    int countFive = stoi(input);

    getline(cin, input);
    int tottalSum = stoi(input);

    string output = EMPTY;

    for (int one = 0; one <= countOne; one++)
    {
        for (int two = 0; two <= countTwo; two++)
        {
            for (int five = 0; five <= countFive; five++)
            {
                bool isPosible = one * One_Lv + two * Two_Lv + five * Five_Lv == tottalSum;

                if (isPosible)
                {
                    output.append(to_string(one))
                        .append(" * 1 lv. + ")
                        .append(to_string(two))
                        .append(" * 2 lv. + ")
                        .append(to_string(five))
                        .append(" * 5 lv. = ")
                        .append(to_string(tottalSum))
                        .append(" lv.")
                        .append(NEW_LINE);
                }
            }
        }
    }

    cout << output;

    return 0;
}

//����� �������� � ������ �� 1��., �� 2��. � �� 5��. �� �� ������ ��������, ����� ������� ���������� �� ����������� ���� �������� � ������ � ����, � ������� �� ����� ������ �������� ������ �� ����� ������ ���� �� �� ������� � ��������� ��������. 
//����
//������ �� ���� �� ��������� � ������� ����� 4 ����:
//1.���� ������ �� 1��. - ���� ����������� �����;
//2.���� ������ �� 2��. - ���� ����������� �����;
//3.���� �������� �� 5��. - ���� ����������� �����;
//4.���� - ���� ����������� ����� � ��������� [1�1000] ;
//�����
//�� �� ��������� �� ��������� ������ ���������� �� �������� ��������, ���������� ������, ����������� �� ������� �����:
//o "{��. 1��.} * 1 lv. + {��. 2��.} * 2 lv. + {��. 5��.} * 5 lv. = {����} lv."