#include<iostream>
using namespace std;

int main(){
	//int count[5] = {gradeA,gradeB,gradeC,gradeD,gradeF};
	int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;
	int studentnum = 1;
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";

	
	while(true) {
		cout << "Student ["<<studentnum<<"]: ";
		cin >> grade; 
		studentnum++;
		
		if(grade == "0") {
		   studentnum--;
		   break ;
		}
		
		else if(grade == "A"){ 
			gradeA++;
		}
		else if(grade == "B"){ 
			gradeB++;
		}
		else if(grade == "C"){ 
			gradeC++;
		}
		else if(grade == "D"){ 
			gradeD++;
		}
		else if(grade == "F"){ 
			gradeF++;
		}
		
		else{ 
		    cout<<"Wrong input. Please input again."<<"\n";
		    studentnum--;
		} 
	}
	
	cout << "In total " << studentnum-1 <<" students." <<"\n";
	cout << "A = " << gradeA <<", ";
	cout << "B = " << gradeB <<", ";
	cout << "C = " << gradeC <<", ";
	cout << "D = " << gradeD <<", ";
	cout << "F = " << gradeF ;
	
	return 0;
}




