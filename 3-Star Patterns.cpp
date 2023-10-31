#include <iostream>
using namespace std;

int main() {

cout<<"\n\t Star Pattern\n";
	int	rows = 4;

	for(int row=1; row<=rows; row++){
		int k = row;
		for(int sp=1;sp<=(rows-row); sp++){			// in left pattern we have spaces, rows-row(first iteration to n)
			cout<<" ";
		}
		for(int col=1; col<=row; col++){			// col<=row will left pattern become.
			cout<<"*";
		}
		for(int col=1; col<row; col++){				// col<row will right pattern become.
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int row=rows; row>=1; row--){
		int k = row;
		for(int sp=1;sp<=(rows-row); sp++){
			cout<<" ";
		}
		for(int col=1; col<=row; col++){			// col<=row will left pattern become.
			cout<<"*";
		}
		for(int col=1; col<row; col++){				// col<row will right pattern become.
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	cout<<"\n\t Star Pattern with less lopes\n";
	rows = 4;

	for(int row=1; row<=rows; row++){
//		int k = row;
		for(int sp=1;sp<=(rows-row); sp++){			// in left pattern we have spaces, rows-row(first iteration to n)
			cout<<" ";
		}
		// logic is , we need 1,3,5,7 stars in every row, mean odd nums, so 2*rowNo - 1 will give the odd rows.
		for(int col=1; col<=(2*row -1); col++){			// col<=row will left pattern become.
			cout<<"*";
		}
//		for(int col=1; col<row; col++){				// col<row will right pattern become.
//			cout<<"*";
//		}
		cout<<endl;
	}
	
	for(int row=rows; row>=1; row--){
//		int k = row;
		for(int sp=1;sp<=(rows-row); sp++){
			cout<<" ";
		}
		for(int col=1; col<=(2*row-1); col++){			// col<=row will left pattern become.
			cout<<"*";
		}
//		for(int col=1; col<row; col++){				// col<row will right pattern become.
//			cout<<"*";
//		}
		cout<<endl;
	}


	return 0;
}

