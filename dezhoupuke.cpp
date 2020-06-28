#include<stdio.h>
struct Pai{
	int zhi;
	char huas; 	          
};
int main(){		
	Pai w[5],b[5];
	int i,j,k,m,v;
	int n=0,c=0,n1=0,c1=0;
	int q,p,r,s=0,r1,s1=0;
	int h[3],g[3],h1,g1;

	scanf("%d%c",&w[0].zhi,&w[0].huas);
	scanf("%d%c",&w[1].zhi,&w[1].huas);
	scanf("%d%c",&w[2].zhi,&w[2].huas);
	scanf("%d%c",&w[3].zhi,&w[3].huas);
	scanf("%d%c",&w[4].zhi,&w[4].huas);
	
	scanf("%d%c",&b[0].zhi,&b[0].huas);
	scanf("%d%c",&b[1].zhi,&b[1].huas);
	scanf("%d%c",&b[2].zhi,&b[2].huas);
	scanf("%d%c",&b[3].zhi,&b[3].huas);
	scanf("%d%c",&b[4].zhi,&b[4].huas);
	
	for(j=0;j<5;j++){
		for(i=0;i<5-j;i++){
			if(w[i].zhi<w[i+1].zhi){
				k=w[i].zhi;
				w[i].zhi=w[i+1].zhi;
				w[i+1].zhi=k;
			}
		}
	}
	for(j=0;j<5;j++){
		for(i=0;i<5-j;i++){
			if(b[i].zhi<b[i+1].zhi){
				k=b[i].zhi;
				b[i].zhi=b[i+1].zhi;
				b[i+1].zhi=k;
			}
		}
	}
	for(i=0;i<5;i++){
		if(w[i].zhi==w[i].zhi+1){
			n++;
		}
		if(w[i].huas==w[i+1].huas){
			n1++;
		}
	}
	for(i=0;i<5;i++){
		if(b[i].zhi==b[i].zhi+1){
			c++;
		}
		if(b[i].huas==b[i+1].huas){
			c1++;
		}
	}
//////////////////
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			if(w[j].zhi==w[i].zhi){
				s++;
			}
			if(b[j].zhi==b[i].zhi){
				s1++;
			}
		}
		if(s==1)r=w[j].zhi;
		if(s1==1)r1=b[j].zhi;
	}
	j=0;
	for(i=0;i<5;i++){
		if(w[i].zhi==w[i+1].zhi){
			h1=i;
			i=i+1;
		}
		else{
			h[j]=w[i].zhi;
			j++;
		}
	}
	j=0;
	for(i=0;i<5;i++){
		if(b[i].zhi==b[i+1].zhi){
			g1=i;
			i=i+1;
		}
		else{
			g[j]=b[i].zhi;
			j++;
		}
	}	
//////////////////////////////////	
	for(i=0;i<5;i++){
		if(w[i+1].zhi==w[i].zhi)m++;
		if(b[i+1].zhi==b[i].zhi)v++;
	}
/////////////////////////////////////	
	if((m==3&&w[0].zhi==w[1].zhi==w[2].zhi==w[3].zhi)&&w[3].zhi!=w[4].zhi)q=1;//4+1四条
	else if(m==3&&w[1].zhi==w[2].zhi==w[3].zhi==w[4].zhi&&w[0].zhi!=w[1].zhi)q=2;//1+4四条 
	else if(m==2&&w[0].zhi==w[1].zhi==w[2].zhi)q=3; //123三条
	else if(m==2&&w[1].zhi==w[2].zhi==w[3].zhi)q=4; //234三条
	else if(m==2&&w[2].zhi==w[3].zhi==w[4].zhi)q=5; //345三条
	else if(m==2&&w[0].zhi==w[1].zhi&&w[2].zhi==w[3].zhi) q=6; //12+34二对
	else if(m==2&&w[0].zhi==w[1].zhi&&w[3].zhi==w[4].zhi) q=7; //12+45二对
	else if(m==2&&w[1].zhi==w[2].zhi&&w[3].zhi==w[4].zhi) q=8; //23+45二对
	else if(m==1&&w[0].zhi==w[1].zhi)q=9;	//1+2二条 
	else if(m==1&&w[1].zhi==w[2].zhi)q=10;	//2+3二条 
	else if(m==1&&w[2].zhi==w[3].zhi)q=11;	//3+4二条 
	else if(m==1&&w[3].zhi==w[4].zhi)q=12;	//4+5二条 
	else if(m==0)q=13;   //散牌 
//////////////////////////// /////////////////
	if(v==3&&b[0].zhi==b[1].zhi==b[2].zhi==b[3].zhi&&b[3].zhi!=b[4].zhi)p=1; //4+1四条
	else if(v==3&&b[1].zhi==b[2].zhi==b[3].zhi==b[4].zhi&&b[0].zhi!=b[1].zhi)p=2; //1+4四条 	
	else if(v==2&&b[0].zhi==b[1].zhi==b[2].zhi)p=3; //123三条
	else if(v==2&&b[1].zhi==b[2].zhi==b[3].zhi)p=4; //234三条
	else if(v==2&&b[2].zhi==b[3].zhi==b[4].zhi)p=5; //345三条	
	else if(v==2&&b[0].zhi==b[1].zhi&&b[2].zhi==b[3].zhi) p=6; //12+34二对
	else if(v==2&&b[0].zhi==b[1].zhi&&b[3].zhi==b[4].zhi) p=7; //12+45二对
	else if(v==2&&b[1].zhi==b[2].zhi&&b[3].zhi==b[4].zhi) p=8; //23+45二对
	else if(v==1&&b[0].zhi==b[1].zhi)p=9;	//1+2二条 
	else if(v==1&&b[1].zhi==b[2].zhi)p=10;	//2+3二条 
	else if(v==1&&b[2].zhi==b[3].zhi)p=11;	//3+4二条 
	else if(v==1&&b[3].zhi==b[4].zhi)p=12;	//4+5二条 
	else if(v==0)p=13;   //散牌 
///////////////////////////////////////////////	
	//if(n==4) printf("w是顺子!");
	//if(c==4) printf("b是顺子!");
	//if(n1==4) printf("n1是同花");
	//if(c1==4) printf("c1是同花");
	if(n1==4&&c1==4){
		if(n==4&&c==4){
			if(w[0].zhi>b[0].zhi)printf("white win!");
			else if(w[0].zhi<b[0].zhi)printf("black win!");
			else if(w[0].zhi==b[0].zhi)printf("Tie!");
		}
		else if(n==4&&c!=4){
			printf("white win!");
		}
		else if(n!=4&&c==4){
			printf("black win!");
		}
		else if(n!=4&&c!=4){
			for(i=0;i<5;i++){
				if(w[i].zhi>b[i].zhi){
					printf("white win!");
					break;
				}
				else if(w[i].zhi<b[i].zhi){
					printf("black win!");
					break;
				}
			}
			if(i==5)printf("Tie");
		}
	}
//////////////////////////////////
	else if(n1==4&&c1!=4){
		printf("white win!");
	}
	else if(n1!=4&&c1==4){
		printf("black win!");
	}
//////////////////////////////////		
	else if(n1!=4&&c1!=4){
		if(n==4&&c!=4)printf("white win!");
		else if(n!=4&&c==4)printf("black win!");
		else if(n==4&&c==4){
			if(w[0].zhi>b[0].zhi)printf("white win!");
			else if(w[0].zhi<b[0].zhi)printf("black win!");
			else if(w[0].zhi==b[0].zhi)printf("Tie!");
		}
		else if(n!=4&&c!=4){
			if((q==3||q==4|q==5)&&p!=3&&p!=4&&p!=5)printf("white win!");
			else if((p==3||p==4|p==5)&&q!=3&&q!=4&&q!=5)printf("black win!");
			else if((q==3||q==4|q==5)&&(p==3||p==4||p==5)){
			if(w[2].zhi==b[2].zhi)printf("TIe");
			else if(w[2].zhi>b[2].zhi)printf("white win!");
			else if(w[2].zhi<b[2].zhi)printf("black win!");
			}
//////////////////////////////
			else if((q==1||q==2||q==6||q==7||q==8)&&(p==9||p==10||p==11||p==12||p==13)){
				printf("white win!");
			}
			else if((p==1||p==2||p==6||p==7||p==8)&&(q==9||q==10||q==11||q==12||q==13))
			printf("black win!");
			else if((p==1||p==2)&&(q==1||q==2)){
				if(w[2].zhi==b[2].zhi)printf("TIe");
				else if(w[2].zhi>b[2].zhi)printf("white win!");
				else if(w[2].zhi<b[2].zhi)printf("black win!");
			}
			else if((q==1||q==2)&&(p==6||p==7||p==8)){
				if(w[1].zhi>b[1].zhi&&w[3].zhi>b[3].zhi)printf("white win!");
				else printf("black win!");
			}
			else if((p==1||p==2)&&(q==6||q==7||q==8)){
				if(b[1].zhi>w[1].zhi&&b[3].zhi>w[3].zhi)printf("black win!");
				else printf("white win!");
				}
			else if((q==6||q==7||q==8)&&(p==6||p==7||p==8)){
				if(w[2].zhi>b[2].zhi)printf("white win!");
				else if(w[2].zhi<b[2].zhi)printf("black win!");
				else if(w[2].zhi==b[2].zhi){
					if(w[4].zhi>b[4].zhi)printf("white win!");
					else if(w[4].zhi<b[4].zhi)printf("black win!");
					else if(w[4].zhi==b[4].zhi){
						if(r>r1)printf("white win!");
						else if(r<r1)printf("black win!");
						else if(r==r1)printf("Tie");
					}
				}
			}
			else if(q==13&&(p==9||p==10||p==11||p==12))printf("black win!");
			else if(p==13&&(q==9||q==10||q==11||q==12))printf("white win!");
			else if((q==9||q==10||q==11||q==12)&&(p==9||p==10||p==11||p==12)){
				if(w[h1].zhi>b[g1].zhi)printf("white win!");
				else if(w[h1].zhi<b[g1].zhi)printf("black win!");
				else if(w[h1].zhi==b[g1].zhi){
					for(j=0;j<3;j++){
						if(h[j]>g[j]){
						printf("white win!");
						break;
						}
						else if(h[j]<g[j]){
							printf("black win!");
							break;
						}
					}
					if(j==3)printf("Tie");
				}
			}	
		}
	}
	return 0;
}
