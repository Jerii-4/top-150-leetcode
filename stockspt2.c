int maxProfit(int* prices, int pricesSize) {
    int buy=prices[0];
    int profit =0;
    for(int i=0;i<pricesSize;i++){ 
        if(buy<prices[i]){ // checks if the buy is smaller then 
            profit+=prices[i]-buy; // add the profits
        }

    buy=prices[i]; // then buy it again the next day
    }
    return profit;
}