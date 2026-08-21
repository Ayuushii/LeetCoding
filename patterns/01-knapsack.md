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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QECYRFF%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAvTqHh2GDzSBtIp5OBderNt30mLghyZRZ5QYuKSbV74AiBMS17y0C5wGUl7uyBZhhxjVXKYjVZVsJ4ePO5WmZZ9%2BSqIBAig%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8VHV44LXa9fePjCPKtwDqAaa5F387s%2B040Zkt%2BRk79y5aNSpUGHbmPkqftORWFleLydMaQTD5THcm6HqeQKaLd2pLWBk5slnBER9rlxOMBkzoqAFWUAREBH%2FaUwkA9y2en30UOlkrqPdWwraaCpl2qhycGmaGtjL48sLUQq%2FgctNlYBv1VXKgxmQVTPREiJ%2FH1SRn%2BC5%2BXS0ZrGjpATbnBYfMtKylouS4e0Mwqn5BGmQjtN2NsVP9CQy08xeKb4u4zuszOpMfVDfV5G1pQt8iEZW4z0Bnh4zWB4bjghHBub2vqR6sL4dDVZMOZ8GP6J%2FalwrW1i62ppa0XsfYhxr4zipSsaYNLtvyPLFGk2RFtzRI30OHNsfGPS9fnj89cgtoSEZvaT6OWHlaiKATAG%2BPQ1K%2FHcdmVFzfpRDAnrMGKgC0QysQX4ZxtsoDpea1KZrhjabZ0zDBcb0DUinx0C6vgtkMcG%2FVPRnLJr64bmiFR4Bc735zj5j0bRZTUz1nwVuLkC6axstmh1RojeT2rI6FT7tB7WhPOolTiJnec7J3yqAqnXsAeZbvT4bR4jzV8ZOjmn%2BmlVTmK1082VkjlfQJwXDcQ%2FC%2FQvqHy2KJe5ZFIfs%2BDLzRLweh88VxqbugwlPD49V0o3aCyzG4fAwlOmf1AY6pgE2Lab8kdgkFgCaUAR1tRkxFwT4vUqo3w7fQt6ruvX%2B4izwerfcsxJ%2BNGKXSoq4Ikb5Hy%2FmUzapB4c0H7Jb5nlARV%2BcRyNWvB%2F6EGpWKOuSWFz1cRBiBwAnx6FkgSXwFhBlYWzChsi3cBI%2BtNec2JbjRPNN4Xb3v6IhEJy2%2Fgg0UHEljuaRmpwSDESLzgbY%2FfEKyllk%2FhEvs7EkzkKiJHeAXHU3xC%2FD&X-Amz-Signature=46e1cb4c032d7327949455be662a4365f0f9e80eeadd89d4e34edc5e0963cdb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QECYRFF%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAvTqHh2GDzSBtIp5OBderNt30mLghyZRZ5QYuKSbV74AiBMS17y0C5wGUl7uyBZhhxjVXKYjVZVsJ4ePO5WmZZ9%2BSqIBAig%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8VHV44LXa9fePjCPKtwDqAaa5F387s%2B040Zkt%2BRk79y5aNSpUGHbmPkqftORWFleLydMaQTD5THcm6HqeQKaLd2pLWBk5slnBER9rlxOMBkzoqAFWUAREBH%2FaUwkA9y2en30UOlkrqPdWwraaCpl2qhycGmaGtjL48sLUQq%2FgctNlYBv1VXKgxmQVTPREiJ%2FH1SRn%2BC5%2BXS0ZrGjpATbnBYfMtKylouS4e0Mwqn5BGmQjtN2NsVP9CQy08xeKb4u4zuszOpMfVDfV5G1pQt8iEZW4z0Bnh4zWB4bjghHBub2vqR6sL4dDVZMOZ8GP6J%2FalwrW1i62ppa0XsfYhxr4zipSsaYNLtvyPLFGk2RFtzRI30OHNsfGPS9fnj89cgtoSEZvaT6OWHlaiKATAG%2BPQ1K%2FHcdmVFzfpRDAnrMGKgC0QysQX4ZxtsoDpea1KZrhjabZ0zDBcb0DUinx0C6vgtkMcG%2FVPRnLJr64bmiFR4Bc735zj5j0bRZTUz1nwVuLkC6axstmh1RojeT2rI6FT7tB7WhPOolTiJnec7J3yqAqnXsAeZbvT4bR4jzV8ZOjmn%2BmlVTmK1082VkjlfQJwXDcQ%2FC%2FQvqHy2KJe5ZFIfs%2BDLzRLweh88VxqbugwlPD49V0o3aCyzG4fAwlOmf1AY6pgE2Lab8kdgkFgCaUAR1tRkxFwT4vUqo3w7fQt6ruvX%2B4izwerfcsxJ%2BNGKXSoq4Ikb5Hy%2FmUzapB4c0H7Jb5nlARV%2BcRyNWvB%2F6EGpWKOuSWFz1cRBiBwAnx6FkgSXwFhBlYWzChsi3cBI%2BtNec2JbjRPNN4Xb3v6IhEJy2%2Fgg0UHEljuaRmpwSDESLzgbY%2FfEKyllk%2FhEvs7EkzkKiJHeAXHU3xC%2FD&X-Amz-Signature=12c7f98331ccb5ab63485daf9be1078e19d9ccefee6dd0d801917bbadb25990f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QECYRFF%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAvTqHh2GDzSBtIp5OBderNt30mLghyZRZ5QYuKSbV74AiBMS17y0C5wGUl7uyBZhhxjVXKYjVZVsJ4ePO5WmZZ9%2BSqIBAig%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8VHV44LXa9fePjCPKtwDqAaa5F387s%2B040Zkt%2BRk79y5aNSpUGHbmPkqftORWFleLydMaQTD5THcm6HqeQKaLd2pLWBk5slnBER9rlxOMBkzoqAFWUAREBH%2FaUwkA9y2en30UOlkrqPdWwraaCpl2qhycGmaGtjL48sLUQq%2FgctNlYBv1VXKgxmQVTPREiJ%2FH1SRn%2BC5%2BXS0ZrGjpATbnBYfMtKylouS4e0Mwqn5BGmQjtN2NsVP9CQy08xeKb4u4zuszOpMfVDfV5G1pQt8iEZW4z0Bnh4zWB4bjghHBub2vqR6sL4dDVZMOZ8GP6J%2FalwrW1i62ppa0XsfYhxr4zipSsaYNLtvyPLFGk2RFtzRI30OHNsfGPS9fnj89cgtoSEZvaT6OWHlaiKATAG%2BPQ1K%2FHcdmVFzfpRDAnrMGKgC0QysQX4ZxtsoDpea1KZrhjabZ0zDBcb0DUinx0C6vgtkMcG%2FVPRnLJr64bmiFR4Bc735zj5j0bRZTUz1nwVuLkC6axstmh1RojeT2rI6FT7tB7WhPOolTiJnec7J3yqAqnXsAeZbvT4bR4jzV8ZOjmn%2BmlVTmK1082VkjlfQJwXDcQ%2FC%2FQvqHy2KJe5ZFIfs%2BDLzRLweh88VxqbugwlPD49V0o3aCyzG4fAwlOmf1AY6pgE2Lab8kdgkFgCaUAR1tRkxFwT4vUqo3w7fQt6ruvX%2B4izwerfcsxJ%2BNGKXSoq4Ikb5Hy%2FmUzapB4c0H7Jb5nlARV%2BcRyNWvB%2F6EGpWKOuSWFz1cRBiBwAnx6FkgSXwFhBlYWzChsi3cBI%2BtNec2JbjRPNN4Xb3v6IhEJy2%2Fgg0UHEljuaRmpwSDESLzgbY%2FfEKyllk%2FhEvs7EkzkKiJHeAXHU3xC%2FD&X-Amz-Signature=27686db584c3f51f72124b2e124bfc7cf1ba41c16262cf4f562b0fce6cf41cc8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BFWHIM5%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEOnDNvtE%2BEUihfFhQqksowgZ4vwZNBsRRtUrMe8zoraAiEArGUN6xfrIbD4CPOqI9BoG%2FczzdrsSYSn9tOcM3hIJEkqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHmbm1WMoI%2B8q3OoxircA55La4kD30kjRls0%2FYNi3gh2HfXvbddBiGLZBERfqM%2Bf%2F0KpCKD6QG%2FPZhF2CNQCRjAmmKpP6HjpiuZD2aC9hkk6jgYnHEXJbYPZCUy6%2FabzaI%2BdiJdrDJqwEFJbeOBqnO04JQyZrXw64NUQ7rF%2BjFbIkptZfPtBfuyeJFP%2FezvGwAmsCXoUr%2FyZy0bEcciKrVLKKV8wgxqbz6iBRR2Ud7eM6rfY8gagBj9fLgLcdRJjZDZBYTzC8Y9A2JrOGYXpOoYkthBFioL%2BmGdLH7KI7D79%2BrmfhnBgiy6w8zGxeht7q2e%2BKJzGWM2si9VcTsb%2Ff1YjJz99DQWybtv2ZKhpkeiRHgUQ2OYCeI7NDe9dxYDDSJgg%2FNTldkb35OSxNC9UhBTGCtp9xqhaYLueEIV1SjuI%2F7MIer7EQAzeY1wb7y31yFNQxs8pn4oCznJYllSlLeDKD6cmp5fC0pwO9odvSDb%2FLDS%2Fw%2BVtWW4nyrlpsn8PpTJV%2FQNhehwXMqDELHEzxFZDUOPl6WFQVJQm0t822oXIi9s5c1mL0Aj4NWvboQ%2FKhRvmLO9ghzM1W7SEgq2hIwx4AIbO1YS%2BlKUzqAfyEiapcm0OplwOUBwPYYSH18Miou0MJZuYBz3Y0fU6MOPqn9QGOqUBYuf%2FDfDggtd%2FnOPVjBStIG5ATAk8EqOQQoVFsB0qolbSV8j04w2lVxq7xgi8SJJ3QKBvNd%2BDGLqHLXJlm%2B1HEGf40DxE2LnvJj%2FMHdS8oYdP%2BDS9jRe91TXTYAK2kZlAToQavCEyY4cR6pJYMnifDmHHSuLlnXaQDQpfOi%2BjeHi54i9tXmdQbpqkc1wAEKxMANnHYlkxwwePgit7T1Cp%2F0yTUi9m&X-Amz-Signature=6b3ff80a2492917063dbe1b929c32d5b78a25d83dcb14567236c84ed8700cd49&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BFWHIM5%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEOnDNvtE%2BEUihfFhQqksowgZ4vwZNBsRRtUrMe8zoraAiEArGUN6xfrIbD4CPOqI9BoG%2FczzdrsSYSn9tOcM3hIJEkqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHmbm1WMoI%2B8q3OoxircA55La4kD30kjRls0%2FYNi3gh2HfXvbddBiGLZBERfqM%2Bf%2F0KpCKD6QG%2FPZhF2CNQCRjAmmKpP6HjpiuZD2aC9hkk6jgYnHEXJbYPZCUy6%2FabzaI%2BdiJdrDJqwEFJbeOBqnO04JQyZrXw64NUQ7rF%2BjFbIkptZfPtBfuyeJFP%2FezvGwAmsCXoUr%2FyZy0bEcciKrVLKKV8wgxqbz6iBRR2Ud7eM6rfY8gagBj9fLgLcdRJjZDZBYTzC8Y9A2JrOGYXpOoYkthBFioL%2BmGdLH7KI7D79%2BrmfhnBgiy6w8zGxeht7q2e%2BKJzGWM2si9VcTsb%2Ff1YjJz99DQWybtv2ZKhpkeiRHgUQ2OYCeI7NDe9dxYDDSJgg%2FNTldkb35OSxNC9UhBTGCtp9xqhaYLueEIV1SjuI%2F7MIer7EQAzeY1wb7y31yFNQxs8pn4oCznJYllSlLeDKD6cmp5fC0pwO9odvSDb%2FLDS%2Fw%2BVtWW4nyrlpsn8PpTJV%2FQNhehwXMqDELHEzxFZDUOPl6WFQVJQm0t822oXIi9s5c1mL0Aj4NWvboQ%2FKhRvmLO9ghzM1W7SEgq2hIwx4AIbO1YS%2BlKUzqAfyEiapcm0OplwOUBwPYYSH18Miou0MJZuYBz3Y0fU6MOPqn9QGOqUBYuf%2FDfDggtd%2FnOPVjBStIG5ATAk8EqOQQoVFsB0qolbSV8j04w2lVxq7xgi8SJJ3QKBvNd%2BDGLqHLXJlm%2B1HEGf40DxE2LnvJj%2FMHdS8oYdP%2BDS9jRe91TXTYAK2kZlAToQavCEyY4cR6pJYMnifDmHHSuLlnXaQDQpfOi%2BjeHi54i9tXmdQbpqkc1wAEKxMANnHYlkxwwePgit7T1Cp%2F0yTUi9m&X-Amz-Signature=542edbf78fa97631c865b38f182fd4e375310227fb108586e7e7a574d992ea5c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BFWHIM5%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEOnDNvtE%2BEUihfFhQqksowgZ4vwZNBsRRtUrMe8zoraAiEArGUN6xfrIbD4CPOqI9BoG%2FczzdrsSYSn9tOcM3hIJEkqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHmbm1WMoI%2B8q3OoxircA55La4kD30kjRls0%2FYNi3gh2HfXvbddBiGLZBERfqM%2Bf%2F0KpCKD6QG%2FPZhF2CNQCRjAmmKpP6HjpiuZD2aC9hkk6jgYnHEXJbYPZCUy6%2FabzaI%2BdiJdrDJqwEFJbeOBqnO04JQyZrXw64NUQ7rF%2BjFbIkptZfPtBfuyeJFP%2FezvGwAmsCXoUr%2FyZy0bEcciKrVLKKV8wgxqbz6iBRR2Ud7eM6rfY8gagBj9fLgLcdRJjZDZBYTzC8Y9A2JrOGYXpOoYkthBFioL%2BmGdLH7KI7D79%2BrmfhnBgiy6w8zGxeht7q2e%2BKJzGWM2si9VcTsb%2Ff1YjJz99DQWybtv2ZKhpkeiRHgUQ2OYCeI7NDe9dxYDDSJgg%2FNTldkb35OSxNC9UhBTGCtp9xqhaYLueEIV1SjuI%2F7MIer7EQAzeY1wb7y31yFNQxs8pn4oCznJYllSlLeDKD6cmp5fC0pwO9odvSDb%2FLDS%2Fw%2BVtWW4nyrlpsn8PpTJV%2FQNhehwXMqDELHEzxFZDUOPl6WFQVJQm0t822oXIi9s5c1mL0Aj4NWvboQ%2FKhRvmLO9ghzM1W7SEgq2hIwx4AIbO1YS%2BlKUzqAfyEiapcm0OplwOUBwPYYSH18Miou0MJZuYBz3Y0fU6MOPqn9QGOqUBYuf%2FDfDggtd%2FnOPVjBStIG5ATAk8EqOQQoVFsB0qolbSV8j04w2lVxq7xgi8SJJ3QKBvNd%2BDGLqHLXJlm%2B1HEGf40DxE2LnvJj%2FMHdS8oYdP%2BDS9jRe91TXTYAK2kZlAToQavCEyY4cR6pJYMnifDmHHSuLlnXaQDQpfOi%2BjeHi54i9tXmdQbpqkc1wAEKxMANnHYlkxwwePgit7T1Cp%2F0yTUi9m&X-Amz-Signature=247b50af9160e5360ae8033febdb4f7d792f1e7ee256ec4a74b9dbe0e3e4f5f1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664BFWHIM5%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEOnDNvtE%2BEUihfFhQqksowgZ4vwZNBsRRtUrMe8zoraAiEArGUN6xfrIbD4CPOqI9BoG%2FczzdrsSYSn9tOcM3hIJEkqiAQIoP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHmbm1WMoI%2B8q3OoxircA55La4kD30kjRls0%2FYNi3gh2HfXvbddBiGLZBERfqM%2Bf%2F0KpCKD6QG%2FPZhF2CNQCRjAmmKpP6HjpiuZD2aC9hkk6jgYnHEXJbYPZCUy6%2FabzaI%2BdiJdrDJqwEFJbeOBqnO04JQyZrXw64NUQ7rF%2BjFbIkptZfPtBfuyeJFP%2FezvGwAmsCXoUr%2FyZy0bEcciKrVLKKV8wgxqbz6iBRR2Ud7eM6rfY8gagBj9fLgLcdRJjZDZBYTzC8Y9A2JrOGYXpOoYkthBFioL%2BmGdLH7KI7D79%2BrmfhnBgiy6w8zGxeht7q2e%2BKJzGWM2si9VcTsb%2Ff1YjJz99DQWybtv2ZKhpkeiRHgUQ2OYCeI7NDe9dxYDDSJgg%2FNTldkb35OSxNC9UhBTGCtp9xqhaYLueEIV1SjuI%2F7MIer7EQAzeY1wb7y31yFNQxs8pn4oCznJYllSlLeDKD6cmp5fC0pwO9odvSDb%2FLDS%2Fw%2BVtWW4nyrlpsn8PpTJV%2FQNhehwXMqDELHEzxFZDUOPl6WFQVJQm0t822oXIi9s5c1mL0Aj4NWvboQ%2FKhRvmLO9ghzM1W7SEgq2hIwx4AIbO1YS%2BlKUzqAfyEiapcm0OplwOUBwPYYSH18Miou0MJZuYBz3Y0fU6MOPqn9QGOqUBYuf%2FDfDggtd%2FnOPVjBStIG5ATAk8EqOQQoVFsB0qolbSV8j04w2lVxq7xgi8SJJ3QKBvNd%2BDGLqHLXJlm%2B1HEGf40DxE2LnvJj%2FMHdS8oYdP%2BDS9jRe91TXTYAK2kZlAToQavCEyY4cR6pJYMnifDmHHSuLlnXaQDQpfOi%2BjeHi54i9tXmdQbpqkc1wAEKxMANnHYlkxwwePgit7T1Cp%2F0yTUi9m&X-Amz-Signature=43d378fcf59888e24cb87e4ca21fc967fd4f68c1de452a343a5e8ded1c21df7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Z5F6QNEB%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083812Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHjpQAaisQVR%2BiRz%2BXOoiSy4nFJ9f6VRmg5eEh9u0PzeAiBVjvXosmZh0rO0Z3CcxGZy2HxbnlXE1aQf4vzqpiBIjiqIBAig%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMejEW3CckSeufkYy4KtwDdjInFb%2FS4jg9NpPGQ%2B6ELa%2FISFvvfXmau7DlP9dteCMTIxgWTVfBrn5RPok%2FOPQRp5C6r%2FwThf%2BH0qh2aarA9PNeaIQaSD8iMxDUvkhG4vp44xxRebcN32KD7rvKMuYAEazVV4rBkaZLgtLyIqmyLQCuJhsoH7c39TzzjCAvbQJO6v5QyNBrVQGqDTnsvPF94JF9yvM7tMDe248q%2Ftmu2qvUTCUtOC7oDq9TpEMaVw6K%2BIuAabzruOcwKPFSO1cxca1vxW8vxS%2BE%2FDi8ulM4DEyQZ0qeXwM0emGDIFUYgJ2PlTlnkCRa6UqIkSi1xrBMxy1BZqJfCnfdlSjk1AEYBA12DJrvd5HkV47uJl5NqO7uy9Ai3ENlsKvwrHT9oGsjnxVUFu5DVIvogNns4EDpyNhGiZJO9TBFt%2BVpAvJCVunZP%2B9EqIMwQJg3al%2B25nIbT%2FXWQfC1QGVbextqiB6d22F3Md7Jcv%2FVXAvYVGGEVkvfJhufT4TmvNsEOcTeJ1Nexuqe%2FiewgmBVoFfjjo4HR0p7zua1X5chJ6niMB7w94h6cAqmkkyzpx0qBWFSbOA3yUbORfICWwIrJV1UjkQbg3%2BO1bo8ttVA%2BcS2RA30ItZF0hYV4lodgdrZ3BgwuOif1AY6pgEKoPlpGaU0ALUA%2FLMV05eI5bPIWLccoUKJgupzjCKJlIN%2BBwZyC6mn5EEC0tYLHnO4MgTOa1bLMuxDZORraDMEexIA9DynNKhvODyVGwnOCBKHZYvR8ntBvkw6fVL0u%2BaQcvLVEJct%2FMVg%2BR59z0J2ra0WXwm6KO6ELXGWeIB9CyOQn6q9HrKOsvTN9fy8tnlgVvwedf9Qq8CBg5aX0DVlKWlcR%2Bxt&X-Amz-Signature=0d1168ec8ca10b0cac5507ab7b497b6948a43d86124c2da94c2bd75f55e02a20&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWMDB3TM%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083812Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGSbPuV0Db2RYekrOi%2B1m84mKVKqrsfSCX428kjGwM7UAiA9nFvEqeRnCiMsBiW3lSvPikpkYim008oiU%2FTxN%2Bq8FyqIBAig%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMoT2SA7Qd%2B7gVT7aTKtwDD8kkmpz227eTij4qGlr%2BK7u71aUZkJqEtoDGFA10g8n7dKBheZXx0MKjiJnBoAUAgzsfLjESpLerYtG7O2F5t8SLjJndQFSXFkfwYFTU6n9d7K0yzIsOU7z7lwkK6cIaOflcMdjivo7xLbL8wA6RlYwYsWKwAI2JhrHK2xm9T9ucctcT4Al4rz1pWjfK5Nwi4xbHv9nfRpXNFdKTS362d3OudwjoTnChjGHHT1kbvpTcSSv%2BBecW1yNgAhYCZG9zPekH85BkFakUkSSFamS5PpXpxzY5WTJW1nOJ%2BBX073h%2FV128jKJ5tyXasT%2BTFVljYeRyy7DDKmwGxKxT9auI0eqssDkzqRqtZXguhPA2m%2FLP8gIsJNSnU7NasXK0cS2Oic4XDoUHrqiy0atEsAVyJnSLIMG0Pxhst%2BxzcKFQ0%2FcqwYCqNY0prGSpysWP3CXBxnFPYNYvU3QrqzJ9H3v9NUIUZ0BnpYmK5AQtW9SF5bt7TFrsxTbbxLFMUP%2F%2Fayk2G2BriqYe8Xhs2qkXI8GN6vaN3X%2BIdjIJn7h8sShQaY30G0%2F%2Bg8uclE%2FvDnyjFQXIHLrC%2Busa3Y6glRFz5P7t6%2FaqchSYwLJHzWBQy%2FLCm%2BjLRGgPtqHVSJDU3UUw2Oif1AY6pgHaizCWgiMKyo356uy4OTN6e7gJkx2NVS0Xn92nceZ3jq4Sz85ZmGwuMDS2o5xyFSTOjziIIwrg78OICH9cqfSxa1sCOjLO0U1PxutnuXEQ4BY811%2F3fbe0aseJlC%2FCN974FeZyhM7CUXoa6PTY5mDYGl%2BocH87Jdca%2BXwjKgIGxCcdI%2BW%2FDbNPInuVC1k3DBbM1HCrOu1Q7PbuH2tH1hhqL1BpnMUM&X-Amz-Signature=a70b76a25c05e43703e1c12bb6325a53e887a8b048e3e2b476d1562a723a394e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TWMDB3TM%2F20260821%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260821T083812Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGSbPuV0Db2RYekrOi%2B1m84mKVKqrsfSCX428kjGwM7UAiA9nFvEqeRnCiMsBiW3lSvPikpkYim008oiU%2FTxN%2Bq8FyqIBAig%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMoT2SA7Qd%2B7gVT7aTKtwDD8kkmpz227eTij4qGlr%2BK7u71aUZkJqEtoDGFA10g8n7dKBheZXx0MKjiJnBoAUAgzsfLjESpLerYtG7O2F5t8SLjJndQFSXFkfwYFTU6n9d7K0yzIsOU7z7lwkK6cIaOflcMdjivo7xLbL8wA6RlYwYsWKwAI2JhrHK2xm9T9ucctcT4Al4rz1pWjfK5Nwi4xbHv9nfRpXNFdKTS362d3OudwjoTnChjGHHT1kbvpTcSSv%2BBecW1yNgAhYCZG9zPekH85BkFakUkSSFamS5PpXpxzY5WTJW1nOJ%2BBX073h%2FV128jKJ5tyXasT%2BTFVljYeRyy7DDKmwGxKxT9auI0eqssDkzqRqtZXguhPA2m%2FLP8gIsJNSnU7NasXK0cS2Oic4XDoUHrqiy0atEsAVyJnSLIMG0Pxhst%2BxzcKFQ0%2FcqwYCqNY0prGSpysWP3CXBxnFPYNYvU3QrqzJ9H3v9NUIUZ0BnpYmK5AQtW9SF5bt7TFrsxTbbxLFMUP%2F%2Fayk2G2BriqYe8Xhs2qkXI8GN6vaN3X%2BIdjIJn7h8sShQaY30G0%2F%2Bg8uclE%2FvDnyjFQXIHLrC%2Busa3Y6glRFz5P7t6%2FaqchSYwLJHzWBQy%2FLCm%2BjLRGgPtqHVSJDU3UUw2Oif1AY6pgHaizCWgiMKyo356uy4OTN6e7gJkx2NVS0Xn92nceZ3jq4Sz85ZmGwuMDS2o5xyFSTOjziIIwrg78OICH9cqfSxa1sCOjLO0U1PxutnuXEQ4BY811%2F3fbe0aseJlC%2FCN974FeZyhM7CUXoa6PTY5mDYGl%2BocH87Jdca%2BXwjKgIGxCcdI%2BW%2FDbNPInuVC1k3DBbM1HCrOu1Q7PbuH2tH1hhqL1BpnMUM&X-Amz-Signature=0b0a2b3d87b8bc638c9ceda272e6ecaa8f12adc75178908fa72b2c749feacdec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
