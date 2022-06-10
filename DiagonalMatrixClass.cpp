#include<iostream>

using namespace std;

class Diagonal{
private:
    int n;//for n*n matrix
    int *A;//pointer to point array
public:
    Diagonal(int n){
        this->n=n;
        A = new int[n];
    }

    void set(int row, int col, int elem){
        if(row==col)
            A[row-1]=elem;
    }

    int get(int row, int col){
        if(row==col) return A[row-1];
        else return 0;
    }

    void Display(){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) cout<<A[i];
                else cout<<"0";
            }
            cout<<endl;
        }
    }
    ~Diagonal(){ delete[] A;}
};

int main(){
Diagonal mat1(5);

mat1.set(1,1,4);
mat1.set(2,2,4);
mat1.set(3,3,4);
mat1.set(4,4,4);
mat1.set(5,5,4);

mat1.Display();
return 0;
}