 #include <iostream>
using namespace std;

 void percantage(int a){

	if (a>=90){
		cout << "Percantage is: " << a << endl;
		cout << " Grade A" << endl;
	}else if (a>=80){
		cout << "Percantage is: " << a << endl;
		cout << "Grade B" << endl;
	}else if (a>70){
		cout << "Percantage is: " << a << endl;
		cout<< " Grade C" << endl;
	}else if(a>=60){
		cout << "Percantage is: " << a << endl;
		cout<< "Grade D" << endl;
	}else if(a>=40){
		cout << "Percantage is: " << a << endl;
		cout<< "Grade E" << endl;
	}else if(a<40){
		cout << "Percantage is: " << a << endl;
		cout << "Grade F" << endl;
	} else{
		cout<<"Input Valid Number";
	}
}

int main(){
	int physics, chemsitry, biology, computer;

	cin >> physics >> chemsitry >> biology >> computer;

	percantage(physics);
	percantage(chemsitry);
	percantage(biology);
	percantage(computer);

}