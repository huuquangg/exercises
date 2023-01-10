void Nhap(SinhVien& sv) {
	cin.get();
	cin.getline(sv.MASV, 10);
	cin.getline(sv.HoTen, 100);
	cin.getline(sv.NgaySinh, 12);
	cin >> sv.GioiTinh;
	cin >> sv.DiemToan;
	cin >> sv.DiemLy;
	cin >> sv.DiemHoa;
	sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa) / 3;

};

void Nhap(SinhVien A[], int& n) {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin.get();
		cin.getline(A[i].MASV, 10);
		cin.getline(A[i].HoTen, 100);
		cin.getline(A[i].NgaySinh, 12);
		cin >> A[i].GioiTinh;
		cin >> A[i].DiemToan;
		cin >> A[i].DiemLy;
		cin >> A[i].DiemHoa;
		A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
	}
}
int findIndex(SinhVien A[], int n, SinhVien sv) {
	short lengthsv = strlen(sv.MASV);
	int msv = 0;
	for (int i = 0; i < lengthsv; i++) {
		msv = msv * 10 + int(sv.MASV[i]) - 48;

	}
	for (int i = 0; i < n; i++) {
		short length = strlen(A[i].MASV);
		int masv = 0;
		for (int k = 0; k < length; k++) {
			masv = masv * 10 + int(A[i].MASV[k]) - 48;
		}
		if (msv > masv) {
			return i;
		}

	}
	return n;
}
void Chen(SinhVien A[], int& n, SinhVien sv) {
	int index = findIndex(A, n, sv);
	for (int i = n; i > index; i--) {
		A[i] = A[i - 1];
	}
	A[index] = sv;
	n++;

}

void Xuat(SinhVien A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t";
		cout << setprecision(3) << A[i].DTB << endl;
	}

}