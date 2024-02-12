// 02 Sleepy Tom Cat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define NEW_LINE "\r\n"

int main()
{
    const int Norm_Per_Year = 30000;
    const int Norm_Per_WorkDay = 63;
    const int Norm_Per_Holly = 127;
    const int Day_Per_Year = 365;

    string input;
    getline(cin, input);
    int hollyDays = stoi(input);

    int tottalMinutes = (Day_Per_Year - hollyDays) * Norm_Per_WorkDay + hollyDays * Norm_Per_Holly;

    int diff = Norm_Per_Year - tottalMinutes;

    string output = string();

    if (diff >= 0)
    {
        output.append("Tom sleeps well")
              .append(NEW_LINE)
              .append(to_string(diff / 60))
              .append(" hours and ")
              .append(to_string(diff % 60))
              .append(" minutes less for play")
              .append(NEW_LINE);
    }
    else
    {
        output.append("Tom will run away")
              .append(NEW_LINE)
              .append(to_string((-1) * diff / 60))
              .append(" hours and ")
              .append(to_string((-1) * diff % 60))
              .append(" minutes more for play")
              .append(NEW_LINE);
    }

    cout << output;
}

//Котката Том обича по цял ден да спи, за негово съжаление стопанинът му си играе с него винаги когато  има свободно време. За да се наспи добре, нормата за игра на Том е 30 000  минути в година. Времето за игра на Том зависи от почивните дни на стопанина му:
//•	Когато е на работа, стопанинът му си играе с него по 63 минути на ден.
//•	Когато почива, стопанинът му си играе с него  по 127 минути на ден.
//Напишете програма, която въвежда броя почивни дни и отпечатва дали Том може да се наспи добре и колко е разликата от нормата за текущата година, като приемем че годината има 365 дни.
//Пример: 20 почивни дни -> работните дни са 345 (365 – 20 = 345). Реалното време за игра е 24 275 минути (345 * 63 + 20 *127).  Разликата от нормата е 5 725 минути (30 000 – 24 275 = 5 725) или 95 часа и 25 минути.
//Вход
//Входът се чете от конзолата и се състои от едно число – броят почивни дни – цяло число в интервала [0...365]
//Изход
//На конзолата трябва да се отпечатат два реда.
//•	Ако времето за игра на Том е над нормата за текущата година:
//o На първия ред отпечатайте: “Tom will run away”
//o	 На втория ред отпечатайте разликата от нормата във формат:
//“{ H}
//hours and { M }
//minutes more for play”
//•	Ако времето за игра на Том е под нормата за текущата година:
//o На първия ред отпечатайте: “Tom sleeps well”
//o	 На втория ред отпечатайте разликата от нормата във формат:
//“{ H}
//hours and { M }
//minutes less for play”
