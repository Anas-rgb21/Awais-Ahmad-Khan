#include <iostream>
using namespace std;

int main()
{
    int grades[10];
    int sum = 0;
    double average;

    cout << "Enter grades of 10 students:\n";

    for(int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    average = sum / 10.0;

    cout << "\nAverage Grade = " << average;

    return 0;
}
