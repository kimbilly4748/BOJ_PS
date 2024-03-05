//#include "iostream"
//#include "sstream"
//#include "cmath"
//
//using namespace std;
//
//bool isPrime(int a);
//
//int main()
//{
//    int a, counter = 0;
//    cin >> a;
//    cin.ignore();
//    string b;
//    getline(cin, b);
//    stringstream c(b);
//    string d[a];
//    int e[a];
//    for(int i=0; i<a; i++)
//    {
//        c >> d[i];
//        e[i] = stoi(d[i]);
//        if(isPrime(e[i]))
//        {
//            counter++;
//        }
//    }
//    cout << counter;
//}
//
//bool isPrime(int a)
//{
//    if(a < 2) return false;
//    for(int i=2; i<=sqrt(a); i++)
//    {
//        if(a%i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}