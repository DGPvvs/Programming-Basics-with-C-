// 06 Concatenate Data.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const string SPACE = " ";

    string firstName, lastName, age, town;

    cin >> firstName >> lastName >> age >> town;

    cout << "You are " << firstName << SPACE << lastName << ", a " << age << "-years old person from " <<town << "." << endl;
}

// �������� ��������, ����� ������� �� ��������� ���, �������, ������� � ���� � ������ ��������� �� ������� ���:
//"You are <firstName> <lastName>, a <age>-years old person from <town>."
