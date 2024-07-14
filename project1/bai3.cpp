#include <iostream>
using namespace std ;

class sinhvien {
    private :
        string name ;
        string mssv ;
    float gpa ;
    public :
        //sinhvien(string , string , string, float) ;
        void damnhau();
};

void sinhvien :: damnhau (){
    cout<<"cu dam sam set" ;
}

int main() {
    sinhvien x  ;
    x.damnhau();
}