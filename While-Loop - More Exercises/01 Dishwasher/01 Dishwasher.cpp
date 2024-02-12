// 01 Dishwasher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum StrFlags
{
	TOLOWER = 0b00000000000000000000000000000001,
	TOUPPER = 0b00000000000000000000000000000010,
	LOWEROROPPER = TOLOWER | TOUPPER,
	ALLFLAGS = 0b11111111111111111111111111111111
};

#define NEW_LINE "\r\n"

string ConvertString(string, StrFlags);

int main()
{
	const string END = "end";

	string input;
	getline(cin, input);
	int numBottles = stoi(input);

	int tottalDetergent = 750 * numBottles;

	bool isLoopExit = false;
	int countDishwasher = 0;
	int sumPlates = 0;
	int sumPots = 0;

	while (!isLoopExit)
	{
		string s;
		getline(cin, s);
		s = ConvertString(s, TOLOWER);

		if (s == END)
		{
			isLoopExit = true;
		}
		else
		{
			int numberVessels = stoi(s);
			countDishwasher++;

			if ((countDishwasher % 3) == 0)
			{
				sumPots += numberVessels;
				numberVessels *= 15;
				countDishwasher = 0;
			}
			else
			{
				sumPlates += numberVessels;
				numberVessels *= 5;
			}

			tottalDetergent -= numberVessels;

			if (tottalDetergent < 0)
			{
				isLoopExit = true;
			}
		}
	}

	string output = string();

	if (tottalDetergent < 0)
	{
		output.append("Not enough detergent, ")
			  .append(to_string(tottalDetergent * (-1)))
			  .append(" ml. more necessary!");
	}
	else
	{
		output.append("Detergent was enough!")
			  .append(NEW_LINE)
			  .append(to_string(sumPlates))
			  .append(" dishes and ")
			  .append(to_string(sumPots))
			  .append(" pots were washed.")
			  .append(NEW_LINE)
			  .append("Leftover detergent ")
			  .append(to_string(tottalDetergent))
			  .append(" ml.");
	}

	cout << output << endl;
}

string ConvertString(string str, StrFlags flag)
{
	string s = string();

	const StrFlags LU = LOWEROROPPER;
	const StrFlags LOW = TOLOWER;
	const StrFlags UPP = TOUPPER;

	bool caseConvert = ((flag & LOWEROROPPER) == TOLOWER) || ((flag & LOWEROROPPER) == TOUPPER);

	if (caseConvert)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if ((flag & TOLOWER) == LOW)
			{
				s.append(1, tolower(str[i]));
			}

			if ((flag & TOUPPER) == UPP)
			{
				s.append(1, toupper(str[i]));
			}
		}

		return s;
	}

	return "";
}

//Гошо работи в ресторант и отговаря за зареждането на съдомиялната накрая на деня.
//Вашата задача е да напишете програма, която изчислява, дали дадено закупено количество бутилки от препарат за съдомиялна е достатъчно, за да измие определено количество съдове.
//Знае се, че всяка бутилка съдържа 750 мл. препарат, за 1 чиния са нужни 5 мл., а за тенджера 15 мл.
//Приемете, че на всяко трето зареждане със съдове, съдомиялната се пълни само с тенджери, а останалите пъти с чинии.
//Докато не получите команда "End" ще продължите да получавате бройка съдове, които трябва да бъдат измити.
//Вход
//От конзолата се четат:
//•	Брой бутилки от препарат, който ще бъде използван за миенето на чинии - цяло число в интервала [1…10]
//На всеки следващ ред, до получаване на командата "End" или докато количеството препарат не се изчерпи, брой съдове, които трябва да бъдат измити - цяло число в интервала [1…100]
//Изход
//В случай, че количеството препарат е било достатъчно за измиването на съдовете:
//"Detergent was enough!"
//"{брой чисти чинии} dishes and {брой чисти тенджери} pots were washed."
//"Leftover detergent {количество останал препарат} ml."
//В случай, че количеството препарат не е било достатъчно за измиването на съдовете:
//"Not enough detergent, {количество не достигнал препарат} ml. more necessary!"
