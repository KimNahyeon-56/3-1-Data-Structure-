#include <iostream>
using namespace std;

class Score {
	int score;
public:
	Score() { score = 0; }
	Score(int s) { score = s; }
	int getScore() { return score; }
};


int main() {
	int sum = 0;
	double result;
	int stu = 10; //�л� �� ����(�л� ���� �����ϸ� �ش� ������ ����Ͽ� ��ħ)

	/*�л� �� �����ϰų� ������ ���������� ��� class Score�� ����Ͽ� ������ ������ ������ �� ����*/
	Score class1[10] = { Score(90),Score(100),Score(95),Score(60),Score(70),Score(50),Score(20),Score(100),Score(98),Score(100) };

	for (int i = 0; i < stu; i++) {
		sum += class1[i].getScore();
	}

	result = sum / (double)stu;   //�Ҽ��� ù°�ڸ����� ��հ� ���
	
	cout << "class1 ������ �л� ��: "<<stu<<"��"<<endl
		 <<"class1 ������ ��� ����: " << result <<"��"<< endl;

}