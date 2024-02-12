// 02 Exam Preparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<sstream> 

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
    const string Enough = "Enough";

    string input;
    getline(cin, input);

    int numberOfUnsatisfactoryGrades = stoi(input);

    bool isLoopExit = false;
    bool isEnough = false;

    double averageScore = .0;
    int tottalTaskCount = 0;
    int currentWrongGrade = 0;

    string lastTaskName = EMPTY;

    while (!isLoopExit)
    {
        getline(cin, input);

        if (input == Enough)
        {
            isLoopExit = true;
            isEnough = true;
        }
        else
        {
            string grade;
            getline(cin, grade);

            int currentGrade = stoi(grade);
            lastTaskName = input;
            tottalTaskCount++;
            averageScore += currentGrade;

            if (currentGrade <= 4)
            {
                currentWrongGrade++;

                if (currentWrongGrade == numberOfUnsatisfactoryGrades)
                {
                    isLoopExit = true;
                }
            }
        }
    }

    string output = EMPTY;

    if (isEnough)
    {
        output.append("Average score: ")
              .append(formatDoubleNum(averageScore / tottalTaskCount, 2))
              .append(NEW_LINE)
              .append("Number of problems: ")
              .append(to_string(tottalTaskCount))
              .append(NEW_LINE)
              .append("Last problem: ")
              .append(lastTaskName);
    }
    else
    {
        output.append("You need a break, ")
              .append(to_string(numberOfUnsatisfactoryGrades))
              .append(" poor grades.");
    }

    cout << output << endl;
}

//�������� ��������, � ����� ����� ������ ������ �� ������ ������ �� ������ ��������� "Enough" �� ������� ��.
//��� ����� ������ ������ ��� �������� ������. ���������� ������ �� �������� ����������� �� ����� ��� ������� "Enough" ��� ��� ����� ������ ����������� ���� ��������������� ������.
//��������������� � ����� ������, ����� � ��-����� ��� ����� �� 4.
//����
//�	�� ����� ��� - ���� ��������������� ������ - ���� ����� � ��������� [1�5]
//�	���� ���� ����������� �� ����� �� ��� ����:
//o	��� �� ������ - ����� (���)
//o	������ - ���� ����� � ��������� [2�6]
//�����
//�	��� ����� ������ �� ��������� "Enough", ����������� �� 3 ����: 
//o	"Average score: {������ ������}"
//o	"Number of problems: {���� �� ������ ������}"
//o	"Last problem: {����� �� ���������� ������}"
//�	��� ������ ������������ ���� ��������������� ������:
//o	"You need a break, {���� ��������������� ������} poor grades."
//�������� ������ �� ���� ����������� �� ������ ���� ���� ����������� �������. 
