// 05 Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<sstream>
#include <string>


using namespace std;

string formatDoubleNum(double number, int precision)
{
    stringstream stream;

    stream.precision(precision);
    stream << fixed;

    stream << number;

    return stream.str();
}

int main()
{
    int numTabs, salary;
    cin >> numTabs >> salary;

    string site;
    getline(cin, site);

    for (int i = 0; i <= numTabs; i++)
    {

        if (site == "Facebook")
        {
            salary -= 150;
        }

        if (site == "Instagram")
        {
            salary -= 100;
        }

        if (site == "Reddit")
        {
            salary -= 50;
        }

        if (salary <= 0)
        {
            break;
        }

        getline(cin, site);
    }

    if (salary <= 0)
    {
        cout << "You have lost your salary." << endl;
    }
    else
    {
        cout << formatDoubleNum(salary, 0) << endl;
    }
}

//Шеф на компания забелязва че все повече служители прекарват  време в сайтове, които ги разсейват.  
//За да предотврати това, той въвежда изненадващи проверки на отворените табове на браузъра на служителите си. 
//Според отворения сайт в таба се налагат следните глоби:
//•	"Facebook"-> 150 лв.
//•	"Instagram"-> 100 лв.
//•	"Reddit"-> 50 лв.
//От конзолата се четат два реда:
//•	Брой отворени табове в браузъра n - цяло число в интервала [1...10]
//•	Заплата - число в интервала[500...1500]
//След това n – на брой пъти се чете име на уебсайт – текст
//Изход
//•	Ако по време на проверката заплатата стане по-малка или равна на 0 лева, на конзолата се изписва 
//"You have lost your salary." и програмата приключва. 
//•	В противен случай след проверката на конзолата се изписва остатъкът от заплатата (да се изпише като цяло число).