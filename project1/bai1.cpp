#include <bits/stdc++.h> 
using namespace std ;

class SinhVien {
    private:
        string id , ten , ns ;
        float gpa ;
    public :
        SinhVien();
        SinhVien(string, string, string, float) ;
        void nhap() ;
        void xuat();
        float getgpa(); // gettẻ
        void setgpa(float) ;

};
SinhVien::SinhVien() {
    id="" ;
    ten="";
    ns = "";
    gpa = 0.0; 
}
SinhVien::SinhVien (string id , string ten, string ns, float gpa) {
    this -> id = id;
    this -> ten = ten ;
    this ->ns = ns;
    this ->gpa = gpa ;
}
void SinhVien:: nhap() {
    cout<<"nhap id: " ; cin>>id;
    cin.ignore() ;
    cout<<"nhap ten: "; getline(cin, ten) ;
    cout<<"nhap ngay sinh: "; cin>>ns;
    cout<<"nhap gpa: " ; cin>>gpa;
    cout<<endl;
}
void SinhVien::xuat() {
    cout<<id<<" "<<ten<<" "<<ns<<" "<<gpa<<endl;
}


bool cmp ( SinhVien a, SinhVien b) {
    return a.getgpa() > b.getgpa() ;
}

float SinhVien::getgpa() {
    return this->gpa ;
}
void SinhVien::setgpa (float gpa) {
    this->gpa = gpa ;
}
int main() {
    // int n ; cin>>n;
    // cin.ignore();
    // SinhVien a[100] ;
    // for (int i =0 ;i <n ;i++) {
    //     a[i].nhap();
    // }
    // sort(a, a+n, cmp) ;
    // for (int i =0 ;i < n;i++) {
    //     a[i].xuat();
    // }
    SinhVien x ;
    x.setgpa(2.4) ;
    cout<<x.getgpa();
    return 0;
}