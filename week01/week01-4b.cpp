//week01-4b.cpp 使用C++語言寫
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >>b;
	int ans = 0;
	for(int i=a; i<=b; i++){
		if(i%3==0) ans += i;
	}
	cout << ans; ///C++語言
}
