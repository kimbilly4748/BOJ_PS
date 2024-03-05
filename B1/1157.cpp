//#include "iostream"
//#include "vector"
//#include "unordered_map"
//
//using namespace std;
//
//void find(vector<int>& arr)
//{
//    unordered_map<int, int> count_map;
//    for(auto& num : arr)
//    {
//        count_map[num]++;
//    }
//    int max_count = 0;
//    vector<int> most_used_elements;
//    for(auto& element : count_map)
//    {
//        if(element.second > max_count)
//        {
//            most_used_elements.clear();
//            most_used_elements.push_back(element.first);
//            max_count = element.second;
//        }
//        else if(element.second == max_count)
//        {
//            most_used_elements.push_back(element.first);
//        }
//    }
//    if (most_used_elements.size() > 1)
//    {
//        cout << '?';
//    }
//    else if (!most_used_elements.empty())
//    {
//        cout << (char)most_used_elements[0];
//    }
//}
//
//int main()
//{
//    string a;
//    cin >> a;
//    vector<int> b;
//    for(int i=0; i<a.length(); i++)
//    {
//        b.push_back((int)toupper(a[i]));
//    }
//    find(b);
//}