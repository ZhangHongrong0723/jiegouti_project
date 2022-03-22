#include <iostream>
using namespace std;

struct Hero {
	string name;
	int age;

};

void sortHero( Hero heroOne[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			Hero temp;
			if (heroOne[j].age < heroOne[j + 1].age) {
				temp = heroOne[j];
				heroOne[j] = heroOne[j + 1];
				heroOne[j + 1] = temp;

			}
		}
	}

}

void printInfo(Hero heroOne[], int len) {
		
	for (int i = 0; i < len; i++) {
	
		cout << heroOne[i].name << "\t" << heroOne[i].age << endl;
	}
}
int main() {
	Hero heroOne[] = 
	{ 
		{"¹ØÓð",60}, 
		{"ÕÅ·É",55},
		{"Âí³¬",30},
		{"ÕÔÔÆ",40},
		{"»ÆÖÒ",50},
	};
	int len = sizeof(heroOne) / sizeof(heroOne[0]);
	sortHero(heroOne, len);
	printInfo(heroOne, len);
	system("pause");
	return 0;
}