//(6827^5736)%9046
#include<iostream>
#include<math.h>

using namespace std;
long myPow(long x, long n, long m);

int main()
{
	long x, n, m, ans;

	cout << "���̐��������:";
	cin >> x;
	cout << "���悵�܂����H:";
	cin >> n;
	cout << "�@�̐�����͂��Ă�������:";
	cin >> m;

	cout << x << " ^ " << n << " mod " << m << "���v�Z���܂�" << endl;

	ans = myPow(x, n, m);

	cout << x << " ^ " << n << " mod " << m << " �̉��Z���ʂ́u" << ans << "�v�ł��B" << endl;
	return 0;
}

//mod���Z�v���O����
long myPow(long x, long n, long m) {
	if (n == 0)
		return 1;
	if (n % 2 == 0) {
		cout << "----"<< n << endl;
		return myPow(x * x % m, n / 2, m);  //�����̎��� (x * x)^(n/2)���s��
	}
	else {
		return x * myPow(x, n - 1, m) % m;  //��̎��� x * (x ^(n-1))���s��
	}
}