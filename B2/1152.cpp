//#include "iostream"
//#include "string"
//
//using namespace std;
//
//int main()
//{
//    string a;
//    int b = 0;
//    getline(cin, a);
//    for(int i=0; i<a.length(); i++)
//    {
//        b++;
//        if(i != 0 && i != a.length()-1 && a[i] == ' ')
//        {
//            b--;
//        }
//    }
//    if(a.length() == 1 && a[0] == ' ')
//    {
//        cout << 0;
//    }
//    else
//    {
//        cout << a.length() - b + 1;
//    }
//}