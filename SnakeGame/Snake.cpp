#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<vector>
#include<ctime>
#include<cstring>
#include<windows.h>
using namespace std;

struct DIEM {
/*Biểu diễn tọa độ các thành phần
gồm các hàm khởi tạo, phép kiểm tra trùng, lấy hiệu 2 điểm.*/
int x, y;
	DIEM() {
		x = 0;
		y = 0;
	}
	DIEM(int a, int b) {
		x = a;
		y = b;
	}
	DIEM operator - (DIEM d2) {
		DIEM d;
		d.x = x - d2.x;
		d.y = y - d2.y;
		return d;
	}
	bool operator == (DIEM d2) {
		return (x == d2.x && y == d2.y);
	}
};
struct RAN {
/*Biểu diễn rắn
gồm các hàm định hướng lúc di chuyển, xuất hiện, di chuyển và ăn mồi*/
    int ChieuDai;
	vector<DIEM> ToaDo;
	DIEM duoitruoc;
	char XacDinhPhuongHuong(DIEM a, DIEM b) {
		DIEM huong = a - b;
		if (huong.x == 0 && huong.y == 2)
			return 'E';
		else if (huong.x == 0 && huong.y == -2)
			return 'W';
		else if (huong.x == 1 && huong.y == 0)
			return 'S';
		else
			return 'N';
	}
	void DiThang(DIEM& dau, char huong) {
		if (huong == 'N')
			dau.x--;
		else if (huong == 'S')
			dau.x++;
		else if (huong == 'E')
			dau.y += 2;
		else
			dau.y -= 2;
	}
	void DoiHuong(int lenh, char& huong) {
		if ((huong == 'N' || huong == 'S') && (lenh != 72 && lenh != 80)) {
			if (lenh == 77)
				huong = 'E';
			if (lenh == 75)
				huong = 'W';
		}
		else if ((huong == 'E' || huong == 'W') && (lenh != 77 && lenh != 75)) {
			if (lenh == 72)
				huong = 'N';
			if (lenh == 80)
				huong = 'S';
		}
	}
	void DiChuyenThan();
	void DiChuyenDau();
	void DiChuyen();
	void XuatHien();
	void DaAnMoi();
};
struct MOI {};
/*Biểu diễn vị trí mồi
gồm các hàm xuất hiện, kiểm tra vị trí của mồi khi xuất hiện, bị rắn ăn*/
struct KHUNG {};
/*Hiển thị khung trò chơi khi trò chơi bắt đầu
bao gồm cả hàm vẽ khung, vẽ rắn, vẽ mồi, xóa rắn, kết thúc game, và giao diện hiện điểm số*/

// Thêm Một hàm để xóa con trỏ trong màn hình console
void Nocursortype()
{}
// Hàm nhập tùy chọn khi vào game
void NhapCacYeuCau()
{}
int main()
{
	return 0;
}
