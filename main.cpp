#include <stdio.h>

// 関数テンプレート
// 値の小さい方を返す
template <typename Type>
Type Min(Type a, Type b) {
	return static_cast<Type>(a < b ? a : b);
}
// char型のみ例外の処理を作る
template <>
char Min<char>(char a, char b) {
	return printf("数字以外は入力できません\n");
}
int main() {
	printf("%d\n", Min(0, 9));
	printf("%f\n", Min(62.1f, 24.9f));
	printf("%lf\n", Min(26.483, 52.0));
	printf("%c\n", Min('k','r'));
	return 0;
}