#include <iostream>
using namespace std;

int main() {
	cout<<"hello duniya";
	
	/*
		RECTANGLE Printing...
	*/
	
	/*
	int rows=0, cols=0;
	
	cout<<"Enter Rows : ";
	cin>>rows;
	
	cout<<"Enter Cols : ";
	cin>>cols;
	
	for(int row = 1; row <= rows; row++){
		for(int col = 0; col <= cols; col++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	*/
	
	// HOLLOW Printing...
	
/*
	int rows=0, cols=0;
	
	cout<<"Enter Rows : ";
	cin>>rows;
	
	cout<<"Enter Cols : ";
	cin>>cols;
	
	for(int row = 1; row <= rows; row++){
		for(int col = 1; col <= cols; col++){
			
//			if((col==1 || col == cols)){
//				
//				if(row == 1 || row == rows){
//					cout<<"*";
//				}
//				else
//					cout<<"*";	
//			}
//			else
//				cout<<" ";

// we need at first row and last row *,
// same at first col and last col *.
				
			if(row==1 || row==rows)
				cout<<"*";
			else if(col==1 || col==cols)
					cout<<"*";			
			else
				cout<<" ";
		}
		
		cout<<endl;
	}
	
	*/
	
	// INVERTED half Right Pyramid
	
	int rows=5;
	
	cout<<"Enter Rows : ";
	cin>>rows;
	cout<<"\n INVERTED half Right Pyramid (Space Right)"<<endl;
	for(int row = 1; row <= rows; row++){
		for(int col =0; col <= (rows-row); col++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	// INVERTED half Left Pyramid
	cout<<"INVERTED half Right Pyramid (Space Right)"<<endl;
	for(int row = 1; row <= rows; row++){
		for(int col =1; col <= row; col++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	cout<<"INVERTED half Right Pyramid (Space Left)"<<endl;
	for(int row = 1; row <= rows; row++){
		for(int col =0; col <= rows; col++){
			
			if(col<row)
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<endl;
	}
	
	// INVERTED half Left Pyramid
	cout<<"INVERTED half Right Pyramid (Space Left)"<<endl;
	for(int row = 1; row <= rows; row++){
		for(int col =1; col <= rows; col++){
			
			if(col<=(rows-row))
				cout<<" ";
			else
				cout<<"*";	
		}
		cout<<endl;
	}
	
	
	return 0;
}


