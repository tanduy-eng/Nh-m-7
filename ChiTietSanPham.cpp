#include "ChiTietSanPham.h"
#include <iostream>
using namespace std;

ChiTietSanPham::ChiTietSanPham() : soLuong(0) {}

ChiTietSanPham::ChiTietSanPham(SanPham sp, int sl)
    : sanPham(sp), soLuong(sl) {}

void ChiTietSanPham::nhap() {
    cout << "=== Nhap thong tin san pham ===" << endl;
    sanPham.nhap();
    cout << "Nhap so luong: ";
    cin >> soLuong;
}

void ChiTietSanPham::xuat() const {
    sanPham.xuat();
    cout << "So luong: " << soLuong
         << " | Thanh tien: " << tinhTien() << endl;
}

double ChiTietSanPham::tinhTien() const {
    return soLuong * sanPham.getGia();
}

