// 04 Car Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int stratInterval = stoi(input);

    getline(cin, input);
    int endInterval = stoi(input);

    string output = EMPTY;

    for (int firstPosition = stratInterval; firstPosition <= endInterval; firstPosition++)
    {
        for (int secondPosition = stratInterval; secondPosition <= endInterval; secondPosition++)
        {
            for (int thirdPosition = stratInterval; thirdPosition <= endInterval; thirdPosition++)
            {
                bool flag = (((secondPosition + thirdPosition) % 2) == 0);

                if (flag)
                {
                    for (int fourPosition = stratInterval; fourPosition <= endInterval; fourPosition++)
                    {
                        flag = (firstPosition > fourPosition);

                        if (flag)
                        {
                            flag = ((((firstPosition % 2) == 0) && ((fourPosition % 2) != 0)) || (((fourPosition % 2) == 0) && ((firstPosition % 2) != 0)));

                            if (flag)
                            {
                                output.append(to_string(firstPosition))
                                    .append(to_string(secondPosition))
                                    .append(to_string(thirdPosition))
                                    .append(to_string(fourPosition))
                                    .append(SPACE);
                            }
                        }
                    }
                }
            }
        }
    }

    output.erase(output.length() - 1, output.length());

    cout << output << endl;

    return 0;
}

//������������, ������ ������ ����������� ������ � ������� �� �������������� ��� ���� �� ����� ����� ��� �� ����������� �� ������ �� ������� �� ���������� �� ��������� ����������� ������.
//����� ���� ��������� ����������� ����� �� ������ �� ������ �����. ���������, ����� ������������� ����������� �� ������������ ������ �� ��������: 
//�	��� ������� ������� � ����� �����, �� ��� ������ �� �������� �� ������� ����� � ��������� � ��� ������� � �������, �������� �� �����
//�	������� ����� �� ������ � ��-������ �� ����������
//�	������ �� ������� � ������� ����� ������ �� � ����� �����
//����� �� ������ �� ��� ����� - ������ � ���� �� ��������, ����� ����� ������ �� �� �������� ����� ���� ����� �� ������.
//����
//1.	����� ��� - ����������� ����� - �������� �� ��������� � ���� ����� � ��������� [1�9]
//2.����� ��� - ����������� ����� - ���� �� ��������� � ���� ����� � ��������� [1�9]
//�����
//�� ��������� ������ �� �� ��������� ������ ��������� ������, ��������� � ��������.
