#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,spaces=40;
  cin >> n;
  for (int y = 0; y < n; y++)
  {
	for(int i=0;i<spaces;i++)
	cout<<" ";
    int c = 1;
    for (int x = 0; x <= y; x++)
    {
      cout << c << " ";
      c = c * (y - x) / (x + 1);
    }
    cout<<endl;
    spaces--;
  }
  cout<<endl;
  return 0;
}
