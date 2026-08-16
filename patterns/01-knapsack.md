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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCHZPUBW%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDMrv75Mj2LrCu3roh0uiXUC9aBTWJn3E0xCZFPEXA2nQIhAMYR6MSdUeA40g5G%2BItEpYx7kHCRFsYp6DSROJ4sh1wIKv8DCCYQABoMNjM3NDIzMTgzODA1IgyvCY%2FSHVxYOWsGQlcq3ANBwAE1Tt4eeA%2BRk7372DaoNt%2B2QlEM%2FzwbyWqhwnlqXc4AARSqlnUdGx9ITjaUWd%2Fp3LFgPAYG1F9SjC1PP08kfiJeTgzZ0LflH0xUDGFAlIs6oJng7vhpSClZ91x%2F36xK%2B9cM8HvWn46XwXLuJn7eLfZ7Pq6pMvjOWP1GJjBQP04Cz5%2BcXAuDqBU9drQgHKbi0Jw6Vuu4yFQ7C5W70qHFzwuVg46agyb%2BN%2BzKiVv756d1LLPHJoWEuxcB1VUmS%2BjfTNbueL4i%2FSHFn3L4GVe4XoGhGVlrLss5pGyTea2TCnvDrhMcn7EQ9%2BqdyJIW3nPIgxrLRiUagpuARowVpxqb4EQ1smYd%2Bzml%2BWtgZ29q1cjx3vispJIyhCWS1sw%2Ft46WxsQBq7ezCCQ55xQWM3lutxr35vOlL37EoUjJNbb08XmpWfgbstG8xoMihS3XwUHRdkAIEXB878tfv9z2xgLV4QqagpIWe0JprFMjeGzuZGskV4NkRVcQt8Yn%2ByiWALN%2Bv1v6HOtsMwLhI9y5yiK8YXGR%2F%2BoEt1ryJIJLa2tGI%2BClYsmf5%2BdeMm6KhtKie8%2BZ2sgPHmRJqBxLhylRbufnEAnXbL8KrrYqTXv5OHAus3vGq0skmtZGxfZYVDDjg4XUBjqkARkOlCNEDxjWPIyufyA2Tl%2BmB4E%2BdIAABz2Qc4ICYI4h4bpBdnZ%2FmqVFMQmDLgMQpw84nlHjZIymro8ZpqORdYfslp4gYSxlDr2dZZFJywEIvMGyRM3zUXHK1iicF83fk1rIDltoW9EFy9s6oFh6Ydra%2FgeRxun9%2B%2B4Go1zmjAzV4iuIhDiI2UCqZ4yWN9T8rdxaqbw3nqaW2it2BvwBu6WUjTYf&X-Amz-Signature=79b55cb5c5b5a8b3c0b25ae5aba1ebe9ab2a21636eae97d2e3ba5b923e96af9f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCHZPUBW%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDMrv75Mj2LrCu3roh0uiXUC9aBTWJn3E0xCZFPEXA2nQIhAMYR6MSdUeA40g5G%2BItEpYx7kHCRFsYp6DSROJ4sh1wIKv8DCCYQABoMNjM3NDIzMTgzODA1IgyvCY%2FSHVxYOWsGQlcq3ANBwAE1Tt4eeA%2BRk7372DaoNt%2B2QlEM%2FzwbyWqhwnlqXc4AARSqlnUdGx9ITjaUWd%2Fp3LFgPAYG1F9SjC1PP08kfiJeTgzZ0LflH0xUDGFAlIs6oJng7vhpSClZ91x%2F36xK%2B9cM8HvWn46XwXLuJn7eLfZ7Pq6pMvjOWP1GJjBQP04Cz5%2BcXAuDqBU9drQgHKbi0Jw6Vuu4yFQ7C5W70qHFzwuVg46agyb%2BN%2BzKiVv756d1LLPHJoWEuxcB1VUmS%2BjfTNbueL4i%2FSHFn3L4GVe4XoGhGVlrLss5pGyTea2TCnvDrhMcn7EQ9%2BqdyJIW3nPIgxrLRiUagpuARowVpxqb4EQ1smYd%2Bzml%2BWtgZ29q1cjx3vispJIyhCWS1sw%2Ft46WxsQBq7ezCCQ55xQWM3lutxr35vOlL37EoUjJNbb08XmpWfgbstG8xoMihS3XwUHRdkAIEXB878tfv9z2xgLV4QqagpIWe0JprFMjeGzuZGskV4NkRVcQt8Yn%2ByiWALN%2Bv1v6HOtsMwLhI9y5yiK8YXGR%2F%2BoEt1ryJIJLa2tGI%2BClYsmf5%2BdeMm6KhtKie8%2BZ2sgPHmRJqBxLhylRbufnEAnXbL8KrrYqTXv5OHAus3vGq0skmtZGxfZYVDDjg4XUBjqkARkOlCNEDxjWPIyufyA2Tl%2BmB4E%2BdIAABz2Qc4ICYI4h4bpBdnZ%2FmqVFMQmDLgMQpw84nlHjZIymro8ZpqORdYfslp4gYSxlDr2dZZFJywEIvMGyRM3zUXHK1iicF83fk1rIDltoW9EFy9s6oFh6Ydra%2FgeRxun9%2B%2B4Go1zmjAzV4iuIhDiI2UCqZ4yWN9T8rdxaqbw3nqaW2it2BvwBu6WUjTYf&X-Amz-Signature=58e20cda1ca7e213a0a50b1090f216c15b39f96ebc43c07cfe24b103edbf5822&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCHZPUBW%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDMrv75Mj2LrCu3roh0uiXUC9aBTWJn3E0xCZFPEXA2nQIhAMYR6MSdUeA40g5G%2BItEpYx7kHCRFsYp6DSROJ4sh1wIKv8DCCYQABoMNjM3NDIzMTgzODA1IgyvCY%2FSHVxYOWsGQlcq3ANBwAE1Tt4eeA%2BRk7372DaoNt%2B2QlEM%2FzwbyWqhwnlqXc4AARSqlnUdGx9ITjaUWd%2Fp3LFgPAYG1F9SjC1PP08kfiJeTgzZ0LflH0xUDGFAlIs6oJng7vhpSClZ91x%2F36xK%2B9cM8HvWn46XwXLuJn7eLfZ7Pq6pMvjOWP1GJjBQP04Cz5%2BcXAuDqBU9drQgHKbi0Jw6Vuu4yFQ7C5W70qHFzwuVg46agyb%2BN%2BzKiVv756d1LLPHJoWEuxcB1VUmS%2BjfTNbueL4i%2FSHFn3L4GVe4XoGhGVlrLss5pGyTea2TCnvDrhMcn7EQ9%2BqdyJIW3nPIgxrLRiUagpuARowVpxqb4EQ1smYd%2Bzml%2BWtgZ29q1cjx3vispJIyhCWS1sw%2Ft46WxsQBq7ezCCQ55xQWM3lutxr35vOlL37EoUjJNbb08XmpWfgbstG8xoMihS3XwUHRdkAIEXB878tfv9z2xgLV4QqagpIWe0JprFMjeGzuZGskV4NkRVcQt8Yn%2ByiWALN%2Bv1v6HOtsMwLhI9y5yiK8YXGR%2F%2BoEt1ryJIJLa2tGI%2BClYsmf5%2BdeMm6KhtKie8%2BZ2sgPHmRJqBxLhylRbufnEAnXbL8KrrYqTXv5OHAus3vGq0skmtZGxfZYVDDjg4XUBjqkARkOlCNEDxjWPIyufyA2Tl%2BmB4E%2BdIAABz2Qc4ICYI4h4bpBdnZ%2FmqVFMQmDLgMQpw84nlHjZIymro8ZpqORdYfslp4gYSxlDr2dZZFJywEIvMGyRM3zUXHK1iicF83fk1rIDltoW9EFy9s6oFh6Ydra%2FgeRxun9%2B%2B4Go1zmjAzV4iuIhDiI2UCqZ4yWN9T8rdxaqbw3nqaW2it2BvwBu6WUjTYf&X-Amz-Signature=bf26306ee6e50c504a0d0c43f8ff872aa3c77fb5558a03cee441d356250ee0d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667UBRVOYH%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDWodgbZfQS3vhz61UOZWefXc7GgFCC3fW5wIp1KLYEzwIhALQe0A9IjbUadNFGEznXTO6KEAaDOJnVmVsQ94EXKZOjKv8DCCYQABoMNjM3NDIzMTgzODA1IgwAvv6ppcht9xN%2Fz5Aq3ANQIWRerhsUg5gnvHvw1ZGeTXsqsp2Tg%2FusU20oj8PN8WN7S1Wu91cbTZKf%2B%2FMrIDo%2B2%2Bkk0x8ce0g7UwUitW8VYQ4RJQAiuAkn4UJ6m7WJwPeVy7bpewsIdXsRT0tfZI%2BTMIKKGVv4huGpjUfopEZOKSMbefyqEIrJorIBgd2zztztWuSW4sQkpl%2FVn3PVV1xzsHYsrkRzCUewUVZp6yOECrSI0H7eMsb6%2FpSV971DJVUNd6KZt78NH9CUDm8m4%2BxEFj%2FZwlUKyDErdb67OXXka1e49kcEFSw%2ByIF3jgrHipwr0Ana1ugI%2BHQOyL3sdQl1Zyg1chIOr8Z3gozrXMYEW64Z4ZwAFHaWCPCv72rtOBoMIYjiuQFUJN7MkHqWZCLRVAhdfr4H12Y%2FiTL%2FQujJKkNxslznbuj7sgM%2F4kZGkr%2BYNvYhXZ1%2FXLo67zsxgqbw3q2jHkL7B49g%2B%2FJORApYfFeiILi3L40IHqYLY9myv1UaNb2Jn8leg%2BoKzdqKmpgQxYzP%2FLafBQEp1aDiesRnXf8YWnpJpTT4OSpW7%2B0FpIYjnVHYdrjh4aPLN2ZwWjDh1FCsAArGjjpX5WetyIt7iYEUXxG9XrjXoIvNZCiJbyAOxjsuxIcW13ZH7jDNgIXUBjqkASY9CP2VlNGV9R7GREqt69qnxa%2BDd%2B1fvlmNTWU5arCg4GorqAIaGu%2FgCuDiutFuQFMIFAu9myFcP2CkTjR7AzT2YST9jQDTnefjqgaPxO1dZ4OJMPf%2B0TbnSFua2GCBiP63NAYwe3%2FW6eQNZNWSH8yTeRO0ZWK%2BJbzHf5GiQ6iEYnhT2hVcgPsZRJFQHqnHx4y4RWmcAz6f3Sg4f7i6Q0AiovHv&X-Amz-Signature=4f9412ea956269d5d93efb62ccba10c269f1363fbef1c4842fd8fe275f53660f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667UBRVOYH%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDWodgbZfQS3vhz61UOZWefXc7GgFCC3fW5wIp1KLYEzwIhALQe0A9IjbUadNFGEznXTO6KEAaDOJnVmVsQ94EXKZOjKv8DCCYQABoMNjM3NDIzMTgzODA1IgwAvv6ppcht9xN%2Fz5Aq3ANQIWRerhsUg5gnvHvw1ZGeTXsqsp2Tg%2FusU20oj8PN8WN7S1Wu91cbTZKf%2B%2FMrIDo%2B2%2Bkk0x8ce0g7UwUitW8VYQ4RJQAiuAkn4UJ6m7WJwPeVy7bpewsIdXsRT0tfZI%2BTMIKKGVv4huGpjUfopEZOKSMbefyqEIrJorIBgd2zztztWuSW4sQkpl%2FVn3PVV1xzsHYsrkRzCUewUVZp6yOECrSI0H7eMsb6%2FpSV971DJVUNd6KZt78NH9CUDm8m4%2BxEFj%2FZwlUKyDErdb67OXXka1e49kcEFSw%2ByIF3jgrHipwr0Ana1ugI%2BHQOyL3sdQl1Zyg1chIOr8Z3gozrXMYEW64Z4ZwAFHaWCPCv72rtOBoMIYjiuQFUJN7MkHqWZCLRVAhdfr4H12Y%2FiTL%2FQujJKkNxslznbuj7sgM%2F4kZGkr%2BYNvYhXZ1%2FXLo67zsxgqbw3q2jHkL7B49g%2B%2FJORApYfFeiILi3L40IHqYLY9myv1UaNb2Jn8leg%2BoKzdqKmpgQxYzP%2FLafBQEp1aDiesRnXf8YWnpJpTT4OSpW7%2B0FpIYjnVHYdrjh4aPLN2ZwWjDh1FCsAArGjjpX5WetyIt7iYEUXxG9XrjXoIvNZCiJbyAOxjsuxIcW13ZH7jDNgIXUBjqkASY9CP2VlNGV9R7GREqt69qnxa%2BDd%2B1fvlmNTWU5arCg4GorqAIaGu%2FgCuDiutFuQFMIFAu9myFcP2CkTjR7AzT2YST9jQDTnefjqgaPxO1dZ4OJMPf%2B0TbnSFua2GCBiP63NAYwe3%2FW6eQNZNWSH8yTeRO0ZWK%2BJbzHf5GiQ6iEYnhT2hVcgPsZRJFQHqnHx4y4RWmcAz6f3Sg4f7i6Q0AiovHv&X-Amz-Signature=54c6571d4a4149039765fa577ad33851fe2a72db04e9cef7923328f5d7d61081&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667UBRVOYH%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDWodgbZfQS3vhz61UOZWefXc7GgFCC3fW5wIp1KLYEzwIhALQe0A9IjbUadNFGEznXTO6KEAaDOJnVmVsQ94EXKZOjKv8DCCYQABoMNjM3NDIzMTgzODA1IgwAvv6ppcht9xN%2Fz5Aq3ANQIWRerhsUg5gnvHvw1ZGeTXsqsp2Tg%2FusU20oj8PN8WN7S1Wu91cbTZKf%2B%2FMrIDo%2B2%2Bkk0x8ce0g7UwUitW8VYQ4RJQAiuAkn4UJ6m7WJwPeVy7bpewsIdXsRT0tfZI%2BTMIKKGVv4huGpjUfopEZOKSMbefyqEIrJorIBgd2zztztWuSW4sQkpl%2FVn3PVV1xzsHYsrkRzCUewUVZp6yOECrSI0H7eMsb6%2FpSV971DJVUNd6KZt78NH9CUDm8m4%2BxEFj%2FZwlUKyDErdb67OXXka1e49kcEFSw%2ByIF3jgrHipwr0Ana1ugI%2BHQOyL3sdQl1Zyg1chIOr8Z3gozrXMYEW64Z4ZwAFHaWCPCv72rtOBoMIYjiuQFUJN7MkHqWZCLRVAhdfr4H12Y%2FiTL%2FQujJKkNxslznbuj7sgM%2F4kZGkr%2BYNvYhXZ1%2FXLo67zsxgqbw3q2jHkL7B49g%2B%2FJORApYfFeiILi3L40IHqYLY9myv1UaNb2Jn8leg%2BoKzdqKmpgQxYzP%2FLafBQEp1aDiesRnXf8YWnpJpTT4OSpW7%2B0FpIYjnVHYdrjh4aPLN2ZwWjDh1FCsAArGjjpX5WetyIt7iYEUXxG9XrjXoIvNZCiJbyAOxjsuxIcW13ZH7jDNgIXUBjqkASY9CP2VlNGV9R7GREqt69qnxa%2BDd%2B1fvlmNTWU5arCg4GorqAIaGu%2FgCuDiutFuQFMIFAu9myFcP2CkTjR7AzT2YST9jQDTnefjqgaPxO1dZ4OJMPf%2B0TbnSFua2GCBiP63NAYwe3%2FW6eQNZNWSH8yTeRO0ZWK%2BJbzHf5GiQ6iEYnhT2hVcgPsZRJFQHqnHx4y4RWmcAz6f3Sg4f7i6Q0AiovHv&X-Amz-Signature=3152c9398f7cd66863e8afbc013a03b022df99eb0f66bb167738d5880e4094df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667UBRVOYH%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082648Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQDWodgbZfQS3vhz61UOZWefXc7GgFCC3fW5wIp1KLYEzwIhALQe0A9IjbUadNFGEznXTO6KEAaDOJnVmVsQ94EXKZOjKv8DCCYQABoMNjM3NDIzMTgzODA1IgwAvv6ppcht9xN%2Fz5Aq3ANQIWRerhsUg5gnvHvw1ZGeTXsqsp2Tg%2FusU20oj8PN8WN7S1Wu91cbTZKf%2B%2FMrIDo%2B2%2Bkk0x8ce0g7UwUitW8VYQ4RJQAiuAkn4UJ6m7WJwPeVy7bpewsIdXsRT0tfZI%2BTMIKKGVv4huGpjUfopEZOKSMbefyqEIrJorIBgd2zztztWuSW4sQkpl%2FVn3PVV1xzsHYsrkRzCUewUVZp6yOECrSI0H7eMsb6%2FpSV971DJVUNd6KZt78NH9CUDm8m4%2BxEFj%2FZwlUKyDErdb67OXXka1e49kcEFSw%2ByIF3jgrHipwr0Ana1ugI%2BHQOyL3sdQl1Zyg1chIOr8Z3gozrXMYEW64Z4ZwAFHaWCPCv72rtOBoMIYjiuQFUJN7MkHqWZCLRVAhdfr4H12Y%2FiTL%2FQujJKkNxslznbuj7sgM%2F4kZGkr%2BYNvYhXZ1%2FXLo67zsxgqbw3q2jHkL7B49g%2B%2FJORApYfFeiILi3L40IHqYLY9myv1UaNb2Jn8leg%2BoKzdqKmpgQxYzP%2FLafBQEp1aDiesRnXf8YWnpJpTT4OSpW7%2B0FpIYjnVHYdrjh4aPLN2ZwWjDh1FCsAArGjjpX5WetyIt7iYEUXxG9XrjXoIvNZCiJbyAOxjsuxIcW13ZH7jDNgIXUBjqkASY9CP2VlNGV9R7GREqt69qnxa%2BDd%2B1fvlmNTWU5arCg4GorqAIaGu%2FgCuDiutFuQFMIFAu9myFcP2CkTjR7AzT2YST9jQDTnefjqgaPxO1dZ4OJMPf%2B0TbnSFua2GCBiP63NAYwe3%2FW6eQNZNWSH8yTeRO0ZWK%2BJbzHf5GiQ6iEYnhT2hVcgPsZRJFQHqnHx4y4RWmcAz6f3Sg4f7i6Q0AiovHv&X-Amz-Signature=27da472a93fbab6d85778a1ca8bd67c02e423b7e5388bbf0697a5eae68af64e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SUQD2WC4%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQCTaiJiRnxz8gLzMXP31dbEmeyBdmY7n8oKmEF2RYFhDAIhAM4VaeI2MLZlF5N6C4uljj4%2BVdOadOy9haixuHFtxzJWKv8DCCYQABoMNjM3NDIzMTgzODA1IgzAQD6%2FiFS%2BpGXo0voq3AP5vL90rIEBgtJFrSF%2FPxQIcGLrOn61CBGHCNcNKWuvTADNHhxm9gIflqT2OCnWjm1URwfyWN2ABpVX%2FFwbO5qkGdSAzrQmexzwpRcCODq0SgaWE77Ji%2BIAFm4fo%2BiB%2BeFDDau4ymJdr%2BLa1wWtvnRYFDcmnqCZT7akVIc4mQ%2FkM6doYiXnPRLaMYl28Z08N9GdQWoSscSn5TkO1pYm%2F7lfejCxLTekDum0BCOmaPaAPh26sBdTUpiUmrsmMsnvsRqnwUmTgxIBwbFo8PDGlaOKTB4APQiLRUZmkzrTzuh3OzsCZJU3PWWARK86qznHW17g%2BV3uYj9hY%2BjN9c%2Bzpe3g7FPrjmqlQXxteT6maQhtYKILIBNbzCwL52%2Bulajr0klWYCo%2FKBMxinjDVToCPR%2FIxsBi0ZpE4%2F7iZC1DIqaZ8l61q5qVFlPQkgSY5zf58qHjONQoKkFRq3aB%2BLSlhRQfYUSL8eDdQ8pBZib7z9El5O8CNDinBTywyOisbr%2B0voq3ySoueERVajGmrvkBgDB1EMOs4tycbR%2BvhTxlfcTupnHTWPhA7qoNW4dfQ%2Bo2cUhHK0vc1cbSyIe9hFgz60h435TO9EcpdddmCnfmzvphL2zlCY5tJs9KBGoe5TDEgIXUBjqkAc5I7JqhczSy2UL5auus6MuML7qU%2BhZixSxxsns580RJYK0TuulMicAwLPcDFZfWmpVZtip%2Bx%2Bk7oHg1ecSBGQ%2BVQLmO5lBX8RVDbui3m6Wus089QRnPUUQo7JBG5mscsxPLMYIAvAQAJx3yIIXvhMNioYVxN1GVT9CIE4aA6yLCO43TBHlHSM6y1gy9%2FmIRKxYiuv6HNqb9K%2F5ABlg4o3ugZcLr&X-Amz-Signature=a6c37a3d898507ca3ef3e0dddf397c0cddd3d27efaa00e6a223eac6ea6308424&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHC45X5S%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQCJZjoXuyHAJcbjRTOEK%2FwyPJ%2FUe2EFv0I7drIpjZlCtAIhAKap90EBYy8dr990Jr7tSM%2BsR2mX%2F%2BUF2WPVcG%2FsFds3Kv8DCCYQABoMNjM3NDIzMTgzODA1Igw2GWhOPPrd9Xsd%2Ba0q3AMqfuiqtn%2BDmIWMCZ2lTbOe9pGUEJS%2BfGeOOn9TOJy9mtBQH0SHGGsKob8YAM5UQ%2FtOLqUQOq5OO%2FarfgBTiSbk8GqH2whGKQ1E4Sh76Ux08cvrYDvXDXlWUefV%2FsqdFUCkKdq45M7ytHaXx%2Ffr4V%2BMaLuITvXEVrhKTIHriQ24EuDOA%2FMLRgeXkALJ7zm6MIx9lsUBPoe%2Fd%2FV2K3ZOmdt0%2Bkjm2kdyg7L7dpyQFbJyQ90tKNr%2B6cIY97Pi1OQghe%2B4Js1g8CfztuRwPtvPyDWjcF6r3XXtNU6783PrJQS0UTMwGSc%2Biy44ZO0HveCwIVVgypdxOQISSy9DcguCw%2Bfl1WLu4%2FNgl0hVrYyy0rUQAxTkMWEiiT%2FpgAee6mnzOZ7hj3y5B9qmNlHvM%2BLXg8Npwl58eSkZuYcjegvTtWHAmqaAwMcmaJOPNbUWnCMcFIlO%2BnKHzIm2sl1JaFo9dSLMzcDlOC4Q3uEbm6VNpP7vqmh3BTarvC46alOhlozX63HEDyw0Dga%2FtMp3rORtnstwBtUl3yWv%2Fw0UuQo9lH4mRtQGb%2FdoREBAWwtDcxFGMW0C4PnpvegDVqhgoj%2BtsHXr%2FeGnUNwjtul4Re7rgwtz7Rihx0YN8YkeGwIuKzDKg4XUBjqkAfGPa6dlZrgk5VHFee2Vo2vZQFX4XCw5W1WVjtyY%2Bm8OY5QBFyKvEEL0MSQV7rMubMU4V9yrSuHPzoio9Mbp4Jw7wv4MDldwcwocON9UNYWr8kgkvxkThHItdf5yaAgw7ZTt2Q0vsyqrRR0PuiJE9fOHjY9yxgw5CNjQetL%2FNXsg3MAHXnn5Yrtr7HPyGNV3%2B%2Bg0POqLuuSVctMYfRB8tNLEYpqk&X-Amz-Signature=62a348fdc7b54220dfb2bae89fc04d39f80e25f2b8d7f9f9a0865bb15bf56d57&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHC45X5S%2F20260816%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260816T082649Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEF0aCXVzLXdlc3QtMiJIMEYCIQCJZjoXuyHAJcbjRTOEK%2FwyPJ%2FUe2EFv0I7drIpjZlCtAIhAKap90EBYy8dr990Jr7tSM%2BsR2mX%2F%2BUF2WPVcG%2FsFds3Kv8DCCYQABoMNjM3NDIzMTgzODA1Igw2GWhOPPrd9Xsd%2Ba0q3AMqfuiqtn%2BDmIWMCZ2lTbOe9pGUEJS%2BfGeOOn9TOJy9mtBQH0SHGGsKob8YAM5UQ%2FtOLqUQOq5OO%2FarfgBTiSbk8GqH2whGKQ1E4Sh76Ux08cvrYDvXDXlWUefV%2FsqdFUCkKdq45M7ytHaXx%2Ffr4V%2BMaLuITvXEVrhKTIHriQ24EuDOA%2FMLRgeXkALJ7zm6MIx9lsUBPoe%2Fd%2FV2K3ZOmdt0%2Bkjm2kdyg7L7dpyQFbJyQ90tKNr%2B6cIY97Pi1OQghe%2B4Js1g8CfztuRwPtvPyDWjcF6r3XXtNU6783PrJQS0UTMwGSc%2Biy44ZO0HveCwIVVgypdxOQISSy9DcguCw%2Bfl1WLu4%2FNgl0hVrYyy0rUQAxTkMWEiiT%2FpgAee6mnzOZ7hj3y5B9qmNlHvM%2BLXg8Npwl58eSkZuYcjegvTtWHAmqaAwMcmaJOPNbUWnCMcFIlO%2BnKHzIm2sl1JaFo9dSLMzcDlOC4Q3uEbm6VNpP7vqmh3BTarvC46alOhlozX63HEDyw0Dga%2FtMp3rORtnstwBtUl3yWv%2Fw0UuQo9lH4mRtQGb%2FdoREBAWwtDcxFGMW0C4PnpvegDVqhgoj%2BtsHXr%2FeGnUNwjtul4Re7rgwtz7Rihx0YN8YkeGwIuKzDKg4XUBjqkAfGPa6dlZrgk5VHFee2Vo2vZQFX4XCw5W1WVjtyY%2Bm8OY5QBFyKvEEL0MSQV7rMubMU4V9yrSuHPzoio9Mbp4Jw7wv4MDldwcwocON9UNYWr8kgkvxkThHItdf5yaAgw7ZTt2Q0vsyqrRR0PuiJE9fOHjY9yxgw5CNjQetL%2FNXsg3MAHXnn5Yrtr7HPyGNV3%2B%2Bg0POqLuuSVctMYfRB8tNLEYpqk&X-Amz-Signature=1caafed1fe0479585d67437ba96711404fea4af6ab9dc5a165bdac48a5ecf2bc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
