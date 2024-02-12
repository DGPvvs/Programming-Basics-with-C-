// 02 Hospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int period = stoi(input);

    int doctors = 7;
    int inspected = 0;
    int unwatched = 0;

    for (int i = 1; i <= period; i++)
    {
        getline(cin, input);
        int numberPatients = stoi(input);

        if ((i % 3) == 0)
        {
            if (unwatched > inspected)
            {
                doctors++;
            }
        }

        if (doctors >= numberPatients)
        {
            inspected += numberPatients;
        }
        else
        {
            inspected += doctors;
            unwatched += numberPatients - doctors;
        }

    }

    string output = string().append("Treated patients: ")
                            .append(to_string(inspected))
                            .append(".")
                            .append(NEW_LINE)
                            .append("Untreated patients: ")
                            .append(to_string(unwatched))
                            .append(".");

    cout << output << endl;
}

//�� ����� ������ �� �����, ����� ��� � ��������� ��������� �������� �� �������.
//�� ��������� ������������ ��� 7 ������.
//����� ����� ���� �� ��������� ���� �� ���� ������� �� ���, �� �������� ��� �������� �� ������, ������ ���������� �������� �� �������� � ����� �������.
//����� ����� ���, ��������� ����� ���������� � ��� ����� �� �������������� �������� � ��-����� �� ���� �� ������������, �� ��������� ��� ���� �����.
//���� ������������� ����� ����� �� ������� ������� �� �������� �� ����.
//�������� ��������, ����� ��������� �� ������� ������ ���� �� ������������ � �������������� ��������.
//����
//������ �� ���� �� ��������� � �������:
//�	�� ������ ��� � �������, �� ����� ������ �� ��������� ����������. ���� ����� � ��������� [1 ... 1000]
//�	�� ���������� ������(����� �� ����� �� �����) � ���� ��������, ����� ��������� �� ������� �� ������� ���. ���� ����� � ��������� [0�10 000]
//�����
//�� �� ��������� �� ��������� 2 ���� :
//�	�� ������ ���: "Treated patients: {���� ���������� ��������}."
//�	�� ������ ���: "Untreated patients: {���� ������������ ��������}."
