#include <iostream>
using namespace std;

// Function to calculate total and average
void calculate(int marks[], int n, int &total, float &avg) {
    total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    avg = (float)total / n;
}

// Function to display grade
char grade(float avg) {
    if(avg >= 75) return 'A';
    else if(avg >= 60) return 'B';
    else if(avg >= 50) return 'C';
    else return 'F';
}

int main() {
    int n, marks[100], total;
    float avg;

    cout << "Enter number of subjects: ";
    cin >> n;

    cout << "Enter marks: ";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    calculate(marks, n, total, avg);

    cout << "Total Marks = " << total << endl;
    cout << "Average = " << avg << endl;
    cout << "Grade = " << grade(avg);

    return 0;
}
