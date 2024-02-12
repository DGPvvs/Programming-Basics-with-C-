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

//������������ ����� �� �������� ������ ��� �� ��� ����� �� ���� �� ���������� ���������. ������� �� ��������� �� �������� �������. ��������� �� �������� �������� ����� ���� �������� �� A. ��� ����� ������ ��� ��������� ���� ������. �� ��������� �� ���� ����� �� �������� � ������ ������ (A), ���� ��� ����� ������� ������ �������� �� ���������� � 1. �� ����� ��� ��� ��������� ���� ����� - ������� ��������� � ����������� � ������� �������� �����. ���� �� ������� �� ��������� ������ �� ������� �� ���������, � �� ������� ������ ������� �� � 2 ������.
//����
//�� ��������� �� ���a� 3 ����:
//�	��������� ������ �� ��������� - ������ (B-Z)
//�	����� �� �������� � ������ ������ - ���� ����� (1-100)
//�	����� �� ������� �� ������� ��� - ���� ����� (1-24)
//�����
//�� �� �������� �� ��������� ����� ����� �� ������� ��� �� ������� ������:
//{ ������}
//{ ���}
//{ �����}
//������ ������ �� �������� ���� �� ������ �����.
