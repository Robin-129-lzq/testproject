#include <iostream>
using namespace std;
int main() {
    double profit, bonus = 0;
    cout << "请输入当月利润(万元): ";
    cin >> profit;
    if (profit <= 10)
        bonus = profit * 0.1;
    else if (profit <= 20)
        bonus = 10 * 0.1 + (profit - 10) * 0.075;
    else if (profit <= 40)
        bonus = 10 * 0.1 + 10 * 0.075 + (profit - 20) * 0.05;
    else if (profit <= 60)
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (profit - 40) * 0.03;
    else if (profit <= 100)
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015;
    else
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01;
    cout << "应发放奖金总数: " << bonus << " 万元" << endl;
    return 0;
    }