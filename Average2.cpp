#include <iostream>
using namespace std;

int main() {
	int sumlang = 0;
	int sumeng = 0;
	int summath = 0;
	int lang_scores[10] = { 75,60,88,100,90,55,70,82,67,99 };
	int eng_scores[10] = { 85,80,89,70,65,99,42,77,100,100 };
	int math_scores[10] = { 70,50,54,78,95,25,35,80,79,85 };

	//과목별 평균
	cout << "***과목별 성적 평균***" << endl;
	double lang_average, eng_average, math_average;

	for (int i = 0; i < 10; i++) 
		sumlang += lang_scores[i];	
	lang_average = sumlang / (double)10;

	for (int i = 0; i < 10; i++)
		sumeng += eng_scores[i];
	eng_average = sumeng / (double)10;

	for (int i = 0; i < 10; i++)
		summath += math_scores[i];
	math_average = summath / (double)10;

	cout << "국어 평균: " << lang_average << " 영어 평균: " << eng_average << " 수학 평균: " << math_average << endl;

	//개인별 평균
	cout << endl <<"***각 학생의 성적 평균***" << endl;
	double personal_average[10];
	for (int stu = 0; stu < 10; stu++) {
		personal_average[stu] = (lang_scores[stu] + eng_scores[stu] + math_scores[stu]) / (double)3;
	}
	for (int i = 0; i < 10; i++) {
		cout << "학생 " << i << " 성적 평균: " << personal_average[i] << endl;
	}

	/* 2차원 배열로 해당 문제 풀기 */
	int scores[3][10] = { { 75,60,88,100,90,55,70,82,67,99 },{ 85,80,89,70,65,99,42,77,100,100 },
						 { 70,50,54,78,95,25,35,80,79,85 } };

	double subject_average[3];

	for (int subj; subj < 3; subj++) {
		int sum = 0;
		for (int stu = 0; stu < 10; stu++)
			sum += scores[subj][stu];
		subject_average[subj] = sum / (double)10;
	}

	double person_average[10];

	for (int stu = 0; stu < 10; stu++) {
		int sum = 0;
		for (int subj; subj < 3; subj++)
			sum += scores[subj][stu];
		person_average[stu] = sum / (double)10;

	}
	
}