#include <iostream>
#include <ctime>//
using namespace std;
int main(){
    long long n;
    cout <<"请输入正整数";
    cin>>n;
    //方法·1
    clock_t start1=clock ();
    long long sum1=0;
    for(long long i=1;i<=n;i++){
        sum1=sum1+i;

    }
    clock_t end1=clock();
    double time1=(double)(end1-start1)/CLOCKS_PER_SEC;
    //方法二
    clock_t start2=clock();
    long long sum2=n*(n+1)/2;
    clock_t end2=clock();
    double time2=(double)(end2-start2)/CLOCKS_PER_SEC;


    //输出
    cout<<"循环累加结果："<<sum1<<endl;
    cout<<"循环耗时："<<time1<<endl;
    cout<<"高斯法结果："<<sum2<<endl;
    cout<<"高斯法耗时："<<time2<<endl;
    
    


    
    return 0;
}