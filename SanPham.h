#ifndef SANPHAM_H
#define SANPHAM_H

#include <string>
using namespace std;

class SanPham {
private:
    string maSP;
    string tenSP;
    double gia;

public:
    SanPham();
    SanPham(string ma, string ten, double g);
    ~SanPham();

    void nhap();
    void xuat() const;
    double tinhThue() const;

    double getGia() const; 
};

#endif

