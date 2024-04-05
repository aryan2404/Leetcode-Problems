class Solution {
public:
    int mySqrt(int x) {
      if (x <= 1) return x;
unsigned int i = 1;
unsigned int sq = i * i;
while (x >= sq) {
	i++;
	sq = i * i;
}
return (int) (i - 1);
    }
};