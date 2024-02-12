// 07 Projects Creation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""

int main()
{
    const int ProjectHours = 3;    

    string name;
    int projectNum;

    cin >> name;
    cin >> projectNum;

    string output = EMPTY;

    output
        .append("The architect ")
        .append(name)
        .append(" will need ")
        .append(to_string(projectNum * ProjectHours))
        .append(" hours to complete ")
        .append(to_string(projectNum))
        .append(" project/s.");

    cout << output << endl;

    return 0;
}

//Напишете програма, която изчислява колко часа ще са необходими на един архитект, за да изготви проектите на няколко строителни обекта. Изготвянето на един проект отнема три часа.
//Вход
//От конзолата се четат 2 реда:
//1.Името на архитекта - текст
//2.	Брой на проектите, които трябва да изготви - цяло число в интервала [0 … 100]
//Изход
//На конзолата се отпечатва:
//•	"The architect {името на архитекта} will need {необходими часове} hours to complete {брой на проектите} project/s."

//Напишете програма, която изчислява колко часа ще са необходими на един архитект,
//за да изготви проектите на няколко строителни обекта. Изготвянето на един проект отнема три часа.
