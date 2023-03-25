#include<iostream>
using namespace std;

int main(){
	//membuat dan mengisi array 
	int nilai[5] = {32,46,76,90,21};
	
	
	//mencetak isi array 
	for (int i=0; i<=4; i++) {
		cout << "Nilai ke-"<< i+1<<" : "<< nilai[i] <<endl;
	}
}