#include "NhanVien.h"
#include <iostream>
using namespace std;

NhanVien::NhanVien() {}
NhanVien::NhanVien(string ma, string ten, string sdt, string cv)
    : KhachHang(ma, ten, sdt), chucVu(cv) {}

NhanVien::~NhanVien() {}

void NhanVien::nhap() {
    cout << "Nhap ma NV: ";
    cin >> maKH;
    cin.ignore();
    cout << "Nhap ten NV: ";
    getline(cin, tenKH);
    cout << "Nhap SDT NV: ";
    cin >> sdt;
    cin.ignore();
    cout << "Nhap chuc vu: ";
    getline(cin, chucVu);
}

void NhanVien::xuat()  {
    cout << "Ma NV: " << maKH << " | Ten NV: " << tenKH << " | SDT: " << sdt << endl;
    cout << "Chuc vu: " << chucVu << endl;
}

