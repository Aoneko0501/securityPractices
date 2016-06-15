#include<iostream>
#include<string>

using namespace std;

//鍵
int key;
//初期化ベクトル
char initial_vector = 15;
//平文格納用配列
char plainText[256];
//暗号格納用配列
char cipherText[] = {0x74, 0x1f, 0x76, 0x9, 0x6d, 0x1f, 0x45, 0xa, 0x4a,
					0x14, 0x3a, 0x5f, 0x33, 0x5c, 0x43, 0x3d, 0x5e};

char dencript(char c, char key);

//シーザー暗号のカギがわからないため、総当たりで繰り返す。(0~127)
int main() {
	char tmp;
	for ( key = 1; key < 128; key++) {
		tmp = initial_vector;
		for (int i = 0; i < (sizeof(cipherText) / sizeof(cipherText[0])); i++) {
			plainText[i] = tmp ^ dencript(cipherText[i],key);
			tmp = cipherText[i];
		}
		if (strstr(plainText, "AND") != NULL) {
			cout << plainText << endl;
			cout << "Key is " << key << endl;
			break;
		}
	}
	return 0;
}

char dencript(char c, char key) {
	return (c-key< 0) ? (c-key + 128) : c-key;
}