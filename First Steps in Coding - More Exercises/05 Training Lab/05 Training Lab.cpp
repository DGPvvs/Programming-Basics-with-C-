// 05 Training Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double WIDTH_PER_ONE_WORK_PLACE = 70;
    const double LENGTH_PER_ONE_WORK_PLACE = 120;
    const int LOSS_PLACE = 3;

    string input;
    getline(cin, input);
    double length = stod(input) * 100;

    getline(cin, input);
    double width = stod(input) * 100 - 100;

    int numWidth = (int)(width / WIDTH_PER_ONE_WORK_PLACE);
    int numLength = (int)(length / LENGTH_PER_ONE_WORK_PLACE);

    int tottalWorkPlace = numWidth * numLength - LOSS_PLACE;

    cout << tottalWorkPlace << endl;
}

//Учебна зала има правоъгълен размер w на h метра, без колони във вътрешността си. Залата е разделена на две части – лява и дясна, с коридор приблизително по средата. В лявата и в дясната част има редици с бюра. В задната част на залата има голяма входна врата. В предната част на залата има катедра с подиум за преподавателя. Едно работно място заема 70 на 120 cm (маса с размер 70 на 40 cm + място за стол и преминаване с размер 70 на 80 cm). Коридорът е широк поне 100 cm. Изчислено е, че заради входната врата (която е с отвор 160 cm) се губи точно 1 работно място, а заради катедрата (която е с размер 160 на 120 cm) се губят точно 2 работни места. Напишете програма, която въвежда размери на учебната зала и изчислява броя работни места в нея при описаното разположение (вж. фигурата).  
//Вход
//От конзолата се четат 2 числа, по едно на ред: w(дължина в метри) и h(широчина в метри).
//Ограничения: 3 ≤ h ≤ w ≤ 100.
//Изход
//Да се отпечата на конзолата едно цяло число: броят места в учебната зала.
