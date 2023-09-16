#include <iostream>
#include <cstdlib>

int main() {
  srand(time(NULL));
  int answer = std::rand() % 10;
  std::cout << "MAGIC 8-BALL:\n";
  //std::cout << answer << "\n";
 switch(answer){
  case 0 :
  std::cout << "It is certain\n";
  break;
  case 1:
  std::cout << "Very doubful\n";
  break;
    case 2:
  std::cout << "Without a doubt.\n";
  break;
    case 3:
  std::cout << "Yes - definitely.\n";
  break;
    case 4:
  std::cout << "You may rely on it.\n";
  break;
    case 5:
  std::cout << "As I see it, yes.\n";
  break;
    case 6:
  std::cout << "Don't count on it.\n";
  break;
    case 7:
  std::cout << "My reply is no.\n";
  break;
  default:
  std::cout << "My sources say no.\n";
  break;
 }
  
}