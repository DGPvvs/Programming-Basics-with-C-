// 05 Character Sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for (int i = 0;i < input.length(); i++)
    {
        cout << input[i] << endl;
    }
}

//�������� ��������, ����� ���� �����(������), ������� �� ����������� � ������ ����� ������ �� ������ �� ������� ���.