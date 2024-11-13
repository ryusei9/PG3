#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <windows.h>
#include <functional>
#include "Comparison.h"

int main() {
    // int 型同士の比較
    Comparison<int, int> instance1;
    instance1.value1 = 3;
    instance1.value2 = 5;
    instance1.Min();  // int と int の最小値

    // int と float の比較
    Comparison<int, float> instance2;
    instance2.value1 = 7;
    instance2.value2 = 3.5f;
    instance2.Min();  // int と float の最小値

    // int と double の比較
    Comparison<int, double> instance3;
    instance3.value1 = 5;
    instance3.value2 = 6.7;
    instance3.Min();  // int と double の最小値

    // float 型同士の比較
    Comparison<float, float> instance4;
    instance4.value1 = 2.5f;
    instance4.value2 = 3.7f;
    instance4.Min();  // float と float の最小値

    // float と double の比較
    Comparison<float, double> instance5;
    instance5.value1 = 4.4f;
    instance5.value2 = 5.9;
    instance5.Min();  // float と double の最小値

    // double 型同士の比較
    Comparison<double, double> instance6;
    instance6.value1 = 7.1;
    instance6.value2 = 3.3;
    instance6.Min();  // double と double の最小値

    return 0;
}