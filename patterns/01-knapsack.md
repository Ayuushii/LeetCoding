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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRHSNQQL%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIGBY8qxgdLL6Dm6JRRB0Mc7zjLcP%2FoVwUER0okv2JMFNAiBY4VrWkqtPJklyHgTKmoBox3RFWo3j8xTbceDJVH87vSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMUFXg4A2zV2H4tFvoKtwDGREHr8LBMfK0WV9rkWuIOfeMe8FO3XUe%2FohxuPYircLCcU82e67ehiNKPX7KzQkUbAwHLoSjd24Ak2nw4iJuiRnA6WYUMiCSMCrpCIqKuONZ4v%2FTm5Y3j9%2FMGR4SUXKo9rozk9ccv0LWoa7k1aZhR0EG5SrWYoEpSQ6NAsVl74GLsAoI8jcjZ8grtfhw8o8yUwEixo3nh5HPc1QrjIrXI2mzYwftU%2F%2B70yt%2FVpGgMQc9AeiarQwA3IOefjyjFRGCpVI1nKu0rlvGtst6ek%2BP934nyLqKpxVQqN%2B4YDW9UHtDNx9REkqIs0qC1thmIa19UXQYskGENmSp90x9z2ZrhnjkIAM7yh7TrV3bq4PhIKAs4C6t4LWdnS8ikFnlfWhwM5BiBqIdfWFeC%2Fwxo5FZWh6dRsGKoXObEMAmAtZNuLupc%2FTTOPhSYQPFv2FplfLfQD90%2B4nBZJpuEgpMfYV%2ByRGNyJCgZUCcr5EgKCo2UfHEZP%2BctyGj%2FkTa9hhHBufYGDPyG%2FR3kvZJS%2Bazcq2gfxUAWRL7TDLcSzpa9w0XOo1dXgRCXwB5QzC4mQF4XvRzpH%2BNjtptYk%2F%2Bmm6cfnPGS61WmIXT8GbuLMEqN1INHFytxOrhlrP6X95NNF4w%2FKur2AY6pgHGGIJTKCl%2Bte%2BcdQftIhc1kjTqK8qiIjf0IWha51uNqfBctuhUoZDZZAzjzlLmAudNGcYGShi%2BvOeyCkN0w4dmMN5ZFzrGrwPHDWt%2BR4jFJNwI76t7oS8j%2F9B9%2FnMBY4uSUSX42Rn4YwFN2M3jatijPwLCxw%2Byp9qLc2z8MkMNnTK3oVzDt5ln8Y36wWcYBSQJPKCZ4td26vgjF9ZY4Huhvs2P7K%2BX&X-Amz-Signature=df8337efe9ee5ef163fc1389ac3ed8d5149f1ae5918498e525a59a0d8e6e6079&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRHSNQQL%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIGBY8qxgdLL6Dm6JRRB0Mc7zjLcP%2FoVwUER0okv2JMFNAiBY4VrWkqtPJklyHgTKmoBox3RFWo3j8xTbceDJVH87vSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMUFXg4A2zV2H4tFvoKtwDGREHr8LBMfK0WV9rkWuIOfeMe8FO3XUe%2FohxuPYircLCcU82e67ehiNKPX7KzQkUbAwHLoSjd24Ak2nw4iJuiRnA6WYUMiCSMCrpCIqKuONZ4v%2FTm5Y3j9%2FMGR4SUXKo9rozk9ccv0LWoa7k1aZhR0EG5SrWYoEpSQ6NAsVl74GLsAoI8jcjZ8grtfhw8o8yUwEixo3nh5HPc1QrjIrXI2mzYwftU%2F%2B70yt%2FVpGgMQc9AeiarQwA3IOefjyjFRGCpVI1nKu0rlvGtst6ek%2BP934nyLqKpxVQqN%2B4YDW9UHtDNx9REkqIs0qC1thmIa19UXQYskGENmSp90x9z2ZrhnjkIAM7yh7TrV3bq4PhIKAs4C6t4LWdnS8ikFnlfWhwM5BiBqIdfWFeC%2Fwxo5FZWh6dRsGKoXObEMAmAtZNuLupc%2FTTOPhSYQPFv2FplfLfQD90%2B4nBZJpuEgpMfYV%2ByRGNyJCgZUCcr5EgKCo2UfHEZP%2BctyGj%2FkTa9hhHBufYGDPyG%2FR3kvZJS%2Bazcq2gfxUAWRL7TDLcSzpa9w0XOo1dXgRCXwB5QzC4mQF4XvRzpH%2BNjtptYk%2F%2Bmm6cfnPGS61WmIXT8GbuLMEqN1INHFytxOrhlrP6X95NNF4w%2FKur2AY6pgHGGIJTKCl%2Bte%2BcdQftIhc1kjTqK8qiIjf0IWha51uNqfBctuhUoZDZZAzjzlLmAudNGcYGShi%2BvOeyCkN0w4dmMN5ZFzrGrwPHDWt%2BR4jFJNwI76t7oS8j%2F9B9%2FnMBY4uSUSX42Rn4YwFN2M3jatijPwLCxw%2Byp9qLc2z8MkMNnTK3oVzDt5ln8Y36wWcYBSQJPKCZ4td26vgjF9ZY4Huhvs2P7K%2BX&X-Amz-Signature=d20c5ac5cc2a551719b7c3029f7298fc209a7207201fcedeccc1df4be3e40cfd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRHSNQQL%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIGBY8qxgdLL6Dm6JRRB0Mc7zjLcP%2FoVwUER0okv2JMFNAiBY4VrWkqtPJklyHgTKmoBox3RFWo3j8xTbceDJVH87vSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMUFXg4A2zV2H4tFvoKtwDGREHr8LBMfK0WV9rkWuIOfeMe8FO3XUe%2FohxuPYircLCcU82e67ehiNKPX7KzQkUbAwHLoSjd24Ak2nw4iJuiRnA6WYUMiCSMCrpCIqKuONZ4v%2FTm5Y3j9%2FMGR4SUXKo9rozk9ccv0LWoa7k1aZhR0EG5SrWYoEpSQ6NAsVl74GLsAoI8jcjZ8grtfhw8o8yUwEixo3nh5HPc1QrjIrXI2mzYwftU%2F%2B70yt%2FVpGgMQc9AeiarQwA3IOefjyjFRGCpVI1nKu0rlvGtst6ek%2BP934nyLqKpxVQqN%2B4YDW9UHtDNx9REkqIs0qC1thmIa19UXQYskGENmSp90x9z2ZrhnjkIAM7yh7TrV3bq4PhIKAs4C6t4LWdnS8ikFnlfWhwM5BiBqIdfWFeC%2Fwxo5FZWh6dRsGKoXObEMAmAtZNuLupc%2FTTOPhSYQPFv2FplfLfQD90%2B4nBZJpuEgpMfYV%2ByRGNyJCgZUCcr5EgKCo2UfHEZP%2BctyGj%2FkTa9hhHBufYGDPyG%2FR3kvZJS%2Bazcq2gfxUAWRL7TDLcSzpa9w0XOo1dXgRCXwB5QzC4mQF4XvRzpH%2BNjtptYk%2F%2Bmm6cfnPGS61WmIXT8GbuLMEqN1INHFytxOrhlrP6X95NNF4w%2FKur2AY6pgHGGIJTKCl%2Bte%2BcdQftIhc1kjTqK8qiIjf0IWha51uNqfBctuhUoZDZZAzjzlLmAudNGcYGShi%2BvOeyCkN0w4dmMN5ZFzrGrwPHDWt%2BR4jFJNwI76t7oS8j%2F9B9%2FnMBY4uSUSX42Rn4YwFN2M3jatijPwLCxw%2Byp9qLc2z8MkMNnTK3oVzDt5ln8Y36wWcYBSQJPKCZ4td26vgjF9ZY4Huhvs2P7K%2BX&X-Amz-Signature=f88464a9a9cb0aabaa956a43274f57d0d48279bbccfd45774a01a20ee6fde297&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QA6OBZET%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIDjVEwFeXhAzs3k0HDyUk2%2BkM8WU75%2F7WqtfYUHkcz%2F1AiBnX3Dt2IORWcyGab0oL%2B7sk%2FNXltHBerBDqzt08fH%2FeSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2BunEu4xzUYggTBLnKtwD%2FFcgAqSCe7ZW0oXlU3xXOqYJFp%2FzdSjE8Qong1NOM9f2fLD4zh0sMbe%2FHiOMKXl2gIGhKQ1EsKjp6xZPUs%2B5oyjBeTLSk9GzCokiVoI%2F6M5YPum3lVdf%2B05jD5B4XkR%2BAKwslTDZDHFeSQ5as%2B0mcLVqAKY%2FKYey87xoiCk3z9JUkyNt6NXqFG%2FMeSzTGYwaZxnZIXuR3XXk2AcTogcobCJ9WewBXJayeOZVQkV8cnyUrm6B48IVym1r7aRQRG27jI0GIeyhslXsVYkRb6ivOb0qSpsWXmPxPiKvVlUdA8lPTLb1eLQxBYwmIiWRKqFkRXsVsJg0R%2Fu8GySf3L35LN6nRdWYUyTNRGai7WNHrlRBhJH7QR22PLMpB0D6P%2F%2FyLA9trE5CbeEscSzatQDt8%2Flv3NDG4Noo7qY1jQ0MsPOsL%2BCBHl9EEx%2FFIJ0MnhmmSSvAVs23mYhPS6IqoLaj28dppqeO6QKVgTpGxUC9T8z%2F0bVP1MaPgEAxqgLmw1NLOI4S5OOKL%2BZ9RgFm4k36laW94yQU1VUa%2FbgPv0knVfv4b0SVS0aQWE4yxRAEOXrSyyxzPr0pyj3ttWy052nO0W6nQCAH17weMKWomcnAX8N%2BtTjD3fm5QCSGtdYwv6ur2AY6pgGgpcbbGRHauZ1ce3TTJIjEQDw7HAFcjuGN2Tp8Pg%2FeBGYl9%2BJ%2BTdr2Lfb1XfAELQyTmOZdbh0uzt%2B7X%2FbzPF65g%2BxzTb3GtPeUbq7etenMGmIfOCaaARa1%2FezjAleKcCY7BKqBjly1EM8x1qUp8slZsEJhM%2Bv4zWd243dbcweGwAipmttzlMcPLU2Gcci20uordlFy0qdRn6IDBcLQxvfIvrQ%2Fo84q&X-Amz-Signature=6598fd847bfd33798de7ab3d27d28745b7fe65e47a367fb2773eddc44a465df1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QA6OBZET%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIDjVEwFeXhAzs3k0HDyUk2%2BkM8WU75%2F7WqtfYUHkcz%2F1AiBnX3Dt2IORWcyGab0oL%2B7sk%2FNXltHBerBDqzt08fH%2FeSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2BunEu4xzUYggTBLnKtwD%2FFcgAqSCe7ZW0oXlU3xXOqYJFp%2FzdSjE8Qong1NOM9f2fLD4zh0sMbe%2FHiOMKXl2gIGhKQ1EsKjp6xZPUs%2B5oyjBeTLSk9GzCokiVoI%2F6M5YPum3lVdf%2B05jD5B4XkR%2BAKwslTDZDHFeSQ5as%2B0mcLVqAKY%2FKYey87xoiCk3z9JUkyNt6NXqFG%2FMeSzTGYwaZxnZIXuR3XXk2AcTogcobCJ9WewBXJayeOZVQkV8cnyUrm6B48IVym1r7aRQRG27jI0GIeyhslXsVYkRb6ivOb0qSpsWXmPxPiKvVlUdA8lPTLb1eLQxBYwmIiWRKqFkRXsVsJg0R%2Fu8GySf3L35LN6nRdWYUyTNRGai7WNHrlRBhJH7QR22PLMpB0D6P%2F%2FyLA9trE5CbeEscSzatQDt8%2Flv3NDG4Noo7qY1jQ0MsPOsL%2BCBHl9EEx%2FFIJ0MnhmmSSvAVs23mYhPS6IqoLaj28dppqeO6QKVgTpGxUC9T8z%2F0bVP1MaPgEAxqgLmw1NLOI4S5OOKL%2BZ9RgFm4k36laW94yQU1VUa%2FbgPv0knVfv4b0SVS0aQWE4yxRAEOXrSyyxzPr0pyj3ttWy052nO0W6nQCAH17weMKWomcnAX8N%2BtTjD3fm5QCSGtdYwv6ur2AY6pgGgpcbbGRHauZ1ce3TTJIjEQDw7HAFcjuGN2Tp8Pg%2FeBGYl9%2BJ%2BTdr2Lfb1XfAELQyTmOZdbh0uzt%2B7X%2FbzPF65g%2BxzTb3GtPeUbq7etenMGmIfOCaaARa1%2FezjAleKcCY7BKqBjly1EM8x1qUp8slZsEJhM%2Bv4zWd243dbcweGwAipmttzlMcPLU2Gcci20uordlFy0qdRn6IDBcLQxvfIvrQ%2Fo84q&X-Amz-Signature=05717676ada746c9c2db6b0876a0558800ba71c6085516461affe672e1f12b03&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QA6OBZET%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIDjVEwFeXhAzs3k0HDyUk2%2BkM8WU75%2F7WqtfYUHkcz%2F1AiBnX3Dt2IORWcyGab0oL%2B7sk%2FNXltHBerBDqzt08fH%2FeSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2BunEu4xzUYggTBLnKtwD%2FFcgAqSCe7ZW0oXlU3xXOqYJFp%2FzdSjE8Qong1NOM9f2fLD4zh0sMbe%2FHiOMKXl2gIGhKQ1EsKjp6xZPUs%2B5oyjBeTLSk9GzCokiVoI%2F6M5YPum3lVdf%2B05jD5B4XkR%2BAKwslTDZDHFeSQ5as%2B0mcLVqAKY%2FKYey87xoiCk3z9JUkyNt6NXqFG%2FMeSzTGYwaZxnZIXuR3XXk2AcTogcobCJ9WewBXJayeOZVQkV8cnyUrm6B48IVym1r7aRQRG27jI0GIeyhslXsVYkRb6ivOb0qSpsWXmPxPiKvVlUdA8lPTLb1eLQxBYwmIiWRKqFkRXsVsJg0R%2Fu8GySf3L35LN6nRdWYUyTNRGai7WNHrlRBhJH7QR22PLMpB0D6P%2F%2FyLA9trE5CbeEscSzatQDt8%2Flv3NDG4Noo7qY1jQ0MsPOsL%2BCBHl9EEx%2FFIJ0MnhmmSSvAVs23mYhPS6IqoLaj28dppqeO6QKVgTpGxUC9T8z%2F0bVP1MaPgEAxqgLmw1NLOI4S5OOKL%2BZ9RgFm4k36laW94yQU1VUa%2FbgPv0knVfv4b0SVS0aQWE4yxRAEOXrSyyxzPr0pyj3ttWy052nO0W6nQCAH17weMKWomcnAX8N%2BtTjD3fm5QCSGtdYwv6ur2AY6pgGgpcbbGRHauZ1ce3TTJIjEQDw7HAFcjuGN2Tp8Pg%2FeBGYl9%2BJ%2BTdr2Lfb1XfAELQyTmOZdbh0uzt%2B7X%2FbzPF65g%2BxzTb3GtPeUbq7etenMGmIfOCaaARa1%2FezjAleKcCY7BKqBjly1EM8x1qUp8slZsEJhM%2Bv4zWd243dbcweGwAipmttzlMcPLU2Gcci20uordlFy0qdRn6IDBcLQxvfIvrQ%2Fo84q&X-Amz-Signature=a2134ad96fe2e8ac77492aefdbe3cb47940fa22cf208b6f8cc09cee9936b1178&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QA6OBZET%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163810Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIDjVEwFeXhAzs3k0HDyUk2%2BkM8WU75%2F7WqtfYUHkcz%2F1AiBnX3Dt2IORWcyGab0oL%2B7sk%2FNXltHBerBDqzt08fH%2FeSqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2BunEu4xzUYggTBLnKtwD%2FFcgAqSCe7ZW0oXlU3xXOqYJFp%2FzdSjE8Qong1NOM9f2fLD4zh0sMbe%2FHiOMKXl2gIGhKQ1EsKjp6xZPUs%2B5oyjBeTLSk9GzCokiVoI%2F6M5YPum3lVdf%2B05jD5B4XkR%2BAKwslTDZDHFeSQ5as%2B0mcLVqAKY%2FKYey87xoiCk3z9JUkyNt6NXqFG%2FMeSzTGYwaZxnZIXuR3XXk2AcTogcobCJ9WewBXJayeOZVQkV8cnyUrm6B48IVym1r7aRQRG27jI0GIeyhslXsVYkRb6ivOb0qSpsWXmPxPiKvVlUdA8lPTLb1eLQxBYwmIiWRKqFkRXsVsJg0R%2Fu8GySf3L35LN6nRdWYUyTNRGai7WNHrlRBhJH7QR22PLMpB0D6P%2F%2FyLA9trE5CbeEscSzatQDt8%2Flv3NDG4Noo7qY1jQ0MsPOsL%2BCBHl9EEx%2FFIJ0MnhmmSSvAVs23mYhPS6IqoLaj28dppqeO6QKVgTpGxUC9T8z%2F0bVP1MaPgEAxqgLmw1NLOI4S5OOKL%2BZ9RgFm4k36laW94yQU1VUa%2FbgPv0knVfv4b0SVS0aQWE4yxRAEOXrSyyxzPr0pyj3ttWy052nO0W6nQCAH17weMKWomcnAX8N%2BtTjD3fm5QCSGtdYwv6ur2AY6pgGgpcbbGRHauZ1ce3TTJIjEQDw7HAFcjuGN2Tp8Pg%2FeBGYl9%2BJ%2BTdr2Lfb1XfAELQyTmOZdbh0uzt%2B7X%2FbzPF65g%2BxzTb3GtPeUbq7etenMGmIfOCaaARa1%2FezjAleKcCY7BKqBjly1EM8x1qUp8slZsEJhM%2Bv4zWd243dbcweGwAipmttzlMcPLU2Gcci20uordlFy0qdRn6IDBcLQxvfIvrQ%2Fo84q&X-Amz-Signature=6e70903cd4f9007cb639e2f44e674ed2b4ab4a63d522ef51a689066c1373e4cb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46666AP7PCL%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJHMEUCIQCK31aAwqmLzdnlEMl979M9U47bj9oNpZ6qzrwyNsmWTQIga8LYKQfHJJFVaKWkxgRNzQ9B876W9A%2FyfYuJVd6DUtsqiAQI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDG4PA9JSOV%2F7P9PExircA4AFMuYE4zXVCJR15Z5SdFDKG8Z5LxMkbI0z78PODvVHw2DxRargOhANj1T8U9WhFS6kia1zbbUJQ8nxVty9JMLEFWWxhsKW9z6lTT7%2By6ST5MeaJeI%2BPjSarpPpHhlL2oqOKhBv4HYIYvkAw%2BdvihTQyEs08LVHl8LuMagvaKg7lFaBo9rqUmSyh6C7U1YBoP%2BKbxadpGXnfv0AOCr1N%2FhW4yq%2FxtWJQmE8mlzbtR8epFS6YIvfQHfJScsL3I39xFjNDhxuIoxd6vB485YpLVOYTrhrdL7yxI8NIklMIH3D85c6y3d%2BjckjcAZekB1V0Z0W9lykignUI8yQq6S%2BTIuQf9SobuozCsQvFFdtfDrZMf3Acox9D0he4aCO0%2FK0saxx9I9a7Q8f7A0%2BJmCf%2FHVOnKG%2BBApNr1kb35jmJ8GjpvR66PFaTXdpCjdcINad%2BLuBpvZG3AZhyd6kliPAOfIkbQ785ZLJhG0Due5Ugto%2FUPE5nJHVoj5FFJtRF1rbUrWr4%2FiYMVJH4VNXNgSaZXAM5YTOfJgRGzG5KCnmxVcjUK2F0MwOEGvIFuG4J2gEx59lBXsGwmfNQt5Ztmu%2B19tGvFi38IMHHYentaS0uCiLE%2Fh31YbUIEIozR3PMN%2Bzq9gGOqUBCVhvohITMODvE2A1l%2BJ4rsPi5hvdxYetTtL5eyNmoeObGCVeGVIqYVyeFBmRDZ2qn%2BkmDDFjb6xuFfoBTiwprVhBnWl8Wc%2BQo709S0Y44ulD0EM2aKxfRVdWsRmUm1jJGeuAHU4RBKWjLg9m1khhPQuIuSdi7Uj4sLyaIhUc%2B%2F5qZuzMa8T%2FglxWqrPIcm7Td5Jk2E1L9KbPS92yqFarBHacI1Al&X-Amz-Signature=8f8e09638e1b944ddc1ddcd04a43cab908e5753c4be56a614dc9e80dcb20c94e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YU7HYFDD%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJIMEYCIQCNVJk%2F%2Fhj%2FY4aVpRxOy%2FFY2p7cRfViCc77Qyz3X6QmggIhAOOtkXbWODhyAxEm3ho5N9%2BQkxMB1KbRAvfA2zVgGhvCKogECO7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw5HomIUwF4GfcnQgsq3AP%2F8BBiUlS7m5IC5Fy2i3BvoWFenFDsdFQioOfVlH%2FQkhqZZY0TmLLoVNGoNbrP0BdfRW8ULbg9ujBm3nRB4ZYPaS40O74bcS3kYAOYi46IIjGCZDWMrstbUCFDSU%2BgiuugfaJmhcufOcRFeL3ApvkWn%2FFVYUAECg1GMXuGJMZm2qcd3OV5dSS4kPZ4zQeODIsgz7MTq4cb5x4v8R5C%2FTfhnvfUoe4%2FwtL0DPlZeoyoD639r5ZX%2B53I7wFyvbIMlRbL0RQ29iqjAISRpXnF5PzpcIMsj6SKjTcFRm7J9JHe2H%2Bv65mKdwysRqgfN5inpjCwzQ7dSGCr6rG56vUbIfksVHs7sL3%2FW7rfDb6gQUlpL3u9NjNdC06OxjX3TJMCM7XbfwuBaECTgO33kumXy2k9s54PH%2FHZkoUKFNLkccFNeKmkTc93pTBDhmG%2FcIbuppcogkfcxr43CbG8BRvkj5ek9wcaPkR93sHLRNprAIhb06nMnZvRCSOqbwWTFbbk%2BMDldKvg6MyRQniZrcYCh8ZAYiuPiJOGiCMZ65ruMEwcW3W2hK3w06ME6lB03hpavrS7i%2BlKIUN%2FQprBIjq0S2xz76APtKbhArVzK9Q5UzOAJvU562%2FRK8i46bHuyzCarKvYBjqkASl2koT05izKyup1W1xqHE1d9FOIHVIdza8f6kE1MicRLAbkUxLE7IM7i%2FT8MwLhpL8QksGpOA%2FSiY70Wsm85XOaJekkBnSsRGWATJDQboCEZIWeST01bfQzws27mXw1ThBBVWRToDiNrOS2xF%2B%2B8p0wzGbmdr6Jgg4LKLMiaDEezVbXrG43IWjnS88epFEw0WwR7eCHyyCbP%2FYKPjNSYdjvrq9E&X-Amz-Signature=245fc08052b6be35610e64db6f6b4eb3a9d7a4a6a26ce3c94eb42bdaf79ebc87&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YU7HYFDD%2F20261128%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261128T163811Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJIMEYCIQCNVJk%2F%2Fhj%2FY4aVpRxOy%2FFY2p7cRfViCc77Qyz3X6QmggIhAOOtkXbWODhyAxEm3ho5N9%2BQkxMB1KbRAvfA2zVgGhvCKogECO7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw5HomIUwF4GfcnQgsq3AP%2F8BBiUlS7m5IC5Fy2i3BvoWFenFDsdFQioOfVlH%2FQkhqZZY0TmLLoVNGoNbrP0BdfRW8ULbg9ujBm3nRB4ZYPaS40O74bcS3kYAOYi46IIjGCZDWMrstbUCFDSU%2BgiuugfaJmhcufOcRFeL3ApvkWn%2FFVYUAECg1GMXuGJMZm2qcd3OV5dSS4kPZ4zQeODIsgz7MTq4cb5x4v8R5C%2FTfhnvfUoe4%2FwtL0DPlZeoyoD639r5ZX%2B53I7wFyvbIMlRbL0RQ29iqjAISRpXnF5PzpcIMsj6SKjTcFRm7J9JHe2H%2Bv65mKdwysRqgfN5inpjCwzQ7dSGCr6rG56vUbIfksVHs7sL3%2FW7rfDb6gQUlpL3u9NjNdC06OxjX3TJMCM7XbfwuBaECTgO33kumXy2k9s54PH%2FHZkoUKFNLkccFNeKmkTc93pTBDhmG%2FcIbuppcogkfcxr43CbG8BRvkj5ek9wcaPkR93sHLRNprAIhb06nMnZvRCSOqbwWTFbbk%2BMDldKvg6MyRQniZrcYCh8ZAYiuPiJOGiCMZ65ruMEwcW3W2hK3w06ME6lB03hpavrS7i%2BlKIUN%2FQprBIjq0S2xz76APtKbhArVzK9Q5UzOAJvU562%2FRK8i46bHuyzCarKvYBjqkASl2koT05izKyup1W1xqHE1d9FOIHVIdza8f6kE1MicRLAbkUxLE7IM7i%2FT8MwLhpL8QksGpOA%2FSiY70Wsm85XOaJekkBnSsRGWATJDQboCEZIWeST01bfQzws27mXw1ThBBVWRToDiNrOS2xF%2B%2B8p0wzGbmdr6Jgg4LKLMiaDEezVbXrG43IWjnS88epFEw0WwR7eCHyyCbP%2FYKPjNSYdjvrq9E&X-Amz-Signature=f9b7331016facef7c8b81130d9f168f45055db7aaf2fcebdcf7bda198c89b07c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
