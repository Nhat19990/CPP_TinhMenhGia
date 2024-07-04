// CPP_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t, t500, t200, t100, t50, t20, t10, t5, t1;

    cout << "Nhap so tien ma ban muon doi: ";
    cin >> t;

    t500 = t / 500000;
    t = t - 500000 * t500;
    t200 = t / 200000;
    t = t - 200000 * t200;
    t100 = t / 100000;
    t = t - 100000 * t100;
    t50 = t / 50000;
    t = t - 50000 * t50;
    t20 = t / 20000;
    t = t - 20000 * t20;
    t10 = t / 10000;
    t = t - 10000 * t10;
    t5 = t / 10000;
    t = t - 5000 * t5;
    t1 = t / 10000;
    t = t - 1000 * t1;

    cout << ("So to cac loai menh gia ma ban se nhan:") << endl;
    cout << "Menh gia 500.000: " << t500 << endl;
    cout << "Menh gia 200.000: " << t200 << endl;
    cout << "Menh gia 100.000: " << t100 << endl;
    cout << "Menh gia 50.000: " << t50 << endl;
    cout << "Menh gia 20.000: " << t20 << endl;
    cout << "Menh gia 10.000: " << t10 << endl;
    cout << "Menh gia 5.000: " << t5 << endl;
    cout << "Menh gia 1.000: " << t1 << endl;
    cout << "Tong so to tien ban se nhan: " << t1 + t5 + t10 + t20 + t50 + t100 + t200 + t500;
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
