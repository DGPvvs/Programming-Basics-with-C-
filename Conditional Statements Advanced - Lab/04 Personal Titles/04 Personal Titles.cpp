// 04 Personal Titles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const double ageRange = 16.0;
    const char male = 'm';

    double age;
    char sex;
    cin >> age >> sex;

    string output;

    if (sex == male)
    {
        if (age < ageRange)
        {
            output = "Master";
        }
        else
        {
            output = "Mr.";
        }
    }
    else
    {
        if (age < ageRange)
        {
            output = "Miss";
        }
        else
        {
            output = "Ms.";
        }
    }

    cout << output << endl;
}

//�� �� ������ �������� ��������, ����� ������� �������(������ �����) � ���('m' ��� 'f'), �������� �� ����������� � ��������� ��������� ������� �������� :
//�	"Mr." � ���(��� 'm') �� 16 ��� ������ ������
//�	"Master" � �����(��� 'm') ��� 16 ������
//�	"Ms." � ����(��� 'f') �� 16 ��� ������ ������
//�	"Miss" � ������(��� 'f') ��� 16 ������