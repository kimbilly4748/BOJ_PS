//#include "iostream"
//
//using namespace std;
//
//int main()
//{
//    int cardAmount, goalNum, sum = 0;
//    cin >> cardAmount >> goalNum;
//    int cards[cardAmount];
//    for(int i=0; i<cardAmount; i++)
//    {
//        cin >> cards[i];
//    }
//    for(int i=0; i<cardAmount-2; i++)
//    {
//        for(int j=i+1; j<cardAmount-1; j++)
//        {
//            for(int k=j+1; k<cardAmount; k++)
//            {
//                int tempSum = cards[i] + cards[j] + cards[k];
//                if(tempSum > sum && tempSum < goalNum)
//                {
//                    sum = tempSum;
//                }
//                else if(tempSum == goalNum)
//                {
//                    sum = tempSum;
//                    break;
//                }
//            }
//        }
//    }
//    cout << sum;
//}