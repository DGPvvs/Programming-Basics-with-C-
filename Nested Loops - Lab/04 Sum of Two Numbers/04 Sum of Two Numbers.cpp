// 04 Sum of Two Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int start = stoi(input);

    getline(cin, input);
    int end = stoi(input);

    getline(cin, input);
    int magicNum = stoi(input);

    int count = 0;
    bool isMathes = false;

    int firstIterrator = start;

    string output = EMPTY;

    do
    {
        int secondIterrator = start;

        do
        {
            count++;
            int sum = firstIterrator + secondIterrator;
            if (sum == magicNum)
            {
                isMathes = true;
                output.append("Combination N:")
                      .append(to_string(count))
                      .append(" (")
                      .append(to_string(firstIterrator))
                      .append(" + ")
                      .append(to_string(secondIterrator))
                      .append(" = ")
                      .append(to_string(magicNum))
                      .append(")")
                      .append(NEW_LINE);
            }

            secondIterrator++;
        } while (!isMathes && secondIterrator <= end);

        firstIterrator++;
    } while (!isMathes && firstIterrator <= end);

    if (!isMathes)
    {
        output.append(to_string(count))
              .append(" combinations - neither equals ")
              .append(to_string(magicNum))
              .append(NEW_LINE);
    }

    cout << output;
}
//�������� �������� ����� ��������� ������ �������� ���������� �� ������ ����� � ��������� �� ��� ������ �����. �� ������ �� ���������, ��� ����� � ������������ ����� ���� �� ������� � ����� �� ������ ��������� �����. ��� ���� ���� ���� ���������� ���������� �� ��������� �� ��������� ���������, �� �� � ��������.
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