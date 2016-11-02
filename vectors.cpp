#include <iostream>
#include <vector>

int main (void)
{
  std::vector<double> myvector ;
  myvector.push_back(3);

  for (auto x: myvector)
    std::cout<<x<<'\n';
}
