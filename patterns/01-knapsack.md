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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJP6B7IB%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAS%2Bq43ChCzK8NOuAFmY1wv7Ri4JQ1RbZYDBxIVde8PnAiA%2BJvDLsWf3pNmVsCR92ILObnhFRSzDaGGhDJ%2FJWd5YoCqIBAis%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMNXrfc8%2BGTlLa5wcqKtwDhCxanKcF8RYULo2VKKze%2BljKYaZPoXYb0IaKXZGJ%2FPqmU3K3nbBMbKycpENM3XJsf8sqZROv6sKbw54bE03OEtwLmfxm3Jo6kfMRsZIjajIjnET3k%2Fyju3dWRS9xVyPYG3hJi%2FPwnNPvu3HLLsgaysZVtggEZ5bLDJGccxGau5bJ%2BTGXwPb6L3HZbnXxLcqZUx0%2F4e9otpif%2FL3jyic2fQdkWx98iCzmHk%2B9y0JEqnSkApETIh0IqtteyVVTNI8k2MDN5TnIS%2F7wrHU668Pe7iX9eADEAU4Ayny8qijrIyfCY4ZNThfappE51OjOan3BjUUSFr4RXaGtB3RJldWznCUhie%2BGbZlSAJwynRAnZCaRuQ9sVu4B2ueQcZ%2BbwNj8RoCU8aHDOP377n3hv7CsGUbs6lWafc61q30mM0RClxcvASArCzYVZLIyuY2yKiqatHN7bCIP5a1JzkOx8tNBFmM5IX35psMNdWHzOFWdwanwK%2FP2lVQa4AtsEtHeRt2NtSN02HSZ9BU5T%2F4SMzd%2B0gkcI2xkGfPzD0Pw1rdCj%2FoSRBnWliwrNDCdGGX7ulxMeMipwrEfbAskByBPHTqtUcNsl%2FMQv8K%2FovSIjEsvWkmK0EiCI7Qk8SPalAowkbvg0AY6pgEyTGJRI2AS5hJdnckn3eJi1nAvsH6mtbcGwtoXYeYtnBZssk5ffJOOLby3DUfkHiELCtPRg%2FVwgQ%2FqBdcxzKph23piG8GZCxjWNspVGwBs0LExtof8nbCIwANRM4B4vkt8rAc3ZScsfZVFjXCxd1EDeKWi%2BOCcKniyZ8kPHKeS7MRi3pwMWMdwnwKXxx4TU71znIHXJJCUz296mi0CfDV1weNHW2oQ&X-Amz-Signature=35e18a8ab63efec021d9cdd2f8b450a260da28ca1e7517bc64e749720bff1dba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJP6B7IB%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAS%2Bq43ChCzK8NOuAFmY1wv7Ri4JQ1RbZYDBxIVde8PnAiA%2BJvDLsWf3pNmVsCR92ILObnhFRSzDaGGhDJ%2FJWd5YoCqIBAis%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMNXrfc8%2BGTlLa5wcqKtwDhCxanKcF8RYULo2VKKze%2BljKYaZPoXYb0IaKXZGJ%2FPqmU3K3nbBMbKycpENM3XJsf8sqZROv6sKbw54bE03OEtwLmfxm3Jo6kfMRsZIjajIjnET3k%2Fyju3dWRS9xVyPYG3hJi%2FPwnNPvu3HLLsgaysZVtggEZ5bLDJGccxGau5bJ%2BTGXwPb6L3HZbnXxLcqZUx0%2F4e9otpif%2FL3jyic2fQdkWx98iCzmHk%2B9y0JEqnSkApETIh0IqtteyVVTNI8k2MDN5TnIS%2F7wrHU668Pe7iX9eADEAU4Ayny8qijrIyfCY4ZNThfappE51OjOan3BjUUSFr4RXaGtB3RJldWznCUhie%2BGbZlSAJwynRAnZCaRuQ9sVu4B2ueQcZ%2BbwNj8RoCU8aHDOP377n3hv7CsGUbs6lWafc61q30mM0RClxcvASArCzYVZLIyuY2yKiqatHN7bCIP5a1JzkOx8tNBFmM5IX35psMNdWHzOFWdwanwK%2FP2lVQa4AtsEtHeRt2NtSN02HSZ9BU5T%2F4SMzd%2B0gkcI2xkGfPzD0Pw1rdCj%2FoSRBnWliwrNDCdGGX7ulxMeMipwrEfbAskByBPHTqtUcNsl%2FMQv8K%2FovSIjEsvWkmK0EiCI7Qk8SPalAowkbvg0AY6pgEyTGJRI2AS5hJdnckn3eJi1nAvsH6mtbcGwtoXYeYtnBZssk5ffJOOLby3DUfkHiELCtPRg%2FVwgQ%2FqBdcxzKph23piG8GZCxjWNspVGwBs0LExtof8nbCIwANRM4B4vkt8rAc3ZScsfZVFjXCxd1EDeKWi%2BOCcKniyZ8kPHKeS7MRi3pwMWMdwnwKXxx4TU71znIHXJJCUz296mi0CfDV1weNHW2oQ&X-Amz-Signature=c781544bae09203eec988a62bfead35fe25315d6152c2a75a8314c06fd4807c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJP6B7IB%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAS%2Bq43ChCzK8NOuAFmY1wv7Ri4JQ1RbZYDBxIVde8PnAiA%2BJvDLsWf3pNmVsCR92ILObnhFRSzDaGGhDJ%2FJWd5YoCqIBAis%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMNXrfc8%2BGTlLa5wcqKtwDhCxanKcF8RYULo2VKKze%2BljKYaZPoXYb0IaKXZGJ%2FPqmU3K3nbBMbKycpENM3XJsf8sqZROv6sKbw54bE03OEtwLmfxm3Jo6kfMRsZIjajIjnET3k%2Fyju3dWRS9xVyPYG3hJi%2FPwnNPvu3HLLsgaysZVtggEZ5bLDJGccxGau5bJ%2BTGXwPb6L3HZbnXxLcqZUx0%2F4e9otpif%2FL3jyic2fQdkWx98iCzmHk%2B9y0JEqnSkApETIh0IqtteyVVTNI8k2MDN5TnIS%2F7wrHU668Pe7iX9eADEAU4Ayny8qijrIyfCY4ZNThfappE51OjOan3BjUUSFr4RXaGtB3RJldWznCUhie%2BGbZlSAJwynRAnZCaRuQ9sVu4B2ueQcZ%2BbwNj8RoCU8aHDOP377n3hv7CsGUbs6lWafc61q30mM0RClxcvASArCzYVZLIyuY2yKiqatHN7bCIP5a1JzkOx8tNBFmM5IX35psMNdWHzOFWdwanwK%2FP2lVQa4AtsEtHeRt2NtSN02HSZ9BU5T%2F4SMzd%2B0gkcI2xkGfPzD0Pw1rdCj%2FoSRBnWliwrNDCdGGX7ulxMeMipwrEfbAskByBPHTqtUcNsl%2FMQv8K%2FovSIjEsvWkmK0EiCI7Qk8SPalAowkbvg0AY6pgEyTGJRI2AS5hJdnckn3eJi1nAvsH6mtbcGwtoXYeYtnBZssk5ffJOOLby3DUfkHiELCtPRg%2FVwgQ%2FqBdcxzKph23piG8GZCxjWNspVGwBs0LExtof8nbCIwANRM4B4vkt8rAc3ZScsfZVFjXCxd1EDeKWi%2BOCcKniyZ8kPHKeS7MRi3pwMWMdwnwKXxx4TU71znIHXJJCUz296mi0CfDV1weNHW2oQ&X-Amz-Signature=3a4a8c73e2564a8d8115f0b6fde7b87240c921884444dfab7e342b05356c8aca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVAEG45R%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpL4wnrhszf7xJQFsm0ar3QMkU9wlJo84U%2F%2FbrKZh48wIgQq93mWCvyh4nGFWhAkahmPgHnW1wnfvFZdhZLddWewYqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOrPPk5aYiS4ItlctCrcA0%2BGUOM7c2PNlnv08IErV13qkRazckyKJayGKn40hpeiv1a4iLPO%2FBWoE0N6IpWGjpPTKScxC79t8okZDnB5mQbfEmJPBRFwyLRefSnBh70MIxkLLuSyeWy1Efwz1sCh2vZupoeIr%2FUEp%2Ba0Rph9%2FNX1Y%2FYZeCoEChqpIoDa6SsXFnc48By%2FrG%2FjlbJXHd8aQID8Le%2F9F1lekIkuGL%2B8CK0UJ307K4gZ3IBq7zDibyS2UA5T4qgJhNW5IFKadcZf5DXk5rKv4eSwOS9g%2B5Y8hvVCD8a9jgcA6bIw15IER7W919QYGbrFH2WomQYwugyE24o9wKQPGta3gc5bf9D0EzH7N2yFTm%2BL%2BFBu1GSh9MhBwarQ3711AT19WOrnJuBTk%2BBxMrzyyW%2FV8geKTqQAYNeCbT3YVI3q7zbFJaHUeowCiDCas9V1yd12DZ5dLIqzg5LESjeeodC2FiLV%2BfbR91sRDm679zhWmxBzF5%2FiVW5UtUONQQ%2F4yuIwuC5O6YyTvy%2Btqevnb%2BoQRNKe77mGmwzLuyU98WMiY1cs4ckmn6Z5A%2BeKke%2ByEWH%2BIGVhI%2Fnzc1jM5cSNtDtRdqbmXcoL%2FWE1oNr3df0lOn0e9rE7Q5rjUIejr7O%2BR0alo6kyMM654NAGOqUBrG8wOwqG7gnkixoVN76bFz4GFwnNG8bnfFjp%2BnCv33YBCaDEegn1vlJdn60dutJyhUdzeWjH4Y%2FgJuZz1GGKYquauyISpyf5EjzmEbUajftTqzst8PEI2oHHDUDAS9C8m3hg57kqLD%2FI85CqFqrI3UxWpW6RgElmAgDhyfSCU49O50u0X5IFRQTNG1C7UsTBg9%2FbS1nToHQy7mdCHjReHCjz2nkq&X-Amz-Signature=1d7d4de9761b17278e202c4144b98206ffa84c30d58cf2b952fd41bb531016aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVAEG45R%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpL4wnrhszf7xJQFsm0ar3QMkU9wlJo84U%2F%2FbrKZh48wIgQq93mWCvyh4nGFWhAkahmPgHnW1wnfvFZdhZLddWewYqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOrPPk5aYiS4ItlctCrcA0%2BGUOM7c2PNlnv08IErV13qkRazckyKJayGKn40hpeiv1a4iLPO%2FBWoE0N6IpWGjpPTKScxC79t8okZDnB5mQbfEmJPBRFwyLRefSnBh70MIxkLLuSyeWy1Efwz1sCh2vZupoeIr%2FUEp%2Ba0Rph9%2FNX1Y%2FYZeCoEChqpIoDa6SsXFnc48By%2FrG%2FjlbJXHd8aQID8Le%2F9F1lekIkuGL%2B8CK0UJ307K4gZ3IBq7zDibyS2UA5T4qgJhNW5IFKadcZf5DXk5rKv4eSwOS9g%2B5Y8hvVCD8a9jgcA6bIw15IER7W919QYGbrFH2WomQYwugyE24o9wKQPGta3gc5bf9D0EzH7N2yFTm%2BL%2BFBu1GSh9MhBwarQ3711AT19WOrnJuBTk%2BBxMrzyyW%2FV8geKTqQAYNeCbT3YVI3q7zbFJaHUeowCiDCas9V1yd12DZ5dLIqzg5LESjeeodC2FiLV%2BfbR91sRDm679zhWmxBzF5%2FiVW5UtUONQQ%2F4yuIwuC5O6YyTvy%2Btqevnb%2BoQRNKe77mGmwzLuyU98WMiY1cs4ckmn6Z5A%2BeKke%2ByEWH%2BIGVhI%2Fnzc1jM5cSNtDtRdqbmXcoL%2FWE1oNr3df0lOn0e9rE7Q5rjUIejr7O%2BR0alo6kyMM654NAGOqUBrG8wOwqG7gnkixoVN76bFz4GFwnNG8bnfFjp%2BnCv33YBCaDEegn1vlJdn60dutJyhUdzeWjH4Y%2FgJuZz1GGKYquauyISpyf5EjzmEbUajftTqzst8PEI2oHHDUDAS9C8m3hg57kqLD%2FI85CqFqrI3UxWpW6RgElmAgDhyfSCU49O50u0X5IFRQTNG1C7UsTBg9%2FbS1nToHQy7mdCHjReHCjz2nkq&X-Amz-Signature=35a5b79405c1cd3ac8373d33a7d12d86a705d5c846b996d67e9c9c9f0b1e964e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVAEG45R%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpL4wnrhszf7xJQFsm0ar3QMkU9wlJo84U%2F%2FbrKZh48wIgQq93mWCvyh4nGFWhAkahmPgHnW1wnfvFZdhZLddWewYqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOrPPk5aYiS4ItlctCrcA0%2BGUOM7c2PNlnv08IErV13qkRazckyKJayGKn40hpeiv1a4iLPO%2FBWoE0N6IpWGjpPTKScxC79t8okZDnB5mQbfEmJPBRFwyLRefSnBh70MIxkLLuSyeWy1Efwz1sCh2vZupoeIr%2FUEp%2Ba0Rph9%2FNX1Y%2FYZeCoEChqpIoDa6SsXFnc48By%2FrG%2FjlbJXHd8aQID8Le%2F9F1lekIkuGL%2B8CK0UJ307K4gZ3IBq7zDibyS2UA5T4qgJhNW5IFKadcZf5DXk5rKv4eSwOS9g%2B5Y8hvVCD8a9jgcA6bIw15IER7W919QYGbrFH2WomQYwugyE24o9wKQPGta3gc5bf9D0EzH7N2yFTm%2BL%2BFBu1GSh9MhBwarQ3711AT19WOrnJuBTk%2BBxMrzyyW%2FV8geKTqQAYNeCbT3YVI3q7zbFJaHUeowCiDCas9V1yd12DZ5dLIqzg5LESjeeodC2FiLV%2BfbR91sRDm679zhWmxBzF5%2FiVW5UtUONQQ%2F4yuIwuC5O6YyTvy%2Btqevnb%2BoQRNKe77mGmwzLuyU98WMiY1cs4ckmn6Z5A%2BeKke%2ByEWH%2BIGVhI%2Fnzc1jM5cSNtDtRdqbmXcoL%2FWE1oNr3df0lOn0e9rE7Q5rjUIejr7O%2BR0alo6kyMM654NAGOqUBrG8wOwqG7gnkixoVN76bFz4GFwnNG8bnfFjp%2BnCv33YBCaDEegn1vlJdn60dutJyhUdzeWjH4Y%2FgJuZz1GGKYquauyISpyf5EjzmEbUajftTqzst8PEI2oHHDUDAS9C8m3hg57kqLD%2FI85CqFqrI3UxWpW6RgElmAgDhyfSCU49O50u0X5IFRQTNG1C7UsTBg9%2FbS1nToHQy7mdCHjReHCjz2nkq&X-Amz-Signature=89b6dbc8da8a24786d48c27fe520c102ff46a98924dc67ee4b5265b0d67836a9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVAEG45R%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCpL4wnrhszf7xJQFsm0ar3QMkU9wlJo84U%2F%2FbrKZh48wIgQq93mWCvyh4nGFWhAkahmPgHnW1wnfvFZdhZLddWewYqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOrPPk5aYiS4ItlctCrcA0%2BGUOM7c2PNlnv08IErV13qkRazckyKJayGKn40hpeiv1a4iLPO%2FBWoE0N6IpWGjpPTKScxC79t8okZDnB5mQbfEmJPBRFwyLRefSnBh70MIxkLLuSyeWy1Efwz1sCh2vZupoeIr%2FUEp%2Ba0Rph9%2FNX1Y%2FYZeCoEChqpIoDa6SsXFnc48By%2FrG%2FjlbJXHd8aQID8Le%2F9F1lekIkuGL%2B8CK0UJ307K4gZ3IBq7zDibyS2UA5T4qgJhNW5IFKadcZf5DXk5rKv4eSwOS9g%2B5Y8hvVCD8a9jgcA6bIw15IER7W919QYGbrFH2WomQYwugyE24o9wKQPGta3gc5bf9D0EzH7N2yFTm%2BL%2BFBu1GSh9MhBwarQ3711AT19WOrnJuBTk%2BBxMrzyyW%2FV8geKTqQAYNeCbT3YVI3q7zbFJaHUeowCiDCas9V1yd12DZ5dLIqzg5LESjeeodC2FiLV%2BfbR91sRDm679zhWmxBzF5%2FiVW5UtUONQQ%2F4yuIwuC5O6YyTvy%2Btqevnb%2BoQRNKe77mGmwzLuyU98WMiY1cs4ckmn6Z5A%2BeKke%2ByEWH%2BIGVhI%2Fnzc1jM5cSNtDtRdqbmXcoL%2FWE1oNr3df0lOn0e9rE7Q5rjUIejr7O%2BR0alo6kyMM654NAGOqUBrG8wOwqG7gnkixoVN76bFz4GFwnNG8bnfFjp%2BnCv33YBCaDEegn1vlJdn60dutJyhUdzeWjH4Y%2FgJuZz1GGKYquauyISpyf5EjzmEbUajftTqzst8PEI2oHHDUDAS9C8m3hg57kqLD%2FI85CqFqrI3UxWpW6RgElmAgDhyfSCU49O50u0X5IFRQTNG1C7UsTBg9%2FbS1nToHQy7mdCHjReHCjz2nkq&X-Amz-Signature=2137b271110aed15308a2a8da799cc1f773779da557c5f574972ae54b0e9ebe1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y5RYI6ID%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChiqNHNC9hplqKEPFn6xMbn1rfrLEBaIhK0UhwsPaOVAIgOjzy%2Fs%2BrDq6E88orwNUWJA6ddZBOhGQdgI%2FyU0UubbkqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFMlcsBJLn6uTntqgircAxTFnBJojhh2lEDXQWd0wk6bu1%2Bg%2BkpMdSq5S5FIoLn%2Fk40knRyIz%2F6FAObKIqhntTDiJsv0HH6KxwNk3bUg6PnCfdlQJk162Ux2ECKUC2xYOWu55IOGRhA4l7YmwnM%2FUHAIF0N9asU14aco62JPzT%2BhzBU91qIHXAfcB7npLrtypZ%2BliMVgvU8zVP5nJM%2BGLAoK3HNBrASW53qtYFXu3tAnHghSh%2BI1lBdNLMV6jrEX%2B2mP%2Fs3oV%2Fu4tm8aqMi1OSzOJIrJrs4Bggw%2FK5rFvhgbTz7ICg3OE5WUrLicZgNGHrzByo0pPbi%2BwXeDyHhXkiluEVZy4oqctr42Yabp7Aae1YqTZiq7A3HswOescuMlWrr4igvkxlTFbkXe6y%2FRX4pBY3jHYxsNawzcT%2FKQv%2BJK0pRrvAstgYDn5CD2hswOyZpes7O5Mm%2Bf7JGLCt1W36LL%2FesAA82JtLnd16pTJ6rVdP7h61OAd44f8G0WSZtemxJT7WXEaQUTkx6%2FBKezI%2FNYQOHfknwXRszcV0VNDXVw6fOKSXFyYy4OjmjyiPMPpwRIPKj5HhMjrKnZwz2J2vGFXAjKeQdfZuutdk8WjGupwSHOLwCzLOLqK466BreqLXI6h%2FFRfN5yrm5SMKm54NAGOqUB7uebEoBV1n5ohZwBd2%2FqBGH9vkz9UIUh%2B7zVAO76qik9wt6oDn514qfWrHk5qF9oh%2BQWpdefhlu5z23A%2FjJsmn5G%2FMqJ9xPRWhHepTwnwmtY5erhL9aCAmZY9jQ%2FTgRqCHjR6ejSreQnDFT40UBU9GNX1gomeDj%2FTeykAcgmdzWq74pLWkmFTCT6Df6km1p5lelHoEcxTeBchEU6mRIdo2v%2B6jZj&X-Amz-Signature=0d0bb35cec1761099a2c8558365887a5816708e52f9764f7fe54cfa5a8462932&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TAYERQ4Y%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC%2BB1%2BusSpQrr4Jg0Y6Rr8USFK4Bk4OHrjC%2FFrFN6QS3gIgR1ajE6M9I%2B6JPMXt4%2BmWBPMmsWVh8htgyTZhvTp%2F%2BeUqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAqQJwWfcm3C6lX%2BJircAz3uv6DOboXuCBF6pfIpHvygdZBvD1OfDIs1tiO8kAxKWck%2Ff4ib8n6mvlFQ6hH5oiVtK51kkGxzuWqnd%2FkW4r2miXyC%2Bx0GbFfeIz6rPe0EROm%2BwCrxrGXYP4c1baHlD494FSWmUanQ331WdN07fCsgMLS8AjlmGQybr87zfqgJ0lbJm%2F8Yael%2BLXkp6Bmk8PCbUC4rrgaP4UHWgu7YjFC8FfS2%2F6wUB57X4Rsn7fqxvC33NLtFTNGV4y1emHX7QzMySBGOqjDtaoUuOuzeiZyshgO5iU3gMS4v%2BuFiSz7hLrqgzOk7gvRLmwiTEYL53ZZzugYIsssTU2yhbAuV%2Bn%2FBs9%2BQRDIJaYeDD2uljua0KoCnWQZi3Pa6MktaHaHQacwYL9sPvCEQf0zS1GD4rkhudqRwBVtoXeYJ4g7Dc5vqeCDNJo5f%2F%2FvBdjaGf1fFTl%2Ftjvl8QSTEGNwWBWz0e0AZ%2FOVjFLkphu0S0h0JSHtWHmpIC3Eq%2FT6E6LFwpown9Rfuwl%2BUzrd0FkB7bn5C1%2BMduD%2BnshfyzKrzkcW1MiAa5w7Lu8LKxTojEqwHbpAS0AlewFeo3ikvw6BLL9Lj4CS7P3GPxwoH0QM9cciuGxOpY9YKevTPnixOKOg4MOm64NAGOqUBOFoOhaLA16wkzJLdynwkm0DKT%2FdjczZ1ykxvPwW1i8OVXdSiJCXSyn3M2QXNY2mvWOYwH5ENjgukOe4rxEkK9lOL%2FARXk01g4MpRn1qucSjDzP0ZuhSMXZFxMmEuEeIYUDfs99vrssmGd4ek2XS1oVUSsR%2BQncpfhpx6wpzCylSzKSx90z%2BTBcfo2ZAy6T9LLk6nDZAa5kjxsdmLlcKEQkNjsh%2BD&X-Amz-Signature=f1992857b550615acd420e3a9c67f58d1eb29daab294a512b1febb879da0e416&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TAYERQ4Y%2F20260528%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260528T113734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC%2BB1%2BusSpQrr4Jg0Y6Rr8USFK4Bk4OHrjC%2FFrFN6QS3gIgR1ajE6M9I%2B6JPMXt4%2BmWBPMmsWVh8htgyTZhvTp%2F%2BeUqiAQIrP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAqQJwWfcm3C6lX%2BJircAz3uv6DOboXuCBF6pfIpHvygdZBvD1OfDIs1tiO8kAxKWck%2Ff4ib8n6mvlFQ6hH5oiVtK51kkGxzuWqnd%2FkW4r2miXyC%2Bx0GbFfeIz6rPe0EROm%2BwCrxrGXYP4c1baHlD494FSWmUanQ331WdN07fCsgMLS8AjlmGQybr87zfqgJ0lbJm%2F8Yael%2BLXkp6Bmk8PCbUC4rrgaP4UHWgu7YjFC8FfS2%2F6wUB57X4Rsn7fqxvC33NLtFTNGV4y1emHX7QzMySBGOqjDtaoUuOuzeiZyshgO5iU3gMS4v%2BuFiSz7hLrqgzOk7gvRLmwiTEYL53ZZzugYIsssTU2yhbAuV%2Bn%2FBs9%2BQRDIJaYeDD2uljua0KoCnWQZi3Pa6MktaHaHQacwYL9sPvCEQf0zS1GD4rkhudqRwBVtoXeYJ4g7Dc5vqeCDNJo5f%2F%2FvBdjaGf1fFTl%2Ftjvl8QSTEGNwWBWz0e0AZ%2FOVjFLkphu0S0h0JSHtWHmpIC3Eq%2FT6E6LFwpown9Rfuwl%2BUzrd0FkB7bn5C1%2BMduD%2BnshfyzKrzkcW1MiAa5w7Lu8LKxTojEqwHbpAS0AlewFeo3ikvw6BLL9Lj4CS7P3GPxwoH0QM9cciuGxOpY9YKevTPnixOKOg4MOm64NAGOqUBOFoOhaLA16wkzJLdynwkm0DKT%2FdjczZ1ykxvPwW1i8OVXdSiJCXSyn3M2QXNY2mvWOYwH5ENjgukOe4rxEkK9lOL%2FARXk01g4MpRn1qucSjDzP0ZuhSMXZFxMmEuEeIYUDfs99vrssmGd4ek2XS1oVUSsR%2BQncpfhpx6wpzCylSzKSx90z%2BTBcfo2ZAy6T9LLk6nDZAa5kjxsdmLlcKEQkNjsh%2BD&X-Amz-Signature=91ed9db09587d0289e25bde8f9a7aef90d0da38ea708352119b11e75b8eca4fc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
