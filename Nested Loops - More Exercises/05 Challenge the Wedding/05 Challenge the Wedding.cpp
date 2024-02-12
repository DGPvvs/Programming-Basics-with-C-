// 05 Challenge the Wedding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int numberMale = stoi(input);

    getline(cin, input);
    int numberFemale = stoi(input);

    getline(cin, input);
    int numberTables = stoi(input);

    int currentMale = 1;
    int currentFemale = 1;
    int currentNumTable = 1;

    bool isMaxMale = false;
    bool isMaxFemale = false;
    bool isMaxTable = false;

    string output = EMPTY;

    if (numberMale > 0 && numberFemale > 0 && numberTables > 0)
    {
        while (!isMaxTable && !isMaxFemale && !isMaxMale)
        {
            while (!isMaxTable && !isMaxMale)
            {
                isMaxFemale = false;
                currentFemale = 1;
                while (!isMaxTable && !isMaxFemale)
                {
                    output.append("(")
                          .append(to_string(currentMale))
                          .append(" <-> ")
                          .append(to_string(currentFemale))
                          .append(")")
                          .append(SPACE);

                    currentNumTable++;
                    if (currentNumTable > numberTables)
                    {
                        isMaxTable = true;
                    }

                    currentFemale++;
                    if (currentFemale > numberFemale)
                    {
                        isMaxFemale = true;
                    }

                }

                currentMale++;
                if (currentMale > numberMale)
                {
                    isMaxMale = true;
                }
            }
        }

        output.erase(output.length() - 1, output.length());
    }    

    cout << output << endl;
}

//����������� �� �������� ��, ������� � ���� ������� �� ����������� ���� ������ �� ������� �� ���������� ��, � ������ ������ �� ������������ - "����������� ��������".
//�������� ��������, ����� ��������� ������ �������� ����� �� ��������� �� ����������.
//��� ����������� ����� ��� � ����� ���� ��������� ��������� � ������� ������ ����������� �� 1.
//��� ����� ����� ������ ����, ���������� ������ �� ��������. ����� ���� ��� ��� �����.
//����
//�� ��������� �� ����� ����� 3 �����, ����� �� ������� ���:
//�	���� ������� ���� - ���� ����� � ��������� [1...100]
//�	���� ������� ���� - ���� ����� � ��������� [1...100]
//�	������������ ���� ���� - ���� ����� � ��������� [1...100]
//�����
//�� ��������� �� ��������� �� ���� ���, ��������� � �������� ������ ����� � �������� ������:
//�	({� ������} <-> {� ������}) ({� ������} <-> {� ������}) ...
