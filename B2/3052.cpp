//#include "iostream"
//#include "set"
//
//using namespace std;
//
//int main()
//{
//    int a;
//    set<int> b; <---------- set이 대체 뭐임??
//
//    for(int i=0; i<10; i++)
//    {
//        cin >> a;
//        b.insert(a%42);
//    }
//    cout << b.size();
//}
/*
이게 원래 의도인듯?
#include <iostream>

using namespace std;

int main(void) {
    bool remainders[42] = { false, };

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        int remain = num % 42;
        if (!remainders[remain]) {
            remainders[remain] = true;
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
 */