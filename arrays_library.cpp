#include <iostream>
#include <array>

int main (void)
{
  std::array<int,3> myarray {10,20,30};

  for (int i=0; i<myarray.size(); ++i)
    {++myarray[i];}
  for (int elem : myarray)
    {std::cout<<elem<<'\n';}
  std::cout<<myarray [3]<<std::endl;
  std::cout<<myarray.at(3)<<'\n';
}
