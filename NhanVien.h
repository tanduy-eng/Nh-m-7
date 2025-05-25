#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "KhachHang.h"

class NhanVien : public KhachHang {
private:
    string chucVu;

public:
    NhanVien();
    NhanVien(string ma, string ten, string sdt, string cv);
    ~NhanVien();

    void nhap() ;
    void xuat() ;
};

#endif

