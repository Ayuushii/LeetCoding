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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VJRXB2M%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCro5QcBx4Ey4tbTqGuuuq7xhHUFP4O8XqyNxOongsoaQIhAK1AE4533tZvrrmcxnjoIObxf8t%2Fsm8ZT7xUt%2BTiALhyKv8DCEwQABoMNjM3NDIzMTgzODA1Igz3t5GMJVUThpnFNJUq3ANGr1uDoKfdoxVPtnGmYPIatfvP2jcZvuwoVL9dQtHJI3AOU3vLESpDB%2B4s2AuIWQk5MHgNsfzn8ZPLdop3mbZVmHsm0rm1PrU0BFi3znvrogu38V7nv5BepTmBj7%2BKHJ6Hl%2B%2BOKFC%2FCGh6025m%2B98s5vHlBa7mIfg0BmLL9dRq5zd%2BpNFZ1szvcF6MNQHJZVQldBaH3noGlzGkM9O5df5J9P9jY%2BjZi6jQccYfLck3Gr0WJLDYKtG2bWw2svZqt836Dws%2FEPtNj5kBM3nDWKz%2BZKKhD972TL39NtIlrycP9W%2Fqd3ky5W7%2Fws4ux76BuDNtO7UEVOMAzyhLuG99xf0XlUHGvFJJ87FpsBDujz6roTOv0DJKfgQ9QCPezSFWh1ZsHlmDBzeDvMk%2FHLgfCbN7FC6hdoGNYoZXpXXc5sW6mmw%2FA9KwVBpvI6NVthv6zY%2BoTE78c%2BUV%2FxjSdVuAA3%2FQIIrvKvOtbDcaCphWDj91MuFkL%2FedJn7%2BtvrPX2KBW81vQYL8h2zD6A7ULh1RJreG1NLUqycimX8cwH867hBjEO%2Fn%2B9yppX%2BbhD5StwexQT93RfV2mFgKxWH5U93PGnDIrvSY%2Fx3JGDLmQEB2rKLI%2FoqOT8NrTFwV%2BQS%2BEDCc95zTBjqkAcWy9WA17R6BjsQNDFC4XIn9Kr5rSnZ8oy1Dca1XDXAHfZ7I6RE7iqvqEqHQx%2B5jJvnux55Hkqq8GqQ5XAKnQrVkATqHi9Dr12Ms3AHNIH2Br7mdd8Rt7HYMeYduJFMTScn4fFY5XtWW1EpIXUqlZJ1Pzlste31EyU8ewMIpKNdXIKxV0DjAw06M8%2BXOpgdf3StdvXrOr3WmeDZ%2FeXIJ%2F8YXeLxX&X-Amz-Signature=587ef4ce32f529d497ece092a83db41661c98a9b67b7a52ecc4a4b4122af5186&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VJRXB2M%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCro5QcBx4Ey4tbTqGuuuq7xhHUFP4O8XqyNxOongsoaQIhAK1AE4533tZvrrmcxnjoIObxf8t%2Fsm8ZT7xUt%2BTiALhyKv8DCEwQABoMNjM3NDIzMTgzODA1Igz3t5GMJVUThpnFNJUq3ANGr1uDoKfdoxVPtnGmYPIatfvP2jcZvuwoVL9dQtHJI3AOU3vLESpDB%2B4s2AuIWQk5MHgNsfzn8ZPLdop3mbZVmHsm0rm1PrU0BFi3znvrogu38V7nv5BepTmBj7%2BKHJ6Hl%2B%2BOKFC%2FCGh6025m%2B98s5vHlBa7mIfg0BmLL9dRq5zd%2BpNFZ1szvcF6MNQHJZVQldBaH3noGlzGkM9O5df5J9P9jY%2BjZi6jQccYfLck3Gr0WJLDYKtG2bWw2svZqt836Dws%2FEPtNj5kBM3nDWKz%2BZKKhD972TL39NtIlrycP9W%2Fqd3ky5W7%2Fws4ux76BuDNtO7UEVOMAzyhLuG99xf0XlUHGvFJJ87FpsBDujz6roTOv0DJKfgQ9QCPezSFWh1ZsHlmDBzeDvMk%2FHLgfCbN7FC6hdoGNYoZXpXXc5sW6mmw%2FA9KwVBpvI6NVthv6zY%2BoTE78c%2BUV%2FxjSdVuAA3%2FQIIrvKvOtbDcaCphWDj91MuFkL%2FedJn7%2BtvrPX2KBW81vQYL8h2zD6A7ULh1RJreG1NLUqycimX8cwH867hBjEO%2Fn%2B9yppX%2BbhD5StwexQT93RfV2mFgKxWH5U93PGnDIrvSY%2Fx3JGDLmQEB2rKLI%2FoqOT8NrTFwV%2BQS%2BEDCc95zTBjqkAcWy9WA17R6BjsQNDFC4XIn9Kr5rSnZ8oy1Dca1XDXAHfZ7I6RE7iqvqEqHQx%2B5jJvnux55Hkqq8GqQ5XAKnQrVkATqHi9Dr12Ms3AHNIH2Br7mdd8Rt7HYMeYduJFMTScn4fFY5XtWW1EpIXUqlZJ1Pzlste31EyU8ewMIpKNdXIKxV0DjAw06M8%2BXOpgdf3StdvXrOr3WmeDZ%2FeXIJ%2F8YXeLxX&X-Amz-Signature=13aad874402dd87cb009e1261400682418aee8f086ec53965a716f71c32d8e39&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VJRXB2M%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCro5QcBx4Ey4tbTqGuuuq7xhHUFP4O8XqyNxOongsoaQIhAK1AE4533tZvrrmcxnjoIObxf8t%2Fsm8ZT7xUt%2BTiALhyKv8DCEwQABoMNjM3NDIzMTgzODA1Igz3t5GMJVUThpnFNJUq3ANGr1uDoKfdoxVPtnGmYPIatfvP2jcZvuwoVL9dQtHJI3AOU3vLESpDB%2B4s2AuIWQk5MHgNsfzn8ZPLdop3mbZVmHsm0rm1PrU0BFi3znvrogu38V7nv5BepTmBj7%2BKHJ6Hl%2B%2BOKFC%2FCGh6025m%2B98s5vHlBa7mIfg0BmLL9dRq5zd%2BpNFZ1szvcF6MNQHJZVQldBaH3noGlzGkM9O5df5J9P9jY%2BjZi6jQccYfLck3Gr0WJLDYKtG2bWw2svZqt836Dws%2FEPtNj5kBM3nDWKz%2BZKKhD972TL39NtIlrycP9W%2Fqd3ky5W7%2Fws4ux76BuDNtO7UEVOMAzyhLuG99xf0XlUHGvFJJ87FpsBDujz6roTOv0DJKfgQ9QCPezSFWh1ZsHlmDBzeDvMk%2FHLgfCbN7FC6hdoGNYoZXpXXc5sW6mmw%2FA9KwVBpvI6NVthv6zY%2BoTE78c%2BUV%2FxjSdVuAA3%2FQIIrvKvOtbDcaCphWDj91MuFkL%2FedJn7%2BtvrPX2KBW81vQYL8h2zD6A7ULh1RJreG1NLUqycimX8cwH867hBjEO%2Fn%2B9yppX%2BbhD5StwexQT93RfV2mFgKxWH5U93PGnDIrvSY%2Fx3JGDLmQEB2rKLI%2FoqOT8NrTFwV%2BQS%2BEDCc95zTBjqkAcWy9WA17R6BjsQNDFC4XIn9Kr5rSnZ8oy1Dca1XDXAHfZ7I6RE7iqvqEqHQx%2B5jJvnux55Hkqq8GqQ5XAKnQrVkATqHi9Dr12Ms3AHNIH2Br7mdd8Rt7HYMeYduJFMTScn4fFY5XtWW1EpIXUqlZJ1Pzlste31EyU8ewMIpKNdXIKxV0DjAw06M8%2BXOpgdf3StdvXrOr3WmeDZ%2FeXIJ%2F8YXeLxX&X-Amz-Signature=c49e4b8c4d2b28057c7e7083bd4a00a761f20da56f796f351da961c796db2577&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WNZUJ5LC%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDYd0%2BaNiKcAqfyeHg%2BrRvrYGtqxmMLdin5ARKXqeTKbAIhAPuF51zh24cCNvZx9rMtcas7h1u1qbw%2BWx9Uq9Xpi%2BpSKv8DCEwQABoMNjM3NDIzMTgzODA1IgzRATU4A1bOsuXmsgcq3AOszVJntQ5yH8ICrSV8J8092eoA7s4Ewf1MeLFrjlAexZ1WHHfUpC18dQSsVeL1xn%2BwA941ep7mGgbJ9dJZcsr%2FLCHwOqDWlaqNXvOtUwVl5oGv0OelhkVysCcveFuZKbHYMhN%2BXw%2B5PHnGmKvrSCr8fuGOKC0WqKNP124rZ513u1C3yPeBEBXQkS7ToWTumPlembFyGQYEmPLA47RtVTnarxdYFZo6oGyu%2FaXQCZNJR0foR%2BJkhHCwSNcE5CZInf1SLdL7%2B4GdwvQF14o%2Fm8oQY25RlY%2FFumtlINej8p3DvfP8E5ABUQjZXeVUqhjZLwh23zIYAKAcfXB0G6v7LMnJqcyiA2SIvmnZ4ZgC6FY2aVgzu1Tow06ZfcC2KgiHRkNGMh8M4dNgim7oKPn8uTNQm05W0u4oEvZrSV6nTqUKngzfJ4caOyQ8AcKoIlNmZIj2FSi4Ii0E%2FruX4RE%2FmAf1f6kOL%2Brorkihh9xvlQDT3vCSD0j2gMWuvrHTfpdFI8DS7w2GJHP25guHfFnXyVnXPJ99HQZqAcHvTULhKQ3EhmQQBoj61rVVa3tVUTd8QVEY%2FoCipP2SEWoSHRGFFy1mVGx9v%2BQqTy4LmNsboOrLvxUGid4ReG3YhTLPhjCp%2BZzTBjqkARZ9H%2FqzSrdJCm3oD0G8K0Wv64L61MMNvXAaUztCDcnuMFsCgK3Z3QdJKx24mbLh330uzgYNuOawzb9rKtWV7tNOXAiw4ydWKBD6wx1eVWlSJjU9JwQAGRuhtdgclqxH1tcogTuuKHakFdcXs4WFJMP2PL0WRrKMPIyKN8Nx%2BnWo0yjiERyI%2Bx0yxHSkJt3gkNjNK%2FwmdN17MS97lr5j%2FRb6l49x&X-Amz-Signature=1404907a8450c7a0be363632c4d9380cbf6ae9e9a1129ae30d5819dd8db30da9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WNZUJ5LC%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDYd0%2BaNiKcAqfyeHg%2BrRvrYGtqxmMLdin5ARKXqeTKbAIhAPuF51zh24cCNvZx9rMtcas7h1u1qbw%2BWx9Uq9Xpi%2BpSKv8DCEwQABoMNjM3NDIzMTgzODA1IgzRATU4A1bOsuXmsgcq3AOszVJntQ5yH8ICrSV8J8092eoA7s4Ewf1MeLFrjlAexZ1WHHfUpC18dQSsVeL1xn%2BwA941ep7mGgbJ9dJZcsr%2FLCHwOqDWlaqNXvOtUwVl5oGv0OelhkVysCcveFuZKbHYMhN%2BXw%2B5PHnGmKvrSCr8fuGOKC0WqKNP124rZ513u1C3yPeBEBXQkS7ToWTumPlembFyGQYEmPLA47RtVTnarxdYFZo6oGyu%2FaXQCZNJR0foR%2BJkhHCwSNcE5CZInf1SLdL7%2B4GdwvQF14o%2Fm8oQY25RlY%2FFumtlINej8p3DvfP8E5ABUQjZXeVUqhjZLwh23zIYAKAcfXB0G6v7LMnJqcyiA2SIvmnZ4ZgC6FY2aVgzu1Tow06ZfcC2KgiHRkNGMh8M4dNgim7oKPn8uTNQm05W0u4oEvZrSV6nTqUKngzfJ4caOyQ8AcKoIlNmZIj2FSi4Ii0E%2FruX4RE%2FmAf1f6kOL%2Brorkihh9xvlQDT3vCSD0j2gMWuvrHTfpdFI8DS7w2GJHP25guHfFnXyVnXPJ99HQZqAcHvTULhKQ3EhmQQBoj61rVVa3tVUTd8QVEY%2FoCipP2SEWoSHRGFFy1mVGx9v%2BQqTy4LmNsboOrLvxUGid4ReG3YhTLPhjCp%2BZzTBjqkARZ9H%2FqzSrdJCm3oD0G8K0Wv64L61MMNvXAaUztCDcnuMFsCgK3Z3QdJKx24mbLh330uzgYNuOawzb9rKtWV7tNOXAiw4ydWKBD6wx1eVWlSJjU9JwQAGRuhtdgclqxH1tcogTuuKHakFdcXs4WFJMP2PL0WRrKMPIyKN8Nx%2BnWo0yjiERyI%2Bx0yxHSkJt3gkNjNK%2FwmdN17MS97lr5j%2FRb6l49x&X-Amz-Signature=8fd80f26eb195e27178939b15b825dac4156f938d1132790c403ecba233d92f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WNZUJ5LC%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDYd0%2BaNiKcAqfyeHg%2BrRvrYGtqxmMLdin5ARKXqeTKbAIhAPuF51zh24cCNvZx9rMtcas7h1u1qbw%2BWx9Uq9Xpi%2BpSKv8DCEwQABoMNjM3NDIzMTgzODA1IgzRATU4A1bOsuXmsgcq3AOszVJntQ5yH8ICrSV8J8092eoA7s4Ewf1MeLFrjlAexZ1WHHfUpC18dQSsVeL1xn%2BwA941ep7mGgbJ9dJZcsr%2FLCHwOqDWlaqNXvOtUwVl5oGv0OelhkVysCcveFuZKbHYMhN%2BXw%2B5PHnGmKvrSCr8fuGOKC0WqKNP124rZ513u1C3yPeBEBXQkS7ToWTumPlembFyGQYEmPLA47RtVTnarxdYFZo6oGyu%2FaXQCZNJR0foR%2BJkhHCwSNcE5CZInf1SLdL7%2B4GdwvQF14o%2Fm8oQY25RlY%2FFumtlINej8p3DvfP8E5ABUQjZXeVUqhjZLwh23zIYAKAcfXB0G6v7LMnJqcyiA2SIvmnZ4ZgC6FY2aVgzu1Tow06ZfcC2KgiHRkNGMh8M4dNgim7oKPn8uTNQm05W0u4oEvZrSV6nTqUKngzfJ4caOyQ8AcKoIlNmZIj2FSi4Ii0E%2FruX4RE%2FmAf1f6kOL%2Brorkihh9xvlQDT3vCSD0j2gMWuvrHTfpdFI8DS7w2GJHP25guHfFnXyVnXPJ99HQZqAcHvTULhKQ3EhmQQBoj61rVVa3tVUTd8QVEY%2FoCipP2SEWoSHRGFFy1mVGx9v%2BQqTy4LmNsboOrLvxUGid4ReG3YhTLPhjCp%2BZzTBjqkARZ9H%2FqzSrdJCm3oD0G8K0Wv64L61MMNvXAaUztCDcnuMFsCgK3Z3QdJKx24mbLh330uzgYNuOawzb9rKtWV7tNOXAiw4ydWKBD6wx1eVWlSJjU9JwQAGRuhtdgclqxH1tcogTuuKHakFdcXs4WFJMP2PL0WRrKMPIyKN8Nx%2BnWo0yjiERyI%2Bx0yxHSkJt3gkNjNK%2FwmdN17MS97lr5j%2FRb6l49x&X-Amz-Signature=fea173535ae7e403f6a76e91c4a7c828ad87cb88cbafe3c11c82a3fde098c94d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WNZUJ5LC%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDYd0%2BaNiKcAqfyeHg%2BrRvrYGtqxmMLdin5ARKXqeTKbAIhAPuF51zh24cCNvZx9rMtcas7h1u1qbw%2BWx9Uq9Xpi%2BpSKv8DCEwQABoMNjM3NDIzMTgzODA1IgzRATU4A1bOsuXmsgcq3AOszVJntQ5yH8ICrSV8J8092eoA7s4Ewf1MeLFrjlAexZ1WHHfUpC18dQSsVeL1xn%2BwA941ep7mGgbJ9dJZcsr%2FLCHwOqDWlaqNXvOtUwVl5oGv0OelhkVysCcveFuZKbHYMhN%2BXw%2B5PHnGmKvrSCr8fuGOKC0WqKNP124rZ513u1C3yPeBEBXQkS7ToWTumPlembFyGQYEmPLA47RtVTnarxdYFZo6oGyu%2FaXQCZNJR0foR%2BJkhHCwSNcE5CZInf1SLdL7%2B4GdwvQF14o%2Fm8oQY25RlY%2FFumtlINej8p3DvfP8E5ABUQjZXeVUqhjZLwh23zIYAKAcfXB0G6v7LMnJqcyiA2SIvmnZ4ZgC6FY2aVgzu1Tow06ZfcC2KgiHRkNGMh8M4dNgim7oKPn8uTNQm05W0u4oEvZrSV6nTqUKngzfJ4caOyQ8AcKoIlNmZIj2FSi4Ii0E%2FruX4RE%2FmAf1f6kOL%2Brorkihh9xvlQDT3vCSD0j2gMWuvrHTfpdFI8DS7w2GJHP25guHfFnXyVnXPJ99HQZqAcHvTULhKQ3EhmQQBoj61rVVa3tVUTd8QVEY%2FoCipP2SEWoSHRGFFy1mVGx9v%2BQqTy4LmNsboOrLvxUGid4ReG3YhTLPhjCp%2BZzTBjqkARZ9H%2FqzSrdJCm3oD0G8K0Wv64L61MMNvXAaUztCDcnuMFsCgK3Z3QdJKx24mbLh330uzgYNuOawzb9rKtWV7tNOXAiw4ydWKBD6wx1eVWlSJjU9JwQAGRuhtdgclqxH1tcogTuuKHakFdcXs4WFJMP2PL0WRrKMPIyKN8Nx%2BnWo0yjiERyI%2Bx0yxHSkJt3gkNjNK%2FwmdN17MS97lr5j%2FRb6l49x&X-Amz-Signature=8d2f8faff5f139707a59e6a64ad7a26733da6a4575cddb6956851676966e5765&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZK4XLVLX%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDab5ADylQ6GtBJUiXNjMdArW%2BNltmSZmj33UKxgvUkdAiEAjjQkmcvgiDNy8hBlpUzB2RCFF2NuVY87u%2BZjO%2Bjm7RYq%2FwMITBAAGgw2Mzc0MjMxODM4MDUiDCsDK7Md9yG2yx9VpyrcA3vhtgUMHgi7XjCHKWQa2rIjq82fl%2F80q7a7ZADs6d1O6pjmXMTxEVHJF5F9qv%2F5p51XrbpCrswRUHd8pZqU2zhd8D14Fd%2FvXq6rQP1%2FNjAQCN8sHlFO9kcKvAUdOJ2A2qTbXA9BA9Zx7WBlSfeAhNSAk6EHE2troJHhs0%2FDOU3iUICoRQjutE%2B2uFB6kwOT3LLZGeAFcFenS%2F8uGhEQlyEWXDvltPfxwMGvMkfIGh4MWWhbNrb6FmVsMK1Dm7ePPXVEnhpG8RRi3SctUlJ0jVlt6eXU4u62pInEAquMjP3edRZ%2F3mgl0jwph1On5qCOKFNKA%2FLW1Q65N0ttUHc%2FBOxavW7Aw%2BDvMvVSwUwuvLLXPA%2BuMXS05XJvOiqTItTEoQFIAbmxICghOKNz8wXekkiWWdMrru8o5DQ2nZRkz4XQx0%2BI2l8EfTYMa1vfsJWycGChYvNXhydsrMsd7XdfJkAVo7PlrGjQjmUfTkhPl5smnPlDWtOKLQjVhN7NG74s2dJz%2Bc8JmCgEPm6oQEJvp1q6qJe36yxFNOn2lCziRJRVgga12YqFa6%2BXEKJLnIShCDIGIJVxC%2F8O%2F9Wokl3xfUj2T4Noaox%2FeBSxXyQNBC9UjeWLTjoliP0OjZ0vMPn5nNMGOqUB1eZlfvyEetm1Bhse6YKXiQUWzXG6DagNdiPFAp6SjNrFDiMKHzIsaqF3yQ5JOyY1C%2Fu9EGCt0SbXfcVXEKoiFXpKInnSfZMp4hhxlKZ2o3zx7hvmGeVrGXGy5sWBAYpNPnfUCgHN1oWjujA%2F7XgFDsAvaNivx8A8vJ6HtVPu5eHnLqSTPY7WaEtmxkgyeG3l33u0yJD4Wn2cysYiyFhQrFwVSYXR&X-Amz-Signature=34984741120f79422130c5c19cd6b4075e57ea49987d0f21f5c37b2343d7a72b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNJGF2JM%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGbft%2Ffax9lLWNewsgohpZq%2BUqcrbi1thJUChfOQgqhaAiA%2F3Wi0Uvv7V3SplbDNQqb4BGjuRfn%2FpxTr5SDK8MkmQCr%2FAwhMEAAaDDYzNzQyMzE4MzgwNSIMyV744pC%2Bvtvtytz2KtwD47oyEK410q9raWTGN4rcp705NP4n5bw1%2Bu0gSItaL3dTfoZK79AN3y6eyIiLBnCXEnkU38JETEl9Sq5z8E4b92u%2Ba5nXV2lRoZgcvCvQxUdg23XtVJvmgPWBBHdNHRoVwgUDcvuhCAJL93VhViUSJuzr2ibioEH5asw%2BHfX3Vq2iLKK%2FN10sbZG1gNSNOdJh5zEjbAp95rqgL%2B27ACcfUs4r3Wjm%2FbnmfnecMdTyJ0x%2B%2FF8l%2B3NAt4hTs4JSOFMomzmY77U7gsaXBuBnmNmYlOCfWLiQgmXpS3K2MVt1YwSv9Hg%2Fof3wjJizyUI9OIL4leHWqrqNBVa2wYjvdUw8ibhqqf236en4YDqidv%2BW9ulr5LSDp5tCUrm65BNbidQ2PgYH6ffrBvYU3b2VSwhPCIRKXL8TBS90vquexC3NR%2BE0uw73qTopezSqUwaaG6bKRfs5FpcvGzG9givPCJLUx85eKorffSIVQbfcnSn6LHmoybLNn4i5Sf8reCK%2BOLoSXgLsz7G%2FcdaYPyIGUldhJAchvmJkI0s%2BkgXjIZagOHFil1DGtVmvZkRsNRniVZ9dKY1SkakuXcBWe1cxTfScsQv1XPitTl05WXK4xXeq79kGLhHwzYSdGNIQfswwh%2Fmc0wY6pgFoywV5%2BKmqeQWiLw2wrsJmpzbBgoCfzg0%2FyY%2FsslvA1ZGxNdOYrrYb204hhHQ8e8dvV%2FdVz6NfYsZsKWZA2OWQLmzZp6aeRdvvJ4qs5%2FcylGeDSTlrDyeBUzlik%2B2V42vg%2FOVfm8H2V2yFsQyPOJPSPOviLuvMf2DgmM7N6194mDHnLORYRGuG8CLaYehioWQMhhuncPM75mIKV70MJ%2BHAhD47Toq9&X-Amz-Signature=3e8ae93ea032aa2a5f9dda0380e7b55c313019049307dad3dc40c7da98a02029&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNJGF2JM%2F20260727%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260727T111853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGbft%2Ffax9lLWNewsgohpZq%2BUqcrbi1thJUChfOQgqhaAiA%2F3Wi0Uvv7V3SplbDNQqb4BGjuRfn%2FpxTr5SDK8MkmQCr%2FAwhMEAAaDDYzNzQyMzE4MzgwNSIMyV744pC%2Bvtvtytz2KtwD47oyEK410q9raWTGN4rcp705NP4n5bw1%2Bu0gSItaL3dTfoZK79AN3y6eyIiLBnCXEnkU38JETEl9Sq5z8E4b92u%2Ba5nXV2lRoZgcvCvQxUdg23XtVJvmgPWBBHdNHRoVwgUDcvuhCAJL93VhViUSJuzr2ibioEH5asw%2BHfX3Vq2iLKK%2FN10sbZG1gNSNOdJh5zEjbAp95rqgL%2B27ACcfUs4r3Wjm%2FbnmfnecMdTyJ0x%2B%2FF8l%2B3NAt4hTs4JSOFMomzmY77U7gsaXBuBnmNmYlOCfWLiQgmXpS3K2MVt1YwSv9Hg%2Fof3wjJizyUI9OIL4leHWqrqNBVa2wYjvdUw8ibhqqf236en4YDqidv%2BW9ulr5LSDp5tCUrm65BNbidQ2PgYH6ffrBvYU3b2VSwhPCIRKXL8TBS90vquexC3NR%2BE0uw73qTopezSqUwaaG6bKRfs5FpcvGzG9givPCJLUx85eKorffSIVQbfcnSn6LHmoybLNn4i5Sf8reCK%2BOLoSXgLsz7G%2FcdaYPyIGUldhJAchvmJkI0s%2BkgXjIZagOHFil1DGtVmvZkRsNRniVZ9dKY1SkakuXcBWe1cxTfScsQv1XPitTl05WXK4xXeq79kGLhHwzYSdGNIQfswwh%2Fmc0wY6pgFoywV5%2BKmqeQWiLw2wrsJmpzbBgoCfzg0%2FyY%2FsslvA1ZGxNdOYrrYb204hhHQ8e8dvV%2FdVz6NfYsZsKWZA2OWQLmzZp6aeRdvvJ4qs5%2FcylGeDSTlrDyeBUzlik%2B2V42vg%2FOVfm8H2V2yFsQyPOJPSPOviLuvMf2DgmM7N6194mDHnLORYRGuG8CLaYehioWQMhhuncPM75mIKV70MJ%2BHAhD47Toq9&X-Amz-Signature=af149cd1999c89e25c1d419c80468cc87de694a094109615bd0891df43840b12&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
