#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

class phanso {
private:
    int tu, mau;
public:
    phanso(int, int);
    friend istream& operator >> (istream &in, phanso &p);
    friend ostream& operator << (ostream &out, phanso p);
    void rutgon();
    friend phanso operator + (phanso, phanso);
    friend int cmp(phanso&, phanso&);
};

phanso::phanso(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;
}

istream& operator >> (istream &in, phanso &p) {
    in >> p.tu >> p.mau;
    if (p.mau == 0) {
        cerr << "Mẫu số không thể bằng 0" << endl;
        exit(1);
    }
    p.rutgon();
    return in;
}

ostream& operator << (ostream &out, phanso p) {
    out << p.tu << "/" << p.mau;
    return out;
}

void phanso::rutgon() {
    int g = gcd(tu, mau);
    tu /= g;
    mau /= g;
}

phanso operator + (phanso a, phanso b) {
    int mc = (a.mau / gcd(a.mau, b.mau)) * b.mau; // Least Common Multiple of denominators
    int numerator = (mc / a.mau) * a.tu + (mc / b.mau) * b.tu;
    int g = gcd(numerator, mc); // Reduce the result fraction
    return phanso(numerator / g, mc / g);
}

int cmp(phanso &a, phanso &b) {
    int k = a.tu * b.mau - b.tu * a.mau;
    if (k > 0)
        return 1;
    if (k == 0)
        return 0;
    if (k < 0)
        return -1;
}

int main() {
    phanso p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << "Tổng: " << p + q << endl;
    int result = cmp(p, q);
    if (result == 1) {
        cout << p << " lớn hơn " << q << endl;
    } else if (result == 0) {
        cout << p << " bằng " << q << endl;
    } else {
        cout << p << " nhỏ hơn " << q << endl;
    }
    return 0;
}
