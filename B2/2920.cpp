//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int melody[8];
//    bool isAscend = false, isDecend = false, isMixed = false;
//
//    for (int i = 0; i < 8; i++)
//    {
//        cin >> melody[i];
//    }
//    for (int i = 0; i < 7; i++)
//    {
//        if(melody[i+1] - melody[i] == 1)
//        {
//            isMixed = false;
//            isAscend = true;
//        }
//        else if(melody[i+1] - melody[i] == -1)
//        {
//            isMixed = false;
//            isDecend = true;
//        }
//        else
//        {
//            isAscend = false;
//            isDecend = false;
//            isMixed = true;
//            break;
//        }
//    }
//    if(isAscend)
//        cout << "ascending";
//    else if(isDecend)
//        cout << "descending";
//    else if(isMixed)
//        cout << "mixed";
//}