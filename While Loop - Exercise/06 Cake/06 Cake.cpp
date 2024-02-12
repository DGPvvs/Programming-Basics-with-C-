// 06 Cake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    const string STOP = "STOP";

    string input;
    getline(cin, input);
    int wide = stoi(input);

    getline(cin, input);
    int length = stoi(input);

    int tottalPieces = wide * length;

    bool isLoopExit = false;
    bool notEnoughPieces = false;

    while (!isLoopExit)
    {
        getline(cin, input);

        if (input == STOP)
        {
            isLoopExit = true;
        }
        else
        {
            tottalPieces -= stoi(input);

            if (tottalPieces <= 0)
            {
                isLoopExit = true;
                notEnoughPieces = true;
            }
        }
    }

    string output = EMPTY;

    if (notEnoughPieces)
    {
        output.append("No more cake left! You need ")
              .append(to_string(-1 * tottalPieces))
              .append(" pieces more.");
    }
    else
    {
        output.append(to_string(tottalPieces))
              .append(" pieces are left.");
    }

    cout << output << endl;
}
//�������� ��� �� 30-�� ������ ���, �� ����� ���������� ����� � ������� �����. ��� ����� �� ���� ����� ������� ����� �� �� ������ ������� �� ���. ������ ������ � �� �������� ��������, ����� ��������� ���� �� ���������, ����� ������� �� �����, ����� �� �� ������. �� �������� ��������� �� ������� (�������� � ������� � ���� ����� � ��������� [1...1000]) � ���� ���� �� ����� ���, �� ���������� �� ��������� "STOP" ��� ������ �� ������ �������, ����� �� ���������, ����� ������� ������ �� ���. 
//�������: ���� ����� ����� � � ������ 1�1 ��.
//�� �� �������� �� ��������� ���� �� �������� ������:
//�	"{���� �������} pieces are left." - ��� �������� �� STOP � �� �� �������� ��������� �����
//�	"No more cake left! You need {���� ����������� �������} pieces more."