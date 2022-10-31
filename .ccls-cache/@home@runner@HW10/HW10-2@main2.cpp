#include <iostream>

using namespace std;
void printArray(int count, int G[]);
int main(){
  int N;
  cin >> N;
  int A[N];
  int G[N];
  int max = 0;
  int count = 0;
  
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }

  for (int j = 0; j < N; j++){
    if(A[j] > max){
      max = A[j];
      G[count] = max;
      count++;
    }
    
  }
  cout << count << endl;
  printArray(count, G);
  
}

void printArray( int count, int G[] ){
  for (int k = 0; k < count; k++){
    if (k != count - 1){
      cout << G[k] << " ";
    }
    else
      cout << G[k] << endl;
  }
  return;
}