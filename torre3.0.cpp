#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

int m1 [5][3] = {{1,0,0},
                 {2,0,0},
                 {3,0,0},
                 {4,0,0},
                 {5,0,0}};
int linha = 0;
int col = 0;
int C = 0;
int L = 0;
int jg = 0;

cout << "fase 1 , coloque todos os discos no pino 3/ para mover para os pinos use 0-1,1-2,2-3 "<<endl;

while (m1[0][2]==0){

    cout<<endl;

    for (int i=0; i<5; i++){
        for (int j=0; j<3; j++) {
            cout <<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "coluna \n";
    cin >> col;
    cout << "coluna destinada \n";
    cin >> C;

if ((((col<0)||(col>2))||(C<0))||(C>2)){
    cout << "\n invalido, digite novamente"<<endl<<endl;
    system ("pause");
    continue;
}
for (int i=0; i<5; i++){
    if (m1[i][col] != 0){
        linha = i;
            break;
        }
    }
for (int i=4; i>=0; i--){
    if (m1[i][C]== 0){
        if ((i==4)||(m1[i+1][C]>m1[linha][col])){
            L = i;
            m1 [L][C] = m1[linha][col];
            m1[linha][col]=0;
            jg++;
            break;
        } else {
            cout << "\ninvalido peça maior do que a de baixo!"<<endl<<endl;
            }
            }
        }
    }
    cout << "\nParabéns fim de jogo " << jg << " jogadas!\n";

    return 0;
}
