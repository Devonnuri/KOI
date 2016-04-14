#include <stdio.h>

int main(){
	
	int w,h,p,q,t; //입력받을 변수
	int angle=1,,x=0,y=0,i; 
	
	
	FILE* fin = fopen("input.txt", "r");
	fscanf("%d%d%d%d%d", &w, &h, &p, &q, &t);
	fclose(fin);
	
	for(i=1; i<=t; i++){
		if(x==0||x==w||y==0||y==h){ //끝에 닿으면 
			if(angle==1){
				angle=2;
			}else if(angle==2){
				angle=1;
			}
		}
		
		if(angle==1){
			x++; y++;
		}else if(angle==2){
			x--; y--;
		}
	}
	
	FILE* fout = fopen("output.txt", "w");
	fprintf("%d %d", x, y);
	fclose(fout);
	return 0;
}
