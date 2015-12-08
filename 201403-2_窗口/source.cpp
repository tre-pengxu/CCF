#include <iostream>
#include <vector>
using namespace std;
struct point{
	int x,y;
};
struct window{
	int x1,y1,x2,y2;
	int id;
};

int main()
{
	int m, n;
	cin >> m >> n;
	vector<window> w;
	vector<point> p;
	window t1;
	point t2;
		
	for (int i = 0; i < m; i++) {
		//输入数据按照从最下层到最顶层的顺序
		cin >> t1.x1 >> t1.y1 >> t1.x2 >> t1.y2;
		t1.id = m - i;
		w.push_back(t1); //窗口层数[1,m]
	}
	for (int i = 0; i < n; i++) {
		cin >> t2.x >> t2.y;
		p.push_back(t2);
	}

	for (int i = 0; i < n ; i++) { //point
		int cur = 0;
		int id = INT_MAX;
		bool flag = false;
		for (int j = 0; j < m; j++) { //window
			if (p[i].x >= w[j].x1 && p[i].x <= w[j].x2 && p[i].y >= w[j].y1 && p[i].y <= w[j].y2) {
				flag = true;
				if (w[j].id < id) {
					id = w[j].id;
					cur = j;
				}
			}
		}
		if (flag) {
			if (id != 1) {
				for (int k = 0; k < m; k++) {
					if (w[k].id < id)
						w[k].id += 1;
				}
				cout << cur + 1 << endl;
				w[cur].id = 1;
			}
			else
				cout << cur + 1 << endl;
		}
		else 
			cout << "IGNORED" << endl;
	}
	return 0;
}
