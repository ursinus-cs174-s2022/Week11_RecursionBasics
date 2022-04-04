#include <iostream>

using namespace std;

void printTabs(int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "\t";
    }
}

int g(int x, int depth) {
    printTabs(depth);
    int ret = 0;
    if (x > 0) {
        cout << "g(" << x << ") = g( " << x-3 << ") + 1\n";
        ret = g(x-3, depth+1) + 1;
        printTabs(depth);
        cout << "g(" << x << ") = " << "g(" << x-3 << ") + 1 == " << ret << "\n";
    }
    else {
        cout << "g(" << x << ") = 3*" << x << "\n";
        ret = 3*x;
        printTabs(depth);
        cout << "g(" << x << ") = " << ret << "\n";
    }
    
    return ret;
}

int f(int x, int y) {
    int res = 0;
    if (x > y) {
        res = f(x-y, y-1) + 2;
    }
    else {
        res = x + y;
    }
    return res;
}

int main() {
    cout << f(12, 6) << "\n";
    return 0;
}
