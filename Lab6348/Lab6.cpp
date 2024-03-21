#include<iostream>
#include<fstream>

using namespace std;
int main()
{
const int maxsize=100;
int matrix1[maxsize][maxsize];
int matrix2[maxsize][maxsize];
int rmatrix[maxsize][maxsize];
int size;
readmatrix(matrix1, matrix2, size);
printmatrix(matrix1, matrix2, size);
addmatrix(matrix1,matrix2,size,rmatrix);
multmatrix(matrix1,matrix2,size,rmatrix);
submatrix(matrix1,matrix2,size,rmatrix);
upmatrix(matrix1, size);
maxmatrix(matrix1, size);
trmatrix(matrix1, size, rmatrix);
int readmatrix(matrix1, matrix2, size)
{
std::ifstream infile(matrix_input.txt)
infile>>size;
for(int i = 0,i < size; i++){
infile>>matrix1;
}
i == 0;
for(i < size; i++){
infile>>matrix2;
}
return matrix1, matrix2, size;
}
int printmatrix(matrix1, matrix2, size){
for(int i = 0,i < size, i++){
    for(int j = 0,j < size, j++){
        cout << matrix1[i][j] << " ";
    }
    cout<<end1;
}
i = 0
j = 0
for(i < size, i++){
    for(j < size, j++){
        cout << matrix2[i][j] << " ";
    }
    cout<<end1;
}
}
int addmatrix(matrix1,matrix2,size,rmatrix){

    for(int i = 0,i < size, i++){
    for(int j = 0,j < size, j++){
        matrix2[i][j] + matrix1[i][j] = rmatrix[i][j];
    }
    cout<<end1;
}
i = 0
j= 0
for(i < size, i++){
    for(j < size, j++){
        cout << rmatrix[i][j] << " ";
    }
    cout<<end1;
}
}
int multmatrix(matrix1,matrix2,size,rmatrix){

    for(int i = 0,i < size, i++){
    for(int j = 0,j < size, j++){
        matrix2[i][j] * matrix1[i][j] = rmatrix[i][j];
    }
    cout<<end1;
}
i = 0
j= 0
for(i < size, i++){
    for(j < size, j++){
        cout << rmatrix[i][j] << " ";
    }
    cout<<end1;
}
}
int submatrix(matrix1,matrix2,size,rmatrix){

    for(int i = 0,i < size, i++){
    for(int j = 0,j < size, j++){
        matrix1[i][j] - matrix2[i][j] = rmatrix[i][j];
    }
    cout<<end1;
}
i = 0
j= 0
for(i < size, i++){
    for(j < size, j++){
        cout << rmatrix[i][j] << " ";
    }
    cout<<end1;
}
}
int upmatrix(matrix1, size){
    int newnum;
    int rownum;
    int colnum;
    cout << "what is the row you want to change?";
    cin >> rownum;
    cout << "What is the column you want to change?":
    cin >> colnum;
    cout << "What is the new value for the element?";
    cin >> newnum;
    matrix1[rownum][colnum] = newnum;
    for(int i = 0,i < size, i++){
        for(int j = 0,j < size, j++){
            cout << matrix1[i][j] << " ";
        }
        cout<<end1;
}
}
int maxmatrix(matrix1, size){
    int maxnum;
    matrix1[0][0] = maxnum;
    for(int i = 0,i < size, i++){
        for(int j = 0,j < size, j++){
            if (matrix1[i][j]> maxnum)
            matrix1[i][j] = maxnum;
        }
        cout<<end1;
}
    cout >> maxnum;
}
int trmatrix(matrix1, size, rmatrix){
    for(int i = 0,i < size, i++){
        for(int j = 0,j < size, j++){
            rmatrix[j][i] = matrix1[i][j];
        }
        cout<<end1;
    }
    for(int i = 0,i < size, i++){
        for(int j = 0,j < size, j++){
            cout << rmatrix[i][j] << " ";
        }
        cout<<end1;
}  
}
}