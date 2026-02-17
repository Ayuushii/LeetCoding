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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q3EV355B%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBY00ACqWNvlQAkUlU8Ek0jINagJbTChd5kw9YsMs1RwAiB0c%2FPCog4oZObQXTS%2BcejmDV%2FQYIn0tBWeRcTnuxQZ0yr%2FAwhJEAAaDDYzNzQyMzE4MzgwNSIM3rWZ7aAofxbfKTe9KtwDp3lrn4hONRLzGnqwzJqkW%2Buc4tUd44clkNCb2aw6PuHA1xlKVkIPm7bnyxdz8Fw%2FLYK3IY3cEs64H6ocpdZiCAQ%2FJNScCwvsGESWr%2BAahuv4tifwJ%2F%2Bgqw4%2BtPlyjUwgyrIG0eg1ln3kr9fVKY38uu334my08BgifdR9Dy4p8yMzaTVS8ABksfkjH3k5jMe9I3%2FT3LIE5JIdrx5%2F6YQsX5pwkmZb0kVFKbHQW41ZqLXYk%2FnPKwVr35Z7Ppjav1lGLwPKZBBiMVelFr9%2F6PX3usdOhnNz6%2BITyJfDmgkaCb4XXGmV1m%2BfsqQwW7hLm%2FlVPe17%2B%2BFe88JEYrRWrwrcppPKvuriSBYoLGXDL%2FshJbiPT5V969nc1yhVTEX1xQtJh8hlyBygHZV7ZkEM8gOf0rC3WDD6Epp5Dl4GF0B%2FFn0rkVxmrxji6q7aVLYgTRui%2FzdimHf%2BqmOQVk1izQTHr9RUKSSOa60R8rYIGDgVav1V1jOY4CQqzhuPm9dwq%2BwOkh3agufQ6DNnbQra%2Bfyj3aMMmkPFVUXFfbzgZ1S8SagUkseSAiwj2c2f1G48fC6TsrFLvajFPkE%2FQgAFEVe8uTmsy19qHaI9Knl3tt73Ykp23hpv5gVheFVbf1Yww7bQzAY6pgGxiMfC4yS9vqdwGptZtLDrGKYJHLc%2FtLnbnPsGIKOd8iffPpdcKR62xI4HNA49NQVdlpGpb0oyKBS%2F%2F6N7jxqUGUnZsszmKIJ6CTBQ0%2FALFK%2Fq1kUgaqN%2FizOW3sJVP9af3FKeaw7%2Bnbvb0jiwj7JaxrBTYUylLWxRvUvHgEnhS0ISTugVbJQzHCqXn2lNImTwCY9VQf6XjkwyWp7BhJkx6ykrfV%2FV&X-Amz-Signature=011026b96f65680de1eb5de24d3a3a228f189a0eaa020a247f85b99e09c656d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q3EV355B%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBY00ACqWNvlQAkUlU8Ek0jINagJbTChd5kw9YsMs1RwAiB0c%2FPCog4oZObQXTS%2BcejmDV%2FQYIn0tBWeRcTnuxQZ0yr%2FAwhJEAAaDDYzNzQyMzE4MzgwNSIM3rWZ7aAofxbfKTe9KtwDp3lrn4hONRLzGnqwzJqkW%2Buc4tUd44clkNCb2aw6PuHA1xlKVkIPm7bnyxdz8Fw%2FLYK3IY3cEs64H6ocpdZiCAQ%2FJNScCwvsGESWr%2BAahuv4tifwJ%2F%2Bgqw4%2BtPlyjUwgyrIG0eg1ln3kr9fVKY38uu334my08BgifdR9Dy4p8yMzaTVS8ABksfkjH3k5jMe9I3%2FT3LIE5JIdrx5%2F6YQsX5pwkmZb0kVFKbHQW41ZqLXYk%2FnPKwVr35Z7Ppjav1lGLwPKZBBiMVelFr9%2F6PX3usdOhnNz6%2BITyJfDmgkaCb4XXGmV1m%2BfsqQwW7hLm%2FlVPe17%2B%2BFe88JEYrRWrwrcppPKvuriSBYoLGXDL%2FshJbiPT5V969nc1yhVTEX1xQtJh8hlyBygHZV7ZkEM8gOf0rC3WDD6Epp5Dl4GF0B%2FFn0rkVxmrxji6q7aVLYgTRui%2FzdimHf%2BqmOQVk1izQTHr9RUKSSOa60R8rYIGDgVav1V1jOY4CQqzhuPm9dwq%2BwOkh3agufQ6DNnbQra%2Bfyj3aMMmkPFVUXFfbzgZ1S8SagUkseSAiwj2c2f1G48fC6TsrFLvajFPkE%2FQgAFEVe8uTmsy19qHaI9Knl3tt73Ykp23hpv5gVheFVbf1Yww7bQzAY6pgGxiMfC4yS9vqdwGptZtLDrGKYJHLc%2FtLnbnPsGIKOd8iffPpdcKR62xI4HNA49NQVdlpGpb0oyKBS%2F%2F6N7jxqUGUnZsszmKIJ6CTBQ0%2FALFK%2Fq1kUgaqN%2FizOW3sJVP9af3FKeaw7%2Bnbvb0jiwj7JaxrBTYUylLWxRvUvHgEnhS0ISTugVbJQzHCqXn2lNImTwCY9VQf6XjkwyWp7BhJkx6ykrfV%2FV&X-Amz-Signature=bbcbda155c196ee84242005d205487bc79c2c4207eb59feeb1a99310961e0a91&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q3EV355B%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBY00ACqWNvlQAkUlU8Ek0jINagJbTChd5kw9YsMs1RwAiB0c%2FPCog4oZObQXTS%2BcejmDV%2FQYIn0tBWeRcTnuxQZ0yr%2FAwhJEAAaDDYzNzQyMzE4MzgwNSIM3rWZ7aAofxbfKTe9KtwDp3lrn4hONRLzGnqwzJqkW%2Buc4tUd44clkNCb2aw6PuHA1xlKVkIPm7bnyxdz8Fw%2FLYK3IY3cEs64H6ocpdZiCAQ%2FJNScCwvsGESWr%2BAahuv4tifwJ%2F%2Bgqw4%2BtPlyjUwgyrIG0eg1ln3kr9fVKY38uu334my08BgifdR9Dy4p8yMzaTVS8ABksfkjH3k5jMe9I3%2FT3LIE5JIdrx5%2F6YQsX5pwkmZb0kVFKbHQW41ZqLXYk%2FnPKwVr35Z7Ppjav1lGLwPKZBBiMVelFr9%2F6PX3usdOhnNz6%2BITyJfDmgkaCb4XXGmV1m%2BfsqQwW7hLm%2FlVPe17%2B%2BFe88JEYrRWrwrcppPKvuriSBYoLGXDL%2FshJbiPT5V969nc1yhVTEX1xQtJh8hlyBygHZV7ZkEM8gOf0rC3WDD6Epp5Dl4GF0B%2FFn0rkVxmrxji6q7aVLYgTRui%2FzdimHf%2BqmOQVk1izQTHr9RUKSSOa60R8rYIGDgVav1V1jOY4CQqzhuPm9dwq%2BwOkh3agufQ6DNnbQra%2Bfyj3aMMmkPFVUXFfbzgZ1S8SagUkseSAiwj2c2f1G48fC6TsrFLvajFPkE%2FQgAFEVe8uTmsy19qHaI9Knl3tt73Ykp23hpv5gVheFVbf1Yww7bQzAY6pgGxiMfC4yS9vqdwGptZtLDrGKYJHLc%2FtLnbnPsGIKOd8iffPpdcKR62xI4HNA49NQVdlpGpb0oyKBS%2F%2F6N7jxqUGUnZsszmKIJ6CTBQ0%2FALFK%2Fq1kUgaqN%2FizOW3sJVP9af3FKeaw7%2Bnbvb0jiwj7JaxrBTYUylLWxRvUvHgEnhS0ISTugVbJQzHCqXn2lNImTwCY9VQf6XjkwyWp7BhJkx6ykrfV%2FV&X-Amz-Signature=c65f9e83ab75c0ceedf83ed3f39ebe0728d6dc6359c688e6853147a8663144d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QCW3A6SB%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFeUPHSgDEgpsbP5ySyC4VybvZY4vgMMEz%2B6amhkrBKdAiEAlnuj3Q1X9nOHtQs0KY1XlxkeUOl9gy9%2FqAPOzOj2QnQq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFxxSdpe5%2Bmb9ME%2BgCrcA5%2B8Bbb%2FG88qQt5OHM4R6HOsafg53oIdYJHMpY53uTo%2BuSNiUvJN5n83RCQYzyvNVbHu2CYLrFvGYIAeO3KAbmsObvIfe%2BqQjDB58Q4hgNO655jjZKkHAaBDeRpnzili4%2BPyVA7%2FiC0V8or9kJk9QdP6R%2FmocNDgb2AeZKQNQqCAxJil8bl38xzxBiKndca0qaHB2SxftuYmVozxVUUH23DuoJk7Ll%2Fd5yFcq4VOHn3QIR1AOpemVJB%2F0vTsAXUhvTIkqfHYOVyNkcFUWazdC41YqBAxYgWRi%2FoUFUAsn7p7SXLNYBNXSvW5XjZytTl73zQsMgeIhyDWjorYoQKVDt%2FZ0v2QektGTaX4BbRPdTJd%2FFUg1sHvHuCGUXtc2oiE2VY9Dk2Goh%2FKmC4za%2BjnEZUElxXJfqiKBXrAcVK0iaXbe3r8LkDCHq7G0fdLWe8No0%2FFDyTtPglrCLqadLe5KpVJmwi8e7LQ8irg9CG9YAXqjfJW%2BisXYDuDlyQPydQI9UcCiPyOJ6afIavOZ9xPp8qavWyTTQ8ds2AAOSev2DLdJaAjqPIgmXq9mLm3IMBALkJd21wJY%2F5N9q0PjcM3H2G2%2FaGOPmsmTFm27LZ5uRk3wfiNLvbPu2NlSePeML620MwGOqUBqx5TSohsqwOhk0wzDeeFFKyx9DwNExT2h8HLvwqb3BWZhWJtSQsMI52TKBZNAMSPZUF%2F%2BHc7h3j62Yb9jyAUdSsRousCxJr3NfBohtQIjKigOhPUE6CifgeF7myGrVp2uh2aggoz2u5CMwG5wC0NXVCDe1c52XU3iXawFj056UDZHOa8wbMhD9kDxnCocidML%2BLsM87P55L98SYBhe6Xtc8rYDSc&X-Amz-Signature=62edd906987555d917df9a16f115bcbe302d7935efd58ececb472df0fe5041a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QCW3A6SB%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFeUPHSgDEgpsbP5ySyC4VybvZY4vgMMEz%2B6amhkrBKdAiEAlnuj3Q1X9nOHtQs0KY1XlxkeUOl9gy9%2FqAPOzOj2QnQq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFxxSdpe5%2Bmb9ME%2BgCrcA5%2B8Bbb%2FG88qQt5OHM4R6HOsafg53oIdYJHMpY53uTo%2BuSNiUvJN5n83RCQYzyvNVbHu2CYLrFvGYIAeO3KAbmsObvIfe%2BqQjDB58Q4hgNO655jjZKkHAaBDeRpnzili4%2BPyVA7%2FiC0V8or9kJk9QdP6R%2FmocNDgb2AeZKQNQqCAxJil8bl38xzxBiKndca0qaHB2SxftuYmVozxVUUH23DuoJk7Ll%2Fd5yFcq4VOHn3QIR1AOpemVJB%2F0vTsAXUhvTIkqfHYOVyNkcFUWazdC41YqBAxYgWRi%2FoUFUAsn7p7SXLNYBNXSvW5XjZytTl73zQsMgeIhyDWjorYoQKVDt%2FZ0v2QektGTaX4BbRPdTJd%2FFUg1sHvHuCGUXtc2oiE2VY9Dk2Goh%2FKmC4za%2BjnEZUElxXJfqiKBXrAcVK0iaXbe3r8LkDCHq7G0fdLWe8No0%2FFDyTtPglrCLqadLe5KpVJmwi8e7LQ8irg9CG9YAXqjfJW%2BisXYDuDlyQPydQI9UcCiPyOJ6afIavOZ9xPp8qavWyTTQ8ds2AAOSev2DLdJaAjqPIgmXq9mLm3IMBALkJd21wJY%2F5N9q0PjcM3H2G2%2FaGOPmsmTFm27LZ5uRk3wfiNLvbPu2NlSePeML620MwGOqUBqx5TSohsqwOhk0wzDeeFFKyx9DwNExT2h8HLvwqb3BWZhWJtSQsMI52TKBZNAMSPZUF%2F%2BHc7h3j62Yb9jyAUdSsRousCxJr3NfBohtQIjKigOhPUE6CifgeF7myGrVp2uh2aggoz2u5CMwG5wC0NXVCDe1c52XU3iXawFj056UDZHOa8wbMhD9kDxnCocidML%2BLsM87P55L98SYBhe6Xtc8rYDSc&X-Amz-Signature=42834967e25f40673767df89dc84896e47ed41eb59de5f60b61d6a71f44be2df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QCW3A6SB%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFeUPHSgDEgpsbP5ySyC4VybvZY4vgMMEz%2B6amhkrBKdAiEAlnuj3Q1X9nOHtQs0KY1XlxkeUOl9gy9%2FqAPOzOj2QnQq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFxxSdpe5%2Bmb9ME%2BgCrcA5%2B8Bbb%2FG88qQt5OHM4R6HOsafg53oIdYJHMpY53uTo%2BuSNiUvJN5n83RCQYzyvNVbHu2CYLrFvGYIAeO3KAbmsObvIfe%2BqQjDB58Q4hgNO655jjZKkHAaBDeRpnzili4%2BPyVA7%2FiC0V8or9kJk9QdP6R%2FmocNDgb2AeZKQNQqCAxJil8bl38xzxBiKndca0qaHB2SxftuYmVozxVUUH23DuoJk7Ll%2Fd5yFcq4VOHn3QIR1AOpemVJB%2F0vTsAXUhvTIkqfHYOVyNkcFUWazdC41YqBAxYgWRi%2FoUFUAsn7p7SXLNYBNXSvW5XjZytTl73zQsMgeIhyDWjorYoQKVDt%2FZ0v2QektGTaX4BbRPdTJd%2FFUg1sHvHuCGUXtc2oiE2VY9Dk2Goh%2FKmC4za%2BjnEZUElxXJfqiKBXrAcVK0iaXbe3r8LkDCHq7G0fdLWe8No0%2FFDyTtPglrCLqadLe5KpVJmwi8e7LQ8irg9CG9YAXqjfJW%2BisXYDuDlyQPydQI9UcCiPyOJ6afIavOZ9xPp8qavWyTTQ8ds2AAOSev2DLdJaAjqPIgmXq9mLm3IMBALkJd21wJY%2F5N9q0PjcM3H2G2%2FaGOPmsmTFm27LZ5uRk3wfiNLvbPu2NlSePeML620MwGOqUBqx5TSohsqwOhk0wzDeeFFKyx9DwNExT2h8HLvwqb3BWZhWJtSQsMI52TKBZNAMSPZUF%2F%2BHc7h3j62Yb9jyAUdSsRousCxJr3NfBohtQIjKigOhPUE6CifgeF7myGrVp2uh2aggoz2u5CMwG5wC0NXVCDe1c52XU3iXawFj056UDZHOa8wbMhD9kDxnCocidML%2BLsM87P55L98SYBhe6Xtc8rYDSc&X-Amz-Signature=9598eaa05b205e6dd7966be06b3902eaef0af555f37a7fbb083036dae026e6ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QCW3A6SB%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084442Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFeUPHSgDEgpsbP5ySyC4VybvZY4vgMMEz%2B6amhkrBKdAiEAlnuj3Q1X9nOHtQs0KY1XlxkeUOl9gy9%2FqAPOzOj2QnQq%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFxxSdpe5%2Bmb9ME%2BgCrcA5%2B8Bbb%2FG88qQt5OHM4R6HOsafg53oIdYJHMpY53uTo%2BuSNiUvJN5n83RCQYzyvNVbHu2CYLrFvGYIAeO3KAbmsObvIfe%2BqQjDB58Q4hgNO655jjZKkHAaBDeRpnzili4%2BPyVA7%2FiC0V8or9kJk9QdP6R%2FmocNDgb2AeZKQNQqCAxJil8bl38xzxBiKndca0qaHB2SxftuYmVozxVUUH23DuoJk7Ll%2Fd5yFcq4VOHn3QIR1AOpemVJB%2F0vTsAXUhvTIkqfHYOVyNkcFUWazdC41YqBAxYgWRi%2FoUFUAsn7p7SXLNYBNXSvW5XjZytTl73zQsMgeIhyDWjorYoQKVDt%2FZ0v2QektGTaX4BbRPdTJd%2FFUg1sHvHuCGUXtc2oiE2VY9Dk2Goh%2FKmC4za%2BjnEZUElxXJfqiKBXrAcVK0iaXbe3r8LkDCHq7G0fdLWe8No0%2FFDyTtPglrCLqadLe5KpVJmwi8e7LQ8irg9CG9YAXqjfJW%2BisXYDuDlyQPydQI9UcCiPyOJ6afIavOZ9xPp8qavWyTTQ8ds2AAOSev2DLdJaAjqPIgmXq9mLm3IMBALkJd21wJY%2F5N9q0PjcM3H2G2%2FaGOPmsmTFm27LZ5uRk3wfiNLvbPu2NlSePeML620MwGOqUBqx5TSohsqwOhk0wzDeeFFKyx9DwNExT2h8HLvwqb3BWZhWJtSQsMI52TKBZNAMSPZUF%2F%2BHc7h3j62Yb9jyAUdSsRousCxJr3NfBohtQIjKigOhPUE6CifgeF7myGrVp2uh2aggoz2u5CMwG5wC0NXVCDe1c52XU3iXawFj056UDZHOa8wbMhD9kDxnCocidML%2BLsM87P55L98SYBhe6Xtc8rYDSc&X-Amz-Signature=7e8e3818aad83a4979e2384dda8dd5ac093013e17b9ba56b05c55cad5537b020&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XQRPD2BB%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFH5iDcVKsR26EDWy%2FOVKV0K4J%2F%2FKJIVMXjd7bfr4oRnAiEAoU4SQSAPRZ2VkWZUBZzs2f%2BdhB18nTwaS8J49kxcB10q%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDMiOI3dSmV4VCY9tLCrcA3hv0KZe0rtRZ7Kl%2BbeRRw4gaqvPp5FmF7fjV%2FvFgum%2B0A8dIkougI4J6JY7lDgt6dtxgVfXSQGL6frh1X9cImUK3tg6%2BefLpOnrzuI7WrRbRGOvmcjqFx37JqhnueGwlsB%2BOk0srGXYGT377PxUaObW40GrWVdVra4fPRbH0jJhXbLIhan584Zh4sG2kUrjS7VLBHnvXFUG13ooCJ7zP5lBK%2B6IlwRdMsDL8uAofP2qdPufuwEVmIHE%2F9JAJu9INS3tLF8D94xtUHmxDrCdfHEwnJyf0q01weh70eBdRBjUfZQNFhQs4hhv781LsgLbYrTi0K8%2F2Kot3EMFa9wXrGrzNcdREXOuafp3%2Bns7FtDK5B08VPGKHDtqmho21xbPuydboImm1lr49oHqtgsX7PXILLNMpjTgNJvYjnaZN6%2FiMPVSU2GAPHDQZIfty1u6n22rzwwZAeibkwxYif59bZjFB%2FuOE7AjJh6jDWmw8m1eHzFhdO%2BQJkxIhITPTagGOwy1FP2eaFBVDGBJjKB0oZRnWhdKFokRkLb7TeujY1UexZzFtkOs1%2BKNiSnB3ybt%2BTr7qZbiiatEcPCXB2jXaTLRdHk6qvCBpQ9TaFDyUb4atyEblNsPmNi8LojWMLC20MwGOqUBJuXLRrAo2qh2DXrWxCawzK6HbGGce1Hp2DPCB2oZX4TuI3Lx%2BBSZEJfO6%2FaKAq40cDrbAAzRGGqqfpXHV7LPM8%2BQ0VJBDI2x5KffNIdO%2BQ%2B%2FEOZLxKkay7P40b5PYaRSW1l0ZeW5xZw8JwMJ%2BmDHL0WL9pJNvflgZAUyDCZNBGd9s%2B4OAsD9L3VRYIK4GcWjFemBjkjHMh9kRAhEa50edRmUYLKj&X-Amz-Signature=b899d8e69d54a2231691d2072776c0a594264603ffae51b101c34740dd236f77&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZQXX3J6R%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG722yw4ss7V965CchKjp4qD%2B30FTvYexOrsZNm36euQAiB6zMDWiU0NPdZtrEg0X0OPrLzvOJTcu3eHRICTa9zmIir%2FAwhJEAAaDDYzNzQyMzE4MzgwNSIMJnuYjKCeMCCAnCL3KtwDGCN89ungiHwbODPXo1IjFVI6GNHfzOItZAA215g20Onw99LSCi1Ovx8HdotGzSTOf8YQsyaE4c7Q233I5%2BJPSj5q%2FbxZyZmlue93rUm0aaC0%2FX0oxP8YP1ceCQgFzvjFQQ1RU%2FALqvShFLGYDR3DVCWOJNIgvgDyL7vfEvzhzjp4zXKA%2BFUSV9oyYEMNnCEliQ64W4W4n%2FOCrzZsgtWocZ%2BnQ58AWokceL%2Beu7yQ8SDiyZkcyhbDXGMlp5CnmpiW9sQFGPE%2B1HgGUzO1FcK6KMRz5E6sapPDbZJf1HTEwFn75DD8mZjUxCGLU71rYyTX2BDB2Nv6tKAm5Kw4ZdkZgdCMoDUY0nslu5qqPKHRNzlZg%2BHMPsHeR8oyxCy%2BrnpXy91akiKQP%2FCKBFEyYAPEZo44r%2BzM%2F0VLnc0U0vDqwLoMboR%2B3%2BWqkGHOSs0Y%2B8H3to8mLhn%2FN%2BQYNFhu19X1BUI0RaWQy0Ry5VdD11FlhePhd8SlE6PtG8C2J6bIsomBUKq%2BAqMIRCcv6RNtwwduppNM5Ngm0NR5dJuOv8xy6h19WCRj%2FXtU8%2FjkykWPavP0st6dDAAod3p0XjlelLFHs%2BoPYcI8Sg7q83elPmkUJJATyHpN9XrMXMRfLIsw5rXQzAY6pgHNkLqS5Oh%2B8aksHt%2FfT7526JQjC7wAPexuMYhdiFH8bYohcLXcdFHLIdZA%2FRILtn0gKuGKRdDLkXJ6rqOAScUrRGtOi4dKX8oFIqXW30Dvbxb13OMUKOL6DAfunB9SbXssZ7gTiviOlidr%2FuH82sLCTj%2Biv8Zw4AiB6VgdZXoKB677h2Y7%2BjzC%2B4Li99AzzkQIt8Te%2FcSB9Q2VFg4YxYWZTHhIKfSu&X-Amz-Signature=f1ccb305b5a71967f852019edf54b3d459b26617689c2f14799927fd130bd01d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZQXX3J6R%2F20260217%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260217T084445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG722yw4ss7V965CchKjp4qD%2B30FTvYexOrsZNm36euQAiB6zMDWiU0NPdZtrEg0X0OPrLzvOJTcu3eHRICTa9zmIir%2FAwhJEAAaDDYzNzQyMzE4MzgwNSIMJnuYjKCeMCCAnCL3KtwDGCN89ungiHwbODPXo1IjFVI6GNHfzOItZAA215g20Onw99LSCi1Ovx8HdotGzSTOf8YQsyaE4c7Q233I5%2BJPSj5q%2FbxZyZmlue93rUm0aaC0%2FX0oxP8YP1ceCQgFzvjFQQ1RU%2FALqvShFLGYDR3DVCWOJNIgvgDyL7vfEvzhzjp4zXKA%2BFUSV9oyYEMNnCEliQ64W4W4n%2FOCrzZsgtWocZ%2BnQ58AWokceL%2Beu7yQ8SDiyZkcyhbDXGMlp5CnmpiW9sQFGPE%2B1HgGUzO1FcK6KMRz5E6sapPDbZJf1HTEwFn75DD8mZjUxCGLU71rYyTX2BDB2Nv6tKAm5Kw4ZdkZgdCMoDUY0nslu5qqPKHRNzlZg%2BHMPsHeR8oyxCy%2BrnpXy91akiKQP%2FCKBFEyYAPEZo44r%2BzM%2F0VLnc0U0vDqwLoMboR%2B3%2BWqkGHOSs0Y%2B8H3to8mLhn%2FN%2BQYNFhu19X1BUI0RaWQy0Ry5VdD11FlhePhd8SlE6PtG8C2J6bIsomBUKq%2BAqMIRCcv6RNtwwduppNM5Ngm0NR5dJuOv8xy6h19WCRj%2FXtU8%2FjkykWPavP0st6dDAAod3p0XjlelLFHs%2BoPYcI8Sg7q83elPmkUJJATyHpN9XrMXMRfLIsw5rXQzAY6pgHNkLqS5Oh%2B8aksHt%2FfT7526JQjC7wAPexuMYhdiFH8bYohcLXcdFHLIdZA%2FRILtn0gKuGKRdDLkXJ6rqOAScUrRGtOi4dKX8oFIqXW30Dvbxb13OMUKOL6DAfunB9SbXssZ7gTiviOlidr%2FuH82sLCTj%2Biv8Zw4AiB6VgdZXoKB677h2Y7%2BjzC%2B4Li99AzzkQIt8Te%2FcSB9Q2VFg4YxYWZTHhIKfSu&X-Amz-Signature=0764832c63ef707eaabef1b4c4531703dbf1091dcba8e2910e039a44121d0c04&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
