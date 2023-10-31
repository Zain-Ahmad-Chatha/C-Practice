#include <iostream>
using namespace std;

int getBinery(int);

int main() {
	
	cout << "Number System !\n";
	
	int num = 45;
	int bin = getBinery(num);
	cout<<"\nbinery : "<<bin<<endl;
	
	return 0;
}

int getBinery(int num){
	cout<<"decimal "<<num<<endl;
	int qout[20];
	int index =0;
	while(num!=0){
		qout[index] = num%2;
		index++;
		num = num/2;
	}
	
	for(int i=(index-1); i>=0; i--)
        cout<<qout[i];
        
	
	cout<<"in un : "<<qout<<endl;
	return 1;
}
