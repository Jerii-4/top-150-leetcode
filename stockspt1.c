//easy

int maxProfit(int* prices, int pricesSize) {
    int buy=prices[0]; // initilase as 0 becuase we are assuming its the lowest prize
    int profit= 0;
    int i;
    for(i=1; i<pricesSize;i++){
        if(buy>prices[i]){ // we compare to get the smallest prize
            buy=prices[i]; // update the smallest prize
        }else if(prices[i]-buy>profit){ //checks for the maximum profit
                profit=prices[i]-buy;  // update max profit
            }
        }
        return profit;
    }
