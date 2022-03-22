#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <ctime>

struct student {
	string name;

};

struct teacher {

	//老师名字
	string name;

	//老师年龄

	int age;

	struct student stuArray[5];
};

void allocateSpace(teacher tArray[], int len) {

	for (int i = 0; i < len; i++) {
		cout << "输入第" << i << "个老师的姓名" << endl;
		cin >> tArray[i].name;
		cout << "输入第" << i << "个老师的年龄" << endl;
		cin >> tArray[i].age;
		for (int j = 0; j < 5; j++) {
			int number = rand() % 60 + 40;  //分数范围是40~99
			tArray[i].stuArray[j].name= tArray[i].stuArray[j].name+to_string(number);
		}
	}
}

void printInfo(teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << tArray[i].name << "\t" << tArray[i].age << endl;

		cout << "学生信息" << endl;

		for (int j = 0; j < 5; j++) {
			cout << tArray[i].stuArray[j].name<<"\t";
		}
		cout<<endl;
	}
}
int mainfir(){
	//随机数种子

	srand((unsigned int)time(NULL));
	teacher tArray[2];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	printInfo(tArray, len);
	system("pause");
	return 0;
}