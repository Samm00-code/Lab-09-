#include <iostream>
using namespace std;
int main() {
int arr[4][4]={
{1,2,5,3},
{7,9,4,1},
{2,9,5,7},
{0,3,7,4}
};

for(int i=0; i<4; i++){
for(int j=0; j<4; j++){
cout<<arr[i][j];
}
cout<<endl;
}

return 0;
}
