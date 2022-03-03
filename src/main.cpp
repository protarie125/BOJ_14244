#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	cout << "0 1\n1 2\n";
	m -= 2;
	auto node = int{ 3 };
	while (node < n) {
		if (0 < m) {
			cout << "1 " << node << '\n';
			m -= 1;
		}
		else {
			cout << node - 1 << ' ' << node << '\n';
		}

		node += 1;
	}

	return 0;
}