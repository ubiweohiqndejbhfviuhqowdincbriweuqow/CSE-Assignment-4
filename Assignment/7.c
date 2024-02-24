 #include <iostream>
using namespace std;

 void percantage(int a){

	if (a>=90){
		
		cout << " Grade A" << endl;
	}else if (a>=80){
		
		cout << "Grade B" << endl;
	}else if (a>70){
		
		cout<< " Grade C" << endl;
	}else if(a>=60){
		
		cout<< "Grade D" << endl;
	}else if(a>=40){
		
		cout<< "Grade E" << endl;
	}else if(a<40){
		
		cout << "Grade F" << endl;
	} else{
		cout<<"Input Valid Number";
	}
}

int main(){
	int number;

	cin >> number;

	percantage(number);
	
}