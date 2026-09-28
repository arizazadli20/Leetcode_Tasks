bool isSubsequence(char* s, char* t) {
    
     int left=0;
     int right=0;
     
     while(s[left] != '\0' && t[right] != '\0')
{
   
    if(s[left] == t[right]){
     
     
     left++;


    }
     
 right++;

}

if(s[left]== '\0'){
        return true;
    }
else { return false;}




}