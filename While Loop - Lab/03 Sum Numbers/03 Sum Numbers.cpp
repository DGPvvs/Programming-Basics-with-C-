// 03 Sum Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int range;
    cin >> range;

    int sum = 0;

    while (range > sum)
    {
        int num;
        cin >> num;
        sum += num;
    }

    cout << sum << endl;
}

//�������� ��������, ����� ���� ���� ����� �� ��������� � �� ����� ������� ��� ���� �����, ������ ������� ���� ����� ��-������ ��� ����� �� �������������� �����. ���� ����������� �� �� �������� ������ �� ���������� �����.