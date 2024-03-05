//#include "iostream"
//#include "stack"
//
//using namespace std;
//
//int main()
//{
//    int tCase;
//    cin >> tCase;
//    stack<int> a;
//    string b;
//    for(int i=0; i<tCase; i++)
//    {
//        cin >> b;
//        if(b == "push")
//        {
//            int c;
//            cin >> c;
//            a.push(c);
//        }
//        else
//        {
//            if(b == "pop" && !a.empty())
//            {
//                cout << a.top() << endl;
//                a.pop();
//            }
//            else if(b == "pop" && a.empty())
//            {
//                cout << -1 << endl;
//            }
//            else if(b == "size")
//            {
//                cout << a.size() << endl;
//            }
//            else if(b == "empty")
//            {
//                cout << (a.empty() ? 1 : 0) << endl;
//            }
//            else if(b == "top" && !a.empty())
//            {
//                cout << a.top() << endl;
//            }
//            else if(b == "top" && a.empty())
//            {
//                cout << -1 << endl;
//            }
//        }
//    }
//}