// 08 Point on Rectangle Border.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    double x1 = stod(input);

    getline(cin, input);
    double y1 = stod(input);

    getline(cin, input);
    double x2 = stod(input);

    getline(cin, input);
    double y2 = stod(input);

    getline(cin, input);
    double x = stod(input);

    getline(cin, input);
    double y = stod(input);

    bool insideX = x1 <= x && x <= x2;
    bool insideY = y1 <= y && y <= y2;

    bool inX = (x1 == x || x2 == x) && insideY;
    bool inY = (y1 == y || y2 == y) && insideX;

    if (inX || inY)
    {
        cout << "Border" << endl;
    }
    else
    {
        cout << "Inside / Outside" << endl;
    }
}

//�������� ��������, ����� ��������� ���� ����� {x, y} �� ������ ����� ����� �� �������� �� ������������ {x1, y1} � { x2, y2}. �������� ����� �� ����� �� ��������� � �� ������� �� 6 ���� �������� �� �����������: ����������� ����� x1, y1, x2, y2, x � y (���� �� ���������, �� x1 < x2 � y1 < y2). �� �� �������� "Border" (������� ���� �� ����� �� ��������) ��� "Inside / Outside"(� �������� ������).