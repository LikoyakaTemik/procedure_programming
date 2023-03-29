#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	string kommand1;
	string kommand2;
	int index_resh;
	double global_t;
	int global_c;
	int index_kond = 0;
	int index_pil = 0;
	double povichenie = 0;
	double ponishenie = 0;
	cin >> index_resh;
	string name1 = "1323123";
	string name2 = "5234131";
	string name3 = "3123123";
	string ADD;
	int t1, c1, t2, c2, t3, c3;
	for (int res = 1; res <= index_resh; ++res) {
		if (res == 1) {

			cin >> ADD >> name1 >> t1 >> c1;
		}else
		if (res == 2) {

			cin >> ADD >> name2 >> t2 >> c2;
		}else
		if (res == 3) {

			cin >> ADD >> name3 >> t3 >> c3;
		}
	}
	cin >> kommand1 >> kommand2;
	if (kommand2 == name1) {

		global_t = t1;
			global_c = c1;
	}
	else if (kommand2 == name2) {

		global_t = t2;
		global_c = c2;
	}
	else if (kommand2 == name3) {
		global_t = t3;
		global_c = c3;
	}
	else if (kommand2 == "TEMP") {
		cin >> global_t;
		cin >> kommand1 >> kommand2 >> global_c;
	}
	int hours;
	cin >> hours;
	int index = hours / 3;
	double t;
	int c;
	int index_c = 0;
	for (int u = index; u > 0; --u) {
	cin >> kommand1 >> kommand2;
	if (kommand2 == "TEMP") {

		cin >> t;
		if (t != global_t) {
			if (t < global_t) {

				povichenie = povichenie + (global_t - t);
			}
			else if (t > global_t) {

				ponishenie = ponishenie + (t - global_t);
			}
			++index_kond;
		}
	}
	cin >> kommand1 >> kommand2;
	if (kommand2 == "CLEANLINESS") {

		cin >> c;
		if (c < global_c) {
			index_c = index_c + (global_c - c);
			++index_pil;
		}
	   }
    }

	int index_stat;
	cin >> index_stat;
	while (index_stat > 0) {
		cin >> kommand1 >> kommand2;
		if (kommand2 == "HOME") {

			cout << "Zolushka used cleaner " << index_pil << " times, used air conditioning " << index_kond << " times\n";
		}
		else if (kommand2 == "AIR") {

			cout  << "Zolushka summary increase temperature for " << povichenie << " degrees today, summary decrease temperature for " << ponishenie << " degrees today\n";

		}
		else if (kommand2 == "CLEANER") {

			cout << "Zolushka raised cleanliness today for " << index_c << " points\n";
		}

		--index_stat;
	}
			system("pause");
			return 0;
}
