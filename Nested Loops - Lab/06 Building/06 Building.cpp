// 06 Building.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define NEW_LINE "\r\n"

int main()
{
    const string LastFloor = "L";
    const string OfficeFloor = "O";
    const string AppartmentFloor = "A";

    string input;
    getline(cin, input);
    int floors = stoi(input);

    getline(cin, input);
    int roomsCount = stoi(input);    

    string s = EMPTY;

    for (int i = floors; i >= 1; i--)
    {
        string floorPrefics = EMPTY;

        if (i == floors)
        {
            floorPrefics.append(LastFloor).append(to_string(floors));
        }
        else
        {
            if (i % 2 == 0)
            {
                floorPrefics.append(OfficeFloor).append(to_string(i));
            }
            else
            {
                floorPrefics.append(AppartmentFloor).append(to_string(i));
            }
        }
        
        for (int j = 0; j < roomsCount; j++)
        {
            s.append(floorPrefics).append(to_string(j));
            if (j != roomsCount - 1)
            {
                s.append(" ");
            }
        }

        s.append(NEW_LINE);
    }

    cout << s;
}

//Напишете програма, която извежда на конзолата номерата на стаите в една сграда (в низходящ ред), като са изпълнени следните условия:
//•	На всеки четен етаж има само офиси
//•	На всеки нечетен етаж има само апартаменти
//•	Всеки апартамент се означава по следния начин : А{номер на етажа}{номер на апартамента}, номерата на апартаментите започват от 0.
//•	Всеки офис се означава по следния начин : О{номер на етажа}{номер на офиса}, номерата на офисите също започват от 0.
//•	На последният етаж винаги има апартаменти и те са по-големи от останалите, за това пред номера им пише 'L', вместо 'А'. Ако има само един етаж, то има само големи апартаменти!
//От конзолата се прочитат две цели числа - броят на етажите и броят на стаите за един етаж.
