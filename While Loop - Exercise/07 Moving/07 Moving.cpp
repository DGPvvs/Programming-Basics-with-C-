// 07 Moving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    const string done = "Done";

    string input;
    getline(cin, input);
    int width = stoi(input);

    getline(cin, input);
    int length = stoi(input);

    getline(cin, input);
    int height = stoi(input);

    int tottalSpace = width * length * height;

    bool isExitLoop = false;

    for (int i = 0; !isExitLoop; i += 0 )
    {
        getline(cin, input);

        if (input == done)
        {
            isExitLoop = true;
        }
        else
        {
            int boxes = stoi(input);

            int diff = tottalSpace - boxes;


            if (diff < 0)
            {
                isExitLoop = true;
            }

            tottalSpace = diff;
        }
    }

    string output = EMPTY;

    if (tottalSpace >= 0)
    {
        output.append(to_string(tottalSpace))
              .append(" Cubic meters left.");
    }
    else
    {
        output.append("No more free space! You need ")
              .append(to_string(-tottalSpace))
              .append(" Cubic meters more.");
    }

    cout << output << endl;
}

//�� ������������� �� ������ ��� �� ���� ���� �������, �� �� �� ������ �� ����� �� ��������. �������� ������ �� � ������ � ������� ��������� ����� �� ���������� ��� ����. ��� ������� �� ������� ���� ����� �� �����, ������ �� ���� �� ������� ����� ��������. ��� ���������� �������� ������������ � ������ �� ������, ������ ���� �� ��������� ������, ���� �� ������� �� ���� ��������� �� �������.
//�������� ��������, ����� ��������� ��������� ���� �� �������� �� ����, ����� ������ ���� ���� ������� ������ ��. 
//�������: ���� ����� � � ����� �������:  1m.x 1m.x 1m.
//����
//������������ ������� �������� ����� �� ������� ������:
//1.�������� �� ���������� ������������ - ���� ����� � ��������� [1...1000]
//2.������� �� ���������� ������������ - ���� ����� � ��������� [1...1000]
//3.�������� �� ���������� ������������ - ���� ����� � ��������� [1...1000]
//4.�� ���������� ������(�� ���������� �� ������� "Done") -���� ������, ����� �� �������� � ���������� - ���� ����� � ��������� [1...10000]
//���������� ������ �� �������� ����������� �� ����� ��� ������� "Done" ��� ��� ���������� ����� ������.
//�����
//�� �� �������� �� ��������� ���� �� �������� ������:
//�	��� �������� �� ��������� "Done" � ��� ��� �������� �����:
//"{���� �������� ���. �����} Cubic meters left."
//�	��� ���������� ����� ������ ����� �� � ����� ������� "Done":
//"No more free space! You need {���� ����������� ���. �����} Cubic meters more."