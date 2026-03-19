# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666LW3A2Y6%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084134Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQC07cY8ErWhP9QQU0olYmBYgdG1Y3NeVA07jiLOc%2FVU4gIgHt60GLKke5VcTjBbL43UBlmygmRJOnnt43oENk%2FllyUq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDLHeZnigHvkldmdjQyrcA0tfslNPU2kFVYuJwx%2Bn5DlblPHulPN51HwgaCoN5hAYdDr6855a8BLr8CnYTJxsAMYnqIt0SfMOsYJDpIo4S1%2BVYo%2BgYwfgdtAm3vZyoiy3R9DuYTDtjYlfprn%2FFQCn9rXbwQSO%2BGOdrVCqY6Zkc%2FmMDsIecrhM8EbOJWtwsPmhjKYcfSEksA3ohfexgSzM9BOB9L4SxFK9hTOEW1E2zF2Tgib0zOqzu0OlOzVavghVHasfzdteswgMlCqpQ0hqWY1dsxXgIpA%2BCMOXQXYqG47rMOStw1zFCenjWPJWaSjLq%2B8DJdA6aRi88PcG8H%2FOOtpIVYsTht9ZRfPCRSaw95f7f4SxjXnKBxPAzjDau0Oa5Svo5VN6vKz%2BswuMkhwc3eO0HSF%2FI37j0b%2Fbnuc5oUbrrsnPH6pRCI4NmRaarZeXHz7fliyq%2F988nMv%2FKCsVOt2hfYo3fOnJ0q2caa%2FTYI9Ti%2F7kM37z1HRq1lvvDytrQVsArstG9d8F%2BYi%2Bvx8d1fsYZefz5pS6IZnrwx3KuTZElYuXFkMAN7HPkCz1lLbyMAuhNrc%2FaUPYclTGw8RlRiXhi%2F1YPTIM0223vHQ1aXUC5nk4HDE%2FuUKkMkbbDzIdPne%2BdGuxYwYnI2YHMOzZ7s0GOqUB7lVZa9eZXZGxiW3sbbRwT3W77cHIIwyPRMwPY%2F47WSX1IPPJW4MZ3yl9dgmSHfPodlC2WEbVRvuVM9HS%2BZ8p9cSfwwlGywYNmJUL3SUcmfAoaQgwj6AjR6wT20tKGaf9bgwta%2BoK7g0mn5yZXqZuDsR2AuGnfRxWBLoTR5nUhxdpEPp%2BcP5AEYm%2BfikvTzT2igsmJPiSibbV%2BExCNNbIE0v1tFhs&X-Amz-Signature=01c6dc4086ce692184007230c92e72304813c4bb8f35db94d2be104aa2ce4994&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666LW3A2Y6%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084134Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQC07cY8ErWhP9QQU0olYmBYgdG1Y3NeVA07jiLOc%2FVU4gIgHt60GLKke5VcTjBbL43UBlmygmRJOnnt43oENk%2FllyUq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDLHeZnigHvkldmdjQyrcA0tfslNPU2kFVYuJwx%2Bn5DlblPHulPN51HwgaCoN5hAYdDr6855a8BLr8CnYTJxsAMYnqIt0SfMOsYJDpIo4S1%2BVYo%2BgYwfgdtAm3vZyoiy3R9DuYTDtjYlfprn%2FFQCn9rXbwQSO%2BGOdrVCqY6Zkc%2FmMDsIecrhM8EbOJWtwsPmhjKYcfSEksA3ohfexgSzM9BOB9L4SxFK9hTOEW1E2zF2Tgib0zOqzu0OlOzVavghVHasfzdteswgMlCqpQ0hqWY1dsxXgIpA%2BCMOXQXYqG47rMOStw1zFCenjWPJWaSjLq%2B8DJdA6aRi88PcG8H%2FOOtpIVYsTht9ZRfPCRSaw95f7f4SxjXnKBxPAzjDau0Oa5Svo5VN6vKz%2BswuMkhwc3eO0HSF%2FI37j0b%2Fbnuc5oUbrrsnPH6pRCI4NmRaarZeXHz7fliyq%2F988nMv%2FKCsVOt2hfYo3fOnJ0q2caa%2FTYI9Ti%2F7kM37z1HRq1lvvDytrQVsArstG9d8F%2BYi%2Bvx8d1fsYZefz5pS6IZnrwx3KuTZElYuXFkMAN7HPkCz1lLbyMAuhNrc%2FaUPYclTGw8RlRiXhi%2F1YPTIM0223vHQ1aXUC5nk4HDE%2FuUKkMkbbDzIdPne%2BdGuxYwYnI2YHMOzZ7s0GOqUB7lVZa9eZXZGxiW3sbbRwT3W77cHIIwyPRMwPY%2F47WSX1IPPJW4MZ3yl9dgmSHfPodlC2WEbVRvuVM9HS%2BZ8p9cSfwwlGywYNmJUL3SUcmfAoaQgwj6AjR6wT20tKGaf9bgwta%2BoK7g0mn5yZXqZuDsR2AuGnfRxWBLoTR5nUhxdpEPp%2BcP5AEYm%2BfikvTzT2igsmJPiSibbV%2BExCNNbIE0v1tFhs&X-Amz-Signature=9acb9f16e3a3f324dedceec724ce3713ea2def5e27199ee47b2fffb074d50838&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666LW3A2Y6%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084134Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQC07cY8ErWhP9QQU0olYmBYgdG1Y3NeVA07jiLOc%2FVU4gIgHt60GLKke5VcTjBbL43UBlmygmRJOnnt43oENk%2FllyUq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDLHeZnigHvkldmdjQyrcA0tfslNPU2kFVYuJwx%2Bn5DlblPHulPN51HwgaCoN5hAYdDr6855a8BLr8CnYTJxsAMYnqIt0SfMOsYJDpIo4S1%2BVYo%2BgYwfgdtAm3vZyoiy3R9DuYTDtjYlfprn%2FFQCn9rXbwQSO%2BGOdrVCqY6Zkc%2FmMDsIecrhM8EbOJWtwsPmhjKYcfSEksA3ohfexgSzM9BOB9L4SxFK9hTOEW1E2zF2Tgib0zOqzu0OlOzVavghVHasfzdteswgMlCqpQ0hqWY1dsxXgIpA%2BCMOXQXYqG47rMOStw1zFCenjWPJWaSjLq%2B8DJdA6aRi88PcG8H%2FOOtpIVYsTht9ZRfPCRSaw95f7f4SxjXnKBxPAzjDau0Oa5Svo5VN6vKz%2BswuMkhwc3eO0HSF%2FI37j0b%2Fbnuc5oUbrrsnPH6pRCI4NmRaarZeXHz7fliyq%2F988nMv%2FKCsVOt2hfYo3fOnJ0q2caa%2FTYI9Ti%2F7kM37z1HRq1lvvDytrQVsArstG9d8F%2BYi%2Bvx8d1fsYZefz5pS6IZnrwx3KuTZElYuXFkMAN7HPkCz1lLbyMAuhNrc%2FaUPYclTGw8RlRiXhi%2F1YPTIM0223vHQ1aXUC5nk4HDE%2FuUKkMkbbDzIdPne%2BdGuxYwYnI2YHMOzZ7s0GOqUB7lVZa9eZXZGxiW3sbbRwT3W77cHIIwyPRMwPY%2F47WSX1IPPJW4MZ3yl9dgmSHfPodlC2WEbVRvuVM9HS%2BZ8p9cSfwwlGywYNmJUL3SUcmfAoaQgwj6AjR6wT20tKGaf9bgwta%2BoK7g0mn5yZXqZuDsR2AuGnfRxWBLoTR5nUhxdpEPp%2BcP5AEYm%2BfikvTzT2igsmJPiSibbV%2BExCNNbIE0v1tFhs&X-Amz-Signature=077063ec92fe5179f95f7adfa16c95778b3fb0f723058e89cc27fd0f7b7e9b4c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTQ2AD2S%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQD0hLpjKEwNc8baEHi0fZo3OMz%2BzrAFIt7UBft5iy9G8wIgWgWm16cOqIpoqxWVVXxf6hoJOoRibEEKKEVRAiKHV3kq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDJGN3xVtUkUW4KKbMCrcA85IHlJY3bZvaGsc3nXgFo%2FUwooHa%2BpiBduQBgox36ll5yWcxx6ocRxd57%2FarE8V56K6pEKJgm5jPVENRWdsoE4GvwIGkCkG0%2BidMUAvY7mSq4qqVRgU%2BJJ1NU0wnI%2FEpauPLHGN2Am3nfze9l8L0NkDZ%2BaG8tzI1%2Fkf7YaB%2FP0z4wk0guHQyzz0y575bM8wjGBLZnwVLgmMPvEa7wmEr9bDV8m66AuSyp%2BVtvFte%2F%2Fy7YWoH2Nfud6glXB3HDHgSeccTRb5B1vmpDf8PLfmqXLLJy3mQ16v5vMbDyNuL50Jo3AdAi2tH%2F8Q9%2FVB7swSikRoRPc0T2DrCCyeokmKO4DdJett8ULT6a0x%2F9xUizUgF%2BjYU5s01LfA8C1%2BXCP4uq3IglydUPdfwE5wKML2hR1g2PFnsCCNYFa6C9wpLn9fbyBwJ%2BLxZUvphY6KDbwFBHrMiRl04DHQ5lYHjjg7Y5HFjKj5kLVUiHD%2BazCov4DGi0Cm8kqWDzpr4WNGX0xU5AeCXHFyYiF3vhhD1xWU%2F4EoUvCCKubgy836hv75NB7Vl4vx3zB33sjBJgYvAt9v552R2e%2FtPasKJ3gLktK3oGVI%2F%2FrWpjBsIAxnk2T2MHCzbr0%2BZfkfFzJM%2BLzBMPPY7s0GOqUBeA5PX92kETYp7iIAOFeZsrGWRHHoQDdFO1530RRKkbsWj%2Btbu4okAxonwGPGBRK3I9wQf4ufQBAoZ4JRH6UzqNO4SJ3X%2FzOPnqh3qFQZQrYRw3xm%2FQv%2Bn%2FIY04el3zaVFO68HSMGg%2B1iOj2XxFD8mFogZCIBXYvp2wQK%2FJxge0GpJcvtaxUZPULx1wTdUxAjKUBJyaJaYcuh1CfEIX4IgfWRidhH&X-Amz-Signature=15f7c329d9a73258e02e097e33a120cf61d9028c5626ec0efa9c95bbb159bfe8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTQ2AD2S%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQD0hLpjKEwNc8baEHi0fZo3OMz%2BzrAFIt7UBft5iy9G8wIgWgWm16cOqIpoqxWVVXxf6hoJOoRibEEKKEVRAiKHV3kq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDJGN3xVtUkUW4KKbMCrcA85IHlJY3bZvaGsc3nXgFo%2FUwooHa%2BpiBduQBgox36ll5yWcxx6ocRxd57%2FarE8V56K6pEKJgm5jPVENRWdsoE4GvwIGkCkG0%2BidMUAvY7mSq4qqVRgU%2BJJ1NU0wnI%2FEpauPLHGN2Am3nfze9l8L0NkDZ%2BaG8tzI1%2Fkf7YaB%2FP0z4wk0guHQyzz0y575bM8wjGBLZnwVLgmMPvEa7wmEr9bDV8m66AuSyp%2BVtvFte%2F%2Fy7YWoH2Nfud6glXB3HDHgSeccTRb5B1vmpDf8PLfmqXLLJy3mQ16v5vMbDyNuL50Jo3AdAi2tH%2F8Q9%2FVB7swSikRoRPc0T2DrCCyeokmKO4DdJett8ULT6a0x%2F9xUizUgF%2BjYU5s01LfA8C1%2BXCP4uq3IglydUPdfwE5wKML2hR1g2PFnsCCNYFa6C9wpLn9fbyBwJ%2BLxZUvphY6KDbwFBHrMiRl04DHQ5lYHjjg7Y5HFjKj5kLVUiHD%2BazCov4DGi0Cm8kqWDzpr4WNGX0xU5AeCXHFyYiF3vhhD1xWU%2F4EoUvCCKubgy836hv75NB7Vl4vx3zB33sjBJgYvAt9v552R2e%2FtPasKJ3gLktK3oGVI%2F%2FrWpjBsIAxnk2T2MHCzbr0%2BZfkfFzJM%2BLzBMPPY7s0GOqUBeA5PX92kETYp7iIAOFeZsrGWRHHoQDdFO1530RRKkbsWj%2Btbu4okAxonwGPGBRK3I9wQf4ufQBAoZ4JRH6UzqNO4SJ3X%2FzOPnqh3qFQZQrYRw3xm%2FQv%2Bn%2FIY04el3zaVFO68HSMGg%2B1iOj2XxFD8mFogZCIBXYvp2wQK%2FJxge0GpJcvtaxUZPULx1wTdUxAjKUBJyaJaYcuh1CfEIX4IgfWRidhH&X-Amz-Signature=3e5054977bfea906e5a3f88b10e2977fc0ffe2a2420f9e054821e7a9c6d3dcc8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTQ2AD2S%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQD0hLpjKEwNc8baEHi0fZo3OMz%2BzrAFIt7UBft5iy9G8wIgWgWm16cOqIpoqxWVVXxf6hoJOoRibEEKKEVRAiKHV3kq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDJGN3xVtUkUW4KKbMCrcA85IHlJY3bZvaGsc3nXgFo%2FUwooHa%2BpiBduQBgox36ll5yWcxx6ocRxd57%2FarE8V56K6pEKJgm5jPVENRWdsoE4GvwIGkCkG0%2BidMUAvY7mSq4qqVRgU%2BJJ1NU0wnI%2FEpauPLHGN2Am3nfze9l8L0NkDZ%2BaG8tzI1%2Fkf7YaB%2FP0z4wk0guHQyzz0y575bM8wjGBLZnwVLgmMPvEa7wmEr9bDV8m66AuSyp%2BVtvFte%2F%2Fy7YWoH2Nfud6glXB3HDHgSeccTRb5B1vmpDf8PLfmqXLLJy3mQ16v5vMbDyNuL50Jo3AdAi2tH%2F8Q9%2FVB7swSikRoRPc0T2DrCCyeokmKO4DdJett8ULT6a0x%2F9xUizUgF%2BjYU5s01LfA8C1%2BXCP4uq3IglydUPdfwE5wKML2hR1g2PFnsCCNYFa6C9wpLn9fbyBwJ%2BLxZUvphY6KDbwFBHrMiRl04DHQ5lYHjjg7Y5HFjKj5kLVUiHD%2BazCov4DGi0Cm8kqWDzpr4WNGX0xU5AeCXHFyYiF3vhhD1xWU%2F4EoUvCCKubgy836hv75NB7Vl4vx3zB33sjBJgYvAt9v552R2e%2FtPasKJ3gLktK3oGVI%2F%2FrWpjBsIAxnk2T2MHCzbr0%2BZfkfFzJM%2BLzBMPPY7s0GOqUBeA5PX92kETYp7iIAOFeZsrGWRHHoQDdFO1530RRKkbsWj%2Btbu4okAxonwGPGBRK3I9wQf4ufQBAoZ4JRH6UzqNO4SJ3X%2FzOPnqh3qFQZQrYRw3xm%2FQv%2Bn%2FIY04el3zaVFO68HSMGg%2B1iOj2XxFD8mFogZCIBXYvp2wQK%2FJxge0GpJcvtaxUZPULx1wTdUxAjKUBJyaJaYcuh1CfEIX4IgfWRidhH&X-Amz-Signature=06fecb57d4126867ae029c386b1581982634405b18072aab89bf669a14de39ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZTQ2AD2S%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084135Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQD0hLpjKEwNc8baEHi0fZo3OMz%2BzrAFIt7UBft5iy9G8wIgWgWm16cOqIpoqxWVVXxf6hoJOoRibEEKKEVRAiKHV3kq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDJGN3xVtUkUW4KKbMCrcA85IHlJY3bZvaGsc3nXgFo%2FUwooHa%2BpiBduQBgox36ll5yWcxx6ocRxd57%2FarE8V56K6pEKJgm5jPVENRWdsoE4GvwIGkCkG0%2BidMUAvY7mSq4qqVRgU%2BJJ1NU0wnI%2FEpauPLHGN2Am3nfze9l8L0NkDZ%2BaG8tzI1%2Fkf7YaB%2FP0z4wk0guHQyzz0y575bM8wjGBLZnwVLgmMPvEa7wmEr9bDV8m66AuSyp%2BVtvFte%2F%2Fy7YWoH2Nfud6glXB3HDHgSeccTRb5B1vmpDf8PLfmqXLLJy3mQ16v5vMbDyNuL50Jo3AdAi2tH%2F8Q9%2FVB7swSikRoRPc0T2DrCCyeokmKO4DdJett8ULT6a0x%2F9xUizUgF%2BjYU5s01LfA8C1%2BXCP4uq3IglydUPdfwE5wKML2hR1g2PFnsCCNYFa6C9wpLn9fbyBwJ%2BLxZUvphY6KDbwFBHrMiRl04DHQ5lYHjjg7Y5HFjKj5kLVUiHD%2BazCov4DGi0Cm8kqWDzpr4WNGX0xU5AeCXHFyYiF3vhhD1xWU%2F4EoUvCCKubgy836hv75NB7Vl4vx3zB33sjBJgYvAt9v552R2e%2FtPasKJ3gLktK3oGVI%2F%2FrWpjBsIAxnk2T2MHCzbr0%2BZfkfFzJM%2BLzBMPPY7s0GOqUBeA5PX92kETYp7iIAOFeZsrGWRHHoQDdFO1530RRKkbsWj%2Btbu4okAxonwGPGBRK3I9wQf4ufQBAoZ4JRH6UzqNO4SJ3X%2FzOPnqh3qFQZQrYRw3xm%2FQv%2Bn%2FIY04el3zaVFO68HSMGg%2B1iOj2XxFD8mFogZCIBXYvp2wQK%2FJxge0GpJcvtaxUZPULx1wTdUxAjKUBJyaJaYcuh1CfEIX4IgfWRidhH&X-Amz-Signature=1823dd1eb234c7b9265701e032a9fe4d4e3017859210cf8c87c892754b57e258&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662ZS4DACW%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084137Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJIMEYCIQDaHQFh2e8ug4C7QLzp0lL%2Fhmiad8EyczbF%2FE16yveCRAIhAMPfX812eXSK%2BTqcJC4u%2FVAkGsL%2BMO7pI%2FLrlIejchn5Kv8DCBkQABoMNjM3NDIzMTgzODA1Igyy80DvQ3YFgQqSfWMq3APDjgcDCCgXJPJ%2Bo2azf6o7GTGRg62QUF6QlTT3B89e7ivRwXd57pRwSFU7LcZ4v3IGhOsXdRlOWfj0T3qsZa9AF6TTaGZd0bmQWwjtuyZY9J7jfE1EgJ%2BjZR09EM4P8zqpPjWTwwt4UFtnzWZQscYi4a6FF%2B3O3Ke764OErn3L76GKcJzvquUPwZUu5qKqMCeoZNwREnFPwINCYZhA%2B8qmzvs3jx47bb8UcCJTT8nGG5H%2BBS3ofcteixNhQKGfAOG%2B9wAe%2F2MTmxFmaPHIa%2Bt07LjrDssA3dOroiaYlaAH%2BWAKiwVwuDUyKOGX0Wm2bB9DHfpoHN%2BBlZpHXt1kxsVfm%2FcwZ%2BjB6E%2Bn9Z6i2uxDvsqDqCUhhoz5E6Z67SyjVhcoJCwoQam41gPzdyM%2FHjzKj9hTvyEVpC7bfH0XRJqT48GAcyyTBCQ6sbfs6KSloMDd3eC0OEvgUTe9o7xibcXvNQDK0STovFKC0Nl1MLWNUgYwHGvwFcI%2BjYnYCfhZ9NRHCDN75N8Hr74EIQ7iudb1AUN%2BTEPEstC6juCNHMwfDAJF3AtqBO9a48UaYNXZPZsDp9QV3pW%2FK6KfOlsWFXm4Ywh0fsc1A7Ra8UnkO%2B6IyweMPr1y44PmcC9UBDD32O7NBjqkAbDDGuxwFBKfm7wIn4pwxWgrn%2B%2FzU5HFiXt2zxgTKEPtNcg0sUWShH90DQaUyo2syeqcoY5S9cc6jkUJxUwmccVdlCdNx1DaaMu%2FwgzJIGIaAToFLKmJf5JnTaJavv%2BHk5ihrykUAYvVeg3AGccMAXdl7bGP%2BHRuSPwsY9zjNcyPn1UhH3%2Fx0sreQWEp4YIDwScwkT415l6Pw8ZWHOwGpPpkY3nB&X-Amz-Signature=761420135c554d91c93c3b19b855dc69fb2ca6b513649bf3b8ac3fa3fe0d03b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRXVEWIY%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084138Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQDY247AWuCTyzmDBJ2oo1OGtlSg3ca4FHe1UFHIdT4%2BlwIgfZZtNoC1k3USBp9atC%2BI5yJE4aV8cX8C5opGCw5fXf8q%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDDDreuRsVGqXjuZpJyrcAyOtbo%2BdZOc%2Fjw4CFl2GfZmnFIhjA%2BAixuY16lTpGLQXK3oLd3PoPg6AxZW4gPTq0P0ajYI6tBwyGFrmGjXGLTryrYb2hBmocpRy5dqhN%2BXzbbXeFA07yle3tC8eS5ysIBqlwO1y02GW%2B%2Foaa368OQ5c91aiqtOEDusfrt3pp0Z110UMf%2F%2B0gnXrdVvhuXZsu%2BcSXYW6sVWzAmFmFLePm7n2v8FDbX3nl0UHCvpqnCBaZl%2FJyabduYqYyRkbbcuHoIRkrfJFEngj7%2Bo1H461t9%2FfseXLHvyxbRn4lVjKfQex3ElNbcxpe2VuuiVD4CBl5jdDDUCuhGZD9IMfjcvYe%2FgwpH0w4WoziToAvOxKFZtcgBqHDrxnf8uMzYfZFTCQ8%2FINAMqqhTZ8CtcU15JG6wAbPU1bOinUdIX4jtu0tm38%2BlbWRUOWMdro3X3XL6nh0AbUuDAjwGEUHqDQobCRxKoPPzpql6qgKmxXaIB0qceXZPohfOYppSOYwJGwvnKl4tgR829FxK7%2FvX5aPFZiqJV3nTP0BakIJH2XouqQKJW2Tj8SzBLKlrNc7MXdqSxn4%2BGQG7%2FwB433HPsNhsEK85Z324xz7hslXvvxqepWdT3iGjPvRTdy4H0au75IMPzY7s0GOqUB7WOVAa5PL6cH%2B9WzTYlVMDbP2MSe24ZrqknnAWwbZZncGt6i0cJCPOZx3s4eMZqdzSgbH%2BGq%2BYFAjGy8DT0aQeS74WXsXBggZHqlhicz7N%2BJy2H8EuBfTemAQHIQVkNas89LKv6pH3A7ycInNetMSSDyZGY1eWSPF2k8fcQ4y%2BIUcY1PgulE3ZBqfbSqhMlmv%2BtNvNzCaHuoIDH8OovR9ZUUVcAY&X-Amz-Signature=4134502ea215cb091796a20b052daa3346bc958cea4ef284f1ea7ca4335a6c53&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRXVEWIY%2F20260319%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260319T084138Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIQDY247AWuCTyzmDBJ2oo1OGtlSg3ca4FHe1UFHIdT4%2BlwIgfZZtNoC1k3USBp9atC%2BI5yJE4aV8cX8C5opGCw5fXf8q%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDDDreuRsVGqXjuZpJyrcAyOtbo%2BdZOc%2Fjw4CFl2GfZmnFIhjA%2BAixuY16lTpGLQXK3oLd3PoPg6AxZW4gPTq0P0ajYI6tBwyGFrmGjXGLTryrYb2hBmocpRy5dqhN%2BXzbbXeFA07yle3tC8eS5ysIBqlwO1y02GW%2B%2Foaa368OQ5c91aiqtOEDusfrt3pp0Z110UMf%2F%2B0gnXrdVvhuXZsu%2BcSXYW6sVWzAmFmFLePm7n2v8FDbX3nl0UHCvpqnCBaZl%2FJyabduYqYyRkbbcuHoIRkrfJFEngj7%2Bo1H461t9%2FfseXLHvyxbRn4lVjKfQex3ElNbcxpe2VuuiVD4CBl5jdDDUCuhGZD9IMfjcvYe%2FgwpH0w4WoziToAvOxKFZtcgBqHDrxnf8uMzYfZFTCQ8%2FINAMqqhTZ8CtcU15JG6wAbPU1bOinUdIX4jtu0tm38%2BlbWRUOWMdro3X3XL6nh0AbUuDAjwGEUHqDQobCRxKoPPzpql6qgKmxXaIB0qceXZPohfOYppSOYwJGwvnKl4tgR829FxK7%2FvX5aPFZiqJV3nTP0BakIJH2XouqQKJW2Tj8SzBLKlrNc7MXdqSxn4%2BGQG7%2FwB433HPsNhsEK85Z324xz7hslXvvxqepWdT3iGjPvRTdy4H0au75IMPzY7s0GOqUB7WOVAa5PL6cH%2B9WzTYlVMDbP2MSe24ZrqknnAWwbZZncGt6i0cJCPOZx3s4eMZqdzSgbH%2BGq%2BYFAjGy8DT0aQeS74WXsXBggZHqlhicz7N%2BJy2H8EuBfTemAQHIQVkNas89LKv6pH3A7ycInNetMSSDyZGY1eWSPF2k8fcQ4y%2BIUcY1PgulE3ZBqfbSqhMlmv%2BtNvNzCaHuoIDH8OovR9ZUUVcAY&X-Amz-Signature=7de421b7589082372b0279894c5d287c174e2e5a9986e62709866132a2863b6d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
