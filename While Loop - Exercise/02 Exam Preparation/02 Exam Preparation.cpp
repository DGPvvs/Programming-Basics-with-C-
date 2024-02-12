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

//Напишете програма, в която Марин решава задачи от изпити докато не получи съобщение "Enough" от лектора си.
//При всяка решена задача той получава оценка. Програмата трябва да приключи прочитането на данни при команда "Enough" или ако Марин получи определения брой незадоволителни оценки.
//Незадоволителна е всяка оценка, която е по-малка или равна на 4.
//Вход
//•	На първи ред - брой незадоволителни оценки - цяло число в интервала [1…5]
//•	След това многократно се четат по два реда:
//o	Име на задача - текст (низ)
//o	Оценка - цяло число в интервала [2…6]
//Изход
//•	Ако Марин стигне до командата "Enough", отпечатайте на 3 реда: 
//o	"Average score: {средна оценка}"
//o	"Number of problems: {броя на всички задачи}"
//o	"Last problem: {името на последната задача}"
//•	Ако получи определеният брой незадоволителни оценки:
//o	"You need a break, {брой незадоволителни оценки} poor grades."
//Средната оценка да бъде форматирана до втория знак след десетичната запетая. 
