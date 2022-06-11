#include<iostream>

using namespace std;

private:
class LowerTri{
    int n;//for n*n matrix
    int *A;//pointer to point array
public:
    LowerTri(){
        n=2;
        A=new int[(2*(2+1))/2]
    }
    LowerTri(int n){
        this->n=n;
        A = new int[n*(n+1)/2];
    }

    void set(int row, int col, int elem){
        if(row>=col)
            A[row*(row-1)/2 + col-1]=elem;
    }

    int get(int row, int col){
        if(row>=col) return A[row*(row-1)/2 + col-1];
        else return 0;
    }

    void LowerTri(){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i>=j) cout<<A[i*(i-1)/2 + j-1];
                else cout<<"0";
            }
            cout<<endl;
        }
    }
    ~LowerTri(){ delete[] A;}
};

int main(){
int d;
cout<<"Enter Dimension:";
cin>>d;

LowerTri mat1(d);

int x;
cout<<"Enter all elements:";
for(int i=1; i<=d; i++){
    for(int i=1; i<=d; i++){
        cin>>x;
        mat1.set(i,j,x);
    }
}
mat1.Display();
return 0;
}