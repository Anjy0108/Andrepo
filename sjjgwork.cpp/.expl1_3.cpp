#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
//法1
//判断是否是素数
bool isPrime(int x){
    if(x<2){
        return false;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
        return false;

    }
    return true;
}
//计算素数个数
int CountPrime(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if(isPrime(i))
        count++;
    }
    return count;
}
//法2 埃氏筛法
int CountPrime2(int n){
    bool*flag =new bool [n+1];
    for(int i=0;i<=n;i++)
    flag[i]=true;
    flag[0]=flag[1]=false;
    for(int i=2;i*i<=n;i++){
        if(flag[i]){
            for(int j=i*i;j<n;j+=i){
                flag[j]=false;
            }
        }
    }
    int count=0;
    for(int i=2;i<=n;i++){
        if(flag[i])
        count++;
    }
    delete[]flag;
    return 0;


}

int main(){
    int n;
    cout<<"请输入n";
    cin>>n;
    
    clock_t start1=clock();
    int ans1=CountPrime(n);
    clock_t end1=clock();
    double time1=(double)(end1-start1)/CLOCKS_PER_SEC;

    clock_t start2=clock();
    int ans2=CountPrime(n);
    clock_t end2=clock();
    double time2=(double)(end2-start2)/CLOCKS_PER_SEC;
    cout<<"法一素数个数"<<ans1<<endl;
    cout<<"法一耗时"<<time1<<endl;

    cout<<"法二素数个数"<<ans2<<endl;
    cout<<"法二耗时"<<time2<<endl;

    
    
    return 0;

}


