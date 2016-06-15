
#include<iostream>
#include<string.h>

using namespace std;

void Answer(char str[], int n); //文字列をnだけずらして表示

int main(void)
{
	char cStr[255];	//文字列を格納する配列
	cout << "復号したい文字列を入力。" << endl;
	cin >> cStr;
	for (int i = 0; i < 26; i++){
		Answer(cStr,strlen(cStr));
		cout << (i+1) << "回目：" << cStr << endl;
	}
	return 0;
}

//文字を1ずつズラす
void Answer(char str[], int n)
{
	for (int i = 0; i < n; i++){
		str[i] = str[i] + 1;
		if (str[i] == '['){ str[i] = 'A'; }
	}
}
