class Solution {
    public int[] sortedSquares(int[] nums) {
        int n = nums.length;
        int np = 0;
        int pp = n-1;
        int counter = n-1;
        int[] sorted = new int[n];
        while(counter>=0)
        {
            if(nums[np]*nums[np]>nums[pp]*nums[pp])
            {
                sorted[counter--]=nums[np]*nums[np];
                np++;
            }
            else
            {
                sorted[counter--]=nums[pp]*nums[pp];
                pp--;
            }
        }
        return sorted;
    }
}