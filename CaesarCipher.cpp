
#include<iostream>
#include<string.h>

using namespace std;

void Answer(char str[], int n); //�������n�������炵�ĕ\��

int main(void)
{
	char cStr[255];	//��������i�[����z��
	cout << "�������������������́B" << endl;
	cin >> cStr;
	for (int i = 0; i < 26; i++){
		Answer(cStr,strlen(cStr));
		cout << (i+1) << "��ځF" << cStr << endl;
	}
	return 0;
}

//������1���Y����
void Answer(char str[], int n)
{
	for (int i = 0; i < n; i++){
		str[i] = str[i] + 1;
		if (str[i] == '['){ str[i] = 'A'; }
	}
}
