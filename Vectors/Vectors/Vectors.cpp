//#include <iostream>
//#include <vector>
//using namespace std;
//
//int ReadNumber(string massage) {
//    int number = 0;
//    cout << massage << "\n";
//    cin >> number;
//    return number;
//}
//
//void FillVector(vector <int>& vEnteredNumbers) {
//    char again = 'Y';
//    do {
//        int number = ReadNumber("Please Enter a Number?");
//        vEnteredNumbers.push_back(number);
//        cout << "Do you need a process again?Y/N." << endl;
//        cin >> again;
//    } while (again == 'y' || again == 'Y');
//
//    for (int& number : vEnteredNumbers) {
//        cout << number << "  ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    //vector <int> num = { 1, 2, 3, 4, 5 };
//    //
//    //cout << num[0] << endl;
//    ////ranged loop
//
//    //for (int &number : num) {
//    //    cout << number << endl;
//    //}
//
//    /*vector <int> vNumbers;
//
//    vNumbers.push_back(10);
//    vNumbers.push_back(20);
//    vNumbers.push_back(30);
//    vNumbers.push_back(40);
//    vNumbers.push_back(50);
//    vNumbers.push_back(60);
//
//
//    for (int& number : vNumbers) {
//        cout << number << "  ";
//    }
//    cout << endl;*/
//
//
//    //////for (int i = 0; i < 10; i++) {
//    //////    for (int j = 0; j < 10; j++) {
//    //////        printf("%0*d ", 2, x[i][j]);
//    //////    }
//    //////    cout << endl;
//    //////}
//
//    
//    //Homework
//
//    vector <int> vEnteredNumbers;
//   
//
//    FillVector(vEnteredNumbers);
//    
//    return 0;
//
//}		
// 
//


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int>  ans;
        bool added = true;
        for (int i = 0; i <= nums1.size(); i++) {
                added = true;
            for (int j = 0; j <= nums1.size(); j++) {
                if (nums2[j] == nums1[i]) {
                    if (nums2[j + 1] > nums2[j]) {
                        ans.push_back(nums2[j + 1]); 
                        added = false;
                    }
                }
            }
             if(added == true)
                ans.push_back(-1);
        }
        return ans;
    }
};
int main() {
    Solution sol =  Solution();
    vector<int> nums1 = { 1,3,5,2,4 };
    vector<int> nums2 = {6,5,4,3,2,1,7};
    vector <int> result;

    result = sol.nextGreaterElement(nums1, nums2);

    for (int& number : result) {
         cout << number << "  ";
     }
    
}