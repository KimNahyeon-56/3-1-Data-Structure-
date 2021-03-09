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
	int stu = 10; //학생 수 설정(학생 수가 증가하면 해당 변수를 사용하여 고침)

	/*학생 수 변경하거나 과목이 여러과목일 경우 class Score를 사용하여 나눠서 점수를 저장할 수 있음*/
	Score class1[10] = { Score(90),Score(100),Score(95),Score(60),Score(70),Score(50),Score(20),Score(100),Score(98),Score(100) };

	for (int i = 0; i < stu; i++) {
		sum += class1[i].getScore();
	}

	result = sum / (double)stu;   //소수점 첫째자리까지 평균값 계산
	
	cout << "class1 과목의 학생 수: "<<stu<<"명"<<endl
		 <<"class1 과목의 평균 점수: " << result <<"점"<< endl;

}