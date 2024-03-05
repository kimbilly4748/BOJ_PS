//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int a, c = 0;
//    cin >> a;
//    char b[a];
//    cin >> b;
//    for(int i=0; i<a; i++)
//    {
//        c += (b[i] - '0'); <------ char이 정수를 담고 있을 경우, 0의 아스키 코드를 빼주면 정확히 맞음
//    }
//    cout << c;
//}