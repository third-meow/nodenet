#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

	string test_str = "Hi, Im a test string";
	hash<string> hash_func;
	hash<string> another_hash_func;

	long hash = hash_func(test_str);
	long another_hash = another_hash_func(test_str);
	cout << hash << endl;
	cout << another_hash << endl;

	return 0;
}

