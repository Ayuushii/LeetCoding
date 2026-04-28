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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSXYVDCY%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIHLBWTSUfuGIMTYQVXylI4TzyXz9T3YrmsS0Df%2BirBTQAiAxwNoE%2FpbsiCjwinqP9%2FG1sEyg2xC%2FaRUbWUzgDWEieyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMEeMTrMx8lP09g%2B8YKtwD2yNuDVhM%2BnvzOoRMchPDADXG3RxAj5c2abs8D077o6qI3G8YmOeFCCPXppJcz4cB6l4ZEz0pg%2FdqdXzgBhaS55AzNTA%2FquoD%2F7fZw8q0%2F58WQ98X2c3op%2FV5THKmbgeHJkJzwrNwvzcq6y7ow4fnQ2D7JYfAj24M17ioQ7lXUL3wPyKNfk464u4FV2R%2B9827r1DAGZPqZrkv368%2FoxlQSBJyiasTYT1GqEsbUWS1yucKtRuQHlMv1SN18jBstozOnO769CBndr7xtlqcepNMPnF6svan4MRuPq90cb5l97gSy4Q4vfc8Z0sDVEjQArQxecI2XCahUU5ZG4L9JkSrpXo0sYUbcPItYjl1jgz%2BueSNvCieucyRQa00SGaMoRLajVlPoDyA8i26q5PIVg8mWvcK0%2Bn4tbMob9HivhrH0GN3cXVe7dbCS%2BKbvWNaxdq0XoqtjQUun0cx0syFaf%2FP1JY1rSAahcYUpvd%2Ba0Wk8am4UkCZw11byUS5ftTbDUu5LXVdSLLpXNx8V09GxXKqbOwrCUQ%2F7cCXT47x9aMjMDwqQgHb5CP9hb8Vz7LYRatuvvT355kXfu39WIAmwTjiNC80%2FiP%2F8laZJLyJiPWkdGa%2B60Q29zRrsR0jcy4wkfbBzwY6pgGpDPpFgBN69LkCZD2Q%2FJCb2ccgV7aUZt2VoLs9%2FRBAIp2VGJ%2Fho6q5AZRNCRJBTUzsk0YMkTngWPdIi2gjS3YEmP%2FHFT9%2FXcthMG3O8qErElDnU2NcBmB2HoS7P4CGjFic7egU94vNycjO5UMj7wEZoHwUVySWcm5xEeZc5pVufcJngQYoU%2FYEDzEdGinAsuTwiU%2F%2FxBRS%2F2QjXD6xIQfbEPUpNuYC&X-Amz-Signature=73587b63e0dbf4d8721de211e132f0e4799b88dfe75177e1f8ad782ffb7e9af7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSXYVDCY%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIHLBWTSUfuGIMTYQVXylI4TzyXz9T3YrmsS0Df%2BirBTQAiAxwNoE%2FpbsiCjwinqP9%2FG1sEyg2xC%2FaRUbWUzgDWEieyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMEeMTrMx8lP09g%2B8YKtwD2yNuDVhM%2BnvzOoRMchPDADXG3RxAj5c2abs8D077o6qI3G8YmOeFCCPXppJcz4cB6l4ZEz0pg%2FdqdXzgBhaS55AzNTA%2FquoD%2F7fZw8q0%2F58WQ98X2c3op%2FV5THKmbgeHJkJzwrNwvzcq6y7ow4fnQ2D7JYfAj24M17ioQ7lXUL3wPyKNfk464u4FV2R%2B9827r1DAGZPqZrkv368%2FoxlQSBJyiasTYT1GqEsbUWS1yucKtRuQHlMv1SN18jBstozOnO769CBndr7xtlqcepNMPnF6svan4MRuPq90cb5l97gSy4Q4vfc8Z0sDVEjQArQxecI2XCahUU5ZG4L9JkSrpXo0sYUbcPItYjl1jgz%2BueSNvCieucyRQa00SGaMoRLajVlPoDyA8i26q5PIVg8mWvcK0%2Bn4tbMob9HivhrH0GN3cXVe7dbCS%2BKbvWNaxdq0XoqtjQUun0cx0syFaf%2FP1JY1rSAahcYUpvd%2Ba0Wk8am4UkCZw11byUS5ftTbDUu5LXVdSLLpXNx8V09GxXKqbOwrCUQ%2F7cCXT47x9aMjMDwqQgHb5CP9hb8Vz7LYRatuvvT355kXfu39WIAmwTjiNC80%2FiP%2F8laZJLyJiPWkdGa%2B60Q29zRrsR0jcy4wkfbBzwY6pgGpDPpFgBN69LkCZD2Q%2FJCb2ccgV7aUZt2VoLs9%2FRBAIp2VGJ%2Fho6q5AZRNCRJBTUzsk0YMkTngWPdIi2gjS3YEmP%2FHFT9%2FXcthMG3O8qErElDnU2NcBmB2HoS7P4CGjFic7egU94vNycjO5UMj7wEZoHwUVySWcm5xEeZc5pVufcJngQYoU%2FYEDzEdGinAsuTwiU%2F%2FxBRS%2F2QjXD6xIQfbEPUpNuYC&X-Amz-Signature=813f9cad0ca06d774f7d083d3e4bc64b7bed37db71ec168acdade8b83bf874d0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSXYVDCY%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIHLBWTSUfuGIMTYQVXylI4TzyXz9T3YrmsS0Df%2BirBTQAiAxwNoE%2FpbsiCjwinqP9%2FG1sEyg2xC%2FaRUbWUzgDWEieyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMEeMTrMx8lP09g%2B8YKtwD2yNuDVhM%2BnvzOoRMchPDADXG3RxAj5c2abs8D077o6qI3G8YmOeFCCPXppJcz4cB6l4ZEz0pg%2FdqdXzgBhaS55AzNTA%2FquoD%2F7fZw8q0%2F58WQ98X2c3op%2FV5THKmbgeHJkJzwrNwvzcq6y7ow4fnQ2D7JYfAj24M17ioQ7lXUL3wPyKNfk464u4FV2R%2B9827r1DAGZPqZrkv368%2FoxlQSBJyiasTYT1GqEsbUWS1yucKtRuQHlMv1SN18jBstozOnO769CBndr7xtlqcepNMPnF6svan4MRuPq90cb5l97gSy4Q4vfc8Z0sDVEjQArQxecI2XCahUU5ZG4L9JkSrpXo0sYUbcPItYjl1jgz%2BueSNvCieucyRQa00SGaMoRLajVlPoDyA8i26q5PIVg8mWvcK0%2Bn4tbMob9HivhrH0GN3cXVe7dbCS%2BKbvWNaxdq0XoqtjQUun0cx0syFaf%2FP1JY1rSAahcYUpvd%2Ba0Wk8am4UkCZw11byUS5ftTbDUu5LXVdSLLpXNx8V09GxXKqbOwrCUQ%2F7cCXT47x9aMjMDwqQgHb5CP9hb8Vz7LYRatuvvT355kXfu39WIAmwTjiNC80%2FiP%2F8laZJLyJiPWkdGa%2B60Q29zRrsR0jcy4wkfbBzwY6pgGpDPpFgBN69LkCZD2Q%2FJCb2ccgV7aUZt2VoLs9%2FRBAIp2VGJ%2Fho6q5AZRNCRJBTUzsk0YMkTngWPdIi2gjS3YEmP%2FHFT9%2FXcthMG3O8qErElDnU2NcBmB2HoS7P4CGjFic7egU94vNycjO5UMj7wEZoHwUVySWcm5xEeZc5pVufcJngQYoU%2FYEDzEdGinAsuTwiU%2F%2FxBRS%2F2QjXD6xIQfbEPUpNuYC&X-Amz-Signature=b04e0dee6694fa9cd3a961dd87c0ca77b4acdd76b0a2dbdd0a0ccaa167cf8e1d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GPMXUIK%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBIaCXVzLXdlc3QtMiJGMEQCIFO6HEO%2BI5dMsBO2G5sbA%2FicN77so6uIJ0MZr3sXFmcSAiB3tMS4FGjxrPf4Ut0AjRU%2BAfPf2GLn2IM3mCc%2BtTLMGyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuhRZgRGnusY7Bf8VKtwD0YywnwTPNqky3hePjI%2BDgh6iyTe8Z5X9gDgWR52aSuBxr2OQR24KH8lD1%2Fdyp%2Bo0Fw0QDEe8LI7O3t9zcyM7fsPbX439E5BqxvLL3G6FvkXx4Y2rT0BTfrj8jJY2YTJJA8EaHVkp2J2CnE2%2FDPP0FLZoEGx9kzsTigweAprN%2FiuRwInjj5vPN0TI%2FrjPlOuJctDfEmLYVA6pgNKnulwH%2BUPcpLlEBncsHQl2jDERDsI%2F82INdYRItfaq3BCp3vssW581N9o3jGrtTv%2BenY9S3yXaB0fWWOR0r5EImVf5EaqhOA5SxVukUjAYAi4UhBafAloMzE4BMKdVLn0mktL1XCCBrpdEqvBYN6mqipbXn13nvr1CKJEMdT0QnG3nMcRQY8FYldAZTmlCdV%2FbwwX4aHlB3dealmDLExmlAOu75FPwuGrofP3Seyc%2FjAcXmQ8sMLmiD%2FkhLaTFI8q9wjYbaAb8kwUb8MymQ3X48CtTL2TKRDIg07%2BztywIQ0zpAVcwbA3I8sYgh6kVRZ2manre%2FKE%2BpLttm%2BpiQh83GO9tgOUyJNB62bQWlWXUr7mtyrL6laKXsAVhs1eReQaFYnj64IsyPxTl96BNYXje7IoVk82gmol%2BkDKhVQRyyGkw%2B%2FbBzwY6pgHGn3mS0ZCr19kV9IeS4OMqgzb1DnQkOmT8wBVqXVTvXuZ5dhJqmltJ41gzg5DXul2%2BPgKL333PuJDr2rzm8%2BT0dGbvL6PhYz1d1c%2B8vIBiwN0pOVoRuPWkrpf08O0A8Bd0bwatSAkd6xU9L5xSp2dFMA7TZDn2dhO%2B%2F0Cef%2FqrEYRg%2B11s2CPGFHDAHPHbbL%2FBQ1xMj6Gn6FFurtDXOTPofaYfx3ce&X-Amz-Signature=45c2f1a533db2a2be3063ad22ef1ecf72b9f8a53adf5333471b19e8c452a5da3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GPMXUIK%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBIaCXVzLXdlc3QtMiJGMEQCIFO6HEO%2BI5dMsBO2G5sbA%2FicN77so6uIJ0MZr3sXFmcSAiB3tMS4FGjxrPf4Ut0AjRU%2BAfPf2GLn2IM3mCc%2BtTLMGyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuhRZgRGnusY7Bf8VKtwD0YywnwTPNqky3hePjI%2BDgh6iyTe8Z5X9gDgWR52aSuBxr2OQR24KH8lD1%2Fdyp%2Bo0Fw0QDEe8LI7O3t9zcyM7fsPbX439E5BqxvLL3G6FvkXx4Y2rT0BTfrj8jJY2YTJJA8EaHVkp2J2CnE2%2FDPP0FLZoEGx9kzsTigweAprN%2FiuRwInjj5vPN0TI%2FrjPlOuJctDfEmLYVA6pgNKnulwH%2BUPcpLlEBncsHQl2jDERDsI%2F82INdYRItfaq3BCp3vssW581N9o3jGrtTv%2BenY9S3yXaB0fWWOR0r5EImVf5EaqhOA5SxVukUjAYAi4UhBafAloMzE4BMKdVLn0mktL1XCCBrpdEqvBYN6mqipbXn13nvr1CKJEMdT0QnG3nMcRQY8FYldAZTmlCdV%2FbwwX4aHlB3dealmDLExmlAOu75FPwuGrofP3Seyc%2FjAcXmQ8sMLmiD%2FkhLaTFI8q9wjYbaAb8kwUb8MymQ3X48CtTL2TKRDIg07%2BztywIQ0zpAVcwbA3I8sYgh6kVRZ2manre%2FKE%2BpLttm%2BpiQh83GO9tgOUyJNB62bQWlWXUr7mtyrL6laKXsAVhs1eReQaFYnj64IsyPxTl96BNYXje7IoVk82gmol%2BkDKhVQRyyGkw%2B%2FbBzwY6pgHGn3mS0ZCr19kV9IeS4OMqgzb1DnQkOmT8wBVqXVTvXuZ5dhJqmltJ41gzg5DXul2%2BPgKL333PuJDr2rzm8%2BT0dGbvL6PhYz1d1c%2B8vIBiwN0pOVoRuPWkrpf08O0A8Bd0bwatSAkd6xU9L5xSp2dFMA7TZDn2dhO%2B%2F0Cef%2FqrEYRg%2B11s2CPGFHDAHPHbbL%2FBQ1xMj6Gn6FFurtDXOTPofaYfx3ce&X-Amz-Signature=2b49ef18fe5bd759e720f2effeee54568b867b90d6fb6b6d892b1555bd3ec846&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GPMXUIK%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBIaCXVzLXdlc3QtMiJGMEQCIFO6HEO%2BI5dMsBO2G5sbA%2FicN77so6uIJ0MZr3sXFmcSAiB3tMS4FGjxrPf4Ut0AjRU%2BAfPf2GLn2IM3mCc%2BtTLMGyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuhRZgRGnusY7Bf8VKtwD0YywnwTPNqky3hePjI%2BDgh6iyTe8Z5X9gDgWR52aSuBxr2OQR24KH8lD1%2Fdyp%2Bo0Fw0QDEe8LI7O3t9zcyM7fsPbX439E5BqxvLL3G6FvkXx4Y2rT0BTfrj8jJY2YTJJA8EaHVkp2J2CnE2%2FDPP0FLZoEGx9kzsTigweAprN%2FiuRwInjj5vPN0TI%2FrjPlOuJctDfEmLYVA6pgNKnulwH%2BUPcpLlEBncsHQl2jDERDsI%2F82INdYRItfaq3BCp3vssW581N9o3jGrtTv%2BenY9S3yXaB0fWWOR0r5EImVf5EaqhOA5SxVukUjAYAi4UhBafAloMzE4BMKdVLn0mktL1XCCBrpdEqvBYN6mqipbXn13nvr1CKJEMdT0QnG3nMcRQY8FYldAZTmlCdV%2FbwwX4aHlB3dealmDLExmlAOu75FPwuGrofP3Seyc%2FjAcXmQ8sMLmiD%2FkhLaTFI8q9wjYbaAb8kwUb8MymQ3X48CtTL2TKRDIg07%2BztywIQ0zpAVcwbA3I8sYgh6kVRZ2manre%2FKE%2BpLttm%2BpiQh83GO9tgOUyJNB62bQWlWXUr7mtyrL6laKXsAVhs1eReQaFYnj64IsyPxTl96BNYXje7IoVk82gmol%2BkDKhVQRyyGkw%2B%2FbBzwY6pgHGn3mS0ZCr19kV9IeS4OMqgzb1DnQkOmT8wBVqXVTvXuZ5dhJqmltJ41gzg5DXul2%2BPgKL333PuJDr2rzm8%2BT0dGbvL6PhYz1d1c%2B8vIBiwN0pOVoRuPWkrpf08O0A8Bd0bwatSAkd6xU9L5xSp2dFMA7TZDn2dhO%2B%2F0Cef%2FqrEYRg%2B11s2CPGFHDAHPHbbL%2FBQ1xMj6Gn6FFurtDXOTPofaYfx3ce&X-Amz-Signature=cf041ec61b3cf9c1df797215979f162d18418e30b8ccf0fa61a71c357ec75fb2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GPMXUIK%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBIaCXVzLXdlc3QtMiJGMEQCIFO6HEO%2BI5dMsBO2G5sbA%2FicN77so6uIJ0MZr3sXFmcSAiB3tMS4FGjxrPf4Ut0AjRU%2BAfPf2GLn2IM3mCc%2BtTLMGyqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMuhRZgRGnusY7Bf8VKtwD0YywnwTPNqky3hePjI%2BDgh6iyTe8Z5X9gDgWR52aSuBxr2OQR24KH8lD1%2Fdyp%2Bo0Fw0QDEe8LI7O3t9zcyM7fsPbX439E5BqxvLL3G6FvkXx4Y2rT0BTfrj8jJY2YTJJA8EaHVkp2J2CnE2%2FDPP0FLZoEGx9kzsTigweAprN%2FiuRwInjj5vPN0TI%2FrjPlOuJctDfEmLYVA6pgNKnulwH%2BUPcpLlEBncsHQl2jDERDsI%2F82INdYRItfaq3BCp3vssW581N9o3jGrtTv%2BenY9S3yXaB0fWWOR0r5EImVf5EaqhOA5SxVukUjAYAi4UhBafAloMzE4BMKdVLn0mktL1XCCBrpdEqvBYN6mqipbXn13nvr1CKJEMdT0QnG3nMcRQY8FYldAZTmlCdV%2FbwwX4aHlB3dealmDLExmlAOu75FPwuGrofP3Seyc%2FjAcXmQ8sMLmiD%2FkhLaTFI8q9wjYbaAb8kwUb8MymQ3X48CtTL2TKRDIg07%2BztywIQ0zpAVcwbA3I8sYgh6kVRZ2manre%2FKE%2BpLttm%2BpiQh83GO9tgOUyJNB62bQWlWXUr7mtyrL6laKXsAVhs1eReQaFYnj64IsyPxTl96BNYXje7IoVk82gmol%2BkDKhVQRyyGkw%2B%2FbBzwY6pgHGn3mS0ZCr19kV9IeS4OMqgzb1DnQkOmT8wBVqXVTvXuZ5dhJqmltJ41gzg5DXul2%2BPgKL333PuJDr2rzm8%2BT0dGbvL6PhYz1d1c%2B8vIBiwN0pOVoRuPWkrpf08O0A8Bd0bwatSAkd6xU9L5xSp2dFMA7TZDn2dhO%2B%2F0Cef%2FqrEYRg%2B11s2CPGFHDAHPHbbL%2FBQ1xMj6Gn6FFurtDXOTPofaYfx3ce&X-Amz-Signature=f18063e403a34a0a22fbb11c10956785f48eb0f3d1d1c6c391842b7dfe71c181&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662AMC2AXF%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101246Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJGMEQCIFBWnKDk%2B9Q%2FKHpjuC2uLlZR0t%2B6hHJ6rCbUFMot6ihlAiBbA55s3g0hdZ6VQuLjP7Xqex6B4ZfUMKuLJRShTAd32SqIBAja%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMdur9PFjaaaN2FuTeKtwDMwJI7uhRufCjXsYY%2Fr5kg%2B%2Fq27LLxrUK71HImeEOzjYpbF6F8VoBZnI74bezQrXhxUJacSTDzo4UmR1JQWfAm8%2FAQsD8wOKENiTJgiTDW3j3mnXBm6BHdcIuHN6WtfeeTIlgOSWN8xmdkrNu2tusYfmK%2F3ddWu45kDPlsH%2B4raiWQDr7qgPqFL3ih%2FwuDfiE7EbuHpqtrjAyWMfIG1lKrw7FbwESbgXG9paxssf9NDmsmqFvYN8z9MASSPEQfoONZr4LCjfjqnCOGJPp37xGcwPUlx4%2FXUjYxxe45I0DmnCB4CKPlfp1LlNaGqd3q6c6oByHYZa2gxpR8%2BOi%2BQ0%2B1qgK5dMzw%2BF3kIXxQfkiufCcP9PeO5pql3S0DUtHHjagrSzjlgjVeWMqkl%2BUi8R48NypY7d2jYDDXO8trTTNjefeiWY7T7y4c6PxWkz11toAorNw%2BfJqzGXIyrRw0KRZbi1Ioxdz3N3x3BxO%2F0iv7KfMUZfPeF1JieyB7Eu1MpKTHogHdrhVjG2A8GVzjXTmLHzSttTOCr4cAW2xo1gewzv5G5f2J8SwdkkVMZdv58OazInARi%2BGSWkMSqJ9ich6aNN09Wfm3p7w6vSR8HCXwo%2F4wp1fFN5Tk4vHoQ8wsvXBzwY6pgEL6WI50sCFPvo%2Bn9CukZmg8n6WB5%2Fyb2TQPNXjIDKz3q7Muq1UHud19sNW%2BblTnHLOEQpXU%2B3VDD%2FWOG4rh3PuxR1AfMblSTuatQVR22FG8bRQYcB5vwaWb3fk1Dmun6TFGv8abv%2FmjbvDUns7Ej22ycS4OU%2BW1%2FCR3lUf7D1xHtgC2if8TaJcIPUtQuuAkQzRihRS7OmyALOELCtE8Vu9R%2Fy21%2BtH&X-Amz-Signature=98cc42739d06e268bd2c8e4b076f74539ff0fa266135faa4e7504b71ff4eb90f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUK5YYXE%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101246Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIQDLA%2FXlxfc07CXbFTXH6h3eu5cDtampU3D88Ofl26H89gIgR6kGsQHEqgQpHgL34zWZofLekvfZ8hvX1fNvHOLykNgqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPpB1uHgLbUIsxd0ryrcA46N%2FfTk5T3aZV%2BasBol5NfZePuqMW4a87dWSNppWuJh6rcg5hhm5lcF1Vqda0DRX7KAivFvPfv0nNNqxh3lXDPLM90ANluwkSnt5t4elWWKtVW1UTqykOA1bOKthc%2FIhuW1UxSqULSqKvenyzE6f9KTpKsWQiVOMyvLRRNEFhafEYr9%2FItW%2FNmCyK2L0T1f3NLS5MLcCFLq8e2BM17sEWMGckWxmCXIQzwOcFWMw%2Bso%2FEXj7lSNIvI8JfpfPKLerwYqXtn%2Bkyga6i7VVigydLdc6V4cFFVyHcadG%2F%2FzQEOb5d5GoqB4hdX6NYFGbCeowyXC8Yr9%2FgHgMVzwGzEaeNlaLoOMWW8lTulDzdWOYByL44AHe59yPqkE0iqQ2EOA48lwUkGnFKGrFuuiTE1Otb1vRrNfGDVhk%2Bmalso7LgiAd391ZT1uszzcko6QOnJsKN1kOXsYEFy5Wv6kXJxsgQ0BiOdvdnEzdSuWUynLIqwdVoElDRr%2B7fHRCldVhmG1G8vYPVNhJD9AhMJcKu4TSGl5c0Sk7X3cRA9oIvuFmVFtDJlDzR0vPglm6IqMTpTCa9iEJuLeGY%2Fc%2F87Qb1bjhayGjLlH0MSy8RxkcQNOr7YYHdA2hYPPRXqkX8PtMJX2wc8GOqUBc51%2FdfXVcvyf0%2FdzURiDX9YylcDzBmwa4dZBP4eLDKO7zWJq9y%2BwMng5pIeHdJPA1TKpYbCKgUoxTG1Tw5EokZIuVLRDY2GrJF6u4AK%2F3j97%2FMaMZ%2BOThLZG4xC3VoMFme4vUrxvp0baGW8QvOGCIKlsR6eOV4pBfy%2FGgEG4PXicSRLbF9p9ASM6gjNYTIdWbXiyagJdPBpqsSXH77VqERp5QEof&X-Amz-Signature=20ea40819cb3c8829da99fa370b582b3b799298bdfa689083c1ca906294b4f62&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUK5YYXE%2F20260428%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260428T101246Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBEaCXVzLXdlc3QtMiJHMEUCIQDLA%2FXlxfc07CXbFTXH6h3eu5cDtampU3D88Ofl26H89gIgR6kGsQHEqgQpHgL34zWZofLekvfZ8hvX1fNvHOLykNgqiAQI2v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPpB1uHgLbUIsxd0ryrcA46N%2FfTk5T3aZV%2BasBol5NfZePuqMW4a87dWSNppWuJh6rcg5hhm5lcF1Vqda0DRX7KAivFvPfv0nNNqxh3lXDPLM90ANluwkSnt5t4elWWKtVW1UTqykOA1bOKthc%2FIhuW1UxSqULSqKvenyzE6f9KTpKsWQiVOMyvLRRNEFhafEYr9%2FItW%2FNmCyK2L0T1f3NLS5MLcCFLq8e2BM17sEWMGckWxmCXIQzwOcFWMw%2Bso%2FEXj7lSNIvI8JfpfPKLerwYqXtn%2Bkyga6i7VVigydLdc6V4cFFVyHcadG%2F%2FzQEOb5d5GoqB4hdX6NYFGbCeowyXC8Yr9%2FgHgMVzwGzEaeNlaLoOMWW8lTulDzdWOYByL44AHe59yPqkE0iqQ2EOA48lwUkGnFKGrFuuiTE1Otb1vRrNfGDVhk%2Bmalso7LgiAd391ZT1uszzcko6QOnJsKN1kOXsYEFy5Wv6kXJxsgQ0BiOdvdnEzdSuWUynLIqwdVoElDRr%2B7fHRCldVhmG1G8vYPVNhJD9AhMJcKu4TSGl5c0Sk7X3cRA9oIvuFmVFtDJlDzR0vPglm6IqMTpTCa9iEJuLeGY%2Fc%2F87Qb1bjhayGjLlH0MSy8RxkcQNOr7YYHdA2hYPPRXqkX8PtMJX2wc8GOqUBc51%2FdfXVcvyf0%2FdzURiDX9YylcDzBmwa4dZBP4eLDKO7zWJq9y%2BwMng5pIeHdJPA1TKpYbCKgUoxTG1Tw5EokZIuVLRDY2GrJF6u4AK%2F3j97%2FMaMZ%2BOThLZG4xC3VoMFme4vUrxvp0baGW8QvOGCIKlsR6eOV4pBfy%2FGgEG4PXicSRLbF9p9ASM6gjNYTIdWbXiyagJdPBpqsSXH77VqERp5QEof&X-Amz-Signature=74d61bb2591e62da0d5adca23cc02ee2c96a84ce0f47aa2fab64c0d305d01f22&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
