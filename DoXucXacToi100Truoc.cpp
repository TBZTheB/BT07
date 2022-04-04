//CÁCH 1: Mỗi người chơi lần lượt đổ xúc xắc.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void choi(int * nguoi1, int * nguoi2) {
    int temp = rand() % 6 + 1;
    *nguoi1 += temp;
    cout<<"xuc xac nguoi choi 1: "<<temp<<"  Tong nguoi choi 1: "<<*nguoi1<<"\n";
    int temp2 = rand() % 6 + 1;
    *nguoi2 += temp2;
    cout<<"xuc xac nguoi choi 2: "<<temp2<<"  Tong nguoi choi 2: "<<*nguoi2<<"\n";
}
int main() {
    srand(time(0));
    int nguoi1;
    int nguoi2;
    nguoi1 = 0;
    nguoi2 = 0;
while (nguoi1 < 100 && nguoi2 <100) {
    choi( &nguoi1, &nguoi2);
    }
if (nguoi1 >=100) {
    cout<<"Game Over !\nNguoi choi 1 thang";
    }
else {
    cout<<"Game Over !\nNguoi choi 2 thang";
    }
return 0;
}


/*
CÁCH 2: Người có tổng điểm nhỏ hơn sẽ được đổ xúc xắc.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void choi(int * nguoi1, int * nguoi2) {
if (*nguoi2 < *nguoi1) {
int temp = rand() % 6 + 1;
*nguoi2 += temp;
cout<<"xuc xac nguoi choi 2: "<<temp<<"  Tong nguoi choi 2: "<<*nguoi2<<"\n";
}
else {
int temp = rand() % 6 + 1;
*nguoi1 += temp;
cout<<"xuc xac nguoi choi 1: "<<temp<<"  Tong nguoi choi 1: "<<*nguoi1<<"\n";
}
}
int main() {
srand(time(0));
int nguoi1;
int nguoi2;
nguoi1 = 0;
nguoi2 = 0;
while (nguoi1 < 100 && nguoi2 <100) {
choi( &nguoi1, &nguoi2);
}
if (nguoi1 >=100) {
cout<<"Game Over !\nNguoi choi 1 thang";
}
else {
cout<<"Game Over !\nNguoi choi 2 thang";
}
return 0;
}
*/
