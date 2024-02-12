// 05 Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<sstream>
#include <string>


using namespace std;

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

int main()
{
    int numTabs, salary;
    cin >> numTabs >> salary;

    string site;
    getline(cin, site);

    for (int i = 0; i <= numTabs; i++)
    {

        if (site == "Facebook")
        {
            salary -= 150;
        }

        if (site == "Instagram")
        {
            salary -= 100;
        }

        if (site == "Reddit")
        {
            salary -= 50;
        }

        if (salary <= 0)
        {
            break;
        }

        getline(cin, site);
    }

    if (salary <= 0)
    {
        cout << "You have lost your salary." << endl;
    }
    else
    {
        cout << formatDoubleNum(salary, 0) << endl;
    }
}

//��� �� �������� ��������� �� ��� ������ ��������� ���������  ����� � �������, ����� �� ���������.  
//�� �� ����������� ����, ��� ������� ����������� �������� �� ���������� ������ �� �������� �� ����������� ��. 
//������ ��������� ���� � ���� �� ������� �������� �����:
//�	"Facebook"-> 150 ��.
//�	"Instagram"-> 100 ��.
//�	"Reddit"-> 50 ��.
//�� ��������� �� ����� ��� ����:
//�	���� �������� ������ � �������� n - ���� ����� � ��������� [1...10]
//�	������� - ����� � ���������[500...1500]
//���� ���� n � �� ���� ���� �� ���� ��� �� ������� � �����
//�����
//�	��� �� ����� �� ���������� ��������� ����� ��-����� ��� ����� �� 0 ����, �� ��������� �� ������� 
//"You have lost your salary." � ���������� ���������. 
//�	� �������� ������ ���� ���������� �� ��������� �� ������� ��������� �� ��������� (�� �� ������ ���� ���� �����).