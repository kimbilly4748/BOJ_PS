//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int a;
//    cin >> a;
//    for(int i=1; i<a; i++)
//    {
//        int temp=i, sum=i;
//
//        while(temp!=0)
//        {
//            sum += temp%10;
//            temp /= 10;
//        }
//        if(sum == a)
//        {
//            cout << i << '\n';
//            return 0;
//        }
//    }
//    cout << 0 << '\n';
//    return 0;
//}