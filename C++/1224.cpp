#include <iostream>
#include <stack>
#include <string>

using namespace std;

string convert(string str) {
	stack <string> str;
	stack <string> convertStr;
	stack <string> tmp;

	for (int i = 0; i < str.length(); i++) {
		str.push_back(str[i]);
	}

	
	
}

void calc(string str) {

}

int main() {
  for (int i = 1; i <= 10; i++) {
    int len;
    string str;

    cin >> len;
    cin >> str;
    string expression = convert(str);
    calc(expression);
  }
}
