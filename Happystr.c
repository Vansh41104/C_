#include <stdio.h>

int main(void) {
    int t=0;
    scanf("%d",&t) ;   
    
	while(t--){
	  
	    char s[1000];
	    int i,temp=0;  
	    
	    scanf("%s",s);
	    
	    for(i=0;s[i]!='\0';i++)
	    {
	        
	    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
	        temp++;
	    
	    }
	    else{
	        temp=0;
	    }
	    
	    
	    if(temp>=3){
	        printf("Happy\n");
	        break;
	    }
	    
	    }
	    
	    if (temp<3){
	        printf("Sad\n");
	    }
	}
	    
	
	return 0;
}

