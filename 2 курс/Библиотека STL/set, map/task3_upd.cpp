#include <iostream>
#include<set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    set<int> d;
    set<int> nums;
    set<int> all_nums;
    int n;
    cout << "Введите кол-во элементов: ";
    cin >> n;
    cout << endl;
    int el;

    for (int i = 0; i < n; i++) { //заполнение множества целыми числами
        cin >> el;
        d.insert(el);
    }

    for (int i = 0; i < 10; i++) {
        all_nums.insert(i);
    }

    for (auto& item : d) {
        if (item > 9 and item < 1000) {
            int n = item;
            while (n > 0) {
                nums.insert(n % 10);
                n /= 10;
            }
        }
    }

    cout << endl;

    for (auto& item : all_nums) {
        if (nums.find(item) == nums.end()) {
            cout << item << ' ';
        }
    }

}