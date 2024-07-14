#include <bits/stdc++.h>
using namespace std ;
 
class person {
    private :
    string name , id; 
    public :
        void solo() {
            cout<<"1 dam"<<endl;
        }

};

class student : public person {
    private :
        float gpa ;
    public :
        float getgpa(){
            return gpa ;
        }
        void setgpa(float gpa) {
            this -> gpa = gpa ;
        }
};


int main() {
    student a ;
    a.setgpa(2.678) ;
    cout<<fixed<<setprecision(2)<<a.getgpa();
}