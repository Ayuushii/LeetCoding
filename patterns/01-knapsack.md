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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XRO5IE2F%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100720Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJGMEQCIHqsmlAATpzgAkn8xM%2FswV6pOuszNjRLE%2FLBqAA0nHl2AiAeRsSVsMnJq1mMp6DLP%2FHCAYB6XYCdwoWXqkfBF1mdpyr%2FAwhBEAAaDDYzNzQyMzE4MzgwNSIMV7s3IcdW3SRQG8MVKtwD6kHWM56eoICYm68BEdzRfoptb47T93E3hv4RYlAvHk0ilxXCG46sqlMK1KcejyNBvOkY70t6fU65O%2FZRxUWuFDFNWOVQpc%2BBzJRnpyaDeMFiH81A4d9iI2mwucA%2BDXw8NU2Kogw5IZju2SpwQaqu8ZYmDySU5mGvYTB95rhNEe4HKWqKvXrc9dORs%2Fr5DdG8zpO5LozW%2FKFM%2F513jY0s2bCDWg0i4K7WBtoRHpYf9Qs%2Bp%2FFTINofMcrzfowZPWDB6kN1GoV98Zbq3if1ygneFeR9kiZ%2BRAuZD6OJbOO%2BTUC644phGV0ww%2BwS6fc4pUeJM%2FOHujtTNbSXGa4xwvplOkLmLOov%2B6uqKmBIkyHbeLVrho8jdM%2FhWGcsjsky9O6WDfngyRwLLDe2Uzdovo6xdeE%2FxXSMqo7tsBhFl7MYQ%2FnvCBQmmeYD1bfsn5l1KhYnXOKRhwKQCkhKj0HUHO2wSlwiMdcAnuNx0OsJUOy2CoxLyFnYbdibtcpKxllAUw23WI4X5QHzmIwOaP0V5FjlCVkstdeI6Mn6W9Ziv6IcTpMQkm6nUCFubT9olq9ygWTUtb9FS%2FX7D0%2FSRJ4s4bu6HMJA24cDmMBZIhje0G%2FO9TWZb0tZUPOdIDzdWWQw%2F6bi0gY6pgG%2FRU86GuyVu6SakQiirLeHwhAYO6rlMRynf86pN4gqb4%2FSAgcN1N0qGgMtzMc50O3BZlE9gyTpQkz1HAdQ2UWgxi4%2BNHzGUG%2FEMVLsFXIFf1JQEDwmP%2FFVq38UHEwMFsB5DRX5QYcfm7YDgtgkM6S7PjzbCTTO3vDu4V0mEr19Nc80qaYn71BoQZHyuH%2FVrZ%2FwRH9jMB0nV1eywnzOuSzkEyHKX2mq&X-Amz-Signature=b8a6e8fa6848e67f1bb67dc2f59e4b6564ec8ed9e314bcc26343c748b760b054&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XRO5IE2F%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100720Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJGMEQCIHqsmlAATpzgAkn8xM%2FswV6pOuszNjRLE%2FLBqAA0nHl2AiAeRsSVsMnJq1mMp6DLP%2FHCAYB6XYCdwoWXqkfBF1mdpyr%2FAwhBEAAaDDYzNzQyMzE4MzgwNSIMV7s3IcdW3SRQG8MVKtwD6kHWM56eoICYm68BEdzRfoptb47T93E3hv4RYlAvHk0ilxXCG46sqlMK1KcejyNBvOkY70t6fU65O%2FZRxUWuFDFNWOVQpc%2BBzJRnpyaDeMFiH81A4d9iI2mwucA%2BDXw8NU2Kogw5IZju2SpwQaqu8ZYmDySU5mGvYTB95rhNEe4HKWqKvXrc9dORs%2Fr5DdG8zpO5LozW%2FKFM%2F513jY0s2bCDWg0i4K7WBtoRHpYf9Qs%2Bp%2FFTINofMcrzfowZPWDB6kN1GoV98Zbq3if1ygneFeR9kiZ%2BRAuZD6OJbOO%2BTUC644phGV0ww%2BwS6fc4pUeJM%2FOHujtTNbSXGa4xwvplOkLmLOov%2B6uqKmBIkyHbeLVrho8jdM%2FhWGcsjsky9O6WDfngyRwLLDe2Uzdovo6xdeE%2FxXSMqo7tsBhFl7MYQ%2FnvCBQmmeYD1bfsn5l1KhYnXOKRhwKQCkhKj0HUHO2wSlwiMdcAnuNx0OsJUOy2CoxLyFnYbdibtcpKxllAUw23WI4X5QHzmIwOaP0V5FjlCVkstdeI6Mn6W9Ziv6IcTpMQkm6nUCFubT9olq9ygWTUtb9FS%2FX7D0%2FSRJ4s4bu6HMJA24cDmMBZIhje0G%2FO9TWZb0tZUPOdIDzdWWQw%2F6bi0gY6pgG%2FRU86GuyVu6SakQiirLeHwhAYO6rlMRynf86pN4gqb4%2FSAgcN1N0qGgMtzMc50O3BZlE9gyTpQkz1HAdQ2UWgxi4%2BNHzGUG%2FEMVLsFXIFf1JQEDwmP%2FFVq38UHEwMFsB5DRX5QYcfm7YDgtgkM6S7PjzbCTTO3vDu4V0mEr19Nc80qaYn71BoQZHyuH%2FVrZ%2FwRH9jMB0nV1eywnzOuSzkEyHKX2mq&X-Amz-Signature=5b5868d0e5bf3ac9ace6112a5215804edf039ce3bb661d59f72577619790bb67&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XRO5IE2F%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100720Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJGMEQCIHqsmlAATpzgAkn8xM%2FswV6pOuszNjRLE%2FLBqAA0nHl2AiAeRsSVsMnJq1mMp6DLP%2FHCAYB6XYCdwoWXqkfBF1mdpyr%2FAwhBEAAaDDYzNzQyMzE4MzgwNSIMV7s3IcdW3SRQG8MVKtwD6kHWM56eoICYm68BEdzRfoptb47T93E3hv4RYlAvHk0ilxXCG46sqlMK1KcejyNBvOkY70t6fU65O%2FZRxUWuFDFNWOVQpc%2BBzJRnpyaDeMFiH81A4d9iI2mwucA%2BDXw8NU2Kogw5IZju2SpwQaqu8ZYmDySU5mGvYTB95rhNEe4HKWqKvXrc9dORs%2Fr5DdG8zpO5LozW%2FKFM%2F513jY0s2bCDWg0i4K7WBtoRHpYf9Qs%2Bp%2FFTINofMcrzfowZPWDB6kN1GoV98Zbq3if1ygneFeR9kiZ%2BRAuZD6OJbOO%2BTUC644phGV0ww%2BwS6fc4pUeJM%2FOHujtTNbSXGa4xwvplOkLmLOov%2B6uqKmBIkyHbeLVrho8jdM%2FhWGcsjsky9O6WDfngyRwLLDe2Uzdovo6xdeE%2FxXSMqo7tsBhFl7MYQ%2FnvCBQmmeYD1bfsn5l1KhYnXOKRhwKQCkhKj0HUHO2wSlwiMdcAnuNx0OsJUOy2CoxLyFnYbdibtcpKxllAUw23WI4X5QHzmIwOaP0V5FjlCVkstdeI6Mn6W9Ziv6IcTpMQkm6nUCFubT9olq9ygWTUtb9FS%2FX7D0%2FSRJ4s4bu6HMJA24cDmMBZIhje0G%2FO9TWZb0tZUPOdIDzdWWQw%2F6bi0gY6pgG%2FRU86GuyVu6SakQiirLeHwhAYO6rlMRynf86pN4gqb4%2FSAgcN1N0qGgMtzMc50O3BZlE9gyTpQkz1HAdQ2UWgxi4%2BNHzGUG%2FEMVLsFXIFf1JQEDwmP%2FFVq38UHEwMFsB5DRX5QYcfm7YDgtgkM6S7PjzbCTTO3vDu4V0mEr19Nc80qaYn71BoQZHyuH%2FVrZ%2FwRH9jMB0nV1eywnzOuSzkEyHKX2mq&X-Amz-Signature=08b7baf7a300718cbfd6744d7e5e7d0180550ff1c779f242bacdefbed927fc17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ESEHISO%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCICyphL%2FeXQpKZbI%2FYY%2FIZQvGCxJE0bOogaEV%2BA41X76hAiEA7%2F71jTFiXAA%2BC0goQTdiyiiJToLBTE58DW53JBeejRgq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDDCmHE0imK%2BN7ZGlwSrcA9sqNspIj%2F5Z7CX6fYJnH58TllHrWXhL5Oh0AT%2FdnDrzRXovnRjUWNEJSk8d1glcbv%2BJvyLZIrLPHCPqKF21EZaDbWFsJQ5IkmB0cDbZrqTmiZnHr%2FkkOTw6GCe0DhzPOT2QRM8T7UtRy5kyQh7Jy8oeKdLdq69BcN%2FR05j4%2BtYZmVz6RTa4n79WPndcG%2Bbav84jOLLPzGQXnf4Ta19rLIpgOph3LYO%2BeveW%2F5mW9g1HM0IESXz0u2rI3TT%2B0xYQkhzWIHJRbA71l9sttnCGEqzu9LLqNuQB0sBLlaBi6kH91zhljvtXQLb6Vt8DVgoDK2d3f5E3rklaDVeI7Xx0SqtXJnJ0UZy%2FS3C%2FA3CZg1HvzUR%2Bp456NwCzKpwZ4l2Bq%2FiGJGWYdPo4IsLWfQUyELnmvJ5IWTpEfbpJ8z4RkMD5Pr9QJvj5kZApos3G3EItZ9%2FU%2FRdDOIu7QXfHPyacnLZq8qkyBatAfDSDKCvdQDPfzDdNsdPRK73kWfYSkwjDjLX1bRvopgdTAh2iEzbjxsfs20ywoPVp%2Fol98U75Lui0LgwVodbuvCeWaejaAjQjP1wtS4JDbLP9fEMAH4hLPGCOlSKIiKKNo9I8aHKmWK5r0X710jDgFRlV4wdgMPWm4tIGOqUBiXd1ecrXCp8HtfSbqnPYpILPQ65m8iVFmNPQxZvG8vEuE%2BV%2F6HFHUWEFUhdW%2FmHRsqBCu9tav8d56x%2F2S%2FbO55bUXiA%2FNw2f9g9lvmI3zTGRBhs%2Be%2F2MCNmBSY3qX62o3%2BDpzZUrtFHBSDab9ajZBcmvHWj3rbgH7Q4FfmQvhjfU5JdcyN57xx%2B%2FR1UtRj%2Fi2rKkxmQ1Rb4YUMQVI3kobDs6vwup&X-Amz-Signature=177179e04d9312140108fec968735ae3c1584b415e8724cd71d90c3f0cb9f3b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ESEHISO%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCICyphL%2FeXQpKZbI%2FYY%2FIZQvGCxJE0bOogaEV%2BA41X76hAiEA7%2F71jTFiXAA%2BC0goQTdiyiiJToLBTE58DW53JBeejRgq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDDCmHE0imK%2BN7ZGlwSrcA9sqNspIj%2F5Z7CX6fYJnH58TllHrWXhL5Oh0AT%2FdnDrzRXovnRjUWNEJSk8d1glcbv%2BJvyLZIrLPHCPqKF21EZaDbWFsJQ5IkmB0cDbZrqTmiZnHr%2FkkOTw6GCe0DhzPOT2QRM8T7UtRy5kyQh7Jy8oeKdLdq69BcN%2FR05j4%2BtYZmVz6RTa4n79WPndcG%2Bbav84jOLLPzGQXnf4Ta19rLIpgOph3LYO%2BeveW%2F5mW9g1HM0IESXz0u2rI3TT%2B0xYQkhzWIHJRbA71l9sttnCGEqzu9LLqNuQB0sBLlaBi6kH91zhljvtXQLb6Vt8DVgoDK2d3f5E3rklaDVeI7Xx0SqtXJnJ0UZy%2FS3C%2FA3CZg1HvzUR%2Bp456NwCzKpwZ4l2Bq%2FiGJGWYdPo4IsLWfQUyELnmvJ5IWTpEfbpJ8z4RkMD5Pr9QJvj5kZApos3G3EItZ9%2FU%2FRdDOIu7QXfHPyacnLZq8qkyBatAfDSDKCvdQDPfzDdNsdPRK73kWfYSkwjDjLX1bRvopgdTAh2iEzbjxsfs20ywoPVp%2Fol98U75Lui0LgwVodbuvCeWaejaAjQjP1wtS4JDbLP9fEMAH4hLPGCOlSKIiKKNo9I8aHKmWK5r0X710jDgFRlV4wdgMPWm4tIGOqUBiXd1ecrXCp8HtfSbqnPYpILPQ65m8iVFmNPQxZvG8vEuE%2BV%2F6HFHUWEFUhdW%2FmHRsqBCu9tav8d56x%2F2S%2FbO55bUXiA%2FNw2f9g9lvmI3zTGRBhs%2Be%2F2MCNmBSY3qX62o3%2BDpzZUrtFHBSDab9ajZBcmvHWj3rbgH7Q4FfmQvhjfU5JdcyN57xx%2B%2FR1UtRj%2Fi2rKkxmQ1Rb4YUMQVI3kobDs6vwup&X-Amz-Signature=d893f7d56cbc613cf682f506dffb33fd20600a0193b9106512436f4195f1cac1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ESEHISO%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCICyphL%2FeXQpKZbI%2FYY%2FIZQvGCxJE0bOogaEV%2BA41X76hAiEA7%2F71jTFiXAA%2BC0goQTdiyiiJToLBTE58DW53JBeejRgq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDDCmHE0imK%2BN7ZGlwSrcA9sqNspIj%2F5Z7CX6fYJnH58TllHrWXhL5Oh0AT%2FdnDrzRXovnRjUWNEJSk8d1glcbv%2BJvyLZIrLPHCPqKF21EZaDbWFsJQ5IkmB0cDbZrqTmiZnHr%2FkkOTw6GCe0DhzPOT2QRM8T7UtRy5kyQh7Jy8oeKdLdq69BcN%2FR05j4%2BtYZmVz6RTa4n79WPndcG%2Bbav84jOLLPzGQXnf4Ta19rLIpgOph3LYO%2BeveW%2F5mW9g1HM0IESXz0u2rI3TT%2B0xYQkhzWIHJRbA71l9sttnCGEqzu9LLqNuQB0sBLlaBi6kH91zhljvtXQLb6Vt8DVgoDK2d3f5E3rklaDVeI7Xx0SqtXJnJ0UZy%2FS3C%2FA3CZg1HvzUR%2Bp456NwCzKpwZ4l2Bq%2FiGJGWYdPo4IsLWfQUyELnmvJ5IWTpEfbpJ8z4RkMD5Pr9QJvj5kZApos3G3EItZ9%2FU%2FRdDOIu7QXfHPyacnLZq8qkyBatAfDSDKCvdQDPfzDdNsdPRK73kWfYSkwjDjLX1bRvopgdTAh2iEzbjxsfs20ywoPVp%2Fol98U75Lui0LgwVodbuvCeWaejaAjQjP1wtS4JDbLP9fEMAH4hLPGCOlSKIiKKNo9I8aHKmWK5r0X710jDgFRlV4wdgMPWm4tIGOqUBiXd1ecrXCp8HtfSbqnPYpILPQ65m8iVFmNPQxZvG8vEuE%2BV%2F6HFHUWEFUhdW%2FmHRsqBCu9tav8d56x%2F2S%2FbO55bUXiA%2FNw2f9g9lvmI3zTGRBhs%2Be%2F2MCNmBSY3qX62o3%2BDpzZUrtFHBSDab9ajZBcmvHWj3rbgH7Q4FfmQvhjfU5JdcyN57xx%2B%2FR1UtRj%2Fi2rKkxmQ1Rb4YUMQVI3kobDs6vwup&X-Amz-Signature=12de021d335d9029790936b042e39ab7067aa1b9463a74fd85d883fdce655c1c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ESEHISO%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCICyphL%2FeXQpKZbI%2FYY%2FIZQvGCxJE0bOogaEV%2BA41X76hAiEA7%2F71jTFiXAA%2BC0goQTdiyiiJToLBTE58DW53JBeejRgq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDDCmHE0imK%2BN7ZGlwSrcA9sqNspIj%2F5Z7CX6fYJnH58TllHrWXhL5Oh0AT%2FdnDrzRXovnRjUWNEJSk8d1glcbv%2BJvyLZIrLPHCPqKF21EZaDbWFsJQ5IkmB0cDbZrqTmiZnHr%2FkkOTw6GCe0DhzPOT2QRM8T7UtRy5kyQh7Jy8oeKdLdq69BcN%2FR05j4%2BtYZmVz6RTa4n79WPndcG%2Bbav84jOLLPzGQXnf4Ta19rLIpgOph3LYO%2BeveW%2F5mW9g1HM0IESXz0u2rI3TT%2B0xYQkhzWIHJRbA71l9sttnCGEqzu9LLqNuQB0sBLlaBi6kH91zhljvtXQLb6Vt8DVgoDK2d3f5E3rklaDVeI7Xx0SqtXJnJ0UZy%2FS3C%2FA3CZg1HvzUR%2Bp456NwCzKpwZ4l2Bq%2FiGJGWYdPo4IsLWfQUyELnmvJ5IWTpEfbpJ8z4RkMD5Pr9QJvj5kZApos3G3EItZ9%2FU%2FRdDOIu7QXfHPyacnLZq8qkyBatAfDSDKCvdQDPfzDdNsdPRK73kWfYSkwjDjLX1bRvopgdTAh2iEzbjxsfs20ywoPVp%2Fol98U75Lui0LgwVodbuvCeWaejaAjQjP1wtS4JDbLP9fEMAH4hLPGCOlSKIiKKNo9I8aHKmWK5r0X710jDgFRlV4wdgMPWm4tIGOqUBiXd1ecrXCp8HtfSbqnPYpILPQ65m8iVFmNPQxZvG8vEuE%2BV%2F6HFHUWEFUhdW%2FmHRsqBCu9tav8d56x%2F2S%2FbO55bUXiA%2FNw2f9g9lvmI3zTGRBhs%2Be%2F2MCNmBSY3qX62o3%2BDpzZUrtFHBSDab9ajZBcmvHWj3rbgH7Q4FfmQvhjfU5JdcyN57xx%2B%2FR1UtRj%2Fi2rKkxmQ1Rb4YUMQVI3kobDs6vwup&X-Amz-Signature=cae1af6c85f3cfbebbfa86595d977bb5a422da9d6eca8d989710c880377c5d8e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W334RPP6%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIQDuTuKRwjsEsZ71TqeZamtFtavMUeEFY3ftepU96DVxWAIgb77y33nuUC%2Fm2xvJXP9A4b4DRX%2FQSE2b9iAsNuU7%2Bjwq%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDKXlOdoKyoi%2BrPlN9ircA76dilitZSY8lwUjMNOXgGdN6BzOn7S6fV%2FpB2sPq84AbHkmuR5JmGsKeObpsrDrggHGgmmufSy6S9bzVVB%2Fgb8uXv4G2%2BUfB%2Bl%2Fj3kK3SzZE8z%2Bo0H04LZQDGBygSQYDLyR94H91FJTTyeO2XwXgcoYCHMENsk7ct9Ia3CcvsJi%2Fb6S8SlyhRl34LKAUqCz3vH4E5jXDZ3OmoxQKcmWaUONYkzIBSaN4XjeNfL6iuRG6kVbu6eD%2BSlN3j6dx%2BKBiujiEeRFamWzqcxuC11VYIhQwNunaebbXxYL8%2FB2UheGo6SCXzPVhUwZMntGKoVv8II4%2BnlJRY1BKbBLujtxKwRqs%2BEFAWUHyLuWKKRYS9Drz0g9Mps1JHsMpDDoNEjrDE8xgZCBeNKUwxrN3cc7EsfatRYHDr2zMghuW8P1a1MMkTueRsWnjtCf%2FfDf0PqK5dGlf6wbw4PzuIyAJ%2FmVASRQpL6qQ2mVhjW7%2FMkQhC%2BAJbIFyfNNOP6Zluo8dUalQUhQYkhReDrdBAGDmFtCwKtupn36%2FoLepO4YLvqDmXUwHwVy25mxkq3HzWhHeC3HoxX6ptF8CCPwlC8xF3prjMju5TsG2IThIYq%2FhR2%2BaEJrGDgOWjciupe9PpQgMLiq4tIGOqUB8KN957cLOCnYe4ebp2lsqWuMU2hhuZgqmBasy%2FSLT%2FjHp0kMsd%2FT9ZLoags2y4nRqykjQPlWVN78OYVYwBj0Y3GOIUoYfNqpBPyjaWR38PK%2BZuE3bC3E2oAW%2FbCvR9f5kgnMO90myxcRd5bPd7OfSPfM8e%2BVW5HoK4WcTME78kCLX5q%2B7XKgZPAoW0FUiNtggTyYH72Y9vCLGnfF8hyWBhaM03m9&X-Amz-Signature=b57256291836d2ec79512636457d5f02d09904c843150174babc82b34fa0e836&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFS4NQ5K%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQC9jCL1CFIDgyArGxRA1GiuApv537ruHtfXar%2B8grifMgIhAJnu3v7JC0PHlbZmDaojbo5azeVi1d%2BN8nqNdE3lHg2MKv8DCEEQABoMNjM3NDIzMTgzODA1IgzKkfJBCPOkV8L9UKMq3AMLeM%2F0ZiHV%2BQH9Pa1n9heAuDbFshuSSiHFgrEmH9AU2bMM8fTay9BQzIks7d8BBrVvH5wYI6AlES%2BLwkuvUgaIcfj0KWla36Sa8%2FEKeVkaeQuHzkVf52%2FcfYoxY0gY9D6iEEPcs4gC9iLLzOJLOVfADFH9BMmzsEaXR4JvYrRN7NuLzSSDCqDZ2hMRtWvO0JQP1RsgJ93oZ%2Bpj3%2FUjz7xepAXMwksj3ijWIGAKtucZH79lobjoVX50dhInDJ8JC6obFgJpmK4QkVaEdb69BMtmIKyLDTxeAnTFGjsK%2BvaYDm8%2FvgsV6FNrNPCGJZFpW8lOG0FxupvhKvaCNgFArUBaPulY19cDctuAwj0WHkYb6o3nfOCRbIRNaQksAyg44Cfq5fTVVbLxMDDRfbG%2BoDlKaoDe2%2FuPkeYPYyeHrYeR2E2GA9V3t%2BuoazWuitvGUky4bzE%2BkvvSsLmfdcL2bg%2FpxLDdeSc48huxyn1WVipwFvHZ6tyTaATUQZj8bPyi7TdtPuO4KyGLXS5PUWwEyPFPXc%2BLaa07GILSrjfzCPVBYymH0%2BMGhQSv4Z2nLm1pOEFk3egj3IFil0%2FOSyyKLR7K4eIOv6TnDbjqk7LITlAVuZ57LixB1Ha7IPDYMDDup%2BLSBjqkAZYxdnxORYGaPPMLi7yEmwZyXIjlgRuHc3hWofAKrxzWYOWpWdv19gZoD%2BS8yNp2gHQi3b4chNCbmZD2v6US3UzSwxIrwNGQEm6TclrPDOHjBtujFTAaiOkdXTqa9aytWcspmeG6svzuAGAITIxIcuqdItUGUmSbPG9KJVyfEyIITFC5KGGfSeGT6%2FjyEtE%2B%2Bg7yB66UBb8hipdr%2FH4q%2Fq8%2BWQM3&X-Amz-Signature=fe971d32c4a44f4d5452a11618a69db0b1ad28c866eaa56ecff7d6426b71f5e5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFS4NQ5K%2F20260716%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260716T100721Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQC9jCL1CFIDgyArGxRA1GiuApv537ruHtfXar%2B8grifMgIhAJnu3v7JC0PHlbZmDaojbo5azeVi1d%2BN8nqNdE3lHg2MKv8DCEEQABoMNjM3NDIzMTgzODA1IgzKkfJBCPOkV8L9UKMq3AMLeM%2F0ZiHV%2BQH9Pa1n9heAuDbFshuSSiHFgrEmH9AU2bMM8fTay9BQzIks7d8BBrVvH5wYI6AlES%2BLwkuvUgaIcfj0KWla36Sa8%2FEKeVkaeQuHzkVf52%2FcfYoxY0gY9D6iEEPcs4gC9iLLzOJLOVfADFH9BMmzsEaXR4JvYrRN7NuLzSSDCqDZ2hMRtWvO0JQP1RsgJ93oZ%2Bpj3%2FUjz7xepAXMwksj3ijWIGAKtucZH79lobjoVX50dhInDJ8JC6obFgJpmK4QkVaEdb69BMtmIKyLDTxeAnTFGjsK%2BvaYDm8%2FvgsV6FNrNPCGJZFpW8lOG0FxupvhKvaCNgFArUBaPulY19cDctuAwj0WHkYb6o3nfOCRbIRNaQksAyg44Cfq5fTVVbLxMDDRfbG%2BoDlKaoDe2%2FuPkeYPYyeHrYeR2E2GA9V3t%2BuoazWuitvGUky4bzE%2BkvvSsLmfdcL2bg%2FpxLDdeSc48huxyn1WVipwFvHZ6tyTaATUQZj8bPyi7TdtPuO4KyGLXS5PUWwEyPFPXc%2BLaa07GILSrjfzCPVBYymH0%2BMGhQSv4Z2nLm1pOEFk3egj3IFil0%2FOSyyKLR7K4eIOv6TnDbjqk7LITlAVuZ57LixB1Ha7IPDYMDDup%2BLSBjqkAZYxdnxORYGaPPMLi7yEmwZyXIjlgRuHc3hWofAKrxzWYOWpWdv19gZoD%2BS8yNp2gHQi3b4chNCbmZD2v6US3UzSwxIrwNGQEm6TclrPDOHjBtujFTAaiOkdXTqa9aytWcspmeG6svzuAGAITIxIcuqdItUGUmSbPG9KJVyfEyIITFC5KGGfSeGT6%2FjyEtE%2B%2Bg7yB66UBb8hipdr%2FH4q%2Fq8%2BWQM3&X-Amz-Signature=35a82616d3bb236059a1edde55a45c47b37f38a6a5bf1fd935bddb628440b821&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
