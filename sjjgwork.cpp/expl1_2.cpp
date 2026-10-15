#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"请输入整数:";
    cin>>n;
    cout<<left<<setw(8)<<"n"
        <<setw(12)<<"log2(n)"
        <<setw(12)<<"sqrt(n)"
        <<setw(12)<<"n"
        <<setw(12)<<"nlog2(n)"
        <<setw(12)<<"n^2"
        <<setw(12)<<"n^3"
        <<setw(12)<<"2^n"
        <<setw(12)<<"n!"<<endl;
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        double log2n=log2(i);
        double sqrtn=sqrt(i);
        double nlog2n=i*log2n;
        long long n2=(long long)i*i;
        long long n3=n2*i;
        long long pow2n=(long long)pow(2,i);
        cout<<left<<setw(8)<<i
        <<setw (12)<<fixed<<setprecision(4)<<log2n
        <<setw(12)<<sqrtn
        <<setw(12)<<i
        <<setw(12)<<nlog2n
        <<setw(12)<<n2
        <<setw(12)<<n3
        <<setw(12)<<pow2n
        <<setw(12)<<fact<<endl;

    }
    return 0;


}