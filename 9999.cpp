#include <iostream>
#include <cstddef>
#include <vector>

int main()
{
  std::size_t n;
  std::cin >> n;
  std::vector<int> vct(n);
    
  for (std::size_t i = 0; i < vct.size(); ++i)
  {
    std::cin >> vct.at(i);
  }

  for (std::size_t j = 0; j < vct.size(); ++j)
  {  
    std::size_t count{};
    for (std::size_t k = 2; k < vct.at(j); ++k)
    {
      std::size_t h{};
      for (h = 2; h < k; ++h)
      {
        if (k % h == 0)
          break;
      }
      if (k == h)
        ++count;
    }
    std::cout << count << ' ';
  }
  return 0;
}