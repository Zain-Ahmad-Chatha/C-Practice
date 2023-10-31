// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void stairCase(int);

int main() {

	int n=0;
	cout<<"Enter N  = ";
	cin>>n;
	
	if(n>0 && n<100){
		stairCase(n);

	}
	else{
				cout<<"Enter valid number";
	}

    return 0;
}

void stairCase(int n){
	for(int iteraction=0; iteraction < n; iteraction++){
    
    for(int index=0; index < (n-iteraction-1); index++){
        cout<<" ";
    }
    
    for(int index=0; index < iteraction+1; index++){
        cout<<"#";
    }
    
    cout<<endl;
}
}
