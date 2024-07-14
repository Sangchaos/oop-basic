#include <bits/stdc++.h> 
using namespace std ;

class SinhVien {
    private:
        string id , ten , ns ;
        float gpa ;
        static int dem ;
    public :
        SinhVien();
        SinhVien(string, string, string, float) ;
        void nhap() ;
        void xuat();
        int getdem();


};
int SinhVien :: dem =0 ;

SinhVien::SinhVien() {
    id="" ;
    ten="";
    ns = "";
    gpa = 0.0; 
}

int SinhVien::getdem() {
    return dem ;
}
SinhVien::SinhVien (string id , string ten, string ns, float gpa) {
    this -> id = id;
    this -> ten = ten ;
    this ->ns = ns;
    this ->gpa = gpa ;
}
void SinhVien:: nhap() {
    dem++;
    this->id = "SV" + to_string(dem) ;
    cout<<"nhap ten: "; getline(cin, ten) ;
    cout<<"nhap ngay sinh: "; cin>>ns;
    cout<<"nhap gpa: " ; cin>>gpa;
    cin.ignore();
    cout<<endl;
}
void SinhVien::xuat() {
    cout<<id<<" "<<ten<<" "<<ns<<" "<<gpa<<endl;
}

int main() {
    int n ; cin>>n;
    cin.ignore();
    SinhVien a[100] ;
    for (int i =0 ;i <n ;i++) {
        a[i].nhap();
    }
    for (int i =0 ;i < n;i++) {
        a[i].xuat();
    }
    return 0;
}