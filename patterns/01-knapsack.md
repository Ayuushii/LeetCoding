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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VEHQ66O%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB98lxFhp6QhOhnSmhlynnn6oJtPpA%2Biq%2BjqOj0TDXrXAiB26NjjrOquDP2qLueQLfyGibkRdu%2FhYxKKb7BUr3V1myr%2FAwhbEAAaDDYzNzQyMzE4MzgwNSIMKNQ%2BFfG1x%2BZzVhVIKtwDgHjRvU8HXFwES9FmyL%2F6XDgffZX5uI9w0xItuYRQa4QHEuEf0NaRWqJ4aJQ1XoNRWB6jmJcy7KxfLWDSqhsZL0R71zi0wHm5ynVo%2BOE%2FpTLGrbYJyKRBFnatHYLQTGLtBmO8SmPi9UWEe207kuQBXC7x04o38CzODcjOBS7XFM3bgar5v86eBQt%2BEvSHQrEIq5xK0o5PGlYyhRgEmJWk5mm1npTMYXqZGxwXZIH6W8bQl3UTTmEl03uH7M8ffdSWIIT50ofPRbDvf5NnEEgBNtgYf4YzhOZp9UhkQrNDa9lhviUo%2FfFkZ433cZ0WZmQYRgJVJYAh0nEuqTEkRejL155Lm4EzyQcm7fDJ233yzUaQHPCerYOJyV2azKWi4xUglW1N6SJ1wh5sZnBXz%2Biy%2B9AOXUaod5NlSvkdwRnKTK9DAoZUqavYQn4EPXK%2FDCHU6EZxiLD0Q8WFVqdjERUsJUrtYLUblHWNXirAv17PUl5nR6ASic2PwGTneboGYBN6FWiFoiV2E9sKCS5YUT9SKtZCOOKaYgVL3pc%2B0lJKfRpANYbzvoJ0UwtNB04QbC3yV3evMndYOBsmU68pgJ8Xq0IN9S5CYwDjEmV9QZhJZLB%2B9jKQ%2BCFOdHNT%2Fc4w9raW0AY6pgEzN1p0rLqfI3bLS9G%2B98clFOfAlwGLp4gZCkoQo79c1g5zEBsqLDN3P94Ew3e7Zkucf39%2FNmiyfV82NvypwoMNWHOaZ2%2BKq7U0mjFgVK%2F%2Fs%2FbkLsRuL6EI2wRCa0Z0mYxd387RsfuhcnjAYHoe4l0P3LCp2VZ%2BZf9VwXRp%2FgnQJ1tgbdjHnmDSi6W0B%2FI%2FKnt6K4nLmu1IuA6%2Fsm6oqQGyFTs%2FKx%2FJ&X-Amz-Signature=453989f6078ef4abdb73acde5e581dfcc4d80afcfb084a5eb6408dbd5e3e1472&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VEHQ66O%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB98lxFhp6QhOhnSmhlynnn6oJtPpA%2Biq%2BjqOj0TDXrXAiB26NjjrOquDP2qLueQLfyGibkRdu%2FhYxKKb7BUr3V1myr%2FAwhbEAAaDDYzNzQyMzE4MzgwNSIMKNQ%2BFfG1x%2BZzVhVIKtwDgHjRvU8HXFwES9FmyL%2F6XDgffZX5uI9w0xItuYRQa4QHEuEf0NaRWqJ4aJQ1XoNRWB6jmJcy7KxfLWDSqhsZL0R71zi0wHm5ynVo%2BOE%2FpTLGrbYJyKRBFnatHYLQTGLtBmO8SmPi9UWEe207kuQBXC7x04o38CzODcjOBS7XFM3bgar5v86eBQt%2BEvSHQrEIq5xK0o5PGlYyhRgEmJWk5mm1npTMYXqZGxwXZIH6W8bQl3UTTmEl03uH7M8ffdSWIIT50ofPRbDvf5NnEEgBNtgYf4YzhOZp9UhkQrNDa9lhviUo%2FfFkZ433cZ0WZmQYRgJVJYAh0nEuqTEkRejL155Lm4EzyQcm7fDJ233yzUaQHPCerYOJyV2azKWi4xUglW1N6SJ1wh5sZnBXz%2Biy%2B9AOXUaod5NlSvkdwRnKTK9DAoZUqavYQn4EPXK%2FDCHU6EZxiLD0Q8WFVqdjERUsJUrtYLUblHWNXirAv17PUl5nR6ASic2PwGTneboGYBN6FWiFoiV2E9sKCS5YUT9SKtZCOOKaYgVL3pc%2B0lJKfRpANYbzvoJ0UwtNB04QbC3yV3evMndYOBsmU68pgJ8Xq0IN9S5CYwDjEmV9QZhJZLB%2B9jKQ%2BCFOdHNT%2Fc4w9raW0AY6pgEzN1p0rLqfI3bLS9G%2B98clFOfAlwGLp4gZCkoQo79c1g5zEBsqLDN3P94Ew3e7Zkucf39%2FNmiyfV82NvypwoMNWHOaZ2%2BKq7U0mjFgVK%2F%2Fs%2FbkLsRuL6EI2wRCa0Z0mYxd387RsfuhcnjAYHoe4l0P3LCp2VZ%2BZf9VwXRp%2FgnQJ1tgbdjHnmDSi6W0B%2FI%2FKnt6K4nLmu1IuA6%2Fsm6oqQGyFTs%2FKx%2FJ&X-Amz-Signature=bb1dea32fc4c1cca6e22f1aad08865b663f3af104484df3d56bab05a0121aef9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VEHQ66O%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB98lxFhp6QhOhnSmhlynnn6oJtPpA%2Biq%2BjqOj0TDXrXAiB26NjjrOquDP2qLueQLfyGibkRdu%2FhYxKKb7BUr3V1myr%2FAwhbEAAaDDYzNzQyMzE4MzgwNSIMKNQ%2BFfG1x%2BZzVhVIKtwDgHjRvU8HXFwES9FmyL%2F6XDgffZX5uI9w0xItuYRQa4QHEuEf0NaRWqJ4aJQ1XoNRWB6jmJcy7KxfLWDSqhsZL0R71zi0wHm5ynVo%2BOE%2FpTLGrbYJyKRBFnatHYLQTGLtBmO8SmPi9UWEe207kuQBXC7x04o38CzODcjOBS7XFM3bgar5v86eBQt%2BEvSHQrEIq5xK0o5PGlYyhRgEmJWk5mm1npTMYXqZGxwXZIH6W8bQl3UTTmEl03uH7M8ffdSWIIT50ofPRbDvf5NnEEgBNtgYf4YzhOZp9UhkQrNDa9lhviUo%2FfFkZ433cZ0WZmQYRgJVJYAh0nEuqTEkRejL155Lm4EzyQcm7fDJ233yzUaQHPCerYOJyV2azKWi4xUglW1N6SJ1wh5sZnBXz%2Biy%2B9AOXUaod5NlSvkdwRnKTK9DAoZUqavYQn4EPXK%2FDCHU6EZxiLD0Q8WFVqdjERUsJUrtYLUblHWNXirAv17PUl5nR6ASic2PwGTneboGYBN6FWiFoiV2E9sKCS5YUT9SKtZCOOKaYgVL3pc%2B0lJKfRpANYbzvoJ0UwtNB04QbC3yV3evMndYOBsmU68pgJ8Xq0IN9S5CYwDjEmV9QZhJZLB%2B9jKQ%2BCFOdHNT%2Fc4w9raW0AY6pgEzN1p0rLqfI3bLS9G%2B98clFOfAlwGLp4gZCkoQo79c1g5zEBsqLDN3P94Ew3e7Zkucf39%2FNmiyfV82NvypwoMNWHOaZ2%2BKq7U0mjFgVK%2F%2Fs%2FbkLsRuL6EI2wRCa0Z0mYxd387RsfuhcnjAYHoe4l0P3LCp2VZ%2BZf9VwXRp%2FgnQJ1tgbdjHnmDSi6W0B%2FI%2FKnt6K4nLmu1IuA6%2Fsm6oqQGyFTs%2FKx%2FJ&X-Amz-Signature=9a8e610e9e46882bae669eb1a5fcde1fd202228623912210aee4cbf9912f01ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664MGVBKFP%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFk6cr1JkSYaeuDpXeAv0WWEhqKLOnOL1tMTQIPCj%2FjAiAzSCizh2CDU41pWfQfHziJqpQnyyMslXzmFaDTlAOcxCr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMKWDfIiCU5ldgIDIwKtwDJfpXHZl2YJZ%2FZ0Bh5Na8HfSdUe5TW2zVY996Ghcd0TYAGMn%2FPoEdbJ6Usf6%2B3Cm2gtBtA8Ox5EYX%2BUrmzZHnVdx%2FRv9x2h9up4d%2Bdu1%2BNe2Pc2Uc4FZtQfmDZuXC5fHnIjOcSF1yRbmlhAYPlbM%2BeJo6QyOW%2Bdm%2FwVpQyEqa4EMAcRze4VncBPlCuycjeOwoRxJOot394WERu5mVWIMmf7XseqZdP7Ud2Lk50baLvihTquoPFJmsrwyRGWF1b4nI96VpuhT0AawyOj0%2BGfe3QlYSg83x7kJhc%2F1H88Bruz1GeZNTkJKzcYLd1izv9r0M%2FpgFBJlOdIl38356i64Z9dXo2oy4jbQT3IvZMSysqR1aZ1lVpZksb%2F85LlgeyvcQsuGrb1bmTJ8FPMNKtLqEXFqG7P3piDRy3uyvuEk%2FOu%2BhBSqAMJUkxIV6s%2F8vfBZJLeHgQVz6ZXr4Is8O0rdycNyNYM0rhGyI%2BbDRCy8tAG%2BK80fTPeDu8g5Kvaw7U8zTD8gnq8Aq8ZkFx7HO4etqZWfR%2FHVeBE9pYZGI00npHEVkW2SgDY8RrQpUBunssy5EYGelbM7AC5YSg9FBEA2yuic7825oWTnMO%2FrBjsZC3aX%2BTpRCmcduu4YYrVUwwNOV0AY6pgE2H044vgkE%2BMWd4Rxov4v2zWRIFyQD7F5mwl0uU61s2wGwERz94%2Faf7DCCCEEoA0MwaCLvNpU%2F8gtyU2JjPSDy7xs4Mxn%2BObnWLtxA3dumQrWzsa00wvnEThwqEEL0AHXxGk6tVylmSUtEGq%2F0DiDxR9jOXZOCLQnynmZmiZs3cEa97Or2fNEDxGdqFckEM8CrVKrYxZPgNM3Ma3DMrovF0PHM3cSb&X-Amz-Signature=909055f2fe74c0b3a4a607bf5028a5ce69f7b85f94d584fef69c501690cd3e15&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664MGVBKFP%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFk6cr1JkSYaeuDpXeAv0WWEhqKLOnOL1tMTQIPCj%2FjAiAzSCizh2CDU41pWfQfHziJqpQnyyMslXzmFaDTlAOcxCr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMKWDfIiCU5ldgIDIwKtwDJfpXHZl2YJZ%2FZ0Bh5Na8HfSdUe5TW2zVY996Ghcd0TYAGMn%2FPoEdbJ6Usf6%2B3Cm2gtBtA8Ox5EYX%2BUrmzZHnVdx%2FRv9x2h9up4d%2Bdu1%2BNe2Pc2Uc4FZtQfmDZuXC5fHnIjOcSF1yRbmlhAYPlbM%2BeJo6QyOW%2Bdm%2FwVpQyEqa4EMAcRze4VncBPlCuycjeOwoRxJOot394WERu5mVWIMmf7XseqZdP7Ud2Lk50baLvihTquoPFJmsrwyRGWF1b4nI96VpuhT0AawyOj0%2BGfe3QlYSg83x7kJhc%2F1H88Bruz1GeZNTkJKzcYLd1izv9r0M%2FpgFBJlOdIl38356i64Z9dXo2oy4jbQT3IvZMSysqR1aZ1lVpZksb%2F85LlgeyvcQsuGrb1bmTJ8FPMNKtLqEXFqG7P3piDRy3uyvuEk%2FOu%2BhBSqAMJUkxIV6s%2F8vfBZJLeHgQVz6ZXr4Is8O0rdycNyNYM0rhGyI%2BbDRCy8tAG%2BK80fTPeDu8g5Kvaw7U8zTD8gnq8Aq8ZkFx7HO4etqZWfR%2FHVeBE9pYZGI00npHEVkW2SgDY8RrQpUBunssy5EYGelbM7AC5YSg9FBEA2yuic7825oWTnMO%2FrBjsZC3aX%2BTpRCmcduu4YYrVUwwNOV0AY6pgE2H044vgkE%2BMWd4Rxov4v2zWRIFyQD7F5mwl0uU61s2wGwERz94%2Faf7DCCCEEoA0MwaCLvNpU%2F8gtyU2JjPSDy7xs4Mxn%2BObnWLtxA3dumQrWzsa00wvnEThwqEEL0AHXxGk6tVylmSUtEGq%2F0DiDxR9jOXZOCLQnynmZmiZs3cEa97Or2fNEDxGdqFckEM8CrVKrYxZPgNM3Ma3DMrovF0PHM3cSb&X-Amz-Signature=80e0bc120005d8870b1728ee94802a15188f7ac13b70d873420cd63cfca192f3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664MGVBKFP%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFk6cr1JkSYaeuDpXeAv0WWEhqKLOnOL1tMTQIPCj%2FjAiAzSCizh2CDU41pWfQfHziJqpQnyyMslXzmFaDTlAOcxCr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMKWDfIiCU5ldgIDIwKtwDJfpXHZl2YJZ%2FZ0Bh5Na8HfSdUe5TW2zVY996Ghcd0TYAGMn%2FPoEdbJ6Usf6%2B3Cm2gtBtA8Ox5EYX%2BUrmzZHnVdx%2FRv9x2h9up4d%2Bdu1%2BNe2Pc2Uc4FZtQfmDZuXC5fHnIjOcSF1yRbmlhAYPlbM%2BeJo6QyOW%2Bdm%2FwVpQyEqa4EMAcRze4VncBPlCuycjeOwoRxJOot394WERu5mVWIMmf7XseqZdP7Ud2Lk50baLvihTquoPFJmsrwyRGWF1b4nI96VpuhT0AawyOj0%2BGfe3QlYSg83x7kJhc%2F1H88Bruz1GeZNTkJKzcYLd1izv9r0M%2FpgFBJlOdIl38356i64Z9dXo2oy4jbQT3IvZMSysqR1aZ1lVpZksb%2F85LlgeyvcQsuGrb1bmTJ8FPMNKtLqEXFqG7P3piDRy3uyvuEk%2FOu%2BhBSqAMJUkxIV6s%2F8vfBZJLeHgQVz6ZXr4Is8O0rdycNyNYM0rhGyI%2BbDRCy8tAG%2BK80fTPeDu8g5Kvaw7U8zTD8gnq8Aq8ZkFx7HO4etqZWfR%2FHVeBE9pYZGI00npHEVkW2SgDY8RrQpUBunssy5EYGelbM7AC5YSg9FBEA2yuic7825oWTnMO%2FrBjsZC3aX%2BTpRCmcduu4YYrVUwwNOV0AY6pgE2H044vgkE%2BMWd4Rxov4v2zWRIFyQD7F5mwl0uU61s2wGwERz94%2Faf7DCCCEEoA0MwaCLvNpU%2F8gtyU2JjPSDy7xs4Mxn%2BObnWLtxA3dumQrWzsa00wvnEThwqEEL0AHXxGk6tVylmSUtEGq%2F0DiDxR9jOXZOCLQnynmZmiZs3cEa97Or2fNEDxGdqFckEM8CrVKrYxZPgNM3Ma3DMrovF0PHM3cSb&X-Amz-Signature=b14cde11167a0891be436f8c8e19d664d9e246682a8781104b9971337b43cad8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664MGVBKFP%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101321Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDFk6cr1JkSYaeuDpXeAv0WWEhqKLOnOL1tMTQIPCj%2FjAiAzSCizh2CDU41pWfQfHziJqpQnyyMslXzmFaDTlAOcxCr%2FAwhXEAAaDDYzNzQyMzE4MzgwNSIMKWDfIiCU5ldgIDIwKtwDJfpXHZl2YJZ%2FZ0Bh5Na8HfSdUe5TW2zVY996Ghcd0TYAGMn%2FPoEdbJ6Usf6%2B3Cm2gtBtA8Ox5EYX%2BUrmzZHnVdx%2FRv9x2h9up4d%2Bdu1%2BNe2Pc2Uc4FZtQfmDZuXC5fHnIjOcSF1yRbmlhAYPlbM%2BeJo6QyOW%2Bdm%2FwVpQyEqa4EMAcRze4VncBPlCuycjeOwoRxJOot394WERu5mVWIMmf7XseqZdP7Ud2Lk50baLvihTquoPFJmsrwyRGWF1b4nI96VpuhT0AawyOj0%2BGfe3QlYSg83x7kJhc%2F1H88Bruz1GeZNTkJKzcYLd1izv9r0M%2FpgFBJlOdIl38356i64Z9dXo2oy4jbQT3IvZMSysqR1aZ1lVpZksb%2F85LlgeyvcQsuGrb1bmTJ8FPMNKtLqEXFqG7P3piDRy3uyvuEk%2FOu%2BhBSqAMJUkxIV6s%2F8vfBZJLeHgQVz6ZXr4Is8O0rdycNyNYM0rhGyI%2BbDRCy8tAG%2BK80fTPeDu8g5Kvaw7U8zTD8gnq8Aq8ZkFx7HO4etqZWfR%2FHVeBE9pYZGI00npHEVkW2SgDY8RrQpUBunssy5EYGelbM7AC5YSg9FBEA2yuic7825oWTnMO%2FrBjsZC3aX%2BTpRCmcduu4YYrVUwwNOV0AY6pgE2H044vgkE%2BMWd4Rxov4v2zWRIFyQD7F5mwl0uU61s2wGwERz94%2Faf7DCCCEEoA0MwaCLvNpU%2F8gtyU2JjPSDy7xs4Mxn%2BObnWLtxA3dumQrWzsa00wvnEThwqEEL0AHXxGk6tVylmSUtEGq%2F0DiDxR9jOXZOCLQnynmZmiZs3cEa97Or2fNEDxGdqFckEM8CrVKrYxZPgNM3Ma3DMrovF0PHM3cSb&X-Amz-Signature=6b3a379fcf6d000b13498cc5fecc8975553384994c3cd77bd535e2428854862b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUVFJXGD%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC6zmzRw8k%2BYdS%2FV118qLzDEGtoEyuFWsPrsKcqEfZdVwIgb84DtyrxIDrZix5oLiAD4H2eJfiil%2FTSLzJ2aB0MQ28q%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDLZuqUy4RdRGo%2BuDZSrcA1iEnvEv35sFq4o4hZU95mpJv0IMnOjG9cVCfC6WQs7MXRRcptA0A8aHQrpMW9QwXH%2Fy4q8OsHLowU7%2FIjuo6HaaYeSZ0xL95chNCeRCZ5WVdLxhhPqWIu%2BHSg78A7DjJqkFYlSryIFghIO%2BuasZExwmUnz8GlNo0y0KiJ9DkxsLRP2QEfDzsihjTy0frz0t3aw2U1J7a7RFKlagUgMdRCLZYGOh6n8ZDo8DrqRU8FbsozOwFEBDx7BLw7tASwcrvNT7qR4kDlLpPwYIMSr2dnB26lSD4mRJnh6ukTTYdYmfLGy%2Fp%2FnTOb6VSasdUqwetMG7uIwb0LmgrNi5hwJrQoXaVVoGjbvndhWlYxvHr3BWmUqlZ9OTBceDIx4ttw741hohzcl57wLJhTKkIPcqh6f7E%2BysBkmALFey5OiNEdm6dyo4NgWQHMFncCASiv0ET93Yr8EQbrAcrR4Ol3%2BWCAaON7sRl9eCdxb9cljzP6yHzdbYzOlDwPYhZJM19bogsNI9Cr%2FNjTjNmoyDpMiy4hIge1G2CIWEAw2CPv1NBvmv1K%2FSwNztYyiu7mvt87rawm8f6mu4%2BHIwNhhvnaYMlnvNyyHnyquU8JYBAnQZ7vL%2BVgSC9w%2B8PN8SHNEdMPHRldAGOqUBmn3rlUOo0a7T468XAtRfj8YfIPQnCOfqd28Uv3lBWxvLlu3pZLkVknYFlNGlIh95zpvpGSMW%2BvtBD%2BRbhcILBw3xHcv0z21vWV5xhnCAiy5iFeqdYZ%2Fl5BlmqycrayU2452mVtuOFWxsJQh97gnuXpYKCq4z%2Byl8CeJOv5hUk8VtxfbRu3ukOFjsFMy%2BlqJ%2From99zu09Vusw9VCHNJ9WPg6VHrH&X-Amz-Signature=287d9392a7311b5b4c70095c1f9b443bac214c143ece640f22664f154f94afd3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U2S473UW%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFAJaX7OBIp61Wn8Q51SZiSxst9oh%2B4Tx96xIUM1yXHkAiEA%2F4AjivtVWINNOo8DmOQyPT5cVRAwcHGmKoiQc21s6i4q%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDAm4nvdDhnMePCOAaircA5ikEAqzoKhyCQKafpPTu2nthsdwSz1KRKDWovn2%2BYqzbQtBmHsVzifqJBmjRbLfYb3jhZ1whyvYn9pf8ZE%2B8optFGVrIovOzjoebp6%2BfDVPCKa%2FjR8eCGCBQ7PH2GabsXPul8MtxtyJM8K9tn7U3C0cQ1TGNUIvC%2ByKxZC5b1%2BDGEMGSbHvudjiPjbyUHoeY7hoe3WG%2BYWrNXGdB6nyaRvJMUXWtBFsNi%2FOyZULeJ%2BKF1elDhWX0Sc3Q1OOp0qCb8cnkpI6K76LPoJq7F65OHuSaJHtb1yW471AogBdj4vEKI0paOlEcsLdpe9q0BjUaMZPwiZFU8DU%2B6LFCjfdFRnSlO2l6bIHtTlpVPI5x5VMRRDWIYxiMzBEZy016Q1FnHJ4r3Nen%2F0vSfO2MG3lNBq0MgK0Y9uyVcS%2FMaPtgDqZBe3e6Udv6teoiKCB2a2gcaAdDb%2BaVRVJDxBZOz%2BeHB8GianuBtjxifuP2cV%2FL%2FRVLCjl7PZvIzdvXHWqD11Yx0SkouVgK5s%2BUBOx6JULpacAUwzcJwIUgj34iF8LgpHZ9UAvIp35BV51M5ng3tGPp%2BV2nnnQpAXh0K9XVAwgH3IGqrVlbURBa9SsIe0DsxLQWo%2F16czw6UWWFfERMPLQldAGOqUBrrEVO6GWZoVAJEQ%2BSD0vhdewG6tKiRhTBG3%2Bc8iTX8w%2BbbPrnuM%2BfnnfpBnqz%2FdcpOdaH9YdaAQkVdl21y2MzWF8deODCDyFZynara4vwIThe376Z%2F09Vg5yOrkWD4tapEpTXgK57bYgxtTufJrkiv1SN4NyTZe%2F6iGJig133KdfaHg6bkMFWqy6IrQ44IbdyxGFYFd3KDhF2AHwHz9WJGv06QwV&X-Amz-Signature=24c142478c97174117dca2b1db1a916cb8d6273bdaa4311cac00ff2fd0afbb2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U2S473UW%2F20260514%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260514T101324Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFAJaX7OBIp61Wn8Q51SZiSxst9oh%2B4Tx96xIUM1yXHkAiEA%2F4AjivtVWINNOo8DmOQyPT5cVRAwcHGmKoiQc21s6i4q%2FwMIVxAAGgw2Mzc0MjMxODM4MDUiDAm4nvdDhnMePCOAaircA5ikEAqzoKhyCQKafpPTu2nthsdwSz1KRKDWovn2%2BYqzbQtBmHsVzifqJBmjRbLfYb3jhZ1whyvYn9pf8ZE%2B8optFGVrIovOzjoebp6%2BfDVPCKa%2FjR8eCGCBQ7PH2GabsXPul8MtxtyJM8K9tn7U3C0cQ1TGNUIvC%2ByKxZC5b1%2BDGEMGSbHvudjiPjbyUHoeY7hoe3WG%2BYWrNXGdB6nyaRvJMUXWtBFsNi%2FOyZULeJ%2BKF1elDhWX0Sc3Q1OOp0qCb8cnkpI6K76LPoJq7F65OHuSaJHtb1yW471AogBdj4vEKI0paOlEcsLdpe9q0BjUaMZPwiZFU8DU%2B6LFCjfdFRnSlO2l6bIHtTlpVPI5x5VMRRDWIYxiMzBEZy016Q1FnHJ4r3Nen%2F0vSfO2MG3lNBq0MgK0Y9uyVcS%2FMaPtgDqZBe3e6Udv6teoiKCB2a2gcaAdDb%2BaVRVJDxBZOz%2BeHB8GianuBtjxifuP2cV%2FL%2FRVLCjl7PZvIzdvXHWqD11Yx0SkouVgK5s%2BUBOx6JULpacAUwzcJwIUgj34iF8LgpHZ9UAvIp35BV51M5ng3tGPp%2BV2nnnQpAXh0K9XVAwgH3IGqrVlbURBa9SsIe0DsxLQWo%2F16czw6UWWFfERMPLQldAGOqUBrrEVO6GWZoVAJEQ%2BSD0vhdewG6tKiRhTBG3%2Bc8iTX8w%2BbbPrnuM%2BfnnfpBnqz%2FdcpOdaH9YdaAQkVdl21y2MzWF8deODCDyFZynara4vwIThe376Z%2F09Vg5yOrkWD4tapEpTXgK57bYgxtTufJrkiv1SN4NyTZe%2F6iGJig133KdfaHg6bkMFWqy6IrQ44IbdyxGFYFd3KDhF2AHwHz9WJGv06QwV&X-Amz-Signature=c298678abe9cacfcbbb3c53342bb11e4486850bbf7977fe813b638297951f0a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
