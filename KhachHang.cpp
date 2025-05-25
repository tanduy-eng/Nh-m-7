#include "KhachHang.h"
#include <iostream>
using namespace std;

KhachHang::KhachHang() {}
KhachHang::KhachHang(string ma, string ten, string sdt) : maKH(ma), tenKH(ten), sdt(sdt) {}
KhachHang::~KhachHang() {}

void KhachHang::nhap() {
    cout << "Nhap ma: "; cin >> maKH;
    cout << "Nhap ten: "; cin.ignore(); getline(cin, tenKH);
    cout << "Nhap so dien thoai: "; cin >> sdt;
}

void KhachHang::xuat() const {
    cout << "Ma KH: " << maKH << " | Ten: " << tenKH << " | SDT: " << sdt << endl;
}

string KhachHang::getMaKH() const {
    return maKH;
}

