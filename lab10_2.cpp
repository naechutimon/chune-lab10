#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	cout<<"-------------------- BOOM ---------------------"<<"\n";
	
	string line;
	while(getline(source,line)){
	    cout<<line<<"\n";
	}
	
	cout<<"-------------------- HA!! ---------------------";
	

    source.close();
    dest.close();
	return 0;
}

