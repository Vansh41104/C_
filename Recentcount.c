#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char s[50];
	    int start=0,ltime=0;
	    for(int i=0;i<n;i++){
	        scanf("%s",s);
	        if(strcmp(s,"START38")==0){
	            start++;
	        }
	        else if(strcmp(s,"LTIME108")==0){
	            ltime++;
	        }
	    }
	    printf("%d %d\n",start,ltime);
	}
	return 0;
}

