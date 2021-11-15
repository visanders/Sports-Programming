// https://www.eolymp.com/en/problems/1344

#include <iostream>
#include <string>
using namespace std;
 
struct student {
    string name, surname;
    char letter;
    int Class;
    string date;
};
 
bool operator > (const student &a, const student &b) {
    bool res = false;
    if (a.Class > b.Class) res = true;
    else if (a.Class == b.Class) {
        if (a.letter > b.letter) res = true;
        else if (a.letter == b.letter) {
            if (a.surname > b.surname) res = true;
        }
    }
    return res;
};
 
int main() {
    int n;
    cin >> n;
    student *a = new student[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].surname >> a[i].name >> a[i].Class >> a[i].letter >> a[i].date;
    }
    for (int k = 2; k <= n; k++) {
        for (int i = 0; i <= n - k; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i].Class << a[i].letter << " " << a[i].surname << " " << a[i].name << " " << a[i].date << endl;
    }
    return 0;
}
