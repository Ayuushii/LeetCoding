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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664Z5WMVOL%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDvGQ6wnxOeYYvmpX9hp929B%2BJsm%2BjzOGaxAVdnw9GI4QIgc4iDRIwsJKe6RRtegszDiwcZ4B%2BeA5wP5a0QSx9IiT8qiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMw4vJBfpcoA37MmCCrcA7gNBwifrv1OnZPHN%2BfwhZI4LS4D4bs1bjx130bXapqvEdgiJIuKCBaZsGHRRhryxklDR%2FwDlVsmb9PWHso0%2BC0HTrIZhjaIpLf342GwQKsNtD%2FLNrMIq8kR44N8AeoX4UGhwQwgr60ib82Bt0KPBJcbJY2OwjsbTqZZcREeqvNNY7cqJ2%2BVrGkJpnkfrc1R%2B9KU1GdGzIPIkn%2BSrdYKkleLjsHsJDfwaToSfbvYQG%2BqU1pPtw%2BFD9YS0Pct2UfTTf9cFNZAjLIzXk%2B7lxBZ%2F1%2FYwxF4bEivct%2FCs5z0ZUIAiotS1GSWpB0V3Z2xYHJ%2BE9Sb2Hc%2B7pb2IAw6LYTJcKcqg5zKRmpEWnSN1TYyJb%2F2UxqU1pPWGQ%2BiO7KfsGxScpFogh26pEisvArk9%2BLMuYDFxxaJNZTpAYdqyUn%2Be4cqGpIwe0cxADqYesGCn0Cr5yCvshdnb6VZMQlV7RSiMEFhkGbS1%2FiInyDM%2FFSAb%2BIVyOOtBQq0Uc%2BR70OSWPgZO%2FfrJDf8OwAeG8ABc26Q04fON4najUf3vcJDdIbh1qNIHDebzJLUZV%2BHCZZ7qQC4%2Fvf00kLiu1ccNi0W3KfwoZPzkjm%2FrcRESOMeWfi2jyfPdLJbrxYYi6nrL7OFMOWLl9gGOqUBwtmELJ9ewguY7RFWXsyYZTjfJHzyrI615qANzdfapiPx%2F6w09uLednepXxYBLhKPUd5T%2FmTTIN0QLVtIGe2X3LnE%2BL%2BLdbfAiRSANJH5n3IOJVmHXQX0h9ha5yY4YSJIS8GXRVt8AuljDbrFbcw5oHXWGGlxNhxetVnaqxhygWfIOwBhoqZBazDeJK6UdIxIhLNI2%2FCouJTW0QVnkI%2Bus7wnDemh&X-Amz-Signature=9870321280809e82c90b3ad9e46b996d1f4fb40f135a5a7532b62d8f1ec90e17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664Z5WMVOL%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDvGQ6wnxOeYYvmpX9hp929B%2BJsm%2BjzOGaxAVdnw9GI4QIgc4iDRIwsJKe6RRtegszDiwcZ4B%2BeA5wP5a0QSx9IiT8qiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMw4vJBfpcoA37MmCCrcA7gNBwifrv1OnZPHN%2BfwhZI4LS4D4bs1bjx130bXapqvEdgiJIuKCBaZsGHRRhryxklDR%2FwDlVsmb9PWHso0%2BC0HTrIZhjaIpLf342GwQKsNtD%2FLNrMIq8kR44N8AeoX4UGhwQwgr60ib82Bt0KPBJcbJY2OwjsbTqZZcREeqvNNY7cqJ2%2BVrGkJpnkfrc1R%2B9KU1GdGzIPIkn%2BSrdYKkleLjsHsJDfwaToSfbvYQG%2BqU1pPtw%2BFD9YS0Pct2UfTTf9cFNZAjLIzXk%2B7lxBZ%2F1%2FYwxF4bEivct%2FCs5z0ZUIAiotS1GSWpB0V3Z2xYHJ%2BE9Sb2Hc%2B7pb2IAw6LYTJcKcqg5zKRmpEWnSN1TYyJb%2F2UxqU1pPWGQ%2BiO7KfsGxScpFogh26pEisvArk9%2BLMuYDFxxaJNZTpAYdqyUn%2Be4cqGpIwe0cxADqYesGCn0Cr5yCvshdnb6VZMQlV7RSiMEFhkGbS1%2FiInyDM%2FFSAb%2BIVyOOtBQq0Uc%2BR70OSWPgZO%2FfrJDf8OwAeG8ABc26Q04fON4najUf3vcJDdIbh1qNIHDebzJLUZV%2BHCZZ7qQC4%2Fvf00kLiu1ccNi0W3KfwoZPzkjm%2FrcRESOMeWfi2jyfPdLJbrxYYi6nrL7OFMOWLl9gGOqUBwtmELJ9ewguY7RFWXsyYZTjfJHzyrI615qANzdfapiPx%2F6w09uLednepXxYBLhKPUd5T%2FmTTIN0QLVtIGe2X3LnE%2BL%2BLdbfAiRSANJH5n3IOJVmHXQX0h9ha5yY4YSJIS8GXRVt8AuljDbrFbcw5oHXWGGlxNhxetVnaqxhygWfIOwBhoqZBazDeJK6UdIxIhLNI2%2FCouJTW0QVnkI%2Bus7wnDemh&X-Amz-Signature=9329a3e40ae075b0c28de158ee577d5f67f2533344fa9c6794b28701706da273&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664Z5WMVOL%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDvGQ6wnxOeYYvmpX9hp929B%2BJsm%2BjzOGaxAVdnw9GI4QIgc4iDRIwsJKe6RRtegszDiwcZ4B%2BeA5wP5a0QSx9IiT8qiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMw4vJBfpcoA37MmCCrcA7gNBwifrv1OnZPHN%2BfwhZI4LS4D4bs1bjx130bXapqvEdgiJIuKCBaZsGHRRhryxklDR%2FwDlVsmb9PWHso0%2BC0HTrIZhjaIpLf342GwQKsNtD%2FLNrMIq8kR44N8AeoX4UGhwQwgr60ib82Bt0KPBJcbJY2OwjsbTqZZcREeqvNNY7cqJ2%2BVrGkJpnkfrc1R%2B9KU1GdGzIPIkn%2BSrdYKkleLjsHsJDfwaToSfbvYQG%2BqU1pPtw%2BFD9YS0Pct2UfTTf9cFNZAjLIzXk%2B7lxBZ%2F1%2FYwxF4bEivct%2FCs5z0ZUIAiotS1GSWpB0V3Z2xYHJ%2BE9Sb2Hc%2B7pb2IAw6LYTJcKcqg5zKRmpEWnSN1TYyJb%2F2UxqU1pPWGQ%2BiO7KfsGxScpFogh26pEisvArk9%2BLMuYDFxxaJNZTpAYdqyUn%2Be4cqGpIwe0cxADqYesGCn0Cr5yCvshdnb6VZMQlV7RSiMEFhkGbS1%2FiInyDM%2FFSAb%2BIVyOOtBQq0Uc%2BR70OSWPgZO%2FfrJDf8OwAeG8ABc26Q04fON4najUf3vcJDdIbh1qNIHDebzJLUZV%2BHCZZ7qQC4%2Fvf00kLiu1ccNi0W3KfwoZPzkjm%2FrcRESOMeWfi2jyfPdLJbrxYYi6nrL7OFMOWLl9gGOqUBwtmELJ9ewguY7RFWXsyYZTjfJHzyrI615qANzdfapiPx%2F6w09uLednepXxYBLhKPUd5T%2FmTTIN0QLVtIGe2X3LnE%2BL%2BLdbfAiRSANJH5n3IOJVmHXQX0h9ha5yY4YSJIS8GXRVt8AuljDbrFbcw5oHXWGGlxNhxetVnaqxhygWfIOwBhoqZBazDeJK6UdIxIhLNI2%2FCouJTW0QVnkI%2Bus7wnDemh&X-Amz-Signature=cd8112cd4ab11177fa63906e6567ee799b3bc73c8b55428e8415b2b91395530d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FBS2V5P%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICMCaR%2FWF8gq8mGmcn8ouk9bZbrVKba5p5W5FIgbdY81AiAPEbNNKh2dMa%2BlU%2F7pjEF1quGD%2BMX1EgvcUTgTr3ADQyqIBAiR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBOB44Avtq4pJ9boKtwD52S1BcFGCEbmROJAae0bilekf%2BcdL6gkYnllC3LAqzfs88zUBCiygCnqhfHUEYdvXh3lO6DS%2BgmN80NNfuBFS%2BDMG7JNOS7d2Hsklf%2F2IYxF8XQ4xpLvgImlaJR%2B2uDpMuFdjv5SoLTbsCtI3cBIv7lPeMCnuEVsByJacbjOwqnYLN4b06H4%2BqTY4%2B9eFQzg18lshVNgTQaR8kYIrpjH8BEcgqDUoL0vy5hXqUWKo4CxULgbXEc2JQythukQZHwrdIyvpxvri9%2F6%2FTduSA6EvmR1p9Dz5dGX436znhkvm3FIgsJw83%2FbsBnRuwmUEZzSnCr1GFeNEI3ijJjom7NhfP9V9rbntlJbCLKBhkzEBkQOQ9CnICgwGIVTd4%2F9%2FlsnzVu%2BVZLNuX4lr0rqlbLv6kyNEulwdEwSDBQAXPUzMoNtgEMIkWNgfqj5ApsB0Me4rBGSrZ3YANfnJ5aQE3hNHReSYemTxfryd6vRDVETD8E3R9lzpFO3znm8ENE9kFKVsHsuiM4l6HNkZJwg16xZgHA6UGq%2B4xj6fl%2BtOKkN9NmHSGgq%2FBuPpAf8b1pbZOcim91Mz8yfCLLDeadImATPXaVqN%2BU%2Befm1tCoO9D%2FlAkxPVwC%2F7wzeJbwCiy4w0ouX2AY6pgEb4Uuc%2Bm3u2dCVEnaC6zcVDsJT%2F6%2BKlXNPCklkVN5M4DmQszIeOp%2Fj3%2FjKK8WViQWhrb2gebtMgurrCKpMTdfRKvH0vo3CkXnT8uHN7NatJtYiSMbOIZkzoTQ3QxsqsL98yrzqsqRS2t2NpU2AGiZJi56Le%2BH7uGqV8oYTVMkHO03YHD6v%2F0eLkjHaXdUeFIaI7AmQ%2BP99U%2BCenrRPCnDg%2BAZWSAPV&X-Amz-Signature=0cb1cbe021a4a6613dde0333b5325ce51d2e21e5113aa06dc1fc4f53b837f5c8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FBS2V5P%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICMCaR%2FWF8gq8mGmcn8ouk9bZbrVKba5p5W5FIgbdY81AiAPEbNNKh2dMa%2BlU%2F7pjEF1quGD%2BMX1EgvcUTgTr3ADQyqIBAiR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBOB44Avtq4pJ9boKtwD52S1BcFGCEbmROJAae0bilekf%2BcdL6gkYnllC3LAqzfs88zUBCiygCnqhfHUEYdvXh3lO6DS%2BgmN80NNfuBFS%2BDMG7JNOS7d2Hsklf%2F2IYxF8XQ4xpLvgImlaJR%2B2uDpMuFdjv5SoLTbsCtI3cBIv7lPeMCnuEVsByJacbjOwqnYLN4b06H4%2BqTY4%2B9eFQzg18lshVNgTQaR8kYIrpjH8BEcgqDUoL0vy5hXqUWKo4CxULgbXEc2JQythukQZHwrdIyvpxvri9%2F6%2FTduSA6EvmR1p9Dz5dGX436znhkvm3FIgsJw83%2FbsBnRuwmUEZzSnCr1GFeNEI3ijJjom7NhfP9V9rbntlJbCLKBhkzEBkQOQ9CnICgwGIVTd4%2F9%2FlsnzVu%2BVZLNuX4lr0rqlbLv6kyNEulwdEwSDBQAXPUzMoNtgEMIkWNgfqj5ApsB0Me4rBGSrZ3YANfnJ5aQE3hNHReSYemTxfryd6vRDVETD8E3R9lzpFO3znm8ENE9kFKVsHsuiM4l6HNkZJwg16xZgHA6UGq%2B4xj6fl%2BtOKkN9NmHSGgq%2FBuPpAf8b1pbZOcim91Mz8yfCLLDeadImATPXaVqN%2BU%2Befm1tCoO9D%2FlAkxPVwC%2F7wzeJbwCiy4w0ouX2AY6pgEb4Uuc%2Bm3u2dCVEnaC6zcVDsJT%2F6%2BKlXNPCklkVN5M4DmQszIeOp%2Fj3%2FjKK8WViQWhrb2gebtMgurrCKpMTdfRKvH0vo3CkXnT8uHN7NatJtYiSMbOIZkzoTQ3QxsqsL98yrzqsqRS2t2NpU2AGiZJi56Le%2BH7uGqV8oYTVMkHO03YHD6v%2F0eLkjHaXdUeFIaI7AmQ%2BP99U%2BCenrRPCnDg%2BAZWSAPV&X-Amz-Signature=860656535c80c58bba92eedf30e6f5a68904208bd0667ebce1a61a12c02daa68&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FBS2V5P%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICMCaR%2FWF8gq8mGmcn8ouk9bZbrVKba5p5W5FIgbdY81AiAPEbNNKh2dMa%2BlU%2F7pjEF1quGD%2BMX1EgvcUTgTr3ADQyqIBAiR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBOB44Avtq4pJ9boKtwD52S1BcFGCEbmROJAae0bilekf%2BcdL6gkYnllC3LAqzfs88zUBCiygCnqhfHUEYdvXh3lO6DS%2BgmN80NNfuBFS%2BDMG7JNOS7d2Hsklf%2F2IYxF8XQ4xpLvgImlaJR%2B2uDpMuFdjv5SoLTbsCtI3cBIv7lPeMCnuEVsByJacbjOwqnYLN4b06H4%2BqTY4%2B9eFQzg18lshVNgTQaR8kYIrpjH8BEcgqDUoL0vy5hXqUWKo4CxULgbXEc2JQythukQZHwrdIyvpxvri9%2F6%2FTduSA6EvmR1p9Dz5dGX436znhkvm3FIgsJw83%2FbsBnRuwmUEZzSnCr1GFeNEI3ijJjom7NhfP9V9rbntlJbCLKBhkzEBkQOQ9CnICgwGIVTd4%2F9%2FlsnzVu%2BVZLNuX4lr0rqlbLv6kyNEulwdEwSDBQAXPUzMoNtgEMIkWNgfqj5ApsB0Me4rBGSrZ3YANfnJ5aQE3hNHReSYemTxfryd6vRDVETD8E3R9lzpFO3znm8ENE9kFKVsHsuiM4l6HNkZJwg16xZgHA6UGq%2B4xj6fl%2BtOKkN9NmHSGgq%2FBuPpAf8b1pbZOcim91Mz8yfCLLDeadImATPXaVqN%2BU%2Befm1tCoO9D%2FlAkxPVwC%2F7wzeJbwCiy4w0ouX2AY6pgEb4Uuc%2Bm3u2dCVEnaC6zcVDsJT%2F6%2BKlXNPCklkVN5M4DmQszIeOp%2Fj3%2FjKK8WViQWhrb2gebtMgurrCKpMTdfRKvH0vo3CkXnT8uHN7NatJtYiSMbOIZkzoTQ3QxsqsL98yrzqsqRS2t2NpU2AGiZJi56Le%2BH7uGqV8oYTVMkHO03YHD6v%2F0eLkjHaXdUeFIaI7AmQ%2BP99U%2BCenrRPCnDg%2BAZWSAPV&X-Amz-Signature=aeff624b3113e1e13822b7cdfd319bb5f92ce4030b55fb50c65517eab2f06e4f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FBS2V5P%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICMCaR%2FWF8gq8mGmcn8ouk9bZbrVKba5p5W5FIgbdY81AiAPEbNNKh2dMa%2BlU%2F7pjEF1quGD%2BMX1EgvcUTgTr3ADQyqIBAiR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvBOB44Avtq4pJ9boKtwD52S1BcFGCEbmROJAae0bilekf%2BcdL6gkYnllC3LAqzfs88zUBCiygCnqhfHUEYdvXh3lO6DS%2BgmN80NNfuBFS%2BDMG7JNOS7d2Hsklf%2F2IYxF8XQ4xpLvgImlaJR%2B2uDpMuFdjv5SoLTbsCtI3cBIv7lPeMCnuEVsByJacbjOwqnYLN4b06H4%2BqTY4%2B9eFQzg18lshVNgTQaR8kYIrpjH8BEcgqDUoL0vy5hXqUWKo4CxULgbXEc2JQythukQZHwrdIyvpxvri9%2F6%2FTduSA6EvmR1p9Dz5dGX436znhkvm3FIgsJw83%2FbsBnRuwmUEZzSnCr1GFeNEI3ijJjom7NhfP9V9rbntlJbCLKBhkzEBkQOQ9CnICgwGIVTd4%2F9%2FlsnzVu%2BVZLNuX4lr0rqlbLv6kyNEulwdEwSDBQAXPUzMoNtgEMIkWNgfqj5ApsB0Me4rBGSrZ3YANfnJ5aQE3hNHReSYemTxfryd6vRDVETD8E3R9lzpFO3znm8ENE9kFKVsHsuiM4l6HNkZJwg16xZgHA6UGq%2B4xj6fl%2BtOKkN9NmHSGgq%2FBuPpAf8b1pbZOcim91Mz8yfCLLDeadImATPXaVqN%2BU%2Befm1tCoO9D%2FlAkxPVwC%2F7wzeJbwCiy4w0ouX2AY6pgEb4Uuc%2Bm3u2dCVEnaC6zcVDsJT%2F6%2BKlXNPCklkVN5M4DmQszIeOp%2Fj3%2FjKK8WViQWhrb2gebtMgurrCKpMTdfRKvH0vo3CkXnT8uHN7NatJtYiSMbOIZkzoTQ3QxsqsL98yrzqsqRS2t2NpU2AGiZJi56Le%2BH7uGqV8oYTVMkHO03YHD6v%2F0eLkjHaXdUeFIaI7AmQ%2BP99U%2BCenrRPCnDg%2BAZWSAPV&X-Amz-Signature=4231e592da24de35b7d3262b7723050a3378606e1fa55a42ad3dbbcc462383ae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XDWO6EEN%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaXoLTmB9I8uYo0OjM78omaLphQSfedkp9K8z3lnOg9gIhAOrKBnFRn9Fy%2F0tzVwm3zkjTd%2Bo1MvD96fmDUaZxxE3zKogECJP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwBqgZcB7oNOH1L%2F%2BQq3AM0qzIwI6r1Jt%2By7wY5YnhNx7kJzfr5nK5OmqV3%2Bz8AEMSBPR45eidCTNJXVScqoW1l7HUEheQXjMSBYsvYqRGwXpgRbY1AdL9H1wyhSpZvelON3SrfiLrQ8hR%2FZCFxt%2BrAB2UVQsA9uLOOEKjWaWll1eeeMSRWrdE5voCzIQhErREZeEnapqAErKg7mA3NEx7JnYDEqMK70pc0Kt1OTlyL%2BvPiJZOAwyFlmKBGjjvtVkmb5QSZa2al%2F2JKiSDhQWsTo1AFfOxWte44Q5hOuS78DynuIyxk9IK5KJonCJusx4JmokT84vvvf6X4rLckhorc4LsiF4XHd85mk1BnkD6ijBhMqJXodUqCQbfcI6AodyZ%2F7%2BtnoIFhAeJJQ%2F8U9zM0%2FY%2BtyFp5vsC7mkcY5ggwLIA2fd0NzXokx58RPseweTQCmsglSjv8A2SSwQ47vhK3eS8KmtxsdzOT7Ra8TliGWn24925jvfwL7hCPXu%2BLoQDbDV8EZ6yzZAQfu4p%2FBpOAmiGsPlAC2dar4Qgm6zfykg%2Bjh3WG%2Fs%2BMacrgRlp0o0QZoh5wbzxbxma5Q2q2cvobLLOfa50UdC7nly8jMq%2BV9KSbpAvlcQ6k3XDlxLz%2Be4bTbL0qHznro%2FgaWTCpo5fYBjqkAemVCykk1KnC0POtVRLttgGZb6W7%2F%2FtZhDW5m0WEgreB2OX0gbTdADS0q%2BzEHzibgWbZnzypxgG%2F8ZbyaqMKxa2toa4Z0ErTUVDtlhJA4lwQdNLtnwXCuwCCtFsdYygjwUv0%2Ft0895EE9nizAKa7xWRrLzofmMO9%2B6WDP63zkjM0%2FAJ34V55Evkztrns4YFjD7%2F2WLM6m94i6kU2etEV5Tubgyp2&X-Amz-Signature=d63afb0ea2fcd441c7e4eb447e861b4abb8ba5ad1125de44c28c125dbb6468bd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XR2QGAEZ%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICv25ssUY2jeZSZd6GB421k78pH5f%2BbbRShslYAUDKmFAiEA%2FQWb0WKpq%2FO2vBEKY8tDmiph8v1D%2BtsH87nHJu38K6MqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRh676Tt40Jj9qdCircA79SlKe26YmUVWVZKbK%2Fo76%2F%2F9YEGIev1KwYZwCnZFFq35dzuwxqRCZ4bLWLco66zSEWcddjaFogw2lvgqj%2FFovQkra5xABaUhHoasPwu%2BWU0b7wKkNDcsqhYNPAR2UFqwDlcKIGJaSSJJnK0TS4bQS9F%2FINZUiLF4b2b4f3Y3Fa42UMIgEi0vYm72Tdqi74faU2TgIU7SeZatDpB5QzYlC9FZDmCcoYK1ujIHXS2UdLO%2Bn0Gv6BTfjkZ1T8bbUjGp6wL0%2BV7HbUXF0GxNYY8qNlkCv1m2NsyCBcvIKWptMAB%2B2M4ffBKYSoh7yJnXlLWyqW554uSb1a6E6miI9n%2Bsub6mp%2BDy%2Bh%2BZ46gBLoz%2BlS%2B4QA%2B02Rdvpj2FbDAXzhvQPJSP7m897l2NwZLj2%2Bw%2FBobAWy%2B9u6vG%2FsWcYnB9r2eCI7Sflvdzt6MvoderLc5eT13HB2nv9saoCLLOXW%2FwZj%2FbPfXLjEOGBF3nQRUQ4jn7E%2BRiNi5NPD6yHj2wMxOZC6ZQd0kdUPn5ki9JhBuB8peeyLW8i8vY58TfCKSLMfjQBjPpQSbjaNAjgrZ%2Fugcert4LEEHgYE%2FN7yKmwUYge%2BhS2lCx3HMqlTGBpY1CynOqFvjDybeyW9OXbDMJ6Kl9gGOqUBpbpJkbZ6TiAVZo7kC42%2ByXVZLYDB7n65EQcnmVJlSeJqZNVL5zHNnkYn2Bk24kvycw5B33ytkydnKjiCKzHhua65CBLXU2quO2UfTFvyUAtIFUFKnLJ%2BRkngMoiu3NuNWN5ZJOXvJWFKdSbqa3HLhl%2FOmyG1wRsetLyi4lVjBIA2E7ApIttwB0dsV%2FoSNsaV01Lv5jBveOH1O4%2BBSiG8MqOs%2BkGG&X-Amz-Signature=08d70f24e8a17bf2fafd3663456f0ce04f8f963d94cc0f73935968ed3fe09111&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XR2QGAEZ%2F20261124%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261124T192012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICv25ssUY2jeZSZd6GB421k78pH5f%2BbbRShslYAUDKmFAiEA%2FQWb0WKpq%2FO2vBEKY8tDmiph8v1D%2BtsH87nHJu38K6MqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRh676Tt40Jj9qdCircA79SlKe26YmUVWVZKbK%2Fo76%2F%2F9YEGIev1KwYZwCnZFFq35dzuwxqRCZ4bLWLco66zSEWcddjaFogw2lvgqj%2FFovQkra5xABaUhHoasPwu%2BWU0b7wKkNDcsqhYNPAR2UFqwDlcKIGJaSSJJnK0TS4bQS9F%2FINZUiLF4b2b4f3Y3Fa42UMIgEi0vYm72Tdqi74faU2TgIU7SeZatDpB5QzYlC9FZDmCcoYK1ujIHXS2UdLO%2Bn0Gv6BTfjkZ1T8bbUjGp6wL0%2BV7HbUXF0GxNYY8qNlkCv1m2NsyCBcvIKWptMAB%2B2M4ffBKYSoh7yJnXlLWyqW554uSb1a6E6miI9n%2Bsub6mp%2BDy%2Bh%2BZ46gBLoz%2BlS%2B4QA%2B02Rdvpj2FbDAXzhvQPJSP7m897l2NwZLj2%2Bw%2FBobAWy%2B9u6vG%2FsWcYnB9r2eCI7Sflvdzt6MvoderLc5eT13HB2nv9saoCLLOXW%2FwZj%2FbPfXLjEOGBF3nQRUQ4jn7E%2BRiNi5NPD6yHj2wMxOZC6ZQd0kdUPn5ki9JhBuB8peeyLW8i8vY58TfCKSLMfjQBjPpQSbjaNAjgrZ%2Fugcert4LEEHgYE%2FN7yKmwUYge%2BhS2lCx3HMqlTGBpY1CynOqFvjDybeyW9OXbDMJ6Kl9gGOqUBpbpJkbZ6TiAVZo7kC42%2ByXVZLYDB7n65EQcnmVJlSeJqZNVL5zHNnkYn2Bk24kvycw5B33ytkydnKjiCKzHhua65CBLXU2quO2UfTFvyUAtIFUFKnLJ%2BRkngMoiu3NuNWN5ZJOXvJWFKdSbqa3HLhl%2FOmyG1wRsetLyi4lVjBIA2E7ApIttwB0dsV%2FoSNsaV01Lv5jBveOH1O4%2BBSiG8MqOs%2BkGG&X-Amz-Signature=d7549daddc3c2a64076d13bb732d4770b5357be6472e3ea735c54cd19142bbcf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
