// 04 Train The Trainers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

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
    const string Finish = "Finish";

    string input;
    getline(cin, input);

    int n = stoi(input);

    bool isLoopExit = false;

    string output = EMPTY;

    int presentationsCount = 0;
    double allGrade = .0;

    for (int i = 0; !isLoopExit; i += 0)
    {

        string nameOfPresentation;
        getline(cin, nameOfPresentation);

        if (nameOfPresentation == Finish)
        {
            isLoopExit = true;
        }
        else
        {
            double grade = .0;

            for (int j = 0; j < n; j++)
            {
                getline(cin, input);
                grade += stod(input);
            }

            presentationsCount++;
            grade /= n;
            allGrade += grade;

            output.append(nameOfPresentation)
                  .append(" - ")
                  .append(formatDoubleNum(grade, 2))
                  .append(".")
                  .append(NEW_LINE);
        }
    }

    output.append("Student's final assessment is ")
          .append(formatDoubleNum((allGrade / presentationsCount), 2))
          .append(".");

    cout << output << endl;
}

//������ "Train the trainers" � ��� ���� �� � ��������� ��������� ���������. ������ ������ � �� ��������� �� ������ ����� �� ������� �������������, ���� �������� �������� � ����� �� ��������� �������� ������ �� ������������� �� ����� ���� ����������� �� ����� �������, � ������ �������� ����� �� ������ ���.
//�� ��������� �� ������� ��� �� ������� ����� �� ������ � ������ n - ���� ����� � ��������� [1�20]
//���� ���� �� ������� ��� �� ������� ����� �� ������������� - �����
//�� ����� ���� ����������� �� ��� ��� �� ����� n - �� ���� ������ - ������ ����� � ��������� [2.00�6.00]
//���� ����������� �� �������� ������ �� ��������� �����������, �� ��������� �� ������
// "{����� �� �������������} - {������ ������}."
//���� ���������� �� ������� "Finish" �� ��������� �� ������ "Student's final assessment is {������ ����� �� ������ �����������}." � ���������� ���������.
//������ ������ ������ �� ����� ����������� �� ������ ���� ���� ����������� �������.