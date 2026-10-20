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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VXVDTVQH%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJHMEUCIBEkH1dyQba7fYJ1PmTqrunvdlytf8rI4An73kqjSs%2FoAiEA0e6%2FMiH7sqelOZRuOpDcXppIU7vs3M0FrED5g6xBb7wq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDH%2FY7KNtCT%2Bwk0uwOCrcA9fOovkV8Y5o7nNngSWtbRvtb9vNSYo1j23dmLzBFh0cVKzuEz33mv2ND64nXfzSSP5sHM9xFkNuNKR7LU6zAAXbkE1HQIwHUdwd6xlLdbhR8OjyV4hVsQKKMWjmcEv85a6aS6HXHf3uGevrfZ78qSmWBrW0WrxTELqu5Nz6a%2FcYp4gV4McMSlf36LlTexHM1BpL%2BAVO05iqeV5675DVaiNtmHsVf%2BsB6R5Buv8ZoV5SQ2YjtTIhgBKZQQm%2BurI2ZYYvWJwTU3tB4aioQtU5OAr4JBrxZgv6ksXvz5EppbNAsiyPUSLzdVcRePK%2Fveu0cW%2F8EcbE9%2F0Kr0N4qc1B4FHkSALGHc8lQIkYNfAVDw9cgnQWXkdjUoi0dgtm5Hp%2BN0WSVZMq9fMi%2BcBFo4eslh5yiLEixfTIImXL6YgCZozthr0Eb8QOKRNPcyH5hEw%2BIm1fNKcdhlRQCVaySEPXD%2BKFH3fSDdXAKQ6g276hJw1%2Bugl5pLiddDWjti8Cq%2B4Cs8Xw2hQyYnaEfH4sgLkwyCzlrfNr0I4ZkWWpqo4t%2Fpw%2FNMPbE%2BD7aGHy5WEVVf%2FFQ1iaTJ4%2Bq1wZxkhQT85aJ0oCFz8N7aZgpp7p7TbtALPbjC5uthYvsUrpex3vMPCg3dYGOqUBvmhn4uo7Q02GvgOuSVZPHkVlL2FXjD9GKZLq71Hmrpszd9ARbmAtj1GzU6vgLK2EXziBW4yf0sJg8dbF4D1rJx%2B5aQ4sA9cL2DD7gQ21YuRELF878t4MgMYrIthEB4AuBpeirLl5b4p3a2B54ETNWF1F6VDfqUGy%2FogexYKu6RcVJZeNEyoPpWJUL73oQLGgiYzcfVLAQK9xiVcSUzWEnzFdPZLs&X-Amz-Signature=f2b0b9bd83ac130f4521812edc18dfd4d9639a0d78fce9c6a93d723ae3593365&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VXVDTVQH%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJHMEUCIBEkH1dyQba7fYJ1PmTqrunvdlytf8rI4An73kqjSs%2FoAiEA0e6%2FMiH7sqelOZRuOpDcXppIU7vs3M0FrED5g6xBb7wq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDH%2FY7KNtCT%2Bwk0uwOCrcA9fOovkV8Y5o7nNngSWtbRvtb9vNSYo1j23dmLzBFh0cVKzuEz33mv2ND64nXfzSSP5sHM9xFkNuNKR7LU6zAAXbkE1HQIwHUdwd6xlLdbhR8OjyV4hVsQKKMWjmcEv85a6aS6HXHf3uGevrfZ78qSmWBrW0WrxTELqu5Nz6a%2FcYp4gV4McMSlf36LlTexHM1BpL%2BAVO05iqeV5675DVaiNtmHsVf%2BsB6R5Buv8ZoV5SQ2YjtTIhgBKZQQm%2BurI2ZYYvWJwTU3tB4aioQtU5OAr4JBrxZgv6ksXvz5EppbNAsiyPUSLzdVcRePK%2Fveu0cW%2F8EcbE9%2F0Kr0N4qc1B4FHkSALGHc8lQIkYNfAVDw9cgnQWXkdjUoi0dgtm5Hp%2BN0WSVZMq9fMi%2BcBFo4eslh5yiLEixfTIImXL6YgCZozthr0Eb8QOKRNPcyH5hEw%2BIm1fNKcdhlRQCVaySEPXD%2BKFH3fSDdXAKQ6g276hJw1%2Bugl5pLiddDWjti8Cq%2B4Cs8Xw2hQyYnaEfH4sgLkwyCzlrfNr0I4ZkWWpqo4t%2Fpw%2FNMPbE%2BD7aGHy5WEVVf%2FFQ1iaTJ4%2Bq1wZxkhQT85aJ0oCFz8N7aZgpp7p7TbtALPbjC5uthYvsUrpex3vMPCg3dYGOqUBvmhn4uo7Q02GvgOuSVZPHkVlL2FXjD9GKZLq71Hmrpszd9ARbmAtj1GzU6vgLK2EXziBW4yf0sJg8dbF4D1rJx%2B5aQ4sA9cL2DD7gQ21YuRELF878t4MgMYrIthEB4AuBpeirLl5b4p3a2B54ETNWF1F6VDfqUGy%2FogexYKu6RcVJZeNEyoPpWJUL73oQLGgiYzcfVLAQK9xiVcSUzWEnzFdPZLs&X-Amz-Signature=d242197f03d67db50e172ff6a1f60741fe4d1bd5ac20172a7eff9644c1b77c0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VXVDTVQH%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJHMEUCIBEkH1dyQba7fYJ1PmTqrunvdlytf8rI4An73kqjSs%2FoAiEA0e6%2FMiH7sqelOZRuOpDcXppIU7vs3M0FrED5g6xBb7wq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDH%2FY7KNtCT%2Bwk0uwOCrcA9fOovkV8Y5o7nNngSWtbRvtb9vNSYo1j23dmLzBFh0cVKzuEz33mv2ND64nXfzSSP5sHM9xFkNuNKR7LU6zAAXbkE1HQIwHUdwd6xlLdbhR8OjyV4hVsQKKMWjmcEv85a6aS6HXHf3uGevrfZ78qSmWBrW0WrxTELqu5Nz6a%2FcYp4gV4McMSlf36LlTexHM1BpL%2BAVO05iqeV5675DVaiNtmHsVf%2BsB6R5Buv8ZoV5SQ2YjtTIhgBKZQQm%2BurI2ZYYvWJwTU3tB4aioQtU5OAr4JBrxZgv6ksXvz5EppbNAsiyPUSLzdVcRePK%2Fveu0cW%2F8EcbE9%2F0Kr0N4qc1B4FHkSALGHc8lQIkYNfAVDw9cgnQWXkdjUoi0dgtm5Hp%2BN0WSVZMq9fMi%2BcBFo4eslh5yiLEixfTIImXL6YgCZozthr0Eb8QOKRNPcyH5hEw%2BIm1fNKcdhlRQCVaySEPXD%2BKFH3fSDdXAKQ6g276hJw1%2Bugl5pLiddDWjti8Cq%2B4Cs8Xw2hQyYnaEfH4sgLkwyCzlrfNr0I4ZkWWpqo4t%2Fpw%2FNMPbE%2BD7aGHy5WEVVf%2FFQ1iaTJ4%2Bq1wZxkhQT85aJ0oCFz8N7aZgpp7p7TbtALPbjC5uthYvsUrpex3vMPCg3dYGOqUBvmhn4uo7Q02GvgOuSVZPHkVlL2FXjD9GKZLq71Hmrpszd9ARbmAtj1GzU6vgLK2EXziBW4yf0sJg8dbF4D1rJx%2B5aQ4sA9cL2DD7gQ21YuRELF878t4MgMYrIthEB4AuBpeirLl5b4p3a2B54ETNWF1F6VDfqUGy%2FogexYKu6RcVJZeNEyoPpWJUL73oQLGgiYzcfVLAQK9xiVcSUzWEnzFdPZLs&X-Amz-Signature=20d27bcf7307374deaad26b1e491c3afa5d9c85d6fc20024740e2ed5d5718848&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5FRBWAE%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJGMEQCIFyQAnbjRI3u25drzoOVaWOMPci1PrbD5rlW%2BIZofpTSAiBuzDbng6sSb0hf1KxyTGyLR7sJVsxrtEaxshzB2sdL9Sr%2FAwhEEAAaDDYzNzQyMzE4MzgwNSIM3Lhk%2F%2FPBP5gNQ916KtwDrquMvVYi%2BdaoPXbkUiGy63Dac1idPXMQIKquA7gDV%2BShbsD6Ongh79pKX0SAfKiPYPzvww5p2MHTFfv1Q%2BAqrMdf5sM1%2FLqMz8d3dgQu%2BjTzI7Sn7W%2Fw25SOxxGog6d7VcRYagVeNVqKbGak2qptX0DL16umCoHOjdcHnW4A6PCkNAu0P5vFkmOKcvkXf4cCOtF3%2Bj5%2F0%2BfJlqsi200ROwK6V8QTCmFpWPCcmQxVODu5Fa5UI8WQSPXOpZVefS%2FvG4a7g38tpnHSW8dqgsinpKzuIYf2VfKHrMu6BiNIsRnLqAA6Xab7i6ril%2BRJFoMDJ96tOOKNJO85QPAVogxTISU7tWlz%2FF0IJzB2NLxfKyqN5Ig3s8ipy63pu9%2FtAxW4Zb%2B5Mtjk%2BMYh3TBpMevuqsrqqRvyp7w%2FP2HzK56XdGQMCOD%2FT6J65GOSlY0kKolhqtdNfS4W6Ib7%2BVHV%2FO3cybE8s40EAQs1V6LV8QOX%2B7PVHfNEX8jliF%2Bv%2FpSqDzSDEvCZdFPzD3z%2B%2FxX%2FnDRZ23XKbivMAiDTC%2FLoynzKHZPv30BIALLYx4LNJzyhsYwECOoizuUytOx%2BNtBELk3dNH%2F8q56Ie4HDUuIkLNM7sL9yOXpCLy0uLPd2G0MwkKHd1gY6pgFKk%2Fa5Tca83FY%2BQKaz2L0AQUsOKZXVzmxfaIPFumavqJABKZrkwwwvkWp6naHPkbxgunVlnplYI0V6WFOhXXyaPxr%2BEzECqHQQlKHW87ymD7HytSmArfTCrZ2ifnIPjGAfAr8qfjGzalczIChvtRW6vot8q%2FwNvzEl2dcaceMXmZ9BdeyxYfGbS73LtMySb%2BcwSPZNsHc%2FyO7hLwlZgWXWwtFXTvgb&X-Amz-Signature=42efede3b4063512b92c4de5519a75e857e2d1382ffeef532556b4eca3a2b520&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5FRBWAE%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJGMEQCIFyQAnbjRI3u25drzoOVaWOMPci1PrbD5rlW%2BIZofpTSAiBuzDbng6sSb0hf1KxyTGyLR7sJVsxrtEaxshzB2sdL9Sr%2FAwhEEAAaDDYzNzQyMzE4MzgwNSIM3Lhk%2F%2FPBP5gNQ916KtwDrquMvVYi%2BdaoPXbkUiGy63Dac1idPXMQIKquA7gDV%2BShbsD6Ongh79pKX0SAfKiPYPzvww5p2MHTFfv1Q%2BAqrMdf5sM1%2FLqMz8d3dgQu%2BjTzI7Sn7W%2Fw25SOxxGog6d7VcRYagVeNVqKbGak2qptX0DL16umCoHOjdcHnW4A6PCkNAu0P5vFkmOKcvkXf4cCOtF3%2Bj5%2F0%2BfJlqsi200ROwK6V8QTCmFpWPCcmQxVODu5Fa5UI8WQSPXOpZVefS%2FvG4a7g38tpnHSW8dqgsinpKzuIYf2VfKHrMu6BiNIsRnLqAA6Xab7i6ril%2BRJFoMDJ96tOOKNJO85QPAVogxTISU7tWlz%2FF0IJzB2NLxfKyqN5Ig3s8ipy63pu9%2FtAxW4Zb%2B5Mtjk%2BMYh3TBpMevuqsrqqRvyp7w%2FP2HzK56XdGQMCOD%2FT6J65GOSlY0kKolhqtdNfS4W6Ib7%2BVHV%2FO3cybE8s40EAQs1V6LV8QOX%2B7PVHfNEX8jliF%2Bv%2FpSqDzSDEvCZdFPzD3z%2B%2FxX%2FnDRZ23XKbivMAiDTC%2FLoynzKHZPv30BIALLYx4LNJzyhsYwECOoizuUytOx%2BNtBELk3dNH%2F8q56Ie4HDUuIkLNM7sL9yOXpCLy0uLPd2G0MwkKHd1gY6pgFKk%2Fa5Tca83FY%2BQKaz2L0AQUsOKZXVzmxfaIPFumavqJABKZrkwwwvkWp6naHPkbxgunVlnplYI0V6WFOhXXyaPxr%2BEzECqHQQlKHW87ymD7HytSmArfTCrZ2ifnIPjGAfAr8qfjGzalczIChvtRW6vot8q%2FwNvzEl2dcaceMXmZ9BdeyxYfGbS73LtMySb%2BcwSPZNsHc%2FyO7hLwlZgWXWwtFXTvgb&X-Amz-Signature=e1b4b2d77db4897a73e173b173c20925144cead168cc53523c0e3d53d0fed9d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5FRBWAE%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJGMEQCIFyQAnbjRI3u25drzoOVaWOMPci1PrbD5rlW%2BIZofpTSAiBuzDbng6sSb0hf1KxyTGyLR7sJVsxrtEaxshzB2sdL9Sr%2FAwhEEAAaDDYzNzQyMzE4MzgwNSIM3Lhk%2F%2FPBP5gNQ916KtwDrquMvVYi%2BdaoPXbkUiGy63Dac1idPXMQIKquA7gDV%2BShbsD6Ongh79pKX0SAfKiPYPzvww5p2MHTFfv1Q%2BAqrMdf5sM1%2FLqMz8d3dgQu%2BjTzI7Sn7W%2Fw25SOxxGog6d7VcRYagVeNVqKbGak2qptX0DL16umCoHOjdcHnW4A6PCkNAu0P5vFkmOKcvkXf4cCOtF3%2Bj5%2F0%2BfJlqsi200ROwK6V8QTCmFpWPCcmQxVODu5Fa5UI8WQSPXOpZVefS%2FvG4a7g38tpnHSW8dqgsinpKzuIYf2VfKHrMu6BiNIsRnLqAA6Xab7i6ril%2BRJFoMDJ96tOOKNJO85QPAVogxTISU7tWlz%2FF0IJzB2NLxfKyqN5Ig3s8ipy63pu9%2FtAxW4Zb%2B5Mtjk%2BMYh3TBpMevuqsrqqRvyp7w%2FP2HzK56XdGQMCOD%2FT6J65GOSlY0kKolhqtdNfS4W6Ib7%2BVHV%2FO3cybE8s40EAQs1V6LV8QOX%2B7PVHfNEX8jliF%2Bv%2FpSqDzSDEvCZdFPzD3z%2B%2FxX%2FnDRZ23XKbivMAiDTC%2FLoynzKHZPv30BIALLYx4LNJzyhsYwECOoizuUytOx%2BNtBELk3dNH%2F8q56Ie4HDUuIkLNM7sL9yOXpCLy0uLPd2G0MwkKHd1gY6pgFKk%2Fa5Tca83FY%2BQKaz2L0AQUsOKZXVzmxfaIPFumavqJABKZrkwwwvkWp6naHPkbxgunVlnplYI0V6WFOhXXyaPxr%2BEzECqHQQlKHW87ymD7HytSmArfTCrZ2ifnIPjGAfAr8qfjGzalczIChvtRW6vot8q%2FwNvzEl2dcaceMXmZ9BdeyxYfGbS73LtMySb%2BcwSPZNsHc%2FyO7hLwlZgWXWwtFXTvgb&X-Amz-Signature=99a4cf97462b8e800d1e8626c3e0e7331073624afb47c3cfaabaaad484818792&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5FRBWAE%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJGMEQCIFyQAnbjRI3u25drzoOVaWOMPci1PrbD5rlW%2BIZofpTSAiBuzDbng6sSb0hf1KxyTGyLR7sJVsxrtEaxshzB2sdL9Sr%2FAwhEEAAaDDYzNzQyMzE4MzgwNSIM3Lhk%2F%2FPBP5gNQ916KtwDrquMvVYi%2BdaoPXbkUiGy63Dac1idPXMQIKquA7gDV%2BShbsD6Ongh79pKX0SAfKiPYPzvww5p2MHTFfv1Q%2BAqrMdf5sM1%2FLqMz8d3dgQu%2BjTzI7Sn7W%2Fw25SOxxGog6d7VcRYagVeNVqKbGak2qptX0DL16umCoHOjdcHnW4A6PCkNAu0P5vFkmOKcvkXf4cCOtF3%2Bj5%2F0%2BfJlqsi200ROwK6V8QTCmFpWPCcmQxVODu5Fa5UI8WQSPXOpZVefS%2FvG4a7g38tpnHSW8dqgsinpKzuIYf2VfKHrMu6BiNIsRnLqAA6Xab7i6ril%2BRJFoMDJ96tOOKNJO85QPAVogxTISU7tWlz%2FF0IJzB2NLxfKyqN5Ig3s8ipy63pu9%2FtAxW4Zb%2B5Mtjk%2BMYh3TBpMevuqsrqqRvyp7w%2FP2HzK56XdGQMCOD%2FT6J65GOSlY0kKolhqtdNfS4W6Ib7%2BVHV%2FO3cybE8s40EAQs1V6LV8QOX%2B7PVHfNEX8jliF%2Bv%2FpSqDzSDEvCZdFPzD3z%2B%2FxX%2FnDRZ23XKbivMAiDTC%2FLoynzKHZPv30BIALLYx4LNJzyhsYwECOoizuUytOx%2BNtBELk3dNH%2F8q56Ie4HDUuIkLNM7sL9yOXpCLy0uLPd2G0MwkKHd1gY6pgFKk%2Fa5Tca83FY%2BQKaz2L0AQUsOKZXVzmxfaIPFumavqJABKZrkwwwvkWp6naHPkbxgunVlnplYI0V6WFOhXXyaPxr%2BEzECqHQQlKHW87ymD7HytSmArfTCrZ2ifnIPjGAfAr8qfjGzalczIChvtRW6vot8q%2FwNvzEl2dcaceMXmZ9BdeyxYfGbS73LtMySb%2BcwSPZNsHc%2FyO7hLwlZgWXWwtFXTvgb&X-Amz-Signature=10310336e9c05a2866f605e5dda66642b89e5f525de9ab60059ee37a29b4bee4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T37OIVVG%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJHMEUCIG2EDi%2FDyV9vRVNz%2B54QWalKqhBsJ5tImVbdwrMOZ9XpAiEAlA7ilEgsDovENcF8yIOSpfNLw0iJMhNqVl0l3OELiIYq%2FwMIRBAAGgw2Mzc0MjMxODM4MDUiDKKq9Z0PhINo5N0YJSrcA1rRafcucKtCdUfajM7BLZrI0aq7Y9W0P63MkjrLQEcZz8xim3ehFwPfckLlx17AvHuBYEcjkPxi0HcvlXwAormzwihSfXA%2BoQ66NR%2BlRr768zn9I9p%2FLHFC%2BzWeCO66r%2BAlsS90xOf059wuK2%2Bg1eS6oI%2FnplQanEsvxAFecsuuBoei4eMhd46sOyvCVMHIHjT4Hcda%2B9f1ZFjIXZ5KPQ9q19x8CoY74uYcUz7UMG%2Fpeyzr%2FxHpm2wiZr%2FQGdOYFL0i70f4dPSg6z%2BgdeZOp%2FwA%2F%2FKNdbP4JauuM8GbN5bXP6bJMPydEL6farMeWiLlZ3oTxC4VKapXo8WNxssg1yeIe84BRSo7G4g2zBXY3u9zbNby4b%2F3OGCUNThEvU4ArQ998tu%2BXbiUEnNgEqTSTqIGKXbsiAFPLSU8Y8V0uFbDqFzaIVqfyySxavIxhr%2BqCbSFG2KdwptOCaaPxHQ6fLoSmPtq2jkXz7SPUJVReAX2WEMBlKUtURP%2FEdTZyjdiMAs%2FtHRZ%2BoHqQaHypetG5x0nJQg6oOIzsgiLwkDZLaL4Jv7QN3st7FhLZq3bVyQg1UJsHvyTRm7Db9hCh6sgrxi%2Fnph2HgJvXkqY2l8j14u812v9l5%2Fm2ipHylcvMPyg3dYGOqUBBmLPMwwuls3LsAMt1EpBCEhuqxZcv6pUYV0FDtAU%2FEOdyCOwp3cF1%2B6jUngqiybwCwaSZqmhoczxGVOLAsDAYUoFkX2%2FeKrxlMBvO99gIRHsw7a%2Fd7tDdeGpXcaVIE7JODdEiCzs8g8dveXvci2FKUB9BebAUuY823d0ySgpA3SnHwutJMy07Ki1zumlSilvvXmWJm%2FOq4pAvVEbG7MHg%2BpB9Lpa&X-Amz-Signature=5ea4396bc620a87d6a270a5b2f89384e04a0397b9f967a91021d05e505ffa8fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WC2WUR43%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJIMEYCIQCNO0PIesCHb9mG2lk9wSxflgYt4sdzGw9ul6u1idEPjQIhAIObxtghJ5QRWDQlAo9Ti3Az%2FFg9bpYEFIpGRIyL9tteKv8DCEQQABoMNjM3NDIzMTgzODA1Igw%2FaapI%2BJVo80cmHo8q3APgzPINOU00HwrA%2BcEzKRhtdMqc%2FqyuoJFfes5Lbwe%2Bm4GG3Rqrx3f9gnfBThMxSNXqNf2hPZ%2BPf%2FdY6KBdQacrpKQbFNKB8EqqekxAlfbo5eOjDErw5QXyqeyHsULJd8ClU%2BFIK4spPYPQU8qiv7XIrrw5sb2LO%2FbLrRnyLslBMgkuqE21%2BC75z2MnQhrD%2BWqG8tAwy5oiK00KNKzAyVZAD2cM7OoCJFLulEkFXu7tNzEznP4Yhgd29QFXunoFOgZUCN8aJltjOPDcVgYthjg4LlgQH%2Bioe19F5oNYYW%2BG%2BjH5IM0N8qvkAVpP9IDZ2EhYzYOU%2FbUH8gqBKctgg3wjmcoFQEmZFEo7wqp8RTuHdij7qYkVD7LGCSlE%2BwooTn8pI5YSHoys1E%2FsaqWznZKxbZbMqTS9cY%2BLxXFMPCIiZQYgxXI3IKBBNuYpF5fjbezIIhfCZinqJa0otEUd4e7wLYuJtBYSuuTkxDjnoM5rM15xQDJpOsNfuhebOjRm6s5Zzoax%2Bs9rO7MVpmR1Y7nvtwowGS9yRZLXWpl5yMdIrHGiDkbHWOimscS1WS7MwG52wegMz9YoMBDng6nI4aRjovsKuA3eO9zuGRbbKnQLlyGJ8A%2B6MEU5l5KbOzCko93WBjqkAUy2PXGpSh4YqzXMpQ4b3rV6itIJsw8RTpqGkB7%2Bg%2Fc0W7BDDqFcTV9b%2F%2FlWGQP%2FycLR3xB4ipiIgTzmtkyvgBT3vksJZS2H37XtWvpyS4%2FO%2FNgcY0SA0Oc7BT%2Fcohyr7txFhCQPXmDFiBaFBSOPRVf3IB4%2FKtkBHx3mBK35RBDm6evJIOek7XByKTdnWdJ8Go1P6SjAAzMxdg0aaLjodKaz97xl&X-Amz-Signature=2e00a51cf7f7466c69946d321a3f4a18a3af215df2dd9babe15dc97f203fa414&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WC2WUR43%2F20261020%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261020T132055Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHwaCXVzLXdlc3QtMiJIMEYCIQCNO0PIesCHb9mG2lk9wSxflgYt4sdzGw9ul6u1idEPjQIhAIObxtghJ5QRWDQlAo9Ti3Az%2FFg9bpYEFIpGRIyL9tteKv8DCEQQABoMNjM3NDIzMTgzODA1Igw%2FaapI%2BJVo80cmHo8q3APgzPINOU00HwrA%2BcEzKRhtdMqc%2FqyuoJFfes5Lbwe%2Bm4GG3Rqrx3f9gnfBThMxSNXqNf2hPZ%2BPf%2FdY6KBdQacrpKQbFNKB8EqqekxAlfbo5eOjDErw5QXyqeyHsULJd8ClU%2BFIK4spPYPQU8qiv7XIrrw5sb2LO%2FbLrRnyLslBMgkuqE21%2BC75z2MnQhrD%2BWqG8tAwy5oiK00KNKzAyVZAD2cM7OoCJFLulEkFXu7tNzEznP4Yhgd29QFXunoFOgZUCN8aJltjOPDcVgYthjg4LlgQH%2Bioe19F5oNYYW%2BG%2BjH5IM0N8qvkAVpP9IDZ2EhYzYOU%2FbUH8gqBKctgg3wjmcoFQEmZFEo7wqp8RTuHdij7qYkVD7LGCSlE%2BwooTn8pI5YSHoys1E%2FsaqWznZKxbZbMqTS9cY%2BLxXFMPCIiZQYgxXI3IKBBNuYpF5fjbezIIhfCZinqJa0otEUd4e7wLYuJtBYSuuTkxDjnoM5rM15xQDJpOsNfuhebOjRm6s5Zzoax%2Bs9rO7MVpmR1Y7nvtwowGS9yRZLXWpl5yMdIrHGiDkbHWOimscS1WS7MwG52wegMz9YoMBDng6nI4aRjovsKuA3eO9zuGRbbKnQLlyGJ8A%2B6MEU5l5KbOzCko93WBjqkAUy2PXGpSh4YqzXMpQ4b3rV6itIJsw8RTpqGkB7%2Bg%2Fc0W7BDDqFcTV9b%2F%2FlWGQP%2FycLR3xB4ipiIgTzmtkyvgBT3vksJZS2H37XtWvpyS4%2FO%2FNgcY0SA0Oc7BT%2Fcohyr7txFhCQPXmDFiBaFBSOPRVf3IB4%2FKtkBHx3mBK35RBDm6evJIOek7XByKTdnWdJ8Go1P6SjAAzMxdg0aaLjodKaz97xl&X-Amz-Signature=2ee210224e543c6dbdaf64ed9dc202f8ee43cbc476eed66f09e97a9ccc6f88ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
