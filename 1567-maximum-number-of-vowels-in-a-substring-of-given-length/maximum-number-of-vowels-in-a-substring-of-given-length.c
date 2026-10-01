int maxVowels(char* s, int k) {
    
int left = 0;
int right = 0;
int w=0;
int CurrentVowels=0;
int MaxVowels=0;

for (w=0; w < k ; w++){

if (s[w] == 'a' || s[w] == 'e' || s[w] == 'i' || s[w] == 'o' || s[w] == 'u') {
     CurrentVowels++; 
}




}

MaxVowels = CurrentVowels;
right=k;

while (s[right] != '\0'){


if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){

    CurrentVowels++;
}

if (s[right-k] == 'a' || s[right-k] == 'e' || s[right-k] == 'i' || s[right-k] == 'o' || s[right-k] == 'u'){

    CurrentVowels--;
}

if (CurrentVowels>MaxVowels){
   
   MaxVowels=CurrentVowels;
}
right++;
}

return MaxVowels;

}