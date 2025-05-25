#include <iostream>
#include <vector>
#include <algorithm>
#include "SanPham.h"
#include "KhachHang.h"
#include "NhanVien.h"
#include "DonHang.h"

using namespace std;


bool soSanhTang(DonHang a, DonHang b) {
    return a.tinhTongTien() < b.tinhTongTien();
}


bool soSanhGiam(DonHang a, DonHang b) {
    return a.tinhTongTien() > b.tinhTongTien();
}

int main() {
    vector<DonHang> danhSachDonHang;
    int luaChon;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Them don hang\n";
        cout << "2. Danh sach cac don hang\n";
        cout << "3. Don hang co tong tien lon nhat\n";
        cout << "4. Don hang co tong tien nho nhat\n";
        cout << "5. Sap xep tang dan theo tong tien\n";
        cout << "6. Sap xep giam dan theo tong tien\n";
        cout << "7. Thoat\n";
        cout << "==========================\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
        case 1: {
            DonHang dh;
            dh.nhap();
            danhSachDonHang.push_back(dh);
            break;
        }

        case 2:
            if (danhSachDonHang.empty()) {
                cout << "Chua co don hang nao!\n";
                break;
            }
            for (size_t i = 0; i < danhSachDonHang.size(); ++i) {
                cout << "\n--- Don hang thu " << i + 1 << " ---\n";
                danhSachDonHang[i].xuat();
            }
            break;

        case 3: {
            if (!danhSachDonHang.empty()) {
                DonHang max = danhSachDonHang[0];
                for (size_t i = 1; i < danhSachDonHang.size(); ++i) {
                    if (danhSachDonHang[i].tinhTongTien() > max.tinhTongTien())
                        max = danhSachDonHang[i];
                }
                cout << "\n== Don hang co tong tien lon nhat ==\n";
                max.xuat();
            } else {
                cout << "Chua co don hang nao!\n";
            }
            break;
        }

        case 4: {
            if (!danhSachDonHang.empty()) {
                DonHang min = danhSachDonHang[0];
                for (size_t i = 1; i < danhSachDonHang.size(); ++i) {
                    if (danhSachDonHang[i].tinhTongTien() < min.tinhTongTien())
                        min = danhSachDonHang[i];
                }
                cout << "\n== Don hang co tong tien nho nhat ==\n";
                min.xuat();
            } else {
                cout << "Chua co don hang nao!\n";
            }
            break;
        }

        case 5:
            sort(danhSachDonHang.begin(), danhSachDonHang.end(), soSanhTang);
            cout << "\n== Danh sach don hang tang dan theo tong tien ==\n";
            for (size_t i = 0; i < danhSachDonHang.size(); ++i) {
                danhSachDonHang[i].xuat();
            }
            break;

        case 6:
            sort(danhSachDonHang.begin(), danhSachDonHang.end(), soSanhGiam);
            cout << "\n== Danh sach don hang giam dan theo tong tien ==\n";
            for (size_t i = 0; i < danhSachDonHang.size(); ++i) {
                danhSachDonHang[i].xuat();
            }
            break;

        case 7:
            cout << "Thoat\n";
            break;

        default:
            cout << "Lua chon khong hop le. Vui long thu lai.\n";
        }

    } while (luaChon != 7);

    return 0;
}

