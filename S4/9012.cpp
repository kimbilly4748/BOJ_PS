//#include "iostream"
//#include "stack"
//
//using namespace std;
//
//bool isYes(const string& x);
//
//int main()
//{
//    int tCase;
//    cin >> tCase;
//    for(int i=0; i<tCase; i++)
//    {
//        string a;
//        cin >> a;
//        if(isYes(a))
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//}
//
//bool isYes(const string& x)
//{
//    stack<int> xStack;
//    for(int i=0; i<x.size(); i++)
//    {
//        if(x[i] == '(')
//        {
//            xStack.push(1);
//        }
//        else
//        {
//            if(xStack.empty())
//            {
//                return false;
//            }
//            xStack.pop();
//        }
//    }
//    if(xStack.empty())
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}