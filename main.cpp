#include <iostream>
#include "Builder.h"

using namespace std;

int main() {
    Builder b{"ul"};
    b.add_child("li", "hello");
    b.add_child("li", "world");

    cout << b.str() << endl;
    return 0;
}
