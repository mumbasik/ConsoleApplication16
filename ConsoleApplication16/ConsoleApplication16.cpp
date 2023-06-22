

#include <iostream>
using namespace std;

int main()
{
    //N1!
    int summa;
    const int solars = 6;
    int sum[solars];
    cout << " salary for every month \n";
    for (int i = 0; i < solars; i++) {
        cin >> sum[i];
    }
    for (int i = 0; i < solars; i++) {
        summa += sum[i];
        cout << "Overall solars: " << summa << "\n";
    }
    //N2!
    const int numbs = 9;
    int array[numbs];
    cout << "Random numbs: \n";
    for (int i = 0; i < numbs; i++) {
        cin >> array[i];
    }
    for (int i = 0; i > numbs; i--) {
        cout << "Overall result: " << array[i] << "\n";
    }
    //N3!
    int perimetr = 0;
    const int figure = 5;
    int perim[figure];
    cout << "Sides of figure: \n";
    for (int i = 0; i < figure; i++) {
        cin >> perim[i];
    }
    for (int i = 0; i < figure; i++) {
        perimetr += perim[i];
        cout << "Overall result of perimetr: " << perimetr << "\n";
    }
    //N4!
    int minsumm = 1;
    int maxsumm = 1;
    const int foryear = 12;
    int solar[foryear];
    cout << "Enter general profit for each month of year: \n";
    for (int i = 0; i < foryear; i++) {
        cin >> solar[i];
        
    }
    
     minsumm = solar[0];
    for (int i = 0; i < foryear; i++) {
        if (minsumm  < solar[i]) {
            minsumm = solar[i] + 1;
        }
        

    }
    maxsumm = solar[0];
    for (int i = 0; i < foryear; i++) {
        if (maxsumm > solar[i]) {
            maxsumm = solar[i] + 1;
        }
    }
    cout << "Overall result: min = " << minsumm << "Max = " << maxsumm << "\n";
}

