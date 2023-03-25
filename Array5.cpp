#include<iostream>
using namespace std;

int main(){
	//membuat dan mengisi array 
	string hewan[5] = {"kambing","sapi","kucing","ayam","bebek"};
	
	
	//mencetak isi array 
	for (int i=0; i<=4; i++) {
		cout << "Nilai ke-"<< i+1<<" : "<< hewan[i] <<endl;
	}
}