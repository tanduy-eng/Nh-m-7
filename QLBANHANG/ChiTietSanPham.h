#ifndef CHITIETSANPHAM_H
#define CHITIETSANPHAM_H

#include "SanPham.h"

class ChiTietSanPham {
private:
    SanPham sanPham;
    int soLuong;

public:
    ChiTietSanPham();
    ChiTietSanPham(SanPham sp, int sl);
    
    void nhap();
    void xuat() const;
    double tinhTien() const;
};

#endif

