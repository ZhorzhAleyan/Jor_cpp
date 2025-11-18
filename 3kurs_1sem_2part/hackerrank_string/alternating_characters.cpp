#include  <iostream>

int count_delete(std::string &s) {
	int count = 0;

	for (size_t i = 0; i < s.size() - 1; i++)
		if (s[i] == s[i + 1])
			count++;

	return count;
}

int main() {

	std::string s;
	size_t n;

	do {
		std::cout << "n="; std::cin >> n;
	} while (n < 2);

	do {
		std::cin >> s;
	} while (s.size() != n);

	std::cout << count_delete(s);

	return 0;
}
