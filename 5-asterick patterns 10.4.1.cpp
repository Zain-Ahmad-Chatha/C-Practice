#include <iostream>
using namespace std;

void input();
void rectangle_pattern();
void hollow_pattern();
void inverted_half_pyramid(); 
void inverted_half_pyramid_180_rotation(); 
void inverted_half_pyramid_using_numbers();
void floyds_triangle_numbers();
void butterfly_pattern();

// common
void printStart(int);

int row = 0, col = 0;

int main() {
	
	input(); // for entering rows and cols
	
//	rectangle_pattern();
	
//	hollow_pattern();
	
//	inverted_hal_pyramid();

//	inverted_half_pyramid_180_rotation();

//	inverted_half_pyramid_using_numbers();

//	floyds_triangle_numbers();

	butterfly_pattern();


	
	return 0;
}

void input(){
	cout << "Enter Row Numbers : ";
	cin >> row;

	cout << "Enter Col Numbers : ";
	cin >> col;
}

void rectangle_pattern(){
	
	cout<<endl;
	for(int r = 1; r<=row; r++){ // rows
		for(int j=1; j<=col; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

void hollow_pattern(){

	for(int r = 1; r <= row; r++){
		for(int j = 1; j <= col; j++){
			
			if(r==1 || (r==row)){
				cout<<"*";
			}
			else if(j == 1 || j == col){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	
}

void inverted_hal_pyramid(){
	
	// * * * * *
	// * * * * 
	// * * * 
	// * * 
	// * 
	
	for(int r=0; r<=row; r++){
		
		for(int c = 1; c <= (col-r); c++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void inverted_half_pyramid_180_rotation(){
	//     *
	//    **
	//   ***
	//  ****
	// *****
	
	for(int r=1; r <= row; r++){
		
		for(int s=0; s <= col; s++){
			
			if(s <= (row-r))
				cout<<" ";
			else
				cout<<"*";
		}
		// another way of doing with one more loop
		
//		for(int j=1; j < r; j++){
//			cout<<"*";
//		}
		
		cout<<endl;
	}
}

void inverted_half_pyramid_using_numbers(){
	
	// *
	// **
	// ***
	// ****
	// *****
	
	for(int r=1; r<=row; r++){
		
		for(int c = 1; c <= r; c++){
			cout<<r<<" ";	// wheter print * or row number.
		}
		cout<<endl;
	}
}

void floyds_triangle_numbers(){

	int count = 1;
	
	for(int r=1; r<=row; r++){
		for(int j=1; j<=r; j++){
			cout<<count++<<" ";
		}
		cout<<endl;
	}
}


/*
	logic : 
	rows
	1st: 1 *, 6 spaces, 1 *
	2nd: 2 *, 4 spaces, 2 *
	3rd: 3 *, 2 spaces, 3 *
	4th: 4 *, 0 spaces, 4 *
	
	space : 2 * rows - 2 * rowNumber
	
*/
void printStart(int row){
	for(int c=1; c<=row; c++) {
			cout<<"*";
	}
}
void printSpace(int space){
	for(int s=0; s <= space; s++){
		cout<<" ";
	}
}
void butterfly_pattern (){
	// start
	for(int r=1; r <= row; r++) {
		
		
	// first asterick
//		for(int c=1; c<=r; c++){
//			cout<<"*";
//		}
		printStart(r);		
		
		// spaces
		int space = (2*row) - (2*r);
		
//		for(int s=0; s <= space; s++){
//			cout<<" ";
//		}
		printSpace(space);
		
		// then again asterick
//		for(int c=1; c<=r; c++){
//			cout<<"*";
//		}

		printStart(r);
		
		cout<<endl;
	}
	
	// reverse
	for(int r=row; r>=1; r--) {
		
		
	// first asterick
//		for(int c=1; c<=r; c++){
//			cout<<"*";
//		}
		
		printStart(r);
		
		// spaces
		int space = (2*row) - (2*r);
		
//		for(int s=0; s <= space; s++){
//			cout<<" ";
//		}
		
		printSpace(space);
		
		// then again asterick
//		for(int c=1; c<=r; c++){
//			cout<<"*";
//		}
		printStart(r);
		
		cout<<endl;
	}
	
}




