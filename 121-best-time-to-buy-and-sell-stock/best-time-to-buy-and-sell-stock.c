int maxProfit(int* prices, int pricesSize) {

int left=0;
int right=0;

int currentprice=0;
int minprice=999999;
int maxProfit=0;
int currentProfit;

while( right < pricesSize){

currentprice = prices[right];
if (currentprice<minprice){

minprice=currentprice;

}

currentProfit=currentprice-minprice;

if (currentProfit>maxProfit){

 maxProfit=currentProfit;
}

right++;
}



return maxProfit;




    
}