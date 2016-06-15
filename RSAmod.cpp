//(6827^5736)%9046
#include<iostream>
#include<math.h>

using namespace std;
long myPow(long x, long n, long m);

int main()
{
	long x, n, m, ans;

	cout << "正の整数を入力:";
	cin >> x;
	cout << "何乗しますか？:";
	cin >> n;
	cout << "法の数を入力してください:";
	cin >> m;

	cout << x << " ^ " << n << " mod " << m << "を計算します" << endl;

	ans = myPow(x, n, m);

	cout << x << " ^ " << n << " mod " << m << " の演算結果は「" << ans << "」です。" << endl;
	return 0;
}

//mod演算プログラム
long myPow(long x, long n, long m) {
	if (n == 0)
		return 1;
	if (n % 2 == 0) {
		cout << "----"<< n << endl;
		return myPow(x * x % m, n / 2, m);  //偶数の時は (x * x)^(n/2)を行う
	}
	else {
		return x * myPow(x, n - 1, m) % m;  //奇数の時は x * (x ^(n-1))を行う
	}
}