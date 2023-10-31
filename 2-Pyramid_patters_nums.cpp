#include <iostream>
using namespace std;

int main() {
	int rows = 5;
	cout<<"\n\t half left pyramid with numbers\n";
	for(int row=1; row<=rows; row++){
		for(int col=1; col<=row; col++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	
	
	cout<<"\n\t floyd's triangle with numbers\n";
	int count = 1;
	for(int row=1; row<=rows; row++){
		for(int col=1; col<=row; col++){
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	
	
	
	
	cout<<"\n\t Butterfly triangle with numbers\n";
	rows = 4;
//	(2*rows) - (2*rowNo)
	for(int row=1; row<=rows; row++){
		for(int col=1; col<=row; col++){
			cout<<"*";
		}
		int space = (2*rows)-(2*row);
		for(int col=1; col<=space; col++){
			cout<<" ";
		}
		for(int col=1; col<=row; col++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int row=rows; row>=1; row--){
		for(int col=1; col<=row; col++){
			cout<<"*";
		}
		int space = (2*rows)-(2*row);
		for(int col=1; col<=space; col++){
			cout<<" ";
		}
		for(int col=1; col<=row; col++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<"\n\t Inverted Patterns with numbers\n";
	rows = 5;
	
	for(int row=0; row<rows; row++){
		for(int col=1; col<=rows-row; col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	
	
	cout<<"\n\t 0-1 Patterns numbers\n";
	rows = 5;
	// logic is, when row+col sum is even then 1 when is odd then 0.
	for(int row=1; row<=rows; row++){
		for(int col=1; col<=row; col++){
			if((row+col)%2==0)
				cout<<"1"<<" ";
			else
				cout<<"0"<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\t Number Patterns with numbers\n";
	rows = 5;
	// logic is, we  row+col sum is even then 1 when is odd then 0.
	for(int row=1; row<=rows; row++){
		for(int sp=1;sp<=(rows-row); sp++){
			cout<<" ";
		}
		for(int col=1; col<=row; col++){	// col<=row will another pattern become.
			cout<<col<<" ";
		}
		cout<<endl;
	}
	
	
	
	cout<<"\n\t Palindromic Pattern with numbers\n";
	rows = 5;

	for(int row=1; row<=rows; row++){
		int k = row;
		for(int sp=1;sp<=(rows-row); sp++){			// in left pattern we have spaces, rows-row(first iteration to n)
			cout<<" ";
		}
		for(int col=1; col<=row; col++){			// col<=row will left pattern become.
			cout<<k--;
		}
		for(int col=1; col<row; col++){				// col<row will right pattern become.
			cout<<col+1;
		}
		cout<<endl;
	}
	
	
	
	cout<<"\n\t Zigzag Pattern\n";
	rows = 3;
	int cols = 9;
	for(int row=1; row<=rows; row++){
		int k = row;
		for(int col=1;col<=cols; col++){			// in left pattern we have spaces, rows-row(first iteration to n)
		
			if(((row+col)%4==0) || (row==2 && col%4==0) ){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}

