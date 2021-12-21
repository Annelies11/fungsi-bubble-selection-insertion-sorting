#include <iostream>

using namespace std;

void tokne(int a[], int b){
	for(int c = 0; c < b; c++) {
		cout<<a[c]<<"  ";
	}
	cout<<endl;
}

void selection(int ar[], int ukuran) {
	int i, j, minimum, simpan;
	for(i = 0; i < ukuran; i++) {
		minimum=i;
		for(j = i+1; j < ukuran; j++) {
			if(ar[j] < ar[i]) {
				minimum = j;
			}
			simpan = ar[i];
			ar[i] = ar[minimum];
			ar[minimum] = simpan;
		}
	}
}

void insertion(int ar[], int ukuran) {
	int i, j, key;
	for(i = 1; i < ukuran; i++){
		key=ar[i];
		j=i;
		while(j > 0 && ar[j-1] > key) {
			ar[j]=ar[j-1];
			j--;
		}
		ar[j]=key;
		tokne(ar, ukuran);
	}
}

void bubble(int ar[], int ukuran) {
	int i, j, simpan;
	for(i = 0; i < ukuran; i++) {
		for(j = i+1; j < ukuran; j++) {
			if(ar[i]>ar[j]) {
			simpan = ar[i];
			ar[i] = ar[j];
			ar[j] = simpan;	
			}
		}
	}
}


int main() {
	int i, j, n, simpan, key, minimum;
	cout<<"Masukkan jumlah array :";
	cin>>n;
	int arr[n];
	for(i = 0; i < n; i++) {
		cout<<"Data ke-"<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Data array sebelum di sorting : ";
	
	tokne(arr, n);
	
	//bubble(arr, n);			//diaktifkan jika hendak menggunakan bubble sorting
	
	//insertion(arr,n);			//diaktifkan jika hendak menggunakan insertion sorting
	
	selection(arr, n);			//diaktifkan jika hendak menggunakan selection sorting
	
	cout<<"Data array sesudah di sorting : ";
	
	tokne(arr, n);
	
	return 0;
}
