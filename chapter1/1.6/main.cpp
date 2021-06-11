#include <iostream>
#include <vector>
using namespace std;

void calc_sum_and_mean_1(int num) {
    if (num > 1024) {
        cerr << "number is too large" << endl;
    }
    else {
        int array[num];
        for (int i = 0; i < num; ++i) {
            cin >> array[i];
        }
        int sum = 0;
        for (int i = 0; i < num; ++i) {
            sum += array[i];
        }
        cout << "sum is: " << sum << endl;
        cout << "mean is: " << sum / num << endl;
    }
}

void calc_sum_and_mean_2(int num) {
    vector<int> array(num);
    for (int i = 0; i < num; ++i) {
        cin >> array[i];
    }
    int sum = 0;
    for (int i = 0; i < num; ++i) {
        sum += array[i];
    }
    cout << "sum is: " << sum << endl;
    cout << "mean is: " << sum / num << endl;
}
int main() {
    cout << "Input the number of the array:\n";
    int num;
    cin >> num;
    cout << "Input " << num << "numbers" << endl;
    calc_sum_and_mean_1(num);
//    calc_sum_and_mean_2(num);
    return 0;
}
