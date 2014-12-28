#include<iomanip>
#include<ios>
#include<iostream>
#include<string>
#include<vector>
#include"median.h"
#include"grade.h"

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::domain_error;

typedef vector<double>::size_type vec_sz;



int main(){
	//���O�̓���
	cout << "What's your name?";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
	//�����̐��т̓���
	double midterm, final;
	cout << "What is your scores of the midterm and the final exam?";
	cin >> midterm >> final;
	//�h��̐��т̓���
	cout << "Plese input all of your scores of homeworks. (After all input, plese input end-of-file.)";
	double x;
	vector<double> homework;

	while (cin >> x){
		homework.push_back(x);
	}
	//���ʂ��o��
	


	streamsize prec = cout.precision();
	cout << "Your final score is: " << setprecision(3)
		<< grade(midterm, final, median(homework))
		<< setprecision(prec) << endl;

	return 0;
}