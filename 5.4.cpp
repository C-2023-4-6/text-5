#include<iostream>
#include<string>
using namespace std;

class student 
{
public:
	
	 int num;
	 int score;
	 student(int num,int score) {
		 this->num = num;
		 this->score = score;
	 }

	 void max(student* deta[]);//����max����
};

void student::max(student* deta[])//ͨ��ð���������ֵ������󣬲�������һ��
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (deta[j]->score > deta[j + 1]->score) {
				student* temp = deta[j];
				deta[j] = deta[j + 1];
				deta[j + 1] = temp;
			}
		}
	}
	 cout << (deta[4]) ->num << endl;
}

//{
	/*for (int i = 0, int j = 0; i < 5; i++)
	{
		if (deta[i]->score > deta[j]->score) 
		{
			j++;
		}
		cout << deta[i]->num << endl;
}*/
//}

int main()
{
	student* a1 = new student(15,95);
	student* a2 = new student(28, 85);
	student* a3 = new student(29, 66);
	student* a4 = new student(12,79);
	student* a5 = new student(19, 88);

	student* deta[5] = { a1,a2,a3,a4,a5};
	student x(1, 2);
	x.max(deta);//Ԥ�����Ϊ15��

	return 0;
}