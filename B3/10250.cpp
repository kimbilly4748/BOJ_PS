//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int tCase;
//    cin >> tCase;
//    for (int i = 0; i < tCase; i++)
//    {
//        int floor = 0, room = 0, client = 0;
//        cin >> floor >> room >> client;
//
//        int a = client;
//        int b = 1;
//        while (a>floor)
//        {
//            a -= floor;
//            b++;
//        }
//        if(b<=9)
//        {
//            cout << a << "0" << b << endl;
//        }
//        else
//        {
//            cout << a << b << endl;
//        }
//    }
//}