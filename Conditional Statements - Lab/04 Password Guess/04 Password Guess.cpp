// 04 Password Guess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string Password = "s3cr3t!P@ssw0rd";

    const string OK = "Welcome";
    const string Wrong = "Wrong password!";

    string input;
    cin >> input;

    string result = input == Password ? OK : Wrong;

    cout << result << endl;
}

//�� �� ������ ��������, ����� ���� ������ (�����), �������� �� ����������� � ��������� ���� ���������� ������ ������� � ������� "s3cr3t!P@ssw0rd".
//��� ���������� �� �� ������ "Welcome". ��� ������������ �� �� ������ "Wrong password!". 
