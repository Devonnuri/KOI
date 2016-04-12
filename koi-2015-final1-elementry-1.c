#include <stdio.h>

int main(){
	/****변수 설명*****
	target:10부제를 할 날짜의 끝자리
	car[5]:자동차 번호의 끝자리
	i:for문을 돌릴 변수
	c:단속된 차량의 개수
	****************/
	
	int target, car[5], i, c=0;
	
	scanf("%d", &target); //target에 날짜의 끝자리 저장
	for(i=0; i<5; i++){
		scanf("%d", car[i]); //car배열에 자동차 번호의 끝자리 순서대로 저장
	}
	
	for(i=0; i<5; i++){
		if(target==car[i]){ //위반하는 차량이 있으면 c에 1씩 추가
			c++;
		}
	}
	printf("%d", c); //c를 출력
	
	return 0;
}
