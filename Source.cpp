#include "Header.h"
int main() {
	string sentence;
	cout << "please , enter a sentence  : ";
	getline(cin, sentence);
	cout << "the sentence before editing : " << sentence << endl;
	size_t found0 = sentence.find("him");
	size_t found1 = sentence.find("her");
	size_t found2 = sentence.find("he");
	size_t found3 = sentence.find("she");
	if (found0 != string::npos)
		sentence.replace(found0, 3, "him or her ");
	if (found1 != string::npos)
		sentence.replace(found1, 3, "him or her ");
	if (found2 != string::npos)
		sentence.replace(found2, 3, "he or she ");
	if (found3 != string::npos)
		sentence.replace(found3, 3, "he or she ");

	size_t found4 = sentence.find("Him");
	size_t found5 = sentence.find("Her");
	size_t found6 = sentence.find("He");
	size_t found7 = sentence.find("She");
	if (found4 != string::npos)
		sentence.replace(found4, 3, "Him or Her ");
	if (found5 != string::npos)
		sentence.replace(found5, 3, "Him or Her ");
	if (found6 != string::npos)
		sentence.replace(found6, 3, "He or She ");
	if (found7 != string::npos)
		sentence.replace(found7, 3, "He or She ");

	cout << "the sentence after  editing : " << sentence << endl;
	return 0;
}