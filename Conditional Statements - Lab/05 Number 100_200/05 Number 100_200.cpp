// 05 Number 100_200.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const string Less100 = "Less than 100";
    const string Else = "Between 100 and 200";
    const string Great200 = "Greater than 200";

    const int Hundred = 100;
    const int TwoHundred = 200;

    int input;
    cin >> input;

    string output = input < Hundred ? Less100 : input > TwoHundred ? Great200 : Else;
    cout << output << endl;
}

//�� �� ������ ��������, ����� ���� ���� �����, �������� �� ����������� � ��������� ���� � ��� 100, ����� 100 � 200 ��� ��� 200. ��� ������� �:
//�	��� 100 �����������: "Less than 100"
//�	����� 100 � 200 �����������: "Between 100 and 200"
//�	��� 200 �����������: "Greater than 200"
