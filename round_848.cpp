//
//  main.cpp
//  TEST
//
//  Created by 최우혁 on 2023/01/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int loop;
    int N;
    cin >> loop;
    vector<int> sum;
    
    for (int i = 0; i < loop; i++) {
        cin >> N; //테스트케이스 N

        vector<int> v; //벡터 정의
        
        for (int i = 0; i < N; i++) { //벡터에 입력값 추가
            int a;
            cin >> a;
            v.push_back(a);
        }
        int max = INT_MIN;
        int len = v.size();
        

        for (int i = 0; i < len-1; i++) {
            v[i] = v[i] * (-1); // v[0] 부호 바꿈
            v[i+1] = v[i+1] * (-1); // v[1] 부호 바꿈
            int sum = 0;
            for (int j = 0 ; j < len; j++)
                {
                    sum += v[j];
                } // 부호 바꾸고 난 뒤의 v 합을 구함
            if (sum > max) max = sum;
            v[i] = v[i] * (-1); // v[0] 부호 바꿈
            v[i+1] = v[i+1] * (-1); // v[1] 부호 바꿈
        }
        
        sum.push_back(max);
    }
    
    for (int i = 0; i < loop; i++) {
        cout << sum[i] << endl;
    }
    
}
    
