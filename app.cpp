#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void response_mini_bot(std::string user_responses) {
  const std::string responses[] = {
      "Hola, ¿Cómo estás?",
      "¿Cómo te llamas?",
      "Que bien",
      "Entiendo que estes atravesando una situación no tan positiva"
      };

  std::cout << "[•] ${user_responses}" << std::endl;
  std::cout << "\n";
}

int main() {
  std::string response_of_the_user;
  
  std::cout << "               ---- Mini Bot ----" << std::endl;

  std::cout << "[*] Dí algo: ";
  std::cin >> response_of_the_user;
  std::cout << "\n";
  
  response_mini_bot(response_of_the_user);
  
  return 0;
}
