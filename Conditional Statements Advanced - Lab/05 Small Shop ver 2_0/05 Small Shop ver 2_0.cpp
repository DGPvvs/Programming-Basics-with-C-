// 05 Small Shop ver 2_0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // ����������� �� ���������
    const string TownPlovdiv = "Plovdiv";
    const string TownVarna = "Varna";

        
    const string ProductWater = "water";
    const string ProductBeer = "beer";
    const string ProductSweets = "sweets";
    const string ProductPeanuts = "peanuts";

    const double SofiaCoffee = .5;
    const double SofiaWater = .8;
    const double SofiaBeer = 1.2;
    const double SofiaSweets = 1.45;
    const double SofiaPeanuts = 1.6;

    const double PlovdivCoffee = .4;
    const double PlovdivWater = .7;
    const double PlovdivBeer = 1.15;
    const double PlovdivSweets = 1.3;
    const double PlovdivPeanuts = 1.5;

    const double VarnaCoffee = .45;
    const double VarnaWater = .7;
    const double VarnaBeer = 1.1;
    const double VarnaSweets = 1.35;
    const double VarnaPeanuts = 1.55;

    // �������� �� �������� ����� �� ���������
    string product, town;
    double count;
    cin >> product >> town >> count;

    //���������� �� ������ � ���������� �� ���������� �� ����� �����
    //����������� �� �������������� ���� �� ���� � ����� �����
    double priceInSofia = SofiaCoffee;
    double priceInPlovdiv = PlovdivCoffee;
    double priceInVarna = VarnaCoffee;

    if (product == ProductWater)
    {//����������� �� �� ���� � ����� �����
        priceInSofia = SofiaWater;
        priceInPlovdiv = PlovdivWater;
        priceInVarna = VarnaWater;
    }
    else if (product == ProductBeer)
    {
        //����������� �� �� ���� � ����� �����
        priceInSofia = SofiaBeer;
        priceInPlovdiv = PlovdivBeer;
        priceInVarna = VarnaBeer;
    }
    else if (product == ProductSweets)
    {
        //����������� �� �� ������ � ����� �����
        priceInSofia = SofiaSweets;
        priceInPlovdiv = PlovdivSweets;
        priceInVarna = VarnaSweets;
    }
    else if(product == ProductPeanuts)
    {
        //����������� �� �� ���� � ����� �����
        priceInSofia = SofiaPeanuts;
        priceInPlovdiv = PlovdivPeanuts;
        priceInVarna = VarnaPeanuts;
    }

    //���������� �� ������ �� ������� ������ ���������� ����
    //�������� �� ������ �� ������� �� �����
    double price = priceInSofia;

    if (town == TownPlovdiv)
    {
        //�������� �� ������ �� ������� �� �������
        price = priceInPlovdiv;
    }
    else if (town == TownVarna)
    {
        //�������� �� ������ �� ������� �� �����
        price = priceInVarna;
    }

    // ����������� �� �������� ����
    double topttalCost = price * count;

    //��������� �� �������� ���� �� ���������
    cout << topttalCost << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
