#include "DonHang.h"
#include "ChiTietSanPham.h"
#include <iostream>
using namespace std;

DonHang::DonHang() {
    khach = NULL;
    nhanVien = NULL;
}

DonHang::~DonHang() {
   
}

void DonHang::nhap() {
    cout << "Nhap ma don hang: ";
    cin >> maDH;

    cout << "\n=== NHAP THONG TIN KHACH HANG ===\n";
    khach = new KhachHang();
    khach->nhap();

    cout << "\n=== NHAP THONG TIN NHAN VIEN ===\n";
    nhanVien = new NhanVien();
    nhanVien->nhap();

    int soSP;
    cout << "Nhap so san pham muon mua: ";
    cin >> soSP;
    cin.ignore(); 

    for (int i = 0; i < soSP; ++i) {
        cout << "\n--- San pham thu " << i + 1 << " ---\n";
        ChiTietSanPham ct;
        ct.nhap(); 
        danhSachSP.push_back(ct);
    }
}

void DonHang::xuat() const {
    cout << "Ma don hang: " << maDH << endl;

    if (khach) khach->xuat();
    if (nhanVien) nhanVien->xuat();

    cout << "\n--- DANH SACH SAN PHAM ---\n";
    for (size_t i = 0; i < danhSachSP.size(); ++i) {
        danhSachSP[i].xuat();
    }

    cout << ">>> Tong tien don hang: " << tinhTongTien() << endl;
}



double DonHang::tinhTongTien() const {
    double tong = 0;
    for (size_t i = 0; i < danhSachSP.size(); ++i)
        tong += danhSachSP[i].tinhTien();
    return tong;
}

bool DonHang::operator>(const DonHang& other) const {
    return this->tinhTongTien() > other.tinhTongTien();
}

