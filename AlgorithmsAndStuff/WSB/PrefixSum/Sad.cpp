//https://szkopul.edu.pl/problemset/problem/sad/site/?key=statement

#include "Sad.h"

#include <iostream>
#include <vector>

using namespace std;

void Sad::Calc_Internal()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int ileDni;
    cin >> ileDni;
    
    vector<long long int> sumPref(ileDni + 1);
    int kg;
    
    for (int i = 1; i <= ileDni; i++)
    {
        cin >> kg;
        sumPref[i] = sumPref[i-1] + kg;
    }

    int ilePytan;
    cin >> ilePytan;

    int dzienStart;
    int dzienKoniec;
    
    for (int i = 0; i < ilePytan; i++)
    {
        cin >> dzienStart >> dzienKoniec;
        cout << sumPref[dzienKoniec] - sumPref[dzienStart - 1] << '\n';
    }
}