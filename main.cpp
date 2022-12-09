

#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;

int main(){
	int arr[4][3];
	int even = 0;
	srand(time(NULL));
	for (int i = 0; i < 4; i++) { // для рядків 
		for (int j = 0; j < 3; j++) {// для стовпчиків
			arr[i][j] =rand() %10;
		}
	}
	for (int i = 0; i < 4; i++) {
		even = 0;
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] % 2 == 0)//рахує кількість парних в рядку
				even++;
		}
		cout << "in " << i << " row of even numbers = " << even << endl;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << ' ';
		}//виведення двовимірного масиву
		cout << endl;
	}
}