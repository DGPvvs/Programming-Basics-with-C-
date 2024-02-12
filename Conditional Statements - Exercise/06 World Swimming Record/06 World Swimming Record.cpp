// 06 World Swimming Record.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double inputTheRecordInSeconds, inputTheDistanceInMeters, inputTheTimeForAMeter;
    cin >> inputTheRecordInSeconds >> inputTheDistanceInMeters >> inputTheTimeForAMeter;

    double totalTime = inputTheDistanceInMeters * inputTheTimeForAMeter;
    double delay = ((int)(inputTheDistanceInMeters / 15) * 12.5);

    totalTime = totalTime + delay;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout.precision(2);

    if ((inputTheRecordInSeconds - totalTime) > 0)
    {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    }
    else
    {
        cout << "No, he failed! He was " << (totalTime - inputTheRecordInSeconds) << " seconds slower." << endl;
    }    
}

//���� ������ �� ������� ��������� ������ �� ������� �� ����� ����������.�� ��������� �� ������� �������� � �������, ����� ���� ������ �� �������, ������������ � �����, ����� ������ �� �������� � ������� � �������, �� ����� ����� ���������� �� 1 �.�� �� ������ ��������, ����� ��������� ���� �� � ������� ��� ��������, ���� �� ��� �������, ��: ��������������� �� ������ �� ������ �� ����� 15 �.� 12.5 �������.������ �� ��������� ����� ���� ���� �� �� ������, � �������� �� ��������������� �� ������, ���������� ������ �� �� �������� ������ �� ��� - �������� ���� �����.
//�� �� ������� ������� � �������, �� ����� ���� �� �������� ������������ � ��������� ������ ��������� ������.
//����
//�� ��������� �� ����� 3 ���� :
//    1.	�������� � ������� � ������ ����� � ���������[0.00 � 100000.00]
//    2.	������������ � ����� � ������ ����� � ���������[0.00 � 100000.00]
//    3.	������� � �������, �� ����� ����� ���������� �� 1 �. - ������ ����� � ���������[0.00 � 1000.00]
//    �����
//    ������������� �� ��������� ������ �� ��������� :
//�	��� ���� � �������� ��������� ������(������� �� � �� - ����� �� �������) ����������� :
//    o	"Yes, he succeeded! The new world record is {������� �� ����} seconds."
//    �	��� �� � �������� �������(������� �� � �� - ������ ��� ����� �� �������) ����������� :
//    o	"No, he failed! He was {������������� �������} seconds slower."
//    ���������� ������ �� �� ��������� �� ������ ���� ���� ����������� �������.