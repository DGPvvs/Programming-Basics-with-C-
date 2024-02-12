// 06 Wedding Seats.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const char StartSector = 'A';
    const char StartSeat = 'a';

    string input;
    getline(cin, input);
    char sector = input[0];

    getline(cin, input);
    int sectorRow = stoi(input);

    getline(cin, input);
    int seatOddRow = stoi(input);

    string output = EMPTY;

    int maxSectorNum = (int)(sector - StartSector);

    int allSeats = 0;

    for (int sectorCounter = 0; sectorCounter <= maxSectorNum; sectorCounter++)
    {
        char currentSector = (char)(StartSector + sectorCounter);

        for (int rowCounter = 1; rowCounter <= sectorRow; rowCounter++)
        {
            int seatsCount = seatOddRow;

            seatsCount += 2 * (1 - rowCounter % 2);

            for (int seatsCounter = 0; seatsCounter < seatsCount; seatsCounter++)
            {
                char seat = (char)(StartSeat + seatsCounter);

                output.append(1, currentSector)
                      .append(to_string(rowCounter))
                      .append(1, seat)
                      .append(NEW_LINE);
                allSeats++;
            }
        }

        sectorRow++;
    }

    output.append(to_string(allSeats));

    cout << output << endl;
}

//Младоженците искат да направят списък кой на кое място ще седи на сватбената церемония. Местата са разделени на различни сектори. Секторите са главните латински букви като започват от A. Във всеки сектор има определен брой редове. От конзолата се чете броят на редовете в първия сектор (A), като във всеки следващ сектор редовете се увеличават с 1. На всеки ред има определен брой места - тяхната номерация е представена с малките латински букви. Броя на местата на нечетните редове се прочита от конзолата, а на четните редове местата са с 2 повече.
//Вход
//От конзолата се четaт 3 реда:
//•	Последния сектор от секторите - символ (B-Z)
//•	Броят на редовете в първия сектор - цяло число (1-100)
//•	Броят на местата на нечетен ред - цяло число (1-24)
//Изход
//Да се отпечата на конзолата всяко място на отделен ред по следния формат:
//{ сектор}
//{ ред}
//{ място}
//Накрая трябва да отпечата броя на всички места.
