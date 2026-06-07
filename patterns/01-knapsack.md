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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5I27GGE%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIADbXcHQLC%2FcesMMUzltSjKmdzLeTXfpjagBItjmB7%2FuAiB%2BzQ2tnDJG6zdW%2FPMIVar6lMh%2BwtqeCNeEDShbzrVmsiqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmlr7b8Ot7H%2BZnVnLKtwDRF5DUas6tM0TG0C2Pmz%2BFMVmd7H8k4IImIRecIitkVoSRLeqMCXi5j17qKtUdGmIXfGBLVL6swJ15a%2FNX8BOqyeCA%2Be8fUxt5x3j3Nlgii1tsBcwK20qSnLqgau4%2FC9ZEjuiycOnMlojj5Oi8OEmaXVGcaNTlpl0uKk3%2Fz7Ss9yj3Xbm3%2B5f2Ip2GVY76qs%2BPP92ycao6oVdDZK5as0e2WI7Rz14Fs4Cc%2BuLRsvsh8u2qnHoIXDHQwzQieyjrpyGt%2BqKJfU%2Bmlt%2FXJBypslz6a9%2BM1cYYWbKZCGDy%2FZ0gUG6MMl2W%2FAeVXCLs8WdeQCoJZA87D25Bd9f1SBTETcVbHzQv9jDxd4aWmr8zccFO8tQR%2FgcNvThTGXBmpRilsTa1IYQT5FZSNFUjLLrJ6hUtChlTOYGFc08QwExWfrnLHFvZBvE1BrXLyhL168bcHxwTLBetNBLhFj9Ye3zppGUQPo%2BOMQK2e5Y33O%2BX2aE40JrQk%2Fz%2FInaTX47fVOA87w884bqkmyuE2nFPaBNAUnQtgmlUF2dMrYNRUY7EDT3u%2FqS0cX3Gex9BKHNwiIXsGyZ5LCZDeHmLHhScBczeBxgTVhR1ZvKQDwN15eU1aE5YQNQIcQ7Z%2Bfn0oM5O5AwwfqU0QY6pgH47G%2F9dV0vZIuoTmFQznZZDf1sw1SMlvRc6BFEXnBBvbZdciPT6AdDYuz1GfmFeeiEffpMCHyBWRY4xyea6SxQoI%2B5k3BaD5x4ryF3f%2BARFPGi7Qdv150jKZFT0pjUECIOvTpgC4Ourl2e6XhtJAUaIy%2FNClokWdL99T28KEid1TNqc%2B3oXz0L6340JNd8HsJBnXqPcyEi2oozLj1%2BVUGe7Mn%2BPtBH&X-Amz-Signature=aede7c0f731ad924177e85336bd89d2a41f79573e80871586052e54489c8f14b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5I27GGE%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIADbXcHQLC%2FcesMMUzltSjKmdzLeTXfpjagBItjmB7%2FuAiB%2BzQ2tnDJG6zdW%2FPMIVar6lMh%2BwtqeCNeEDShbzrVmsiqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmlr7b8Ot7H%2BZnVnLKtwDRF5DUas6tM0TG0C2Pmz%2BFMVmd7H8k4IImIRecIitkVoSRLeqMCXi5j17qKtUdGmIXfGBLVL6swJ15a%2FNX8BOqyeCA%2Be8fUxt5x3j3Nlgii1tsBcwK20qSnLqgau4%2FC9ZEjuiycOnMlojj5Oi8OEmaXVGcaNTlpl0uKk3%2Fz7Ss9yj3Xbm3%2B5f2Ip2GVY76qs%2BPP92ycao6oVdDZK5as0e2WI7Rz14Fs4Cc%2BuLRsvsh8u2qnHoIXDHQwzQieyjrpyGt%2BqKJfU%2Bmlt%2FXJBypslz6a9%2BM1cYYWbKZCGDy%2FZ0gUG6MMl2W%2FAeVXCLs8WdeQCoJZA87D25Bd9f1SBTETcVbHzQv9jDxd4aWmr8zccFO8tQR%2FgcNvThTGXBmpRilsTa1IYQT5FZSNFUjLLrJ6hUtChlTOYGFc08QwExWfrnLHFvZBvE1BrXLyhL168bcHxwTLBetNBLhFj9Ye3zppGUQPo%2BOMQK2e5Y33O%2BX2aE40JrQk%2Fz%2FInaTX47fVOA87w884bqkmyuE2nFPaBNAUnQtgmlUF2dMrYNRUY7EDT3u%2FqS0cX3Gex9BKHNwiIXsGyZ5LCZDeHmLHhScBczeBxgTVhR1ZvKQDwN15eU1aE5YQNQIcQ7Z%2Bfn0oM5O5AwwfqU0QY6pgH47G%2F9dV0vZIuoTmFQznZZDf1sw1SMlvRc6BFEXnBBvbZdciPT6AdDYuz1GfmFeeiEffpMCHyBWRY4xyea6SxQoI%2B5k3BaD5x4ryF3f%2BARFPGi7Qdv150jKZFT0pjUECIOvTpgC4Ourl2e6XhtJAUaIy%2FNClokWdL99T28KEid1TNqc%2B3oXz0L6340JNd8HsJBnXqPcyEi2oozLj1%2BVUGe7Mn%2BPtBH&X-Amz-Signature=4e7c7f59bc20fefebcc3039608405cc4bfbd556409eca879609e87d79a272e21&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5I27GGE%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIADbXcHQLC%2FcesMMUzltSjKmdzLeTXfpjagBItjmB7%2FuAiB%2BzQ2tnDJG6zdW%2FPMIVar6lMh%2BwtqeCNeEDShbzrVmsiqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMmlr7b8Ot7H%2BZnVnLKtwDRF5DUas6tM0TG0C2Pmz%2BFMVmd7H8k4IImIRecIitkVoSRLeqMCXi5j17qKtUdGmIXfGBLVL6swJ15a%2FNX8BOqyeCA%2Be8fUxt5x3j3Nlgii1tsBcwK20qSnLqgau4%2FC9ZEjuiycOnMlojj5Oi8OEmaXVGcaNTlpl0uKk3%2Fz7Ss9yj3Xbm3%2B5f2Ip2GVY76qs%2BPP92ycao6oVdDZK5as0e2WI7Rz14Fs4Cc%2BuLRsvsh8u2qnHoIXDHQwzQieyjrpyGt%2BqKJfU%2Bmlt%2FXJBypslz6a9%2BM1cYYWbKZCGDy%2FZ0gUG6MMl2W%2FAeVXCLs8WdeQCoJZA87D25Bd9f1SBTETcVbHzQv9jDxd4aWmr8zccFO8tQR%2FgcNvThTGXBmpRilsTa1IYQT5FZSNFUjLLrJ6hUtChlTOYGFc08QwExWfrnLHFvZBvE1BrXLyhL168bcHxwTLBetNBLhFj9Ye3zppGUQPo%2BOMQK2e5Y33O%2BX2aE40JrQk%2Fz%2FInaTX47fVOA87w884bqkmyuE2nFPaBNAUnQtgmlUF2dMrYNRUY7EDT3u%2FqS0cX3Gex9BKHNwiIXsGyZ5LCZDeHmLHhScBczeBxgTVhR1ZvKQDwN15eU1aE5YQNQIcQ7Z%2Bfn0oM5O5AwwfqU0QY6pgH47G%2F9dV0vZIuoTmFQznZZDf1sw1SMlvRc6BFEXnBBvbZdciPT6AdDYuz1GfmFeeiEffpMCHyBWRY4xyea6SxQoI%2B5k3BaD5x4ryF3f%2BARFPGi7Qdv150jKZFT0pjUECIOvTpgC4Ourl2e6XhtJAUaIy%2FNClokWdL99T28KEid1TNqc%2B3oXz0L6340JNd8HsJBnXqPcyEi2oozLj1%2BVUGe7Mn%2BPtBH&X-Amz-Signature=2a7c3eaebd84dd76b4b2a03159571a9965af861980a88b59cb62a28f4a853bf0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7NXC7R4%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGvqp%2FmSH7t94znGADzUCtnmnqJs2yGhgQgL4YshqZZGAiEAyDmGUc1HX3hA0l83rinQa44Y9%2FpYrn0WaTIprIBEFWMqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL5Za4sU64kd%2B1JSKSrcA8E88PJUm5WF%2FcYslqk38eFT%2FwdxWBapraW8KSdS8wtbB53hvllkZpBt5AVz0nNZEzxvtH7GkwJWAv7GxEywhCZNMonBv2ZPVykWiA58PY9MfX57%2BS83hwuy4t%2BmubVaCbdxm%2Bzc65WhNK3x8GoLuTkCE5OvaGQM1eMQH00M%2BO7%2FtY%2BC9rMtMHwHdhSeU%2FqcyZlfrx98AFYAGu8D4HgIGNbKzZTxffL3ZYv7UNs5amOvZnK0uwSIQgwYN71Mrhgw%2FYQy7%2FgE9dGHs4Skx4I7j8MF%2FJZbW66Am%2B9Ibt5W0Ap25XEw%2Bkzuziri%2B39Dx%2BM7Hyg58zc7ZUsUe9UaWEoEf4EPDI3cFXKvu3bPv6OweR7i6MjsRL3lc8JwMur9HfUGwDIhvHBErangXteBZbkMhCjsPqQiZ%2BR5Fjpy59IO6Q6vAnauSBe%2F2OErXbURQvhGLZibHPOYrohZUt9GBa7kwkcnetrcbDzroOL7xIs5bdwrBw6Qu98gxfXf1CMhfU7pXsVf0GRM2SRj8blUoZh8iV9N68bOEh7ym9iXzrobOCfWSjZI4EkBZIjtDvGcRL6z0RFtxCpiXsiypL8uyT9geumrPN0anWFEpmSO1V%2FCBnsbdOdhAE%2FUgv9SicfAMKX7lNEGOqUB0PJI%2BHWgNVfVnHHztRidrVBsYi1JSys8JFW%2FQd%2FKs%2FYUhU4ED3YH6gE5AQZhly9FjKA4l2%2Fy2cXkWpsC1X3CXGHiobofASIsusyHlv3NPg%2Boga9iMg7FQ2tFl9ffy%2BvTq%2FkJGnAxVfwuIph5hJ8FY35wMKY3dwutpJI6jqH7znfmfmR%2BHE6fyq%2Bv96xTepjNcO%2FWjR%2FLjW3J%2FsOOCX0zy7ZMoACe&X-Amz-Signature=c9a57e19e9cda67578a76f199770a57fc9fc7380478106f6cf04db94158a702c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7NXC7R4%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGvqp%2FmSH7t94znGADzUCtnmnqJs2yGhgQgL4YshqZZGAiEAyDmGUc1HX3hA0l83rinQa44Y9%2FpYrn0WaTIprIBEFWMqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL5Za4sU64kd%2B1JSKSrcA8E88PJUm5WF%2FcYslqk38eFT%2FwdxWBapraW8KSdS8wtbB53hvllkZpBt5AVz0nNZEzxvtH7GkwJWAv7GxEywhCZNMonBv2ZPVykWiA58PY9MfX57%2BS83hwuy4t%2BmubVaCbdxm%2Bzc65WhNK3x8GoLuTkCE5OvaGQM1eMQH00M%2BO7%2FtY%2BC9rMtMHwHdhSeU%2FqcyZlfrx98AFYAGu8D4HgIGNbKzZTxffL3ZYv7UNs5amOvZnK0uwSIQgwYN71Mrhgw%2FYQy7%2FgE9dGHs4Skx4I7j8MF%2FJZbW66Am%2B9Ibt5W0Ap25XEw%2Bkzuziri%2B39Dx%2BM7Hyg58zc7ZUsUe9UaWEoEf4EPDI3cFXKvu3bPv6OweR7i6MjsRL3lc8JwMur9HfUGwDIhvHBErangXteBZbkMhCjsPqQiZ%2BR5Fjpy59IO6Q6vAnauSBe%2F2OErXbURQvhGLZibHPOYrohZUt9GBa7kwkcnetrcbDzroOL7xIs5bdwrBw6Qu98gxfXf1CMhfU7pXsVf0GRM2SRj8blUoZh8iV9N68bOEh7ym9iXzrobOCfWSjZI4EkBZIjtDvGcRL6z0RFtxCpiXsiypL8uyT9geumrPN0anWFEpmSO1V%2FCBnsbdOdhAE%2FUgv9SicfAMKX7lNEGOqUB0PJI%2BHWgNVfVnHHztRidrVBsYi1JSys8JFW%2FQd%2FKs%2FYUhU4ED3YH6gE5AQZhly9FjKA4l2%2Fy2cXkWpsC1X3CXGHiobofASIsusyHlv3NPg%2Boga9iMg7FQ2tFl9ffy%2BvTq%2FkJGnAxVfwuIph5hJ8FY35wMKY3dwutpJI6jqH7znfmfmR%2BHE6fyq%2Bv96xTepjNcO%2FWjR%2FLjW3J%2FsOOCX0zy7ZMoACe&X-Amz-Signature=de0c9b9f55fe9122ed887739290e86b6879eae9fd088ce1e04acd49caeaa0e85&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7NXC7R4%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGvqp%2FmSH7t94znGADzUCtnmnqJs2yGhgQgL4YshqZZGAiEAyDmGUc1HX3hA0l83rinQa44Y9%2FpYrn0WaTIprIBEFWMqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL5Za4sU64kd%2B1JSKSrcA8E88PJUm5WF%2FcYslqk38eFT%2FwdxWBapraW8KSdS8wtbB53hvllkZpBt5AVz0nNZEzxvtH7GkwJWAv7GxEywhCZNMonBv2ZPVykWiA58PY9MfX57%2BS83hwuy4t%2BmubVaCbdxm%2Bzc65WhNK3x8GoLuTkCE5OvaGQM1eMQH00M%2BO7%2FtY%2BC9rMtMHwHdhSeU%2FqcyZlfrx98AFYAGu8D4HgIGNbKzZTxffL3ZYv7UNs5amOvZnK0uwSIQgwYN71Mrhgw%2FYQy7%2FgE9dGHs4Skx4I7j8MF%2FJZbW66Am%2B9Ibt5W0Ap25XEw%2Bkzuziri%2B39Dx%2BM7Hyg58zc7ZUsUe9UaWEoEf4EPDI3cFXKvu3bPv6OweR7i6MjsRL3lc8JwMur9HfUGwDIhvHBErangXteBZbkMhCjsPqQiZ%2BR5Fjpy59IO6Q6vAnauSBe%2F2OErXbURQvhGLZibHPOYrohZUt9GBa7kwkcnetrcbDzroOL7xIs5bdwrBw6Qu98gxfXf1CMhfU7pXsVf0GRM2SRj8blUoZh8iV9N68bOEh7ym9iXzrobOCfWSjZI4EkBZIjtDvGcRL6z0RFtxCpiXsiypL8uyT9geumrPN0anWFEpmSO1V%2FCBnsbdOdhAE%2FUgv9SicfAMKX7lNEGOqUB0PJI%2BHWgNVfVnHHztRidrVBsYi1JSys8JFW%2FQd%2FKs%2FYUhU4ED3YH6gE5AQZhly9FjKA4l2%2Fy2cXkWpsC1X3CXGHiobofASIsusyHlv3NPg%2Boga9iMg7FQ2tFl9ffy%2BvTq%2FkJGnAxVfwuIph5hJ8FY35wMKY3dwutpJI6jqH7znfmfmR%2BHE6fyq%2Bv96xTepjNcO%2FWjR%2FLjW3J%2FsOOCX0zy7ZMoACe&X-Amz-Signature=b430f4ffdd6129e29e3960880efeb995bcc334d781901402ec5ec4c7f028d955&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y7NXC7R4%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGvqp%2FmSH7t94znGADzUCtnmnqJs2yGhgQgL4YshqZZGAiEAyDmGUc1HX3hA0l83rinQa44Y9%2FpYrn0WaTIprIBEFWMqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL5Za4sU64kd%2B1JSKSrcA8E88PJUm5WF%2FcYslqk38eFT%2FwdxWBapraW8KSdS8wtbB53hvllkZpBt5AVz0nNZEzxvtH7GkwJWAv7GxEywhCZNMonBv2ZPVykWiA58PY9MfX57%2BS83hwuy4t%2BmubVaCbdxm%2Bzc65WhNK3x8GoLuTkCE5OvaGQM1eMQH00M%2BO7%2FtY%2BC9rMtMHwHdhSeU%2FqcyZlfrx98AFYAGu8D4HgIGNbKzZTxffL3ZYv7UNs5amOvZnK0uwSIQgwYN71Mrhgw%2FYQy7%2FgE9dGHs4Skx4I7j8MF%2FJZbW66Am%2B9Ibt5W0Ap25XEw%2Bkzuziri%2B39Dx%2BM7Hyg58zc7ZUsUe9UaWEoEf4EPDI3cFXKvu3bPv6OweR7i6MjsRL3lc8JwMur9HfUGwDIhvHBErangXteBZbkMhCjsPqQiZ%2BR5Fjpy59IO6Q6vAnauSBe%2F2OErXbURQvhGLZibHPOYrohZUt9GBa7kwkcnetrcbDzroOL7xIs5bdwrBw6Qu98gxfXf1CMhfU7pXsVf0GRM2SRj8blUoZh8iV9N68bOEh7ym9iXzrobOCfWSjZI4EkBZIjtDvGcRL6z0RFtxCpiXsiypL8uyT9geumrPN0anWFEpmSO1V%2FCBnsbdOdhAE%2FUgv9SicfAMKX7lNEGOqUB0PJI%2BHWgNVfVnHHztRidrVBsYi1JSys8JFW%2FQd%2FKs%2FYUhU4ED3YH6gE5AQZhly9FjKA4l2%2Fy2cXkWpsC1X3CXGHiobofASIsusyHlv3NPg%2Boga9iMg7FQ2tFl9ffy%2BvTq%2FkJGnAxVfwuIph5hJ8FY35wMKY3dwutpJI6jqH7znfmfmR%2BHE6fyq%2Bv96xTepjNcO%2FWjR%2FLjW3J%2FsOOCX0zy7ZMoACe&X-Amz-Signature=ff50a8a9ae1a41869a9d49baa862468c19b49e890d4b805a1b1689227749e7bd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663N4T7CAD%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102847Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCuCNkLsfq3bIdfaDnn5mqf8392VnjZ4ZCtIHHwBUzVJAIgTVSAyDCm47pN0p0SDjJOZcTveNngPvPQPobmjpVJt9cqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCBQicydi5ZT5x%2FtjircA1UoigJpT%2F9MG2zyZTxXRMfC5vV6yni53m0ADkHze%2BMg8Fwqv1hgiVlah%2Frnb%2B74C%2FnTcvPL%2FuVc9QRGnwEzf2AgzG71r6aDdZepp%2BTM0KyuO3lye%2BqnKlR0y3n0irqvxoE0rYE9ehoX5XhKAU5AyR5dYWN8S%2FnP6oBC%2F%2Fy6F%2FJ43zcV5sCRhAgo07ogmrjEG7nSvLrhNpJToFXIPvZqQCSY9EnJd0C683K8Df9E2zoZUaKdXJO61DZDpRoyOhkD5V2zFdoa0rsyWYkk4dTt1TPzr8ZQAW6ccR5vLmymrQv9tTrB6mH2eTbP1B2t2%2FDu3lLg4nN7MeoLci%2FvcL1r2XEMSJaJU3D6KjRlHndR8Ni8BTfA0kwXIU88i2RPQJWVHMsSwj%2Bq%2BD06e8CDThhqxFVmXB14nqgTcO3JWGebDPujiJNIqlyOa2ni718gbxg6MnGtt7PPYaJk3rhgzQca1b0wmJSOieecprtqbwy1QOudr7CvWC2JN9tePP205jlrokd8FoBVcdX5eW5wDNBrlJrcG6rbu67RcLyNfkJPaC4T41syqeJ8jxjHdiEuqOsb2OKocEJm9OnXniK7nhcT%2FWMbdcZ7qsBWXnsF9ow8g9ygm02U%2Bq228rYoiMO%2BMI%2F6lNEGOqUBbc4foJ1BpjgnO3BtTXGDKF2RdqfZ%2Faz3uFKeE%2FqPGM5nptRVD%2F%2FEtZp%2BcUPybUrPa60eLpHWoaLevb%2BSxtBGavP0ll2WWnvw8t8UkJu7VeQQMXMeO0NeAjKr%2Bzj5%2FJdxSOAL1TRCd%2F%2FvDLOCJs6wU1xNp0f2Lxu4ZNcxbzq%2FXJzJP82xEGj%2BE7wb5ULeMe1V47e6p4hV%2Fi%2FMuKPTFqgTN4kjE3L%2B&X-Amz-Signature=341b9d3a75e01adb02824d26cd14b5f785b675a21d45230170faf34a703d2f06&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YWYASZZH%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102847Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCjTnI5OWFh401uG9s4jzXrIQwxAon5dDktBPMlns1TlAIgWgN5GtlALN1RAesP56Zpwz36Sq3tdaUDugJEAd%2Fbc3gqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBzfeIwvQBuTABsluSrcAwbFvcgvpocMr2noj2UwGi3xJNdxX6f1qbriFKEuFSsVHHbgrxVkv0%2BPFrRQEExKsbj7sWCYQnJZScw4R5HRtIR8qrm4vY8eJx6%2FTYo14Gf%2BJNE0U3f2AupKiOYDtL2qPMOgNoVVWxWkfO1PPffYXKaNxgmhxEzZOA5BMYtV40RLx6TWrdnqcgrTBUGLn8W%2BVvnCp%2FiN3%2F2hbYanScqYThRNHpOdP02WJjtaGkuH5HQD2JjytxYo%2B7ve%2B6eBHwN3WNbtjiNONXA4tqBk3Vi%2B7bHr798c7lTTrg0NV2EwgqBOB7adRptJWptrpfxba24r4BVLFxf3vhiJEp1WqWRvo632d6rNSRoenBHfSteodBEUZFsUdWg%2BsSETUor4tHIzsfo7%2FOS7RjlhYPddBBx1zKLjBsSAdfk%2FGNc5HAZbSJxFN9AFSiVWZFftgIootEiW%2BKoi9cBwuRPN5sPHTFmRIe0d1s7Ed1%2BRMk%2ByPGLEesIMAIa3lCEZ9fbRUlEaEbtquynLw8ihk2%2BpXyc5uPlOHG8umuJ1g20r6af%2BuReNDB6C2YYE1we%2BxN6juIgPVwO93MXIhpuokK06YZWjx2nnuPsuC4DIXFSjonNdYXbYNWebEpuSLQpMmkbg1u8uMKH5lNEGOqUB9DUrmbGb8nIIDSRexxKPeh16aifppcjtJAjOf7BOfz5sWO4T1n3jun1bYDKHT8qoj%2FM3tVmrVy3WGfxqWgfr6alhUdk3D35OryURapRJwmpQPcnj%2FE0%2B%2BGDxA7yc1jxbe2l1kaeeG5n%2BLSTnLxGOk1PYmj6NogijtEu0PvWAZg%2B8GslRmSQfMNQHA64QTWq3FX9bRPmeTqp7eIZDdGtiTL1sw%2Bqj&X-Amz-Signature=9488903b769509ae57e614bdef9d98eda01028b708eea6b4987538d584beddc1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YWYASZZH%2F20260607%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260607T102847Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCjTnI5OWFh401uG9s4jzXrIQwxAon5dDktBPMlns1TlAIgWgN5GtlALN1RAesP56Zpwz36Sq3tdaUDugJEAd%2Fbc3gqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBzfeIwvQBuTABsluSrcAwbFvcgvpocMr2noj2UwGi3xJNdxX6f1qbriFKEuFSsVHHbgrxVkv0%2BPFrRQEExKsbj7sWCYQnJZScw4R5HRtIR8qrm4vY8eJx6%2FTYo14Gf%2BJNE0U3f2AupKiOYDtL2qPMOgNoVVWxWkfO1PPffYXKaNxgmhxEzZOA5BMYtV40RLx6TWrdnqcgrTBUGLn8W%2BVvnCp%2FiN3%2F2hbYanScqYThRNHpOdP02WJjtaGkuH5HQD2JjytxYo%2B7ve%2B6eBHwN3WNbtjiNONXA4tqBk3Vi%2B7bHr798c7lTTrg0NV2EwgqBOB7adRptJWptrpfxba24r4BVLFxf3vhiJEp1WqWRvo632d6rNSRoenBHfSteodBEUZFsUdWg%2BsSETUor4tHIzsfo7%2FOS7RjlhYPddBBx1zKLjBsSAdfk%2FGNc5HAZbSJxFN9AFSiVWZFftgIootEiW%2BKoi9cBwuRPN5sPHTFmRIe0d1s7Ed1%2BRMk%2ByPGLEesIMAIa3lCEZ9fbRUlEaEbtquynLw8ihk2%2BpXyc5uPlOHG8umuJ1g20r6af%2BuReNDB6C2YYE1we%2BxN6juIgPVwO93MXIhpuokK06YZWjx2nnuPsuC4DIXFSjonNdYXbYNWebEpuSLQpMmkbg1u8uMKH5lNEGOqUB9DUrmbGb8nIIDSRexxKPeh16aifppcjtJAjOf7BOfz5sWO4T1n3jun1bYDKHT8qoj%2FM3tVmrVy3WGfxqWgfr6alhUdk3D35OryURapRJwmpQPcnj%2FE0%2B%2BGDxA7yc1jxbe2l1kaeeG5n%2BLSTnLxGOk1PYmj6NogijtEu0PvWAZg%2B8GslRmSQfMNQHA64QTWq3FX9bRPmeTqp7eIZDdGtiTL1sw%2Bqj&X-Amz-Signature=63d794ca7b9d1a0eaa276c25a702dc1607bb1ece76146f2eca3dde7f42ef5250&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
