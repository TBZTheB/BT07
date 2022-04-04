#include <iostream>
using namespace std;

string inQuanBai(int khoa) {
	string quanBaiGi = "";
	int chat, so;
	so = khoa / 4;
	switch (so) {
	case 0: {
		quanBaiGi += "2";
		break;
	}
	case 1: {
		quanBaiGi += "3";
		break;
	}
	case 2: {
		quanBaiGi += "4";
		break;
	}
	case 3: {
		quanBaiGi += "5";
		break;
	}
	case 4: {
		quanBaiGi += "6";
		break;
	}
	case 5: {
		quanBaiGi += "7";
		break;
	}
	case 6: {
		quanBaiGi += "8";
		break;
	}
	case 7: {
		quanBaiGi += "9";
		break;
	}
	case 8: {
		quanBaiGi += "10";
		break;
	}
	case 9: {
		quanBaiGi += "J";
		break;
	}
	case 10: {
		quanBaiGi += "Q";
		break;
	}
	case 11: {
		quanBaiGi += "K";
		break;
	}
	case 12: {
		quanBaiGi += "A";
		break;
	}
	}
	chat = khoa % 4;
	switch (chat) {
	case 0: {
		quanBaiGi += "-bich";
		break;
	}
	case 1: {
		quanBaiGi += "-tep";
		break;
	}
	case 2: {
		quanBaiGi += "-ro";
		break;
	}
	case 3: {
		quanBaiGi += "-co";
		break;
	}
	}
	return quanBaiGi;
}

bool uuTienHon(int khoa1, int khoa2) {
	// return true neu khoa1 uu tien hon khoa2
	int so1, chat1, so2, chat2;
	so1 = khoa1 / 4;
	chat1 = khoa1 % 4;
	so2 = khoa2 / 4;
	chat2 = khoa2 % 4;
	if (so1 > so2) return true;
	if (so1 == so2 && chat1 > chat2) return true;
	return false;
}

void traoBai(int* boBai) {
	vector<int> temp;
	for (int i = 0; i < 52; i++) {
		temp.push_back(boBai[i]);
	}
	random_shuffle(temp.begin(), temp.end());
	for (int i = 0; i < 52; i++) {
		boBai[i] = temp[i];
	}
}

void inBoBaiNguoiChoi(int* bobaiNguoiChoi) {
	for (int i = 0; i < 13; i++) {
		cout << inQuanBai(bobaiNguoiChoi[i]) << "\n";
	}
}

void chiaBai(int* boBai, int** boBaiNguoiChoi) {
	int count = 0, i = 0;
	while (i < 13) {
		boBaiNguoiChoi[0][i] = boBai[count];
		boBaiNguoiChoi[1][i] = boBai[count + 1];
		boBaiNguoiChoi[2][i] = boBai[count + 2];
		boBaiNguoiChoi[3][i] = boBai[count + 3];
		count += 4;
		++i;
}
