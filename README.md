a implemention of 'you've beat x% users' feature

思路：
1，将所有的用户集合排序；
2，从排序好的用户集合按区间筛选出N个数作为模型数组，N通常是100。
3，将需要计算的数值跟模型数组比较，即得出其所在整体用户集合的大概区间。
