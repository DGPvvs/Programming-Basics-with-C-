// 06 Operations Between Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    string operation;
    cin >> n1 >> n2 >> operation;

    string s = "";
    bool isNotDevide = true;
    int intResult = 0;

    if (operation == "+")
    {
        intResult = n1 + n2;
        cout << n1 << " + " << n2 << " = " << intResult << " - ";
    }
    else if (operation == "-")
    {
        intResult = n1 - n2;
        cout << n1 << " - " << n2 << " = " << intResult << " - ";
    }
    else if (operation == "*")
    {
        intResult = n1 * n2;
        cout << n1 << " * " << n2 << " = " << intResult << " - ";
    }
    else if (n2 != 0)
    {        
        if (operation == "%")
        {
            intResult = n1 % n2;
            cout << n1 << " % " << n2 << " = " << intResult << endl;
            isNotDevide = false;
        }
        else if (operation == "/")
        {
            double doubleResult = n1 * 1.0 / n2;
            cout << n1 << " / " << n2 << " = ";

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            cout << doubleResult << endl;
            isNotDevide = false;
        }
    }
    else
    {
        cout << "Cannot divide " << n1 << " by zero" << endl;
        isNotDevide = false;
    }

    if (isNotDevide)
    {
        if (intResult % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}

//�������� ��������, ����� ���� ��� ���� �����(N1 � N2) � ��������, � ����� �� �� ������� ������ ������������� �������� � ���.���������� �������� �� : ��������(+), ���������(-), ���������(*), �������(/ ) � ������� � �������(%).��� ��������, ��������� � ��������� �� ��������� ������ �� �� �������� ���������� � ���� ��� � ����� ��� �������.��� ������������ ������� � ����������.��� ��������� ������� � ��������.������ �� �� ��� �������, �� ��������� ���� �� � ����� �� 0 (����), � �� ���� �� �� ����.� ���� ������ ������ �� �� �������� ��������� ��������e.
//����
//�� ��������� �� �������� 3 ����, �������� �� ����������� :
//�	N1 � ���� ����� � ���������[0...40 000]
//�	N2 � ���� ����� � ���������[0...40 000]
//�	�������� � ���� ������ ������� : "+", "-", "*", "/", "%"
//�����
//�� �� �������� �� ��������� ���� ��� :
//�	��� ���������� � ��������, ��������� ��� ��������� :
//o	 "{N1} {��������} {N2} = {��������} � {even/odd}"
//�	��� ���������� � ������� :
//o	"{N1} / {N2} = {��������}" � ���������� � ���������� �� ������� ���� ���� ���.�������
//�	��� ���������� � ������� � ������� :
//o	"{N1} % {N2} = {�������}"
//�	� ������ �� ������� � 0 (����) :
//    o	"Cannot divide {N1} by zero"