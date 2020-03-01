#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	for (int s=0; s<60; s++){
		for (int f=0; f<60; f++) {
			for (int m=1; m< 60 ;m++) {
				cout << "µÚ" << s << ":" << f << ":" << m  << "´ÎÏëÄã" << endl;
				Sleep(1000);
			}
		}
	}

	system("pause");
	return 0;

}