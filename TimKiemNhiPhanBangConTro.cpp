#include <iostream>
#include<math.h>
using namespace std;

//Hàm tìm kiếm nhi phân
int binarySearch(int *arr, int left, int right, int x) {
    int middle;

    while(left <= right) {
        // Lấy vị trí ở giữa left và right
        middle = (left + right) / 2;

        // Nếu phần từ ở giữa bằng x thì trả về
        // vị trí
        if (arr[middle] == x)
            return middle;

        // Nếu x lớn hơn phần tử ở giữa thì
        // chắc chắn nó nằm bên phải.
        // Chỉ định left phần từ ở giữa + 1
        if (x > arr[middle])
            left = middle + 1;
        else
            //Ngược lại
            right = middle - 1;
    }

    //Trả về -1 nếu không tìm thấy gía trị trong mảng.
    return -1;
}
const int n=5;
int main() {
    int *arr;
    //Lấy ra độ dài của mảng
    //Phần từ cần tìm
    arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cin>>x;

    // n -1 là vị trí cuối cùng trong mảng.
    int result = binarySearch(arr, 0, n-1, x);

    cout << result;
}

/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandomValues(int *a, int size)
{
	srand(time(0));
	int maxOffset = 5;
	a[0] = rand() % maxOffset;
    for(int i = 1; i <= size; i++)
	 	a[i] = a[i-1] + rand() % maxOffset;
}

void print(int *a, int size)
{
	for (int i = 0; i <=size; i++)
	 	cout <<a[i] << " ";
	cout << endl;
}


int recursiveSearch(int k, int *a,
				int low, int high)
{
	if (low > high) return -1;

	int mid = (low + high) /2;
	if (a[mid] > k)
	  	return recursiveSearch (k, a, low, mid-1);
	else if (a[mid] < k)
		return recursiveSearch (k, a, mid+1, high);
	else // a[mid] == k
		return mid;
}

int binarySearch(int k, int *a,
				int low, int high)
{
	do {
		int mid = (low + high) / 2;
		if (a[mid] > k)  high = mid -1 ;
		else if (a[mid] < k)  low = mid + 1;
		else // a[mid] == k
			return mid;
	} while (low < high);
	return -1;
}

const int SIZE = 4;
int main()
{   int *a;
    a= new int[SIZE+1];
	generateRandomValues(a, SIZE);
	print(a, SIZE);
	int key;
	cin >> key;
	//int pos = binarySearch(key, a, 0, SIZE-1);
	int pos = recursiveSearch(key, a, 0, SIZE-1);
	if (pos >= 0) cout << "Found at " << pos;
	else cout << "Not found";
}
*/
