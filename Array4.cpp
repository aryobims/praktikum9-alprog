#include<iostream>
using namespace std;

int main(){
	//membuat dan mengisi array 
	char huruf[6] = {'a','b','c','d','e','f'};
	
	
	//mencetak isi array 
	for (int i=0; i<=5; i++) {
		cout << "Nilai ke-"<< i+1<<" : "<< huruf[i] <<endl;
	}
}