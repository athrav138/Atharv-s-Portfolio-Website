# include <iostream>
# include <vector>
using namespace std;


vector<int> reverse(vector <int> vec)
{

  int size = vec.size();
  int j=0;
  vector<int> v;
  for(int i=size-1;i>=0;i++)
  {
      v[j] = vec[i];
      j++;
  }

  for(int i : v)
  {
    vec = v;
  }
  return v;
}

int main()
{
  int n;
  cout<<"Enter size of vector: ";
  cin>>n;
  vector <int> vec(n);

  for(int &val : vec)
  {
    cin>>val;
  }

  cout<<"THe vector is: ";
  for(int val: vec)
  {
    cout<<val<<" ";
  }

  vec = reverse(vec);

  cout<<"\nTHe vector is: ";
  for(int val: vec)
  {
    cout<<val<<" ";
  }

  return 0;
}