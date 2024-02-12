// 07 Area of Figures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const string Square = "square";
    const string Rectangle = "rectangle";
    const string Circle = "circle";
    const string Triangle = "triangle";

    double area = 0.0;

    string input;
    cin >> input;

    if (input == Square)
    {
        double a;
        cin >> a;
        area = a * a;
    }
    else if (input == Rectangle)
    {
        double a, b;
        cin >> a >> b;

        area = a * b;
    }
    else if (input == Circle)
    {
        double radius;
        cin >> radius;

        area = M_PI * radius * radius;
    }
    else 
    {
        double a, h;
        cin >> a >> h;

        area = a * h / 2.0;
    }

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;
}

//�� �� ������ ��������, � ����� ������������ ������� ���� � ��������� �� ����������� ������ � �������� ������ �.�������� �� ������ ���� : �������(square), ������������(rectangle), ����(circle) � ����������(triangle).�� ������ ��� �� ����� �� ���� ���� �� ��������(����� ��� �������� ����������� : square, rectangle, circle ��� triangle).
//�	��� �������� � �������(square) : �� ��������� ��� �� ���� ���� ������ ����� - ������� �� �������� ��
//�	��� �������� � ������������(rectangle) : �� ���������� ��� ���� ����� ��� ������ ����� - ��������� �� �������� ��
//�	��� �������� � ����(circle) : �� ��������� ��� ���� ���� ������ ����� - �������� �� �����
//�	��� �������� � ����������(triangle) : �� ���������� ��� ���� ����� ��� ������ ����� - ��������� �� �������� �� � ��������� �� ���������� ��� ���
//���������� �� �� �������� �� 3 ����� ���� ����������� �������.