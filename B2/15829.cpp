//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int a;
//    long long sum = 0;
//    cin >> a;
//    char b[a];
//    long long c = 1234567891;
//    unsigned long long d = 1;
//    for(int i=0; i<a; i++)
//    {
//        cin >> b[i];
//    }
//    for(int i=0; i<a; i++)
//    {
//        sum += ((b[i]-96)*d)%c;
//        sum %= c;
//        d *= 31;
//        d %= c;
//    }
//    cout << sum;
//}