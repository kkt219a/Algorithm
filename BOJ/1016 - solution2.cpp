//백준 - 1016 - 제곱ㄴㄴ수
#include<iostream>
#include<math.h>
long long a,b,c,i=2,d,e;  //a,b는 입력값, c는 스타트지점, i는 1을 제외한 제곱수라해서 2의제곱수부터 시작위해, e는 i*i 대체용,d는 제곱ㅇㅇ수
bool f[1000002]; // 공간절약을 위해 무조건 범위는 1000000안에 들어오니까.
int main(){
	std::cin>>a>>b;
	for(;i<=sqrt(b);i++){ //b까지 안보고 b의 절반까지만 봐도된다.
		e=i*i;
		if(a%e!=0){ // 시작지점이 안나눠 떨어지면
			if(a<e) // 제곱수가 시작지점보다 크면
				c=e; // 제곱수가 스타트지점.
			else //제곱수가 시작지점보다 작으면
				c=e*(a/e+1); // 나머지계산을 위한 공식
		}
		else // 시작지점이 나눠지면
			c=a; // a부터 시작하면됨.
		for(;c<=b;c+=e) // 제곱만큼 계속 배수 삭제
			if(!f[c-a]){ // 에라토스테네스의체. 입력 안받은 배수값은
				f[c-a]=1; //중복제거위해 on해주고
				d++; // 제곱 ㅇㅇ수를 증가.
			}
			
		
	}

	std::cout<<b-a-d+1;// 원래 개수 b-a+1에서 제곱 ㅇㅇ수 뺀값 출력.
}