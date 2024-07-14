#include <bits/stdc++.h> 
using namespace std ;

class garena;
class tuong;

class tuong {
    friend class garena;
    private:
        bool meta ;
        bool Co_ny ;
        bool con_cung ;
        string ten, lop;
        float Do_kho ;
    public:
        float getdokho() ;
        bool getmeta() ;
        friend void chuanhoa(tuong &) ;
        friend istream& operator >> (istream &in, tuong &a) ;
        friend ostream& operator << (ostream &out, tuong &a) ;
}; 
void chuanhoa(tuong &a) {
    string res ="" ;
    stringstream ss(a.ten);
    string token;
    while (ss >> token) {
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++) {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
}


istream& operator >> (istream &in, tuong &a) {
    cout<<"nhap ten: "; getline(in, a.ten) ;
    cout<<"nhap lop: "; in>>a.lop;
    cout<<"do kho: "; in>>a.Do_kho;
    in.ignore();
    return in ;
} 

ostream& operator << (ostream &out, tuong &a)  {
    out<<a.ten<<" "<<a.lop<<" "<<fixed<<setprecision(2)<<a.Do_kho<<endl;
    return out;
}
float tuong::getdokho() {
    return this->Do_kho;
}

bool tuong::getmeta() {
    return this->meta;
}
bool cmp (tuong x , tuong y) {
    return x.getdokho() > y.getdokho();
}
class garena{
    public:
        void update(tuong &) ;
};
void garena::update(tuong &a) {
    a.meta = true ;
    a.con_cung= true ;
}

int main() {
    tuong a;
    cin>>a ;
    cout<<a;
}
