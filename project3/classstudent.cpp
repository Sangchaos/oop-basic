#include "classstudent.h"
#include "chuanhoa.h"
#include <bits/stdc++.h>

using namespace std;

student::student() {
    name = lop = birth = "";
    gpa = 0;
}

student::student(string name, string lop, string birth, float gpa) {
    this->name = name;
    this->lop = lop;
    this->birth = birth;
    this->gpa = gpa;
}

void nhap(student &a) {
    getline(cin, a.name);
    a.lop = "12A1";
    cin >> a.birth;
    cin >> a.gpa;
    cin.ignore(); 
}

ostream& operator<<(ostream &out, student &a) {
    string name = a.name;
    chuanhoa(name);
    out << name << " " << a.lop << " " << a.birth << " " << fixed << setprecision(2) << a.gpa;
    return out;
}
