// 06 Oscars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<sstream>
#include <string>
#include <iostream>

using namespace std;

#define EMPTY ""

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
    const double StarsPoint = 1250.5;
        
    string name, input;
    getline(cin, name);

    getline(cin, input);
    double points = stod(input);

    getline(cin, input);
    int numOfRaters = stoi(input);

    for (int i = 0; i < numOfRaters; i++)
    {
        if (points > StarsPoint)
        {
            i = numOfRaters;
        }
        else
        {
            string judgeName;
            getline(cin, judgeName);

            getline(cin, input);
            double judgePoints = stod(input);

            points += judgeName.length() * judgePoints / 2.0;
        }
    }

    string output = EMPTY;

    if (points > StarsPoint)
    {
        output.append("Congratulations, ")
              .append(name)
              .append(" got a nominee for leading role with ")
              .append(formatDoubleNum(points, 1))
              .append("!");
    }
    else
    {
        output.append("Sorry, ")
              .append(name)
              .append(" you need ")
              .append(formatDoubleNum((StarsPoint - points), 1))
              .append(" more!");
    }

    cout << output << endl;
}

//�������� ��� �� ���������� �� �������� �������, ����� �� �������� ������� �� ������/�������. ���������� �� �� ���� ������������ ����� �� �������. ���� ���� ����� �������� �� ���� ������ ������. �������, ����� ������� �������� �� �������� ��: ��������� �� ����� �� ���������� �������� �� �������, ����� ���� ������ �� ���. 
//��� ���������� � ����� ������ ��������� 1250.5 ���������� ������ �� �������� � �� �� ��������, �� ������� ������ � ������� ���������.
//����
//�	��� �� ������� - �����
//�	����� �� ���������� - ������ ����� � ��������� [2.0... 450.5]
//�	���� ��������� n - ���� ����� � ���������[1� 20]
//�� ���������� n-�� ���� ����:
//o ��� �� ���������� - �����
//o	����� �� ���������� - ������ ����� � ��������� [1.0... 50.0]
//�����
//�� �� �������� �� ��������� ���� ���:
//�	��� ������� �� ��� 1250.5:
//"Congratulations, {��� �� �������} got a nominee for leading role with {�����}!"
//�	��� ������� �� �� ����������:
//	"Sorry, {��� �� �������} you need {����� �����} more!"
//���������� �� �� ����������� �� ������� ����� ���� ���������� ����!