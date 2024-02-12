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

//Курсът "Train the trainers" е към края си и финалното оценяване наближава. Вашата задача е да помогнете на журито което ще оценява презентациите, като напишете програма в която да изчислява средната оценка от представянето на всяка една презентация от даден студент, а накрая средният успех от всички тях.
//От конзолата на първият ред се прочита броят на хората в журито n - цяло число в интервала [1…20]
//След това на отделен ред се прочита името на презентацията - текст
//За всяка една презентация на нов ред се четат n - на брой оценки - реално число в интервала [2.00…6.00]
//След изчисляване на средната оценка за конкретна презентация, на конзолата се печата
// "{името на презентацията} - {средна оценка}."
//След получаване на команда "Finish" на конзолата се печата "Student's final assessment is {среден успех от всички презентации}." и програмата приключва.
//Всички оценки трябва да бъдат форматирани до втория знак след десетичната запетая.