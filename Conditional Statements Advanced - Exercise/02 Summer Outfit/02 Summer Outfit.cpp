// 02 Summer Outfit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    const int EighteenDegrees = 18;
    const int TwentyFiveDegrees = 25;

    const string Morning = "Morning";
    const string Afternoon = "Afternoon";

    const string Sweatshirt = "Sweatshirt";
    const string Shirt = "Shirt";
    const string Sneakers = "Sneakers";
    const string Moccasins = "Moccasins";
    const string T_Shirt = "T-Shirt";
    const string Sandals = "Sandals";
    const string SwimSuit = "Swim Suit";
    const string Barefoot = "Barefoot";

    int degrees;
    string timeOfDay;
    cin >> degrees >> timeOfDay;

    string outfitMorning = T_Shirt;
    string shoesMorning = Sandals;
    string outfitAfternoon = SwimSuit;
    string shoesAfternoon = Barefoot;
    string outfit = Shirt;
    string shoes = Moccasins;

    if (degrees <= EighteenDegrees)
    {
        outfitMorning = Sweatshirt;
        shoesMorning = Sneakers;
        outfitAfternoon = Shirt;
        shoesAfternoon = Moccasins;
    }
    else if (degrees < TwentyFiveDegrees)
    {
        outfitMorning = Shirt;
        shoesMorning = Moccasins;
        outfitAfternoon = T_Shirt;
        shoesAfternoon = Sandals;
    }

    if (timeOfDay == Morning)
    {
        outfit = outfitMorning;
        shoes = shoesMorning;
    }
    else if (timeOfDay == Afternoon)
    {
        outfit = outfitAfternoon;
        shoes = shoesAfternoon;
    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;
}

//���� � � ����� ���������� ����� � ������ ��� ����� �� ������ �����. �������� �������� ����� ������ ������� �� ����������� � ��������� �� ��������� �� ������ ����� ����� �� �� ������. ����� ������� ��� �������� ������� �� ����� ���� �� ����, ����� �������� � �������� ������ ���, ��� ���� �� ������ �� ���������.
//�� ��������� �� ����� ����� ��� ����:
//�	��������� - ���� ����� � ��������� [10�42]
//�	�����, ����� �� ����������� - � ����������� - "Morning", "Afternoon", "Evening"
//����� �� ����������� / �������      �orning                   Afternoon           Evening
//10 <= ������� <= 18             	  Outfit = Sweatshirt       Outfit = Shirt      Outfit = Shirt
//                                    Shoes = Sneakers          Shoes = Moccasins	Shoes = Moccasins

//18 < ������� <= 24                  Outfit = Shirt            Outfit = T-Shirt    Outfit = Shirt
//                                    Shoes = Moccasins         Shoes = Sandals	    Shoes = Moccasins

//������� >= 25                       Outfit = T-Shirt          Outfit = Swim Suit  Outfit = Shirt
//                                    Shoes = Sandals           Shoes = Barefoot    Shoes = Moccasins

//�� �� �������� �� ��������� �� ���� ���: "It's {�������} degrees, get your {�������} and {������}."