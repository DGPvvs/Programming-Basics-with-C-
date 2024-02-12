// 08 Graduation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define EMPTY "";

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
    string name;
    getline(cin, name);

    bool isLoopExit = false;
    int clase = 1;
    double averageGrade = .0;
    int countWrongGrade = 0;

    do
    {
        string input;
        getline(cin, input);

        double grade = stod(input);

        if (grade >= 4.0)
        {
            averageGrade += grade;
            clase++;
            countWrongGrade = 0;
        }
        else
        {
            countWrongGrade++;
        }

        isLoopExit = (clase > 12) || (countWrongGrade > 1);
    } while (!isLoopExit);

    string output = EMPTY;

    if (clase > 12)
    {
        output.append(name)
            .append(" graduated. Average grade: ")
            .append(formatDoubleNum((averageGrade / 12.0), 2));
    }
    else
    {
        output.append(name)
            .append(" has been excluded at ")
            .append(to_string(clase))
            .append(" grade");
    }

    cout << output << endl;
}

//�������� ��������, ����� ��������� �������� ������ �� ������ �� ������ �� ��������. �� ������ ��� �� �������� ����� �� �������, � �� ����� ������� ��� �������� ������� ������. �������� ��������� � ��������� ����, ��� ��������� �� ������ � ��-������ ��� ����� �� 4.00. ��� �������� ���� ������ ������ �� ���� ���, �� ��� ���� �������� � ���������� ���������, ���� �� ��������� ����� �� ������� � � ��� ���� ���� ��������.
// ��� ������� ���������� �� 12-�� ���� �� �� �������� : 
//"{��� �� �������} graduated. Average grade: {�������� ������ �� ������ ��������}"
//� ������, �� �������� � �������� �� �������, �� �� ��������:
//"{��� �� �������} has been excluded at {�����, � ����� � ��� ��������} grade"
//���������� ������ �� ���� ����������� �� ������ ���� ���� ����������� �������. 