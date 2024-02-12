// 04 Grades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define NEW_LINE "\r\n"
#define PERSENT "%"

string FormatDoubleNum(double, int);

int main()
{
    int countExcellentStudents, countVeryGood, countGood, countMedium;
    double totalSumGrade = 0;

    string input;
    getline(cin, input);
    int numberStudents = stoi(input);

    countExcellentStudents = countVeryGood = countGood = countMedium = 0;

    for (int i = 1; i <= numberStudents; i++)
    {
        string input;
        getline(cin, input);
        double grade = stod(input);

        if (grade >= 5.0)
        {
            countExcellentStudents++;
        }
        else if (grade >= 4.0)
        {
            countVeryGood++;
        }
        else if (grade >= 3.0)
        {
            countGood++;
        }
        else
        {
            countMedium++;
        }

        totalSumGrade += grade;
    }

    double averageGrade = totalSumGrade / numberStudents;

    string output = string().append("Top students: ")
                            .append(FormatDoubleNum(((countExcellentStudents * 100) / (numberStudents * 1.0)), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append("Between 4.00 and 4.99: ")
                            .append(FormatDoubleNum(((countVeryGood * 100) / (numberStudents * 1.0)), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append("Between 3.00 and 3.99: ")
                            .append(FormatDoubleNum(((countGood * 100) / (numberStudents * 1.0)), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append("Fail: ")
                            .append(FormatDoubleNum(((countMedium * 100) / (numberStudents * 1.0)), 2))
                            .append(PERSENT)
                            .append(NEW_LINE)
                            .append("Average: ")
                            .append(FormatDoubleNum(averageGrade, 2));

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

//�������� ��������, ����� �� �������� ���������� �� ������ �� �����.
//� �������� ���������� �������� ����� �� ���������� ����� �� �� ������ � �� ����� ������� �������� ������.
//�� ���� ���������� ������ �� �������� �������� �� �������� � ������ ����� 2.00 � 2.99, ����� 3.00 � 3.99, ����� 4.00 � 4.99, 5.00 ��� ������.
//���� ���� � �������� ����� �� ������.
//����
//�� ��������� �� ����� �������� �� �����, ����� �� ������� ���:
//�	�� ������ ��� � ���� �� ���������� ����� �� �� ����� � ���� ����� � ��������� [1...1000]
//�	�� ����� ���� ������� �� ������� ��� � �������� �� ������ � ������ ����� � ��������� [2.00...6.00]
//�����
//�� �� ��������� �� ��������� 5 ����, ����� �������� �������� ����������:
//��� 10 - "Top students: {������� �������� � ����� 5.00 ��� ������}%"
//��� 20 - "Between 4.00 and 4.99: {����� 4.00 � 4.99 �����������}%"
//��� 30 - "Between 3.00 and 3.99: {����� 3.00 � 3.99 �����������}%"
//��� 4 - "Fail: {��-����� �� 3.00}%"
//��� 5 - "Average: {������ �����}"
//������ ����� ������ �� �� ����������� �� ������� ���� ���� ����������� �������.
