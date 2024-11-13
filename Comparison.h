
#pragma once
#include <iostream>
#include <typeinfo>

// 2つの値の最小値を求めるテンプレート関数
template <typename T1, typename T2>
auto myMin(T1 a, T2 b) {
	return (a < b) ? a : b;
}

template <typename T1, typename T2>
class Comparison
{
public:
	T1 value1;
	T2 value2;

	void Min() {
		// myMin 関数を使って最小値を計算
		auto minValue = myMin(value1, value2);

		// 最小値と型を printf で表示
		if constexpr (std::is_same<decltype(minValue), int>::value) {
			printf("Min value: %d\n", minValue);
		} else if constexpr (std::is_same<decltype(minValue), float>::value) {
			printf("Min value: %f\n", minValue);
		} else if constexpr (std::is_same<decltype(minValue), double>::value) {
			printf("Min value: %f\n", minValue);
		}
	}
};


