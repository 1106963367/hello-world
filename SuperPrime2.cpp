//��ҵ���������������¿�ܵĴ���ϸ�ڣ������ܱ������еõ���ȷ��� 
#include <iostream>
class Prime {
  public:
  	Prime():number(0) {
	}
  	Prime(int n):number(n) {
	}
	~Prime() {
	}
  	bool isPrime() { 
  	  //2��number-1������ 
  	  return false;
	}
  private:
  	const int number;
}; 
class SuperPrime {
  public:
  	SuperPrime():number(0) {  //Ϊʲô�����У� 
  	  size = 0;
  	}
  	SuperPrime(int n):number(n) {
  	  size = 0;
  	  split();  //�����ǹ������ 
	}
  	~SuperPrime() {
  	  for (int i = 0; i < size; ++i)  //���ٶ��� 
		delete N[i]; 
	}
  	bool isSuperPrime() {
  	  Prime p(number);
	  if (p.isPrime())
	    return true; 
  	  return false;
	}
  private:
  	const int number;
  	Prime *N[100];
	int size;
	void split() {   //�����������ģʽ 
	  // number split into N
	  int temp = number;
	  while(temp > 0) {
	  	int n = temp % 10;
	  	temp /= 10;
	  	N[size] = new Prime(n);   //������� 
	  	size += 1;
	  } 
	}
	int sum() {
	  return 0;
	}
	int multi() {
	  return 0;
	}
	int squareSum() {
	  return 0;
	}
};
class Set {
  public:
  	Set(int from, int to) {
  	  size = 0;
	}
  	~Set() {
	}
  	int count() {
  	  int count = 0;
  	  for (int i = 0; i < size; i++)
  	    if(set[i].isSuperPrime())
  	      count += 1;
	  return count; 
	}
  	int sum() {
  	  int sum = 0;
  	  /*
  	  for (int i = 0; i < size; i++)
  	    if(set[i].isSuperPrime())
  	      sum += set[i];
  	      */ 
	  return sum; 
	}
  private:
  	SuperPrime set[1000];
  	int size;
};
int main() {
  SuperPrime sp(113);
  if (sp.isSuperPrime())
    std::cout << "113 is SuperPrime" << std::endl;
  else
    std::cout << "113 is NOT SuperPrime" << std::endl;
  return 0;
}
