#include<iostream>
using namespace std;

    int countPairs(int nums[],int size, int target) {
        // int size=size;
        int countPr=0;
        for(int i=0;i<size;i++){
          for(int j=i+1;j<size;j++){

            
           if(nums[i]+nums[j]<target){
            cout<<nums[i] <<" "<<nums[j]<<endl;
            countPr++;
           }
          }
        }
        return countPr;
    }

    int main(){
        // int nums[7]={-6,2,5,-2,-7,-1,3};
        int num2[5]={-1,1,2,3,1};
        // int target=-2;
        // cout<<countPairs(nums,7,-2)<<endl;
        cout<<countPairs(num2,5,2)<<endl;

    }
