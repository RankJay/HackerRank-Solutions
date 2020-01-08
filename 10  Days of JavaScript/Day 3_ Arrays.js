

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    let l=1;
    let sl=0;
    for(let i=0;i<nums.length;i++)
    {
        if(nums[i]>l)
        {
            sl=l;
            l=nums[i];
        }
        else if(nums[i]>sl && nums[i]<l)
        {
            sl=nums[i];
        }
    }
    return sl;
}

