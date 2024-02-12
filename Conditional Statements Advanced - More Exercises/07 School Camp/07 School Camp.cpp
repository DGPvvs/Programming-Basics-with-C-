// 07 School Camp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string FormatDoubleNum(double, int);

int main()
{
    const string WINTER = "Winter";
    const string SPRING = "Spring";
    const string SUMMER = "Summer";
    const string BOYS = "boys";
    const string GIRLS = "girls";

    string season;
    getline(cin, season);

    string grupType;
    getline(cin, grupType);

    string input;
    getline(cin, input);
    int numberOfStudents = stoi(input);

    getline(cin, input);
    int numberOfNights = stoi(input);

    double price = .0;
    string sport;

    if (season == WINTER)
    {
        if (grupType == BOYS)
        {
            price = 9.6 * numberOfNights * numberOfStudents;
            sport = "Judo";
        }
        else if (grupType == GIRLS)
        {
            price = 9.6 * numberOfNights * numberOfStudents;
            sport = "Gymnastics";
        }
        else
        {
            price = 10.0 * numberOfNights * numberOfStudents;
            sport = "Ski";
        }
    }
    else if (season == SPRING)
    {
        if (grupType == BOYS)
        {
            price = 7.2 * numberOfNights * numberOfStudents;
            sport = "Tennis";
        }
        else if (grupType == GIRLS)
        {
            price = 7.2 * numberOfNights * numberOfStudents;
            sport = "Athletics";
        }
        else
        {
            price = 9.5 * numberOfNights * numberOfStudents;
            sport = "Cycling";
        }
    }
    else
    {
        if (grupType == BOYS)
        {
            price = 15.0 * numberOfNights * numberOfStudents;
            sport = "Football";
        }
        else if (grupType == GIRLS)
        {
            price = 15.0 * numberOfNights * numberOfStudents;
            sport = "Volleyball";
        }
        else
        {
            price = 20.0 * numberOfNights * numberOfStudents;
            sport = "Swimming";
        }
    }

    if (numberOfStudents >= 50)
    {
        price *= .5;
    }
    else if (numberOfStudents >= 20)
    {
        price *= (1 - .15);
    }
    else if (numberOfStudents >= 10)
    {
        price *= (1 - .05);
    }

    string output = string().append(sport)
                            .append(" ")
                            .append(FormatDoubleNum(price, 2))
                            .append(" lv.");

    cout << output << endl;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//������ ������� ���������� ������ �� ��������� �� ����� �� ����������. � ���������� �� ���� �� ���������� (��������, ����� ��� �����) � ���� �� ������� (�������/�������� ��� �������) ������ �� ��������� � ������ � ��������, ����� � �������, ����� �� ����������� ���������.
//	                ����� ��������	�������� ��������	����� ��������
//�������/��������	9.60	        7.20	            15
//������� �����	    10	            9.50	            20
//��������� �������� �������� �� �������� ����, � ���������� �� ���� �� ����������� � ������ �������:
//�	��� ����� �� ��������� � 50 ��� ������, ��������� �������� 50% ��������
//�	��� ����� �� ��������� � 20 ��� ������ � � ������ ����� ��-����� �� 50, ��������� �������� 15% ��������
//�	��� ����� �� ��������� � 10 ��� ������ � � ������ ����� ��-����� �� 20, ��������� �������� 5% ��������
//� ��������� ��-���� �� ������ ����������, ����� �� �� ����������� � ���������� �� ���� �� ���������� � �������:
//	                ����� ��������	�������� ��������	����� ��������
//��������	        Gymnastics	    Athletics	        Volleyball
//�������	            Judo	        Tennis	            Football
//������� �����	    Ski	            Cycling	            Swimming
//�� �� ������ ��������, ����� �������� ������, ����� �� ������� ��������� �� ��������� � �������� ������, ����� �� �� ���������� �� ���������.
//����
//�� ��������� �� ����� 4 ����:
//1.������� � ����� - �Winter�, �Spring� ��� �Summer�;
//2.����� �� ������� � ����� - �boys�, �girls� ��� �mixed�;
//3.���� �� ��������� � ���� ����� � ��������� [1 � 10000] ;
//4.���� �� ��������� � ���� ����� � ��������� [1 � 100].
//�����
//�� ��������� �� ��������� 1 ���:
//�	�������, ����� �� ������������ ��������� � ������ �� ���������, ����� � ��������� ���������, ����������� �� ������ ���� ���� ����������� �������, � ������� ������:
//"{�������} {������} lv.�
