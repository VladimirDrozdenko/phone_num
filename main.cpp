#include <iostream>
#include <string>
using namespace std;

static const string letters[] = {
	"0.",
	"1",
	"2ABC",
	"3DEF",
	"4GHI",
	"5JKL",
	"6MNO",
	"7PQRS",
	"8TUV",
	"9WXYZ"
};

void print_all_words(string& s, size_t pos = 0) {
	if (pos >= s.size()) {
		cout << s << endl;
		return;
	}

	for (size_t i = 0; i < letters[s[pos] - '0'].size(); ++i) {
		char tmp = s[pos];
		s[pos] = letters[s[pos] - '0'][i];
		print_all_words(s, pos+1);
		s[pos] = tmp;
	}
}


int main() {
	string phone_num = "234";
	print_all_words(phone_num);
}