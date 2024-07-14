#include <bits/stdc++.h>

using namespace std ;
class student {
    private:
        string name, lop, birth;
        float gpa;
    public:
        student();
        student(string name, string lop, string birth, float gpa);
        friend void nhap(student&);
        friend ostream& operator<<(ostream &out, student&);
};

void nhap(student &a);
ostream& operator<<(ostream &out, student &a);

