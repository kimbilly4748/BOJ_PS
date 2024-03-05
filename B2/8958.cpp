//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int tCase = 0, counter = 0, point = 0;
//    string ox;
//    cin >> tCase;
//    for(int i=0; i<tCase; i++)
//    {
//        cin >> ox;
//        for(int i=0; i<ox.length(); i++)
//        {
//            if (ox[i] == 'O')
//            {
//                counter++;
//                point += counter;
//            }
//            else if (ox[i] == 'X')
//            {
//                counter = 0;
//            }
//        }
//        cout << point << endl;
//        point = counter = 0;
//    }
//}