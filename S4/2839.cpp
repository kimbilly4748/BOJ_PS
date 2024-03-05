//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int a, b, c;
//    int counter = 0;
//    cin >> a;
//    b = a;
//    c = a;
//    for(int i=0; (int)i<a/5; i++)
//    {
//        b -= 5;
//        if(b%3 == 0 && b%5 !=0)
//        {
//            break;
//        }
//    }
//    while(a > 0)
//    {
//        if(b == 0 || a%5 == 0)
//        {
//            a -= 5;
//            counter++;
//        }
//        else if(b%3 == 0 || c%3 == 0)
//        {
//            a -= 3;
//            counter++;
//        }
//        else
//        {
//            counter = -1;
//            a = 0;
//        }
//    }
//    cout << counter;
//}