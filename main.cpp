#include <stdio.h>

// 時給を表示、比較する関数
int Recursive(int a,int b,int c) {
	// 10時間目で終了
	if (c > 10) {
		return 1;
	}
	// それぞれの時給を表示する
	printf("%d時間 時給 : %d カマトゥ : %d\n",c, a,b);
	// 時給を比較する
	if (a > b) {
		printf("通常の時給の方が高い\n\n");
	} else {
		printf("カマトゥの時給の方が高い\n\n");
	}
	
	return Recursive(a + 1072,b * 2 - 50,c + 1);
}
int main() {
	// 一般的な時給
	int pay = 1072;
	// 再帰的な時給
	int kamatwu = 100;
	// 時間
	int time = 1;
	Recursive(pay,kamatwu, time);
	return 0;
}