#include <bits/stdc++.h>

using namespace std ;

class student {
    private :
        string id , name, lop, email ;
    public :
        student() {
            id = name = lop = email = "" ;
        }
        student (string, string , string , string) ;
        friend istream& operator >> (istream &in, student &a) ;
        friend ostream& operator << (ostream &out, student a) ;
        friend bool cmp(student a, student b) ;
};
ostream& operator << (ostream &out, student a) {
    out<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
    return out ;
}

istream& operator >> (istream &in, student &a) {
    in>>a.id ;
    in.ignore();
    getline(in, a.name) ;
    in>>a.lop>>a.email ;
    return in ;
}

student :: student (string id, string name, string lop , string email) {
    this-> id= id ;
    this ->name = name ;
    this->lop = lop ;
    this-> email = email ;
}

bool cmp( student a, student b) {
    if (a.lop == b.lop) {
        return a.id < b.id ;
    }
    return a.lop < b.lop ;
}

int main() {
    int n ; cin>>n ;
    student a[1001] ;
    for (int i =0 ;i <n;i++) {
        cin>>a[i] ;
    }
    sort(a ,a +n, cmp);
    for(int i =0 ; i<n;i++) {
        cout<<a[i] ;
    }
}
