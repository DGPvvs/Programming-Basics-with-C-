// 07 House Painting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

class myString :public string
{
private:
    const string EMPTY = "";
    const string NEW_LINE = "\r\n";

public:

    myString(const char* s) :string(s)
    {

    }

    myString() :string()
    {

    }

    string Empty()
    {
        return this->EMPTY;
    }
    string NewLine()
    {
        return this->NEW_LINE;
    }

    bool Contains(string f)
    {
        int idx = this->find(f);
        return idx > -1;
    }

    string ToLower()
    {
        string s = string("");

        string::iterator it;
        for (it = this->begin(); it != this->end(); it++)
        {
            s.append(1, tolower(*it));
        }

        return s;
    }

    string ToUpper()
    {
        string s = string("");

        string::iterator it;
        for (it = this->begin(); it != this->end(); it++)
        {
            s.append(1, toupper(*it));
        }

        return s;
    }

    ~myString()
    {

    }
};


string FormatDoubleNum(double, int);

int main()
{
    const double RED_PAINT_NORM = 4.3;
    const double GREEN_PAINT_NORM = 3.4;

    const double DOOR_AREA = 1.2 * 2.0;
    const double WINDOWS_AREA = 2 * 1.5 * 1.5;

    string input;
    getline(cin, input);
    double x = stod(input);

    getline(cin, input);
    double y = stod(input);

    getline(cin, input);
    double h = stod(input);

    double floorArea = x * (2 * y + h);
    double wallsArea = 2 * x * (x + y) - DOOR_AREA - WINDOWS_AREA;

    myString output = myString();

    output.append(FormatDoubleNum(wallsArea / GREEN_PAINT_NORM, 2))
          .append(myString().NewLine())
          .append(FormatDoubleNum(floorArea / RED_PAINT_NORM, 2))
          .append(myString().NewLine());

    cout << output;
}

string FormatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

//�������� ��������, ����� �� �������� ����� ����� ��� � ����� �� ������������ �� ���a. ���� �� ������� �� �������� ������ ���, � �� ������� � �������. ������� �� �������� ��� � 1 ����� �� 3.4 �2, � �� ��������� � 1 ����� �� 4.3 �2.
//������� ���� �������� �������:
//�	�������� � ������� ����� �� �������� ��� ������ �x�
//o	�� �������� ����� ��� ����������� ����� � �������� 1.2� � �������� 2�
//�	����������� ����� �� ������������� ��� ������ �x� � �y�
//o	� �� ����� ��������� ����� ��� �� ���� ��������� �������� ��� ������ 1.5�
//�������� ��� �������� �������:
//�	/*��� ������������� ��� ������ �x� � �y�*/
//�	/*��� ������������ ����������� ��� ������ �x� � �������� �h�*/
//������ �� ����������� ������ �� ������ ������ � ������ �� �������, �� ��
//�������� ����� ����� �� ����� ��� �� �� �����.
//����
//�� ��������� �� ����� 3 ����:
//1.x � ���������� �� ������ � ������ ����� � ��������� [2...100]
//2.y � ��������� �� ����������� ����� � ������ ����� � ��������� [2...100]
//3.h � ���������� �� ����������� ����� �� �������� � ������ ����� � ��������� [2...100]
//�����
//�� �� ��������� �� ��������� ��� ����� ����� �� ��� ���:
//�	������� ������ ���
//�	������e ������� ���
//����������� �� ������� ���� ���� ����������� �������.