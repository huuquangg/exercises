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
void TimTheoNamSinh(SinhVien A[], int n, int namsinh) {
	for (int i = 0; i < n; i++ ) {
		int nam = 0;
		for (int k = 6; k <= 9;k++) {
			nam = nam * 10 + int(A[i].NgaySinh[k]) - 48;
		}
		if (namsinh == nam) {
			cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t";
			cout << setprecision(3) << A[i].DTB << endl;
		}
	}
}