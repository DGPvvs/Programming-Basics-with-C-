// 09. Yard Greening.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string to_string(double num, int format)
{
    int range = 1;

    for (int i = 0; i < format; i++)
    {
        range *= 10;
    }

    int x = num * range + .5;

    string numS = to_string(x);

    string s = "";
    int y = 1;
    for (int i = numS.length() - 1; i >= 0; i--)
    {
        s = numS[i] + s;
        if (y == format)
        {
            s = "." + s;
        }
        y++;
    }

    return s;
}

int main()
{
    const double OnePrice = 7.61;
    const double Discont = .18;

    double area;
    cin >> area;
    
    double pricePerArea = area * OnePrice;
    double discontPrice = pricePerArea * Discont;

    double tottalPrice = pricePerArea - discontPrice;

    cout << "The final price is: " << tottalPrice << " lv." << endl;
    cout << "The discount is: " << discontPrice << " lv." << endl;
}

//�������� ��������� � ������� ���� �� ������������ � ����� �� ������� ��������� �� ����� �� ���, ���� �� ���� ����� ������� ����� ���������� � ������� �� ������� ��. �� ����� � ����� �����.
//�������� ��������, ����� ��������� ������������ ����, ����� �������� �� ������ �� ������� �� ������� ���������� �� �������. ������ �� ���� ��. �. � 7.61 �� ��� ���. ������ ������� ���� � ����� �����, ������� ���������� �������� 18% �������� �� �������� ����.
//����
//�� ��������� �� ������� ���� ���� ���:
//1.	��. �����, ����� �� ����� ��������� � ������ ����� � ��������� [0.00 � 10000.00]
//�����
//�� ��������� �� ���������� ��� ����:
//�	"The final price is: {������ ���� �� ��������} lv."
//�	"The discount is: {��������} lv."
