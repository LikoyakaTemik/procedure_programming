#include <iostream>
#include <string>
using namespace std;
void move(int& x, int& y, int dx, int dy) {

	x = x + dx;
	y = y + dy;
}
int main() {
	int a[100][100], n, m;
	int index = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

			cin >> a[i][j];
		}
	}
	int x = 0;
	int y = 0;
	string command;
	cin >> command;
	while (true) {
		if (command == "go") {
			cin >> command;
			if (command == "home") {
				cout << index << endl << x << " " << y;
				break;
			}
			int dx, dy;
			if (command == "left") {

				dx = 0;
				dy = -1;
				++index;
			}
			if (command == "right") {

				dx = 0;
				dy = 1;
				++index;
			}
			if (command == "up") {
				dx = -1;
				dy = 0;
				++index;
			}
				if (command == "down") {
					dx = 1;
					dy = 0;
					++index;
				}
				move(x, y, dx, dy);
		}
		else if (command == "check") {
			if (a[x][y] == 1) 

				cout << "Common\n";
			
			else 

				cout << "Rare\n";
			}
		
		cin >> command;
	}
	system("pause");
	return 0;
}
