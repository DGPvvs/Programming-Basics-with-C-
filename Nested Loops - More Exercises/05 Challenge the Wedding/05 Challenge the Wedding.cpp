// 05 Challenge the Wedding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#define EMPTY ""
#define SPACE " "

int main()
{
    string input;
    getline(cin, input);
    int numberMale = stoi(input);

    getline(cin, input);
    int numberFemale = stoi(input);

    getline(cin, input);
    int numberTables = stoi(input);

    int currentMale = 1;
    int currentFemale = 1;
    int currentNumTable = 1;

    bool isMaxMale = false;
    bool isMaxFemale = false;
    bool isMaxTable = false;

    string output = EMPTY;

    if (numberMale > 0 && numberFemale > 0 && numberTables > 0)
    {
        while (!isMaxTable && !isMaxFemale && !isMaxMale)
        {
            while (!isMaxTable && !isMaxMale)
            {
                isMaxFemale = false;
                currentFemale = 1;
                while (!isMaxTable && !isMaxFemale)
                {
                    output.append("(")
                          .append(to_string(currentMale))
                          .append(" <-> ")
                          .append(to_string(currentFemale))
                          .append(")")
                          .append(SPACE);

                    currentNumTable++;
                    if (currentNumTable > numberTables)
                    {
                        isMaxTable = true;
                    }

                    currentFemale++;
                    if (currentFemale > numberFemale)
                    {
                        isMaxFemale = true;
                    }

                }

                currentMale++;
                if (currentMale > numberMale)
                {
                    isMaxMale = true;
                }
            }
        }

        output.erase(output.length() - 1, output.length());
    }    

    cout << output << endl;
}

//Провокирани от сватбата си, Михаела и Иван решават да предоставят нова услуга на клиенти на ресторанта си, а именно вечеря за запознанства - "Предизвикай Сватбата".
//Напишете програма, която отпечатва всички възможни срещи на клиентите на ресторанта.
//При настаняване всеки мъж и всяка жена получават талончета с поредни номера стартирайки от 1.
//Ако бъдат заети всички маси, програмата трябва да приключи. Всяка маса има две места.
//Вход
//От конзолата се четат точно 3 числа, всяко на отделен ред:
//•	Броя клиенти мъже - цяло число в интервала [1...100]
//•	Броя клиенти жени - цяло число в интервала [1...100]
//•	Максималният брой маси - цяло число в интервала [1...100]
//Изход
//На конзолата се принтират на един ред, разделени с интервал всички срещи в следният формат:
//•	({№ клиент} <-> {№ клиент}) ({№ клиент} <-> {№ клиент}) ...
