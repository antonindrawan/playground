#include <iostream>
#include <cstdint>

enum class EStatus
{
  verbose,
  debug
};

int main()
{
  EStatus status = EStatus::verbose;
  std::cout << "Status(int): " << static_cast<int32_t>(status) << std::endl; 
  return 0;
}
