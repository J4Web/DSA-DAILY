class StockSpanner {
public:

    // declare a stack of pair {price, count}

    // count will keep track of no. of consecutive elements less than or equal to price

    stack<pair<int, int>> st;

    StockSpanner() {
        
    }
    
    int next(int price) {
        
        int count = 0;

        // find no. of elements less than or equal to curr price

        while(st.empty() == false && st.top().first <= price)
        {
            // update count

            count += st.top().second;

            // pop the smaller element

            st.pop();
        }

        // increment the count for curr price

        count++;

        // push the {price, count} into stack

        st.push({price, count});

        return count;
    }
};