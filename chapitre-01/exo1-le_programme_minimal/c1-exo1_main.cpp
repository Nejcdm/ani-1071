#include<iostream>
int main()
{
char nom[30];
  char ville[30];
std::cout<<"entrer votre nom" ;
std::cin.getline(nom,30);
  std::cout<<"entrer votre ville" ;
std::cin.getline(ville,30);
std::cout<<nom<<std::endl;
std::cout<<ville<<std::endl;
return 0 ;
}
