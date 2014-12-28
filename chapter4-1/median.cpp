#include<algorithm>
#include<vector>
#include<stdexcept>

using std::vector; using std::domain_error; typedef vector<double>::size_type vec_sz; using std::sort;



double median(vector<double> homework){
	vec_sz size = homework.size();

	if (size == 0){
		throw domain_error("you are seeking mediam of an empty vector.");
	}
	sort(homework.begin(), homework.end());
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];
	return median;
}