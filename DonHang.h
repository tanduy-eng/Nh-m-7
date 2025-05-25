#ifndef DONHANG_H
#define DONHANG_H

#include "ChiTietSanPham.h"
#include "KhachHang.h"
#include "NhanVien.h"
#include <vector>
#include <string>
using namespace std;

class DonHang {
private:
    string maDH;
    KhachHang* khach;
    NhanVien* nhanVien;
    vector<ChiTietSanPham> danhSachSP;

public:
    DonHang();
    ~DonHang();

    void nhap();
    void xuat() const;
    double tinhTongTien() const;
    bool operator>(const DonHang& other) const;
};

#endif

