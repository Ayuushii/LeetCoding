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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6H2QSYA%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG0voz6AlCMBpwjsaAItseSCPj5XR%2FWeCSU%2Fbhwp023bAiAgj0RESVI8LLCSm6ITT0pZcQ%2FLUyaZc6kXiU7%2F%2BmUO0SqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMgDwzbqiAn2P%2F6MLCKtwDYJiLlj78gxw8idRZLrhfDust6hRCJ45UFMQhkrUs1H5xBzLaQtHiPoTcpkqFq1FsZc6qku7twT1bbIQAFPtbH%2FZ9D8nUUtqsztNylhA2kQPWf7ZANDPkFLfPoSjZtYAVBtW3WDofSUK%2FXSWrOmrMN6mZ%2FA%2FkmYKN6fw0gBBOiOfRhn96SOQTjPUjfI7342bDOEnzTZGHEqovSRA4%2BDAJ5Qd6LXcD7o7dNZXpHjJrVuB5CmGQc4S%2FvZc6MidZTpfi5daxouN81yN8DKx7Hj9ZDZ61XQqG%2BcsdswYiWQTnq21UKrxB6SVPpbXvvb9KnPvSS%2BDIAJY5PWJ44O64O5DBzFEvPbcCeD23KK58IIIbZdKX6WekXuvC4noqPRrQZKdILcIzRr4w1C3ybE5AhI%2BGYNaTjesyExApZVyZ9MW8KUdWFQ%2Fb%2F%2BhgujeqKXDdfLERDfwUu8JDKJqVPil0jg6M4xiHNNUNH0PziaG5wkfymVNmiKKpVQxcvd8ccLjAB6gA34E2v8U51gqZXuinp2jcHSc7hpSmPNU8iaWtXZKKzvUIOKb8%2BHbb%2BELlA9HclAqNfL1fvYwbM7lY%2BY%2BibrU44%2BbNyZKK3XHWcvNBhQfuBmJP5WMaqHfm0zdcybkwyKXszwY6pgEVnJsQuet4xHuJrqS05bsD7KFsE0GkXHNXfM9e%2Btzeu5Ic8So2eGNTElTDfJkDFy8ZRMx8Cjmb%2FpqrKHeMEnqOSgNK2RovuT8TnThNkrPvjVnRNgpR0Gyzu33I%2BUvbr4ohz1ftLEX081wR9KMozjwCsDy7FhaZ8DJttg1z%2BO%2FxzcyjUORw%2FaiALYDjQn7spbTFP8WlLU303jDnaNcYoUJ40aTo6GzS&X-Amz-Signature=0f8af86fe9278693901dc4c98dd2b1e075ceef988453cf7fdcf823f1e6fecf33&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6H2QSYA%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG0voz6AlCMBpwjsaAItseSCPj5XR%2FWeCSU%2Fbhwp023bAiAgj0RESVI8LLCSm6ITT0pZcQ%2FLUyaZc6kXiU7%2F%2BmUO0SqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMgDwzbqiAn2P%2F6MLCKtwDYJiLlj78gxw8idRZLrhfDust6hRCJ45UFMQhkrUs1H5xBzLaQtHiPoTcpkqFq1FsZc6qku7twT1bbIQAFPtbH%2FZ9D8nUUtqsztNylhA2kQPWf7ZANDPkFLfPoSjZtYAVBtW3WDofSUK%2FXSWrOmrMN6mZ%2FA%2FkmYKN6fw0gBBOiOfRhn96SOQTjPUjfI7342bDOEnzTZGHEqovSRA4%2BDAJ5Qd6LXcD7o7dNZXpHjJrVuB5CmGQc4S%2FvZc6MidZTpfi5daxouN81yN8DKx7Hj9ZDZ61XQqG%2BcsdswYiWQTnq21UKrxB6SVPpbXvvb9KnPvSS%2BDIAJY5PWJ44O64O5DBzFEvPbcCeD23KK58IIIbZdKX6WekXuvC4noqPRrQZKdILcIzRr4w1C3ybE5AhI%2BGYNaTjesyExApZVyZ9MW8KUdWFQ%2Fb%2F%2BhgujeqKXDdfLERDfwUu8JDKJqVPil0jg6M4xiHNNUNH0PziaG5wkfymVNmiKKpVQxcvd8ccLjAB6gA34E2v8U51gqZXuinp2jcHSc7hpSmPNU8iaWtXZKKzvUIOKb8%2BHbb%2BELlA9HclAqNfL1fvYwbM7lY%2BY%2BibrU44%2BbNyZKK3XHWcvNBhQfuBmJP5WMaqHfm0zdcybkwyKXszwY6pgEVnJsQuet4xHuJrqS05bsD7KFsE0GkXHNXfM9e%2Btzeu5Ic8So2eGNTElTDfJkDFy8ZRMx8Cjmb%2FpqrKHeMEnqOSgNK2RovuT8TnThNkrPvjVnRNgpR0Gyzu33I%2BUvbr4ohz1ftLEX081wR9KMozjwCsDy7FhaZ8DJttg1z%2BO%2FxzcyjUORw%2FaiALYDjQn7spbTFP8WlLU303jDnaNcYoUJ40aTo6GzS&X-Amz-Signature=d754918a25c6e009cfba6b1690ed26fccaa044eb3633b2b1d3b6101492d7bd9b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T6H2QSYA%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIG0voz6AlCMBpwjsaAItseSCPj5XR%2FWeCSU%2Fbhwp023bAiAgj0RESVI8LLCSm6ITT0pZcQ%2FLUyaZc6kXiU7%2F%2BmUO0SqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMgDwzbqiAn2P%2F6MLCKtwDYJiLlj78gxw8idRZLrhfDust6hRCJ45UFMQhkrUs1H5xBzLaQtHiPoTcpkqFq1FsZc6qku7twT1bbIQAFPtbH%2FZ9D8nUUtqsztNylhA2kQPWf7ZANDPkFLfPoSjZtYAVBtW3WDofSUK%2FXSWrOmrMN6mZ%2FA%2FkmYKN6fw0gBBOiOfRhn96SOQTjPUjfI7342bDOEnzTZGHEqovSRA4%2BDAJ5Qd6LXcD7o7dNZXpHjJrVuB5CmGQc4S%2FvZc6MidZTpfi5daxouN81yN8DKx7Hj9ZDZ61XQqG%2BcsdswYiWQTnq21UKrxB6SVPpbXvvb9KnPvSS%2BDIAJY5PWJ44O64O5DBzFEvPbcCeD23KK58IIIbZdKX6WekXuvC4noqPRrQZKdILcIzRr4w1C3ybE5AhI%2BGYNaTjesyExApZVyZ9MW8KUdWFQ%2Fb%2F%2BhgujeqKXDdfLERDfwUu8JDKJqVPil0jg6M4xiHNNUNH0PziaG5wkfymVNmiKKpVQxcvd8ccLjAB6gA34E2v8U51gqZXuinp2jcHSc7hpSmPNU8iaWtXZKKzvUIOKb8%2BHbb%2BELlA9HclAqNfL1fvYwbM7lY%2BY%2BibrU44%2BbNyZKK3XHWcvNBhQfuBmJP5WMaqHfm0zdcybkwyKXszwY6pgEVnJsQuet4xHuJrqS05bsD7KFsE0GkXHNXfM9e%2Btzeu5Ic8So2eGNTElTDfJkDFy8ZRMx8Cjmb%2FpqrKHeMEnqOSgNK2RovuT8TnThNkrPvjVnRNgpR0Gyzu33I%2BUvbr4ohz1ftLEX081wR9KMozjwCsDy7FhaZ8DJttg1z%2BO%2FxzcyjUORw%2FaiALYDjQn7spbTFP8WlLU303jDnaNcYoUJ40aTo6GzS&X-Amz-Signature=5d3b57e50f1ad77ed87cec38580518b038b212851e264f78347296fb29a4edc3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDBJ3HLL%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHjlSeUH6EWmHxsfHBgX9Tfdm7yVT93t6%2FRqFfJsW87VAiEAghvxrZiAyFjddQteNYEjKfvAc3Y39cHsCZaUqcvQSIkqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA5%2FGKhoGlKP3CyfmyrcA4EgTdWe%2BipwJ95pj0CNCRXHmCRDuJ4qv2kF2Bwq%2FhhNS9UkGj171arWXBiCBZ8caSOASH5VkPQlQzM51qiB2FO2ssMMpj0k7Lsj5ZASnEQCffpn3Blq0pwDqVXbTVRCuQeHIYCJESQNdOvGFhlINA9s%2FRmcTmrlRUemGEB8b1HRZRRJiBblI9YN%2BAgRr8XN2SnfkKuER2CL8%2FaownOg6hldJVeB9PhbDx3YlaR%2FOhBFlSqUFpCzVoQ4X2DSBbzQz1tGuW2kUWB6TO%2BvR2pdX1ZhOMtUiBZ1MVGxxUwG6D0AXfF4XRMKzHTaSH3uSLxAy9RVa1XG%2FBhxnqVK9Kw2XkrWxsnecQyDO%2BGv226i3Hig00c5em6rXjSB3muQSEEH6q0ArV92RvH59TbiXnrYSJv6Uuj2aNByg52qqt7EdGV2rkbVE83ePIUEqeIP7oxR%2Fz0xgwT35gAwlXMVMXPk1D6Qx5fxhpp17WoqFdCS%2F1ITnCswD08lAeMpkJtG1vL2V8LyZIabqQ67QT9skRJEUYpIzG%2FZ8wC6Xx6FvYotxN9xfD2%2Fi4WmeJPix18wmIbR0sVeudJTt1H5vgfx5mif8NaOfI1q3f9XDhY6T8J0GtOfnypx9PzAP4G5ct2DMNGo7M8GOqUBzezQjnm3HDLw%2F0N3QHtjLFbO6%2FlZOoA8Sy%2BmKrbNO%2B394eWo1q2zjd2KFa4cjtq%2FIVJm31KTUrNAgwUdPO82X4KKPwtoyrDD5cuGzD41EHV9UiFJJblToS8rhc2dH0t1CDsnigEN3WS4bOXVdjnkacZMy6LfqO5xrYP98VAbFyzHIvufrB44aIZjA5db3upHivI2%2FQOdzCBc%2F67jOxIz2D0ws5zN&X-Amz-Signature=51831f305af6825b400d0905a96e16d053bcb9d95261cc9a96ba2412bfd6f8d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDBJ3HLL%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHjlSeUH6EWmHxsfHBgX9Tfdm7yVT93t6%2FRqFfJsW87VAiEAghvxrZiAyFjddQteNYEjKfvAc3Y39cHsCZaUqcvQSIkqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA5%2FGKhoGlKP3CyfmyrcA4EgTdWe%2BipwJ95pj0CNCRXHmCRDuJ4qv2kF2Bwq%2FhhNS9UkGj171arWXBiCBZ8caSOASH5VkPQlQzM51qiB2FO2ssMMpj0k7Lsj5ZASnEQCffpn3Blq0pwDqVXbTVRCuQeHIYCJESQNdOvGFhlINA9s%2FRmcTmrlRUemGEB8b1HRZRRJiBblI9YN%2BAgRr8XN2SnfkKuER2CL8%2FaownOg6hldJVeB9PhbDx3YlaR%2FOhBFlSqUFpCzVoQ4X2DSBbzQz1tGuW2kUWB6TO%2BvR2pdX1ZhOMtUiBZ1MVGxxUwG6D0AXfF4XRMKzHTaSH3uSLxAy9RVa1XG%2FBhxnqVK9Kw2XkrWxsnecQyDO%2BGv226i3Hig00c5em6rXjSB3muQSEEH6q0ArV92RvH59TbiXnrYSJv6Uuj2aNByg52qqt7EdGV2rkbVE83ePIUEqeIP7oxR%2Fz0xgwT35gAwlXMVMXPk1D6Qx5fxhpp17WoqFdCS%2F1ITnCswD08lAeMpkJtG1vL2V8LyZIabqQ67QT9skRJEUYpIzG%2FZ8wC6Xx6FvYotxN9xfD2%2Fi4WmeJPix18wmIbR0sVeudJTt1H5vgfx5mif8NaOfI1q3f9XDhY6T8J0GtOfnypx9PzAP4G5ct2DMNGo7M8GOqUBzezQjnm3HDLw%2F0N3QHtjLFbO6%2FlZOoA8Sy%2BmKrbNO%2B394eWo1q2zjd2KFa4cjtq%2FIVJm31KTUrNAgwUdPO82X4KKPwtoyrDD5cuGzD41EHV9UiFJJblToS8rhc2dH0t1CDsnigEN3WS4bOXVdjnkacZMy6LfqO5xrYP98VAbFyzHIvufrB44aIZjA5db3upHivI2%2FQOdzCBc%2F67jOxIz2D0ws5zN&X-Amz-Signature=548bc6db81ee2ec6c10f9740c1d4a24ec663641a952e0093bd3d63dac56aef42&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDBJ3HLL%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHjlSeUH6EWmHxsfHBgX9Tfdm7yVT93t6%2FRqFfJsW87VAiEAghvxrZiAyFjddQteNYEjKfvAc3Y39cHsCZaUqcvQSIkqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA5%2FGKhoGlKP3CyfmyrcA4EgTdWe%2BipwJ95pj0CNCRXHmCRDuJ4qv2kF2Bwq%2FhhNS9UkGj171arWXBiCBZ8caSOASH5VkPQlQzM51qiB2FO2ssMMpj0k7Lsj5ZASnEQCffpn3Blq0pwDqVXbTVRCuQeHIYCJESQNdOvGFhlINA9s%2FRmcTmrlRUemGEB8b1HRZRRJiBblI9YN%2BAgRr8XN2SnfkKuER2CL8%2FaownOg6hldJVeB9PhbDx3YlaR%2FOhBFlSqUFpCzVoQ4X2DSBbzQz1tGuW2kUWB6TO%2BvR2pdX1ZhOMtUiBZ1MVGxxUwG6D0AXfF4XRMKzHTaSH3uSLxAy9RVa1XG%2FBhxnqVK9Kw2XkrWxsnecQyDO%2BGv226i3Hig00c5em6rXjSB3muQSEEH6q0ArV92RvH59TbiXnrYSJv6Uuj2aNByg52qqt7EdGV2rkbVE83ePIUEqeIP7oxR%2Fz0xgwT35gAwlXMVMXPk1D6Qx5fxhpp17WoqFdCS%2F1ITnCswD08lAeMpkJtG1vL2V8LyZIabqQ67QT9skRJEUYpIzG%2FZ8wC6Xx6FvYotxN9xfD2%2Fi4WmeJPix18wmIbR0sVeudJTt1H5vgfx5mif8NaOfI1q3f9XDhY6T8J0GtOfnypx9PzAP4G5ct2DMNGo7M8GOqUBzezQjnm3HDLw%2F0N3QHtjLFbO6%2FlZOoA8Sy%2BmKrbNO%2B394eWo1q2zjd2KFa4cjtq%2FIVJm31KTUrNAgwUdPO82X4KKPwtoyrDD5cuGzD41EHV9UiFJJblToS8rhc2dH0t1CDsnigEN3WS4bOXVdjnkacZMy6LfqO5xrYP98VAbFyzHIvufrB44aIZjA5db3upHivI2%2FQOdzCBc%2F67jOxIz2D0ws5zN&X-Amz-Signature=5f204a6b75238f8229fb25a083d5535968f0b3add87f32bad278f34c637b44b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDBJ3HLL%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101652Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHjlSeUH6EWmHxsfHBgX9Tfdm7yVT93t6%2FRqFfJsW87VAiEAghvxrZiAyFjddQteNYEjKfvAc3Y39cHsCZaUqcvQSIkqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA5%2FGKhoGlKP3CyfmyrcA4EgTdWe%2BipwJ95pj0CNCRXHmCRDuJ4qv2kF2Bwq%2FhhNS9UkGj171arWXBiCBZ8caSOASH5VkPQlQzM51qiB2FO2ssMMpj0k7Lsj5ZASnEQCffpn3Blq0pwDqVXbTVRCuQeHIYCJESQNdOvGFhlINA9s%2FRmcTmrlRUemGEB8b1HRZRRJiBblI9YN%2BAgRr8XN2SnfkKuER2CL8%2FaownOg6hldJVeB9PhbDx3YlaR%2FOhBFlSqUFpCzVoQ4X2DSBbzQz1tGuW2kUWB6TO%2BvR2pdX1ZhOMtUiBZ1MVGxxUwG6D0AXfF4XRMKzHTaSH3uSLxAy9RVa1XG%2FBhxnqVK9Kw2XkrWxsnecQyDO%2BGv226i3Hig00c5em6rXjSB3muQSEEH6q0ArV92RvH59TbiXnrYSJv6Uuj2aNByg52qqt7EdGV2rkbVE83ePIUEqeIP7oxR%2Fz0xgwT35gAwlXMVMXPk1D6Qx5fxhpp17WoqFdCS%2F1ITnCswD08lAeMpkJtG1vL2V8LyZIabqQ67QT9skRJEUYpIzG%2FZ8wC6Xx6FvYotxN9xfD2%2Fi4WmeJPix18wmIbR0sVeudJTt1H5vgfx5mif8NaOfI1q3f9XDhY6T8J0GtOfnypx9PzAP4G5ct2DMNGo7M8GOqUBzezQjnm3HDLw%2F0N3QHtjLFbO6%2FlZOoA8Sy%2BmKrbNO%2B394eWo1q2zjd2KFa4cjtq%2FIVJm31KTUrNAgwUdPO82X4KKPwtoyrDD5cuGzD41EHV9UiFJJblToS8rhc2dH0t1CDsnigEN3WS4bOXVdjnkacZMy6LfqO5xrYP98VAbFyzHIvufrB44aIZjA5db3upHivI2%2FQOdzCBc%2F67jOxIz2D0ws5zN&X-Amz-Signature=fa99a72802bfbe991bdeaa26319b5a92eeecc3588f876704e35f0b8a063f9f36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QP32QAHA%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101653Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC5pF4ixmwbnchgQz6%2BHX4HIhgAKfadg6GcblAzLv6WigIgOl7GXPE1%2Fo5Yl2DYPOr1TOdwnZRrO3uHqAUfTx5UwMYqiAQIm%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDN%2Bf%2FHvZwJioSe0ZPircA7b80V6KYa2zf%2B%2Fu0XRpuCgkY5j2Omj0eu8ekoAhMk0rmVBKeh3SLmedfzd8pWw910BP84mfIvu5PHjjyspEP6Q1vttlQwmDt5iL9YB8qNxHNt%2F9n9krbrdSSZcBgJq8uiMXUVktRtcIiNoCS6w6137G1zfjg8L1BnGzSmRbF6uPt0WhJPM63VityHOS4jSLyVpyijsILOWz%2FyNP82iWT9fNebjjAYJ%2FLzUau0f8URzZySK8uBUAsDhINLwqcTRquACdxJxRTMNd1dlGGYrm0mrQgocLto4Yf0tla1idk8sCD0xXt5Xa0m%2FEso4qxTDI5LZ%2FBvtsHQtCqZc9hsgridAlwErpkVDhB5QgHLJg4Ijzw0zK%2Ft8s67IKNz7mSbm6cX22Wmc5LJ9SDgIel4nfFhi31FItDJjhmuqhtW90kNJsmgjq9wQxz7tPs9o3LmVOBzlX9fTQ0TzSsFaapfulk38N8%2B8qPmzd97X2e%2Bl464alH9IAm%2FxfSAXXhHmQQa73x8UQ9ncYJdkXoJIBziQGO2Hs%2BG9e%2FFcUn%2FyLU9R7bywEaAf1oTgpGxjbNEkNayqQihcIqEksjnTJJmYeVInXCNaQ8aj7OZBGXQCMMHm%2ByhncDqifaNIKr3b814AnMMqn7M8GOqUBm4cjCa9Uj%2FG6VabpIQXcCJs%2FrrSAreZGq5c2Btxa6rG172NRkWid5Z848I3frxwPAfFHptcnJ7VtCYDUxHXyqqExY93gpb5EI%2FZ%2Fq0m2x7PFsD1%2FqtCkUjTqXPhGUhY%2B1uok3ED%2FXM5TOgfnz1wAaxuM40XW0EicCyHPvWypIxpVtYUY%2FdYpQ2z7CdLvgwcrwLJp60PaEKNasBLg9rZOtRVfe7C0&X-Amz-Signature=0f9d7079c6085c280c01dbb93155316952625d97c75724353deab1bd269794a7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5OJLVBU%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101653Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGTkUiza%2Fs4YM9kTgaYA8Xy5dpy3BruKvwgvB5UJH3cPAiBZzPrQnvJzScigFrn6uhFJUrcXKkenw4sZZ44h1Ea0oCqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMT%2BxaKksF1Y%2FSmSENKtwDSj1sc%2BfEQAdy7rKQ64kpfylvzIwbwJ6dkReDnNQtecPHno5cJkCQAl%2Bhxmi4HUtEwLPda5qij6EgpKlKuoX5Ml%2F%2FFdCRdkAvsUH%2BUe6jPNyqT%2Fn39ruW1jTf369AtC1GO1rs5E47dEQEKiAsvm%2BB2E%2FOEU8tmxeblFo4pR%2BIvsvlE9RW5tFAbzWzjSpjEP26WYqIb9owpMMbXItAC%2BkzpRvk5%2FeOrw%2FRByOcbHMjzHdUwTHVgOLppEfEg6Omgohs6tlQ8tIutfx%2FLnUF9BjKJpiqdoU%2FPeizBUwLy5nYMSOYHafNnwRfJjZgu7umCVDTegmTyl%2FDbS8sQ1zcQ%2BWpXOBJM8kxj38yTP%2FOj7JCg%2Be2%2FAvQidb6aGBb88qUGYAxLMRT4P3HQVp%2BGFgmiCyybzfVu4wljjYJupS312ptWfJwlslNNFYJdkLoCK6qdy%2BVMtvr3p2L3aUz1RK1jHNKWlEymYyHnYBh%2BFZpTu610BSwzKjQz%2BNPBqCJDlcdZbIze0kANQXqyCxSoApX%2FfUyXD%2BOodUR%2F3VCNqzXzULw%2BshO6%2F9Iwgimfpubg4W%2F7bZJPKWpjNs5IoXYA%2FtV1nQ5VQGknqJT3PQZeAvFn2XAPwUvt2vkeFwpComxPzkw%2BKfszwY6pgEYOciNDGPLAaJ%2F4GrKPE9kmpx4cVb%2BuUMmAxS93qW3XJy%2FLPP1yB84K73aeeemay3427I6hYmOybMkHHACBUDkgF6uU7T9fc3XpblFZ9BN3%2FtG1l9mLtSf4B43imrDcnrofpLimpTr8GvXkKVJhJGVWb%2FSAleFM1yLVuFqUXjZqYCSgsblYXO%2Bz7Dfrf8xkLjmzKihlvMW7oaBQFeaHFfm5O0oBtJT&X-Amz-Signature=e1490e1dee8d196b2b62708778025b3c0826599a417d42ed0ee7c78a0edab08e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5OJLVBU%2F20260506%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260506T101653Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGTkUiza%2Fs4YM9kTgaYA8Xy5dpy3BruKvwgvB5UJH3cPAiBZzPrQnvJzScigFrn6uhFJUrcXKkenw4sZZ44h1Ea0oCqIBAib%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMT%2BxaKksF1Y%2FSmSENKtwDSj1sc%2BfEQAdy7rKQ64kpfylvzIwbwJ6dkReDnNQtecPHno5cJkCQAl%2Bhxmi4HUtEwLPda5qij6EgpKlKuoX5Ml%2F%2FFdCRdkAvsUH%2BUe6jPNyqT%2Fn39ruW1jTf369AtC1GO1rs5E47dEQEKiAsvm%2BB2E%2FOEU8tmxeblFo4pR%2BIvsvlE9RW5tFAbzWzjSpjEP26WYqIb9owpMMbXItAC%2BkzpRvk5%2FeOrw%2FRByOcbHMjzHdUwTHVgOLppEfEg6Omgohs6tlQ8tIutfx%2FLnUF9BjKJpiqdoU%2FPeizBUwLy5nYMSOYHafNnwRfJjZgu7umCVDTegmTyl%2FDbS8sQ1zcQ%2BWpXOBJM8kxj38yTP%2FOj7JCg%2Be2%2FAvQidb6aGBb88qUGYAxLMRT4P3HQVp%2BGFgmiCyybzfVu4wljjYJupS312ptWfJwlslNNFYJdkLoCK6qdy%2BVMtvr3p2L3aUz1RK1jHNKWlEymYyHnYBh%2BFZpTu610BSwzKjQz%2BNPBqCJDlcdZbIze0kANQXqyCxSoApX%2FfUyXD%2BOodUR%2F3VCNqzXzULw%2BshO6%2F9Iwgimfpubg4W%2F7bZJPKWpjNs5IoXYA%2FtV1nQ5VQGknqJT3PQZeAvFn2XAPwUvt2vkeFwpComxPzkw%2BKfszwY6pgEYOciNDGPLAaJ%2F4GrKPE9kmpx4cVb%2BuUMmAxS93qW3XJy%2FLPP1yB84K73aeeemay3427I6hYmOybMkHHACBUDkgF6uU7T9fc3XpblFZ9BN3%2FtG1l9mLtSf4B43imrDcnrofpLimpTr8GvXkKVJhJGVWb%2FSAleFM1yLVuFqUXjZqYCSgsblYXO%2Bz7Dfrf8xkLjmzKihlvMW7oaBQFeaHFfm5O0oBtJT&X-Amz-Signature=1cf96eeb4e8fe2522ea4cbc4e9f702ecdb7ea8c13b8a12ade9d3714cd37df32f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
