//#include "iostream"
//#include "sstream"
//
//using namespace std;
//
//int main()
//{
//    int a;
//    cin >> a;
//    cin.ignore(); // <-- getline 전에 개행 버퍼 지우기 확인
//    string d[a];
//    int e[a];
//    string b;
//    int f = 0;
//    double g = 0;
//    getline(cin ,b);
//    stringstream c(b);
//    for(int i=0; i<a; i++)
//    {
//        c >> d[i];
//        e[i] = stoi(d[i]);
//        if(f < e[i])
//        {
//            f = e[i];
//        }
//    }
//    for(int i=0; i<a; i++)
//    {
//        double j;
//        j = (double)e[i]/(double)f*100;
//        g += j;
//    }
//    cout << g/(double)a;
//}