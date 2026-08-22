class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l,r=1,max(piles)
        ans=r
        while l<=r:
            mid=(l+r)//2
            sum=0
            for i in piles:
                sum+=math.ceil(i/mid)
            if sum<=h:
                r=mid-1
                ans=mid
            else:
                l=mid+1
        return ans