// 02 Hospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    string input;
    getline(cin, input);
    int period = stoi(input);

    int doctors = 7;
    int inspected = 0;
    int unwatched = 0;

    for (int i = 1; i <= period; i++)
    {
        getline(cin, input);
        int numberPatients = stoi(input);

        if ((i % 3) == 0)
        {
            if (unwatched > inspected)
            {
                doctors++;
            }
        }

        if (doctors >= numberPatients)
        {
            inspected += numberPatients;
        }
        else
        {
            inspected += doctors;
            unwatched += numberPatients - doctors;
        }

    }

    string output = string().append("Treated patients: ")
                            .append(to_string(inspected))
                            .append(".")
                            .append(NEW_LINE)
                            .append("Untreated patients: ")
                            .append(to_string(unwatched))
                            .append(".");

    cout << output << endl;
}

//За даден период от време, всеки ден в болницата пристигат пациенти за преглед.
//Тя разполага първоначално със 7 лекари.
//Всеки лекар може да преглежда само по един пациент на ден, но понякога има недостиг на лекари, затова останалите пациенти се изпращат в други болници.
//Всеки трети ден, болницата прави изчисления и ако броят на непрегледаните пациенти е по-голям от броя на прегледаните, се назначава още един лекар.
//Като назначаването става преди да започне приемът на пациенти за деня.
//Напишете програма, която изчислява за дадения период броя на прегледаните и непрегледаните пациенти.
//Вход
//Входът се чете от конзолата и съдържа:
//•	На първия ред – периода, за който трябва да направите изчисления. Цяло число в интервала [1 ... 1000]
//•	На следващите редове(равни на броят на дните) – броя пациенти, които пристигат за преглед за текущия ден. Цяло число в интервала [0…10 000]
//Изход
//Да се отпечатат на конзолата 2 реда :
//•	На първия ред: "Treated patients: {брой прегледани пациенти}."
//•	На втория ред: "Untreated patients: {брой непрегледани пациенти}."
