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

//Напишете програма, която да пресмята статистика на оценки от изпит.
//В началото програмата получава броят на студентите явили се на изпита и за всеки студент неговата оценка.
//На края програмата трябва да изпечата процента на студенти с оценка между 2.00 и 2.99, между 3.00 и 3.99, между 4.00 и 4.99, 5.00 или повече.
//Също така и средният успех на изпита.
//Вход
//От конзолата се четат поредица от числа, всяко на отделен ред:
//•	На първия ред – броя на студентите явили се на изпит – цяло число в интервала [1...1000]
//•	За всеки един студент на отделен ред – оценката от изпита – реално число в интервала [2.00...6.00]
//Изход
//Да се отпечатат на конзолата 5 реда, които съдържат следната информация:
//Ред 10 - "Top students: {процент студенти с успех 5.00 или повече}%"
//Ред 20 - "Between 4.00 and 4.99: {между 4.00 и 4.99 включително}%"
//Ред 30 - "Between 3.00 and 3.99: {между 3.00 и 3.99 включително}%"
//Ред 4 - "Fail: {по-малко от 3.00}%"
//Ред 5 - "Average: {среден успех}"
//Всички числа трябва да са форматирани до вторият знак след десетичната запетая.
