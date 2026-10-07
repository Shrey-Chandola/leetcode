class Solution {
public:
    int distMoney(int money, int children) {

        if (money < children)
            return -1;

        money = money - children;

        int maxCount = 0;

        while (money >= 7 && children > 0) {

            money = money - 7;
            children = children - 1;
            maxCount++;
        }

        // If all children got exactly $8 but some money is left,
        // one of them has to receive extra money.
        if (children == 0 && money > 0)
            maxCount--;

        // If exactly one child is left and they would receive
        // $4, we must take one $8 child back.
        if (children == 1 && money == 3)
            maxCount--;

        return maxCount;
    }
};