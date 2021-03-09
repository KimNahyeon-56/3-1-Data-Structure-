#include <iostream>
using namespace std;

/* 고등학교 3학년에 3개의 반이 있다. 각 반에 학생은 10명이고, 3개의 과목의 시험을 봤다.
    1. 각 반별 각 과목의 평균을 구하라(예. 1반 과목1의 평균)
	2. 3학년 전체의 각 과목별 평균을 구하라 (예. 3학년 과목1의 평균)
*/

int main() {
	int scores[3][3][10] = { //3반, 3과목, 10명
		{
			{87,87,92,55,95,100,100,70,66,65}, //1반 과목1 성적
	        {90,80,64,75,60,53,78,90,100,98},  //1반 과목2 성적
	        {55,35,75,20,100,90,45,95,88,85}   //1반 과목3 성적                         
		},
	    {
			{87,78,92,30,95,100,95,70,66,65}, //2반 과목1 성적
			{90,80,60,75,60,53,78,90,100,100},  //2반 과목2 성적
			{68,60,75,30,100,25,45,95,80,85}   //2반 과목3 성적
		},
	    {
			{85,78,92,52,95,100,97,70,66,55}, //2반 과목1 성적
			{90,70,60,75,60,53,78,90,94,100},  //2반 과목2 성적
			{55,32,75,50,98,90,45,95,80,27}   //2반 과목3 성적
		} 
	};

	//각 반 과목별 평균
	int sum = 0;
	double Csubj_average[3][3];  //반 3개, 과목 3개

	for(int c=0; c<3; c++){
		for (int subj = 0; subj < 3; subj++) {
			int sum = 0;
			for (int stu = 0; stu < 10; stu++) {
				sum += scores[c][subj][stu];
			}
			Csubj_average[c][subj] = (double)sum / 10;
		}
	}
	for(int c=0; c<3; c++)
		for(int subj=0; subj<3; subj++)
	        cout << c+1<<"반의 과목 "<<subj+1<<" 평균: "<<Csubj_average[c][subj]<< endl;

	//해당 학년의 과목 평균
	double Gsubj_average[3];  //과목 3개
	
	for (int subj = 0; subj < 3; subj++) {
		int sum2 = 0;
		for (int c = 0; c < 3; c++) {
			for (int stu = 0; stu < 10; stu++) {
				sum2 += scores[c][subj][stu];
			}
		}
		Gsubj_average[subj] = (double)sum2 / 30;
	}

	for (int subj = 0; subj < 3; subj++)
		cout <<"과목 "<<subj+1<<" 평균: "<< Gsubj_average[subj] << endl;

}