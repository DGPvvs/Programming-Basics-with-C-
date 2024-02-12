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

//Напишете програма, която изчислява средната оценка на ученик от цялото му обучение. На първия ред ще получите името на ученика, а на всеки следващ ред неговите годишни оценки. Ученикът преминава в следващия клас, ако годишната му оценка е по-голяма или равна на 4.00. Ако ученикът бъде скъсан повече от един път, то той бива изключен и програмата приключва, като се отпечатва името на ученика и в кой клас бива изключен.
// При успешно завършване на 12-ти клас да се отпечата : 
//"{име на ученика} graduated. Average grade: {средната оценка от цялото обучение}"
//В случай, че ученикът е изключен от училище, да се отпечата:
//"{име на ученика} has been excluded at {класа, в който е бил изключен} grade"
//Стойността трябва да бъде форматирана до втория знак след десетичната запетая. 