//medium

int hIndex(int* citations, int citationsSize) {
    for(int i=0;i<citationsSize-1;i++){
        for(int j=0;j<citationsSize-i-1;j++){
            if(citations[j]>citations[j+1]){
                int temp= citations[j];
                citations[j]=citations[j+1];
                citations[j+1] = temp;         
               }  //bubble sort it first
        }
    }

 for(int i=0;i<citationsSize;i++){
   int  h=citationsSize-i; //checks if the paper has enough ciatations
    if(citations[i]>=h)
        return h; //if there are citations equal or more than H then h index is returned
    }
        return 0;
    
 
    }

