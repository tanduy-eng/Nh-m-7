#include "SanPham.h"
#include <iostream>
using namespace std;

SanPham::SanPham() {}

SanPham::SanPham(string ma, string ten, double g)
    : maSP(ma), tenSP(ten), gia(g) {}

SanPham::~SanPham() {}

void SanPham::nhap() {
    cout << "Nhap ma SP: ";
    cin >> maSP;
    cin.ignore();
    cout << "Nhap ten SP: ";
    getline(cin, tenSP);
    cout << "Nhap gia: ";
    cin >> gia;
}

void SanPham::xuat() const {
    cout << "Ma SP: " << maSP
         << " | Ten: " << tenSP
         << " | Gia: " << gia << endl;
}

double SanPham::getGia() const {
    return gia;
}



