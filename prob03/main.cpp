// Sales prediction

#include <iostream>

int main()
{
  double sales, prediction, increase, new_number;

  increase = 0.18;

  std::cout << "What is last year's total sales? $";
  std::cin >> sales;

  new_number = sales * increase;
  prediction = new_number + sales;

  std::cout << "Last year's sales were $" << sales <<std::endl;
  std::cout << "This year's sales prediction: $" << prediction << std::endl;

  return 0;
}
