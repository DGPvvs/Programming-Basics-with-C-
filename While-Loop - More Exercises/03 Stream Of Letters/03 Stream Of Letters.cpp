// 03 Stream Of Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string END = "End";

    bool isLoopExit, isC, isO, isN;

    isLoopExit = isC = isO = isN = false;

    string output = string();

    while (!isLoopExit)
    {
        string s;
        getline(cin, s);

        if ( s== END)
        {
            isLoopExit = true;
        }
        else
        {
            if ((s == "c") && (!isC))
            {
                isC = true;
            }
            else if ((s == "o") && (!isO))
            {
                isO = true;
            }
            else if ((s == "n") && (!isN))
            {
                isN = true;
            }
            else
            {
                char key = s[0];
                if (((key >= 'A') && (key <= 'Z')) || ((key >= 'a') && (key <= 'z')))
                {
                    output.append(s);
                }
            }
            
            if (isC && isO && isN)
            {
                output.append(" ");
                cout << output;
                output = "";
                isC = isO = isN = false;
            }            
        }
    }    
}

//Напишете програма, която прочита скрито съобщение в поредица от символи.
//Те се получават по един на ред до получаване на командата "End".
//Думите се образуват от буквите в реда на четенето им.
//Символите, които не са латински букви трябва да бъдат игнорирани.
//Думите скрити в потока са разделени от тайна команда от три букви – "c", "o" и "n".
//При първото получаване на една от тези букви, тя се маркира като срещната, но не се запазва в думата.
//При всяко следващо нейно срещане се записва нормално в думата.
//След като са налични и трите символа от командата, се печата думата и интервал " ".
//Започва се нова дума, която по същия начин чака тайната команда, за да бъде отпечатана.
//Вход
//От конзолата се чете поредица от редове с един символ на всеки до получаване на командата "End".
//Изход
//На конзолата се печата на един ред всяка дума след тайната команда, следвана от интервал.