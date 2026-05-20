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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7SMO4QI%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104912Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIC3LG2epaOG0WkM1sn34600UKpK3QI%2FT9FiuTmmuwzOlAiBhovvBzCJxZdWvfqBnJUmlUVIbxhadwh7x2i8wFy%2FXaiqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMEzFSpLnokugeGC0YKtwDsHHPELDLeugXT7Tf0%2FkE0lbTNRmfFjFjKU43%2BBMvX3GDYzyHIQ7sMxz%2Bvu1PeJp3i%2BOgOupg%2FIoF2lqKLijr7h2h6PYAIao0sJZvQkIXK055jLQQ6Fo17FVWcnikJB31SBs2x0cqzVy2WcvVmXCwo6aVXviZAbE6EqSPgShrwGyeFx%2B3rP6yxbNbICsh5PNFeWJGzQyB6PfxvSJM1TzIqbZyZOQsA5CnI%2FaJdwTHzdaXcJP9jHc1YIypTz8XpfJ4Subhnhp4siuFyEUKxDpZGLeBbX1P19eK%2Fdzl5eBenZnEw%2Bo%2B5uHW4TlWKoTH71jSw1icdj4CDh83c5dElY64WYgFgFlLcrqTZ349TSO4lc36S2zXIvP1m2Y7XAqkShmYni2VnbC61HQhrP8hXEcYXeA8U9%2BB%2B9bI0ZGkFIcYgqw3DiuC2zHsuFqXNSaF8HxUr935Fme99Ng1LzWRJ%2B10X13CuMEwaHQmDX5ZiBuq4Ltq1ZedljVMCSO%2BOBy0bMI7VvcqWvuspHBnWJbfreFgIxZP%2BTo5vgVpCg%2FBxQLIaDW9XgjoUGOM45bXp4m38156Kq%2BFDNod8DfDHOHtvVyaZq%2FL%2Fe5A2pAIS0rwsJvfSRqSzgtbmOlKq1KzACww6Zm20AY6pgGtHy%2FCJby25kAHU6L8zfIjPWvlOn%2FMoi%2BrAptGJZI2LO2L3BIqg8AffUJFvyZVuBs4N3iJFbOe3HFJ2zKVGqJbWVWz6ezhIVPh9bKibv8DAUc84wSM%2B0oM8tQWeEE0hpLFnS00Qk9SG4SbFFe%2B8UfLeXmKTCobc9arsuwqN8y2IcVfDDAjHDm%2FdVs2k9ydx%2FdI18vDpzAg3bLtgn5T3RsBV49RXFUb&X-Amz-Signature=1b5f6c683653803b4e61954bccfb31d8f44175efe9494cd24e53a13581dca0eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7SMO4QI%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104912Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIC3LG2epaOG0WkM1sn34600UKpK3QI%2FT9FiuTmmuwzOlAiBhovvBzCJxZdWvfqBnJUmlUVIbxhadwh7x2i8wFy%2FXaiqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMEzFSpLnokugeGC0YKtwDsHHPELDLeugXT7Tf0%2FkE0lbTNRmfFjFjKU43%2BBMvX3GDYzyHIQ7sMxz%2Bvu1PeJp3i%2BOgOupg%2FIoF2lqKLijr7h2h6PYAIao0sJZvQkIXK055jLQQ6Fo17FVWcnikJB31SBs2x0cqzVy2WcvVmXCwo6aVXviZAbE6EqSPgShrwGyeFx%2B3rP6yxbNbICsh5PNFeWJGzQyB6PfxvSJM1TzIqbZyZOQsA5CnI%2FaJdwTHzdaXcJP9jHc1YIypTz8XpfJ4Subhnhp4siuFyEUKxDpZGLeBbX1P19eK%2Fdzl5eBenZnEw%2Bo%2B5uHW4TlWKoTH71jSw1icdj4CDh83c5dElY64WYgFgFlLcrqTZ349TSO4lc36S2zXIvP1m2Y7XAqkShmYni2VnbC61HQhrP8hXEcYXeA8U9%2BB%2B9bI0ZGkFIcYgqw3DiuC2zHsuFqXNSaF8HxUr935Fme99Ng1LzWRJ%2B10X13CuMEwaHQmDX5ZiBuq4Ltq1ZedljVMCSO%2BOBy0bMI7VvcqWvuspHBnWJbfreFgIxZP%2BTo5vgVpCg%2FBxQLIaDW9XgjoUGOM45bXp4m38156Kq%2BFDNod8DfDHOHtvVyaZq%2FL%2Fe5A2pAIS0rwsJvfSRqSzgtbmOlKq1KzACww6Zm20AY6pgGtHy%2FCJby25kAHU6L8zfIjPWvlOn%2FMoi%2BrAptGJZI2LO2L3BIqg8AffUJFvyZVuBs4N3iJFbOe3HFJ2zKVGqJbWVWz6ezhIVPh9bKibv8DAUc84wSM%2B0oM8tQWeEE0hpLFnS00Qk9SG4SbFFe%2B8UfLeXmKTCobc9arsuwqN8y2IcVfDDAjHDm%2FdVs2k9ydx%2FdI18vDpzAg3bLtgn5T3RsBV49RXFUb&X-Amz-Signature=4088621888be5a3f23af7d5a4a6492562722139dd576ce9c3563d9b5b5c887df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7SMO4QI%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104912Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIC3LG2epaOG0WkM1sn34600UKpK3QI%2FT9FiuTmmuwzOlAiBhovvBzCJxZdWvfqBnJUmlUVIbxhadwh7x2i8wFy%2FXaiqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMEzFSpLnokugeGC0YKtwDsHHPELDLeugXT7Tf0%2FkE0lbTNRmfFjFjKU43%2BBMvX3GDYzyHIQ7sMxz%2Bvu1PeJp3i%2BOgOupg%2FIoF2lqKLijr7h2h6PYAIao0sJZvQkIXK055jLQQ6Fo17FVWcnikJB31SBs2x0cqzVy2WcvVmXCwo6aVXviZAbE6EqSPgShrwGyeFx%2B3rP6yxbNbICsh5PNFeWJGzQyB6PfxvSJM1TzIqbZyZOQsA5CnI%2FaJdwTHzdaXcJP9jHc1YIypTz8XpfJ4Subhnhp4siuFyEUKxDpZGLeBbX1P19eK%2Fdzl5eBenZnEw%2Bo%2B5uHW4TlWKoTH71jSw1icdj4CDh83c5dElY64WYgFgFlLcrqTZ349TSO4lc36S2zXIvP1m2Y7XAqkShmYni2VnbC61HQhrP8hXEcYXeA8U9%2BB%2B9bI0ZGkFIcYgqw3DiuC2zHsuFqXNSaF8HxUr935Fme99Ng1LzWRJ%2B10X13CuMEwaHQmDX5ZiBuq4Ltq1ZedljVMCSO%2BOBy0bMI7VvcqWvuspHBnWJbfreFgIxZP%2BTo5vgVpCg%2FBxQLIaDW9XgjoUGOM45bXp4m38156Kq%2BFDNod8DfDHOHtvVyaZq%2FL%2Fe5A2pAIS0rwsJvfSRqSzgtbmOlKq1KzACww6Zm20AY6pgGtHy%2FCJby25kAHU6L8zfIjPWvlOn%2FMoi%2BrAptGJZI2LO2L3BIqg8AffUJFvyZVuBs4N3iJFbOe3HFJ2zKVGqJbWVWz6ezhIVPh9bKibv8DAUc84wSM%2B0oM8tQWeEE0hpLFnS00Qk9SG4SbFFe%2B8UfLeXmKTCobc9arsuwqN8y2IcVfDDAjHDm%2FdVs2k9ydx%2FdI18vDpzAg3bLtgn5T3RsBV49RXFUb&X-Amz-Signature=f6ac85800a822cd8a772da1b5ebb21075812ff3784179cdf9f753db2bc7bbcb1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S2V5DTFG%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIBUviN8ymyH94hdCgD9JiE3mSd7uYTF3VZkPZecc%2FzeCAiEAh2TfGRDtW0nvpoX4NimMERbdojwKJq5TKlqvqLCL9g4qiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKiz95dQkGD1iB7keyrcA6DPrbIaqoKZ7NyODEZgtZaHZ0jih5i2uvDn5sJluxyC5rJdZL%2Boi5LZQqMBS5azfQHvsqMbtMg8h06bdJyT1G2EY1aOtTclkKYpSZV7%2Fjlzg9Mqqor9jIoF4yZrTExK0Fb1c9XD9sx0byjr2klZpAK3YFWZSllUDu1OABcdtS5RWAFfuHauDmkYFPuukQS45MGAs3tFUHuuWmlmef172lwLqqu0E5CJHfeZZN%2BhU9XJNJMHkAiQ3UQUFOnxkD5oLH5n44CztGuJTDzvaROwuAiq1RvOe976YmvuWV8a%2F0iessZOg5E4r7%2B%2F%2BSeenaV6tglRfQmPYCsZYwyfSkCuL%2FzmdSH%2BBDgFbIIjr9%2FB2oBn6iypu8m4Q9PI8jnaR2snKCxpXADzCZPovP%2FDiqIX7GL0ak4yxTJ8ytK0GMrY3pTGQqqiQyvpsiX4fDev3TZxj5vNx0TmEcuIoa2irPbRT8DFILoW1jpG3PkppF%2FwuLKTTGwUc7lRhGA1%2BURQBH%2BzYzjlMEjF7rSOd53LxMrVal3t%2FM%2BKwgvxxxTeCELwnW9JcWc1NJewYBaVry7fLPXZvj02lgnHuKIakJie8eW5Fx9LFZ7KZOUaY%2FTafrm%2B679A6JJxLLK9013sPUMQMIqcttAGOqUB1VoOQghgZzbdzsskffh7UxMH%2FIIzNZq6IwKkHgfwuXr0hoZ9TpBFsmWFk%2BKAlvxX3d2Uu5kwqeY6uXzGdfbaOkqw0gXjsjfI0jmyCsK5DpWPIK4Y%2Fwgpg3NzaTYHHKAEH%2BWHtkkbA2sOBMO2lz5EbYz1XRiIkROq11nZljDPgLKBtJ9afgoa8nRj%2B3%2BpmsAPj2XvhLOZhYUM5LVSqSZ7fMbL7CtV&X-Amz-Signature=ae7fa86e36902735f91cc2d6385d77ae87aa6017bd50ead0406cc54f221fad35&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S2V5DTFG%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIBUviN8ymyH94hdCgD9JiE3mSd7uYTF3VZkPZecc%2FzeCAiEAh2TfGRDtW0nvpoX4NimMERbdojwKJq5TKlqvqLCL9g4qiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKiz95dQkGD1iB7keyrcA6DPrbIaqoKZ7NyODEZgtZaHZ0jih5i2uvDn5sJluxyC5rJdZL%2Boi5LZQqMBS5azfQHvsqMbtMg8h06bdJyT1G2EY1aOtTclkKYpSZV7%2Fjlzg9Mqqor9jIoF4yZrTExK0Fb1c9XD9sx0byjr2klZpAK3YFWZSllUDu1OABcdtS5RWAFfuHauDmkYFPuukQS45MGAs3tFUHuuWmlmef172lwLqqu0E5CJHfeZZN%2BhU9XJNJMHkAiQ3UQUFOnxkD5oLH5n44CztGuJTDzvaROwuAiq1RvOe976YmvuWV8a%2F0iessZOg5E4r7%2B%2F%2BSeenaV6tglRfQmPYCsZYwyfSkCuL%2FzmdSH%2BBDgFbIIjr9%2FB2oBn6iypu8m4Q9PI8jnaR2snKCxpXADzCZPovP%2FDiqIX7GL0ak4yxTJ8ytK0GMrY3pTGQqqiQyvpsiX4fDev3TZxj5vNx0TmEcuIoa2irPbRT8DFILoW1jpG3PkppF%2FwuLKTTGwUc7lRhGA1%2BURQBH%2BzYzjlMEjF7rSOd53LxMrVal3t%2FM%2BKwgvxxxTeCELwnW9JcWc1NJewYBaVry7fLPXZvj02lgnHuKIakJie8eW5Fx9LFZ7KZOUaY%2FTafrm%2B679A6JJxLLK9013sPUMQMIqcttAGOqUB1VoOQghgZzbdzsskffh7UxMH%2FIIzNZq6IwKkHgfwuXr0hoZ9TpBFsmWFk%2BKAlvxX3d2Uu5kwqeY6uXzGdfbaOkqw0gXjsjfI0jmyCsK5DpWPIK4Y%2Fwgpg3NzaTYHHKAEH%2BWHtkkbA2sOBMO2lz5EbYz1XRiIkROq11nZljDPgLKBtJ9afgoa8nRj%2B3%2BpmsAPj2XvhLOZhYUM5LVSqSZ7fMbL7CtV&X-Amz-Signature=589a4fae809f68d6bdd048d6f44bbb4f406314e3d05e4dd5c982c4d33bb6f318&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S2V5DTFG%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIBUviN8ymyH94hdCgD9JiE3mSd7uYTF3VZkPZecc%2FzeCAiEAh2TfGRDtW0nvpoX4NimMERbdojwKJq5TKlqvqLCL9g4qiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKiz95dQkGD1iB7keyrcA6DPrbIaqoKZ7NyODEZgtZaHZ0jih5i2uvDn5sJluxyC5rJdZL%2Boi5LZQqMBS5azfQHvsqMbtMg8h06bdJyT1G2EY1aOtTclkKYpSZV7%2Fjlzg9Mqqor9jIoF4yZrTExK0Fb1c9XD9sx0byjr2klZpAK3YFWZSllUDu1OABcdtS5RWAFfuHauDmkYFPuukQS45MGAs3tFUHuuWmlmef172lwLqqu0E5CJHfeZZN%2BhU9XJNJMHkAiQ3UQUFOnxkD5oLH5n44CztGuJTDzvaROwuAiq1RvOe976YmvuWV8a%2F0iessZOg5E4r7%2B%2F%2BSeenaV6tglRfQmPYCsZYwyfSkCuL%2FzmdSH%2BBDgFbIIjr9%2FB2oBn6iypu8m4Q9PI8jnaR2snKCxpXADzCZPovP%2FDiqIX7GL0ak4yxTJ8ytK0GMrY3pTGQqqiQyvpsiX4fDev3TZxj5vNx0TmEcuIoa2irPbRT8DFILoW1jpG3PkppF%2FwuLKTTGwUc7lRhGA1%2BURQBH%2BzYzjlMEjF7rSOd53LxMrVal3t%2FM%2BKwgvxxxTeCELwnW9JcWc1NJewYBaVry7fLPXZvj02lgnHuKIakJie8eW5Fx9LFZ7KZOUaY%2FTafrm%2B679A6JJxLLK9013sPUMQMIqcttAGOqUB1VoOQghgZzbdzsskffh7UxMH%2FIIzNZq6IwKkHgfwuXr0hoZ9TpBFsmWFk%2BKAlvxX3d2Uu5kwqeY6uXzGdfbaOkqw0gXjsjfI0jmyCsK5DpWPIK4Y%2Fwgpg3NzaTYHHKAEH%2BWHtkkbA2sOBMO2lz5EbYz1XRiIkROq11nZljDPgLKBtJ9afgoa8nRj%2B3%2BpmsAPj2XvhLOZhYUM5LVSqSZ7fMbL7CtV&X-Amz-Signature=3b36d53e600a6f7bee898e79335287adc8d28967fe3440e42b731c8fe91c79c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S2V5DTFG%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIBUviN8ymyH94hdCgD9JiE3mSd7uYTF3VZkPZecc%2FzeCAiEAh2TfGRDtW0nvpoX4NimMERbdojwKJq5TKlqvqLCL9g4qiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKiz95dQkGD1iB7keyrcA6DPrbIaqoKZ7NyODEZgtZaHZ0jih5i2uvDn5sJluxyC5rJdZL%2Boi5LZQqMBS5azfQHvsqMbtMg8h06bdJyT1G2EY1aOtTclkKYpSZV7%2Fjlzg9Mqqor9jIoF4yZrTExK0Fb1c9XD9sx0byjr2klZpAK3YFWZSllUDu1OABcdtS5RWAFfuHauDmkYFPuukQS45MGAs3tFUHuuWmlmef172lwLqqu0E5CJHfeZZN%2BhU9XJNJMHkAiQ3UQUFOnxkD5oLH5n44CztGuJTDzvaROwuAiq1RvOe976YmvuWV8a%2F0iessZOg5E4r7%2B%2F%2BSeenaV6tglRfQmPYCsZYwyfSkCuL%2FzmdSH%2BBDgFbIIjr9%2FB2oBn6iypu8m4Q9PI8jnaR2snKCxpXADzCZPovP%2FDiqIX7GL0ak4yxTJ8ytK0GMrY3pTGQqqiQyvpsiX4fDev3TZxj5vNx0TmEcuIoa2irPbRT8DFILoW1jpG3PkppF%2FwuLKTTGwUc7lRhGA1%2BURQBH%2BzYzjlMEjF7rSOd53LxMrVal3t%2FM%2BKwgvxxxTeCELwnW9JcWc1NJewYBaVry7fLPXZvj02lgnHuKIakJie8eW5Fx9LFZ7KZOUaY%2FTafrm%2B679A6JJxLLK9013sPUMQMIqcttAGOqUB1VoOQghgZzbdzsskffh7UxMH%2FIIzNZq6IwKkHgfwuXr0hoZ9TpBFsmWFk%2BKAlvxX3d2Uu5kwqeY6uXzGdfbaOkqw0gXjsjfI0jmyCsK5DpWPIK4Y%2Fwgpg3NzaTYHHKAEH%2BWHtkkbA2sOBMO2lz5EbYz1XRiIkROq11nZljDPgLKBtJ9afgoa8nRj%2B3%2BpmsAPj2XvhLOZhYUM5LVSqSZ7fMbL7CtV&X-Amz-Signature=2eb28419d2cb5d475e53febc874b15c1857d1d9e9a3b06bc8deee8cff7a55c99&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GZRGQWB%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJIMEYCIQCpPiK2j4ee4%2F%2Fz8jKbqxgpY7b8f2v4dyhrYGVRRpP3dwIhAKK16t%2BsbvDpmyrxxQuzaHgRftCcAY68M7PmwvE%2FclWdKogECOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzF8IdVhTgAxNBLYOAq3AO5ltRQ4rEsJRSlLtiABScxGPhgSGelieWiXuqOy7ctHvVQguwrTRymMWfKzERhsQk8iWQeFpqjdYV%2BJHZRi0QiVqhxd18V%2FK%2FSiDQSRg5av%2Fj8AVBLISvtyAbWmpNGW%2B36Ob96KFW%2Btd5%2FrXEomcWqXlTC4XzEGLcd0OHijgalsmBOlMvtvK67S6%2Fhc5tSU4nOVc6PgQVASUmXYyqmipHJPezlh%2BbINvAmuCAa%2BjEMs1jTVYhvVHvULQ%2FWLBQvFyqAnoyJiM2fcUkUa326kMCgVHe434OdUD%2Fb7Vy3uYee9yalWGVaZ%2BB9cEQLXnGutWolrhOqaqozpfDeHp9gHbt4MfkblncRTm4jTP9wA01A09ON7VkQP%2BWLuAHagGqJfyzlUaeE9Xt7O3hD1yoxj%2BCq8qhm1i6x%2B8U9iNNAsWEM%2F6FM%2FHVIb7twQ%2BPHt0KKKxhVH%2BSPt5pTw6E2CbJN5%2FfTG3IM16E7rPSNzKAlCL51u1Ba80TI2jEYqevcZ84GwU6ZtIjChAE10vC1sWFVwHxzl1RBjWdxsZdGKhLMoxj27sLdssIiX4W52qDgs0fUiTvj%2FFKZ6WxIa0e2tHU3Z1B02eiO5ZbVV%2FuqV6p%2BALsq%2BlCKs%2F%2BHEyXD6hbCDTDam7bQBjqkAd0odhN01s6StKjtHvdtJCM4Tc%2BK1n7fm7pG6nJ97yvMpLLJBHQz5jV1pYJjerQ3GgjCRKIRTxfx0mPrJhDod8%2Fta5VR8x8ZAy79gNoBswXNaFTFkvpklhaPOFQ7diQnQ2y2%2B6yYVA0FCPX6rCwU2RaatfqZEMbQ61ShvQDEj5AzToEo715UNdjoGN9UJTsde1hN4R%2BRx%2B7CDfwPIOO%2BPA0MxBOf&X-Amz-Signature=9f149c469648f835a270fa864bccaa40c750ea15ff3a828e66a097140fa6ae71&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GWGXG3C%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIQCZKIXuAJoGpuiXhdNC6UkIJaUT6Vk4waD1vRUPr4DC%2FQIgLVlKjS5uTyHTxngmFD%2BBDOtyLvroVAJkEtwSONSm0x4qiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDL6Pwf16WmpH88aYCrcA%2FHDIz3ExoAl8G59j8pQQmqU0cMLu2D5XatU9q8vwmkpqcRHQ3FFkXqxS0a%2BqAKo%2Fd%2BK%2FbGFZOui4a8P8YcxfpcBetjnndVY7SyhBuk4SlskpQIurM0SZz%2FY7GLiYLGSEyGTylIUkCZ3MhitDgiDFZ6Nm8ROfDaieGaXG1CxHz2rpL%2B1lNmlDLZkg0YY7406pVMprb%2F2ux3yEbIyuAv4csju7wnf3nxMMvE%2BOnGai0Utf6pTl3v0SI3An591zDNFDvFji92Y1f8H%2F%2FpCnqlA4QjKVzdAZ72U9JJI4Ri3%2FrBz184Xjya%2BQQO3cRDabTOLiVZV8VYRRhO%2F3AgARMFP%2FcWiOdKvuPLHn9%2FraH%2FYZJeas%2BZ0joTWIfCyX%2Bp7UqSKA2n7ukKOS8%2FPBOy1XLns4ACAaTOnW2Nn7j8ExVGdzZaY%2FW0IEvWD0TGd58cifzZOBIO75lLZF1eZM0wkDpk2yIVbKeN2ZUtaHh57Yopfbd1USco1GwLMs0I2ei1Khq4psgGyvoX5DYlKCSmXVIpWBlNwoQFt7TPOmCDGzohRZbsc%2BcFK%2FyzpsdD2h60zy9Lw4Z9pvmeN5iNbSlkNSsh4hjyZiGH9jbRcRxZWTDInMA6H5SegCWeI1NNmtWGdMLGcttAGOqUBtYJsIzrznjc2HAhGW3TFRTm1j2lsaNFwoy9zX%2Biyyzc8T1lNc2hYpytE8yblDRDHzvBNsEuY0hE7Sfyd6xzrxeRJwlJvF9PtlRDpk4nMJuzohrI17U8EMo%2B%2Fj8CBoYNzRQVXO%2BJnJZRn6smKkp3Npv07DYDySrAgklO4i9vj2o8GC34YniofTmHSs4U8FcIWWMwFQgYAKUfaK1W3TPXlsJSESW48&X-Amz-Signature=ab9fa0e4c8cc1ad38a2b78d5129459a59bb555c3625f9c46eb044b2abdc16b7a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GWGXG3C%2F20260520%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260520T104913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIQCZKIXuAJoGpuiXhdNC6UkIJaUT6Vk4waD1vRUPr4DC%2FQIgLVlKjS5uTyHTxngmFD%2BBDOtyLvroVAJkEtwSONSm0x4qiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDL6Pwf16WmpH88aYCrcA%2FHDIz3ExoAl8G59j8pQQmqU0cMLu2D5XatU9q8vwmkpqcRHQ3FFkXqxS0a%2BqAKo%2Fd%2BK%2FbGFZOui4a8P8YcxfpcBetjnndVY7SyhBuk4SlskpQIurM0SZz%2FY7GLiYLGSEyGTylIUkCZ3MhitDgiDFZ6Nm8ROfDaieGaXG1CxHz2rpL%2B1lNmlDLZkg0YY7406pVMprb%2F2ux3yEbIyuAv4csju7wnf3nxMMvE%2BOnGai0Utf6pTl3v0SI3An591zDNFDvFji92Y1f8H%2F%2FpCnqlA4QjKVzdAZ72U9JJI4Ri3%2FrBz184Xjya%2BQQO3cRDabTOLiVZV8VYRRhO%2F3AgARMFP%2FcWiOdKvuPLHn9%2FraH%2FYZJeas%2BZ0joTWIfCyX%2Bp7UqSKA2n7ukKOS8%2FPBOy1XLns4ACAaTOnW2Nn7j8ExVGdzZaY%2FW0IEvWD0TGd58cifzZOBIO75lLZF1eZM0wkDpk2yIVbKeN2ZUtaHh57Yopfbd1USco1GwLMs0I2ei1Khq4psgGyvoX5DYlKCSmXVIpWBlNwoQFt7TPOmCDGzohRZbsc%2BcFK%2FyzpsdD2h60zy9Lw4Z9pvmeN5iNbSlkNSsh4hjyZiGH9jbRcRxZWTDInMA6H5SegCWeI1NNmtWGdMLGcttAGOqUBtYJsIzrznjc2HAhGW3TFRTm1j2lsaNFwoy9zX%2Biyyzc8T1lNc2hYpytE8yblDRDHzvBNsEuY0hE7Sfyd6xzrxeRJwlJvF9PtlRDpk4nMJuzohrI17U8EMo%2B%2Fj8CBoYNzRQVXO%2BJnJZRn6smKkp3Npv07DYDySrAgklO4i9vj2o8GC34YniofTmHSs4U8FcIWWMwFQgYAKUfaK1W3TPXlsJSESW48&X-Amz-Signature=2cc4be9328eeeb8ed888698de6c06888f5a1f5bc93d7421062e7fca3402cc934&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
