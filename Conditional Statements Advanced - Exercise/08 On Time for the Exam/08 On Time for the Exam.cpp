// 08 On Time for the Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

#define EMPTY "";
#define NEW_LINE "\n\r"

using namespace std;

int main()
{
    int examHour, examMinutes;
    cin >> examHour >> examMinutes;

    int arrivalHour, arrivalMinutes;
        
    cin >> arrivalHour >> arrivalMinutes;

    int examTime = examHour * 60 + examMinutes;
    int arrivalTime = arrivalHour * 60 + arrivalMinutes;

    int difftime = examTime - arrivalTime;

    int hours = abs(difftime) / 60;
    int minutes = abs(difftime) % 60;

    string time = EMPTY;

    if (hours > 0)
    {
        string min = EMPTY;

        if (minutes < 10)
        {
            min.append("0");
        }

        min.append(to_string(minutes));
        time.append(to_string(hours))
            .append(":")
            .append(min)
            .append(" hours");
    }
    else
    {
        time.append(to_string(minutes))
            .append(" minutes");
    }

    string s = EMPTY;

    if (difftime >= 0)
    {
        if (difftime == 0)
        {
            s = "On time";
        }
        else if (difftime <= 30)
        {
            s.append("On time")
             .append(NEW_LINE)
             .append(time)
             .append(" before the start");
        }
        else
        {
            s.append("Early")
             .append(NEW_LINE)
             .append(time)
             .append(" before the start");
        }
    }
    else
    {
        s.append("Late")
         .append(NEW_LINE)
         .append(time)
         .append(" after the start");
    }

    cout << s << endl;
}

//Студент трябва да отиде на изпит в определен час (например в 9:30 часа). Той идва в изпитната зала в даден час на пристигане (например 9:40). Счита се, че студентът е дошъл навреме, ако е пристигнал в часа на изпита или до половин час преди това. Ако е пристигнал по-рано повече от 30 минути, той е подранил. Ако е дошъл след часа на изпита, той е закъснял. Напишете програма, която прочита време на изпит и време на пристигане и отпечатва дали студентът е дошъл навреме, дали е подранил или е закъснял и с колко часа или минути е подранил или закъснял.
//Вход
//От конзолата се четат 4 цели числа (по едно на ред), въведени от потребителя:
//•	Първият ред съдържа час на изпита – цяло число от 0 до 23.
//•	Вторият ред съдържа минута на изпита – цяло число от 0 до 59.
//•	Третият ред съдържа час на пристигане – цяло число от 0 до 23.
//•	Четвъртият ред съдържа минута на пристигане – цяло число от 0 до 59.
//Изход
//На първият ред отпечатайте:
//•	“Late”, ако студентът пристига по-късно от часа на изпита.
//•	“On time”, ако студентът пристига точно в часа на изпита или до 30 минути по-рано.
//•	“Early”, ако студентът пристига повече от 30 минути преди часа на изпита.
//Ако студентът пристига с поне минута разлика от часа на изпита, отпечатайте на следващия ред:
//•	
//“mm minutes after the start” за закъснение под час.
//•	“hh:mm hours after the start” за закъснение от 1 час или повече. Минутите винаги печатайте с 2 цифри, например “1:03”.