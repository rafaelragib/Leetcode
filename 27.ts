function removeElement(nums: number[], val: number): number {

  let j = nums.length - 1;
  let i = 0;
  let cnt = 0;

  while (i <= j) {
    if (nums[i] === val) {
      let temp = nums[j];
      nums[j] = nums[i];
      nums[i] = temp;
      j--;
    }
    else {

      i++;
      cnt++;
    }
  }
  return i;

};
