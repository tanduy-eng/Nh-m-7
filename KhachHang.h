#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <string>
using namespace std;

class KhachHang {
protected:
    string maKH;
    string tenKH;
    string sdt;

public:
    KhachHang();
    KhachHang(string ma, string ten, string sdt);
    virtual ~KhachHang(); 

    virtual void nhap();     
    virtual void xuat() const;

    string getMaKH() const;
};

#endif

