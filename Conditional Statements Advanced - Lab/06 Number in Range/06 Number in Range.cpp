// 06 Number in Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const int LoverBorder = -100;
    const int UpperBorder = 100;
    const int Zero = 0;

    const string Yes = "Yes";
    const string No = "No";

    int input;
    cin >> input;

    string output = (input >= LoverBorder && input <= UpperBorder && input != Zero)
        ? Yes
        : No;

    cout << output << endl;
}

//�� �� ������ ��������, ����� ��������� ���� ���������� �� ����������� ����� � � ���������[-100, 100] � � �������� �� 0 � ������� "Yes", ��� �������� �� ���������, ��� "No" ��� � ����� ���.