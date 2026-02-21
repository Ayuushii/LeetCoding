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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X2WCCIX6%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083021Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCMA3uFtYRdv%2Fw7jMgfNqjev1YMm0eZKHfR24ygLsaWSwIhAKpc%2BuxtwILnpd%2BZ2sdTzHL3uJeTxsMERULdj5f4U7tdKogECKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzHfI1siAmFtAMUO%2Bgq3ANBGDCBJJeJHFPo7IMGIliXjns8WNUwcNQMLsxyF7tZ7sjYX5COTDLW%2FD4S9Rnj3dhswaBYSaRWtaZacNsOerYEcwjKS60sVTUaVtwrf%2FhKyEX49O8X32RxEwJNWey%2FDObqSLxSe9nnVOcyWMqZ0ZX0sBgQRKbLLX%2BqE%2Bq0YJh457syjQoVup%2Bk%2FhHDCQIjXyQK8fHZP41LroT48Q1P32W9Kktf0xAcTEPSwq5TF7rN%2F17rHMOzVAILJNz068F3nY93VMW1oxtr%2Bu4G%2FdbrXVCilCgiLeEs0GB5dRsaP72Cw%2F2dz5gOlLEc3W4V4rem1BzcF6HBpL90YWX%2FEO7i1NhVAfp0GZAmbTsDEBkzl0AkzspIMaRoHGA71XRHsHLSaBZbxcBEeXhxIk%2FIW9oTFmLJRQaEfvJlvc2klmuEGm6NcKJuhi%2F%2Faz9OSnRD17IohXmoOUfYV%2BGtS4tGBQO3GbwJT7R%2BqUfckJ0G86alYTnxne9Cz9ahlaG3IS8chLrv%2BcsbHPboG2ncC7W3nrlB1ePTuVvBx3D1BDVBMzZfUNIRWVCU%2F7cpgt5TaB06ebk1cpiwFwNfv3v6g1PMnvH3qJT82Z71fNuSYx%2FpoLfOJ4sAEAr0Jf4ORdi1tDFd9TCos%2BXMBjqkAfrSsr6%2BjwsORLK2enGJXwPNVR2179g4EwGOvnFoNCNEE8Bm2bjPRV0WRiHILOctQFsuep36gO1SBnTNB%2Fi%2F8%2BZ05PtthYHwsbjVXDjB0751wbUrwHb%2BFSAhlFgkiNzXLNf4A1PixswqtY9OPjVSRncFAvOVK461PR6Hf6sRYG3UciizRu7f9xyFAHZS1gf%2F6IpSo0oaFkmTWoPFlmZY%2FNu3uD6l&X-Amz-Signature=0b038fa63aa76f4857da760138ed512c04755c40c7fe995de6a3c75de39b68a5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X2WCCIX6%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083021Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCMA3uFtYRdv%2Fw7jMgfNqjev1YMm0eZKHfR24ygLsaWSwIhAKpc%2BuxtwILnpd%2BZ2sdTzHL3uJeTxsMERULdj5f4U7tdKogECKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzHfI1siAmFtAMUO%2Bgq3ANBGDCBJJeJHFPo7IMGIliXjns8WNUwcNQMLsxyF7tZ7sjYX5COTDLW%2FD4S9Rnj3dhswaBYSaRWtaZacNsOerYEcwjKS60sVTUaVtwrf%2FhKyEX49O8X32RxEwJNWey%2FDObqSLxSe9nnVOcyWMqZ0ZX0sBgQRKbLLX%2BqE%2Bq0YJh457syjQoVup%2Bk%2FhHDCQIjXyQK8fHZP41LroT48Q1P32W9Kktf0xAcTEPSwq5TF7rN%2F17rHMOzVAILJNz068F3nY93VMW1oxtr%2Bu4G%2FdbrXVCilCgiLeEs0GB5dRsaP72Cw%2F2dz5gOlLEc3W4V4rem1BzcF6HBpL90YWX%2FEO7i1NhVAfp0GZAmbTsDEBkzl0AkzspIMaRoHGA71XRHsHLSaBZbxcBEeXhxIk%2FIW9oTFmLJRQaEfvJlvc2klmuEGm6NcKJuhi%2F%2Faz9OSnRD17IohXmoOUfYV%2BGtS4tGBQO3GbwJT7R%2BqUfckJ0G86alYTnxne9Cz9ahlaG3IS8chLrv%2BcsbHPboG2ncC7W3nrlB1ePTuVvBx3D1BDVBMzZfUNIRWVCU%2F7cpgt5TaB06ebk1cpiwFwNfv3v6g1PMnvH3qJT82Z71fNuSYx%2FpoLfOJ4sAEAr0Jf4ORdi1tDFd9TCos%2BXMBjqkAfrSsr6%2BjwsORLK2enGJXwPNVR2179g4EwGOvnFoNCNEE8Bm2bjPRV0WRiHILOctQFsuep36gO1SBnTNB%2Fi%2F8%2BZ05PtthYHwsbjVXDjB0751wbUrwHb%2BFSAhlFgkiNzXLNf4A1PixswqtY9OPjVSRncFAvOVK461PR6Hf6sRYG3UciizRu7f9xyFAHZS1gf%2F6IpSo0oaFkmTWoPFlmZY%2FNu3uD6l&X-Amz-Signature=6d8d061f766f4eb21ffe57e56963a0d16590572d8c3bfc83fab91c2a82fd7e79&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X2WCCIX6%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083021Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCMA3uFtYRdv%2Fw7jMgfNqjev1YMm0eZKHfR24ygLsaWSwIhAKpc%2BuxtwILnpd%2BZ2sdTzHL3uJeTxsMERULdj5f4U7tdKogECKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzHfI1siAmFtAMUO%2Bgq3ANBGDCBJJeJHFPo7IMGIliXjns8WNUwcNQMLsxyF7tZ7sjYX5COTDLW%2FD4S9Rnj3dhswaBYSaRWtaZacNsOerYEcwjKS60sVTUaVtwrf%2FhKyEX49O8X32RxEwJNWey%2FDObqSLxSe9nnVOcyWMqZ0ZX0sBgQRKbLLX%2BqE%2Bq0YJh457syjQoVup%2Bk%2FhHDCQIjXyQK8fHZP41LroT48Q1P32W9Kktf0xAcTEPSwq5TF7rN%2F17rHMOzVAILJNz068F3nY93VMW1oxtr%2Bu4G%2FdbrXVCilCgiLeEs0GB5dRsaP72Cw%2F2dz5gOlLEc3W4V4rem1BzcF6HBpL90YWX%2FEO7i1NhVAfp0GZAmbTsDEBkzl0AkzspIMaRoHGA71XRHsHLSaBZbxcBEeXhxIk%2FIW9oTFmLJRQaEfvJlvc2klmuEGm6NcKJuhi%2F%2Faz9OSnRD17IohXmoOUfYV%2BGtS4tGBQO3GbwJT7R%2BqUfckJ0G86alYTnxne9Cz9ahlaG3IS8chLrv%2BcsbHPboG2ncC7W3nrlB1ePTuVvBx3D1BDVBMzZfUNIRWVCU%2F7cpgt5TaB06ebk1cpiwFwNfv3v6g1PMnvH3qJT82Z71fNuSYx%2FpoLfOJ4sAEAr0Jf4ORdi1tDFd9TCos%2BXMBjqkAfrSsr6%2BjwsORLK2enGJXwPNVR2179g4EwGOvnFoNCNEE8Bm2bjPRV0WRiHILOctQFsuep36gO1SBnTNB%2Fi%2F8%2BZ05PtthYHwsbjVXDjB0751wbUrwHb%2BFSAhlFgkiNzXLNf4A1PixswqtY9OPjVSRncFAvOVK461PR6Hf6sRYG3UciizRu7f9xyFAHZS1gf%2F6IpSo0oaFkmTWoPFlmZY%2FNu3uD6l&X-Amz-Signature=1ce13abe0821962b3f37a1cccaaaf48bd3d0031058c5182efc36b66b74993e27&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UINZMBWW%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083022Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTVYD4j8oPywP%2FlKDfXW8Ykf5at8FMVG5sajRxDXKn0gIgWuogPrg3%2FeAAjC7o%2Bc25Yj46uI357FTwwC3kpSfmAa4qiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOAPN5VLOf%2BCmSG6myrcAx3BEhq58gbCxlEGZHAwj8qp29NTymtvH4BCXrCK6c6fJHELQf8OksHLWjk7qsXecVsawFhMa%2BZnWyoAhNVuHese6aUfajZ0gcasC8mWqkYwWw32Gd6SPlfiDV7fLyw%2BUHAFuMAQ3siuTz8bfam%2BrByPB%2BJQbuC9%2BUqPxCgl9%2BfdHQyltIn1clEAANH0mVZeh7X1pF%2BMGf4YQJACCssxzK%2BPp%2BRKq1mjnw0V04MiajFRQh2N3CAojfik6fcN7092MpYiN4CJR3whh9kB%2F8dhmdgFftIzgnqp4rQbPylYZXNpD1BJDduVyUsOjRaf%2FrkHuH7Uu8TgbBgyPCfEhWS9DtsSiBMDpUn3PYB6BAJ2d7FaC6xSYH7CazZmn%2FS3hsjcbVjIryfCRvhiuljLp36fbxNPIW6aDjXepjNLkTy%2FR9HwP2WsO1Cc3vBt1jt2sO7osad6O6%2BCrM3CTUEiQ6qJVWG1VA7KKGw00h%2FT3kUNv0CN%2FPbI7NmhF9VAyJjjKFX%2BQgTZafqnGJdNYNoCjEwGLDInBwhtstZEsm%2BnHVsLBtUIFCUUBlvga3DvZX7J79Sfy6%2Ba7L2vfnnf5pA1W%2BcI1CHn3Zwfdet7K7qV8iXFGKJpHnNmfe8ECZ%2FxhTCjMPGz5cwGOqUB%2FnbAA81GrR2%2FbN9e2Py4yk079qf1ovCJOTgPULpXvuGZK1J%2Feug7f8mKzoBuvr8CfPm1Y4692r%2Fx46LHoOdcMrDReXBYRsWq5RcYYMdbeQ%2BRJQc2XrQyIIsk8scrMTzIGEMqJ7m%2Bd0vFBW7%2FxBXAejEAH9RGbb8jtBrrhQW76jbtlzQfiHr6DpEOUMCkN21HADPVzrDCLmzRXOwb0Wkm9%2B11ti5H&X-Amz-Signature=48ce61c7751d2fdcbae7c922aad3f38d93ecb4b2147172e8dfaaaf6e6727c2fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UINZMBWW%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083022Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTVYD4j8oPywP%2FlKDfXW8Ykf5at8FMVG5sajRxDXKn0gIgWuogPrg3%2FeAAjC7o%2Bc25Yj46uI357FTwwC3kpSfmAa4qiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOAPN5VLOf%2BCmSG6myrcAx3BEhq58gbCxlEGZHAwj8qp29NTymtvH4BCXrCK6c6fJHELQf8OksHLWjk7qsXecVsawFhMa%2BZnWyoAhNVuHese6aUfajZ0gcasC8mWqkYwWw32Gd6SPlfiDV7fLyw%2BUHAFuMAQ3siuTz8bfam%2BrByPB%2BJQbuC9%2BUqPxCgl9%2BfdHQyltIn1clEAANH0mVZeh7X1pF%2BMGf4YQJACCssxzK%2BPp%2BRKq1mjnw0V04MiajFRQh2N3CAojfik6fcN7092MpYiN4CJR3whh9kB%2F8dhmdgFftIzgnqp4rQbPylYZXNpD1BJDduVyUsOjRaf%2FrkHuH7Uu8TgbBgyPCfEhWS9DtsSiBMDpUn3PYB6BAJ2d7FaC6xSYH7CazZmn%2FS3hsjcbVjIryfCRvhiuljLp36fbxNPIW6aDjXepjNLkTy%2FR9HwP2WsO1Cc3vBt1jt2sO7osad6O6%2BCrM3CTUEiQ6qJVWG1VA7KKGw00h%2FT3kUNv0CN%2FPbI7NmhF9VAyJjjKFX%2BQgTZafqnGJdNYNoCjEwGLDInBwhtstZEsm%2BnHVsLBtUIFCUUBlvga3DvZX7J79Sfy6%2Ba7L2vfnnf5pA1W%2BcI1CHn3Zwfdet7K7qV8iXFGKJpHnNmfe8ECZ%2FxhTCjMPGz5cwGOqUB%2FnbAA81GrR2%2FbN9e2Py4yk079qf1ovCJOTgPULpXvuGZK1J%2Feug7f8mKzoBuvr8CfPm1Y4692r%2Fx46LHoOdcMrDReXBYRsWq5RcYYMdbeQ%2BRJQc2XrQyIIsk8scrMTzIGEMqJ7m%2Bd0vFBW7%2FxBXAejEAH9RGbb8jtBrrhQW76jbtlzQfiHr6DpEOUMCkN21HADPVzrDCLmzRXOwb0Wkm9%2B11ti5H&X-Amz-Signature=9b41df630021744ffde4152b270ab91137f5ec6beec855391b416bd5f7f01abf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UINZMBWW%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083022Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTVYD4j8oPywP%2FlKDfXW8Ykf5at8FMVG5sajRxDXKn0gIgWuogPrg3%2FeAAjC7o%2Bc25Yj46uI357FTwwC3kpSfmAa4qiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOAPN5VLOf%2BCmSG6myrcAx3BEhq58gbCxlEGZHAwj8qp29NTymtvH4BCXrCK6c6fJHELQf8OksHLWjk7qsXecVsawFhMa%2BZnWyoAhNVuHese6aUfajZ0gcasC8mWqkYwWw32Gd6SPlfiDV7fLyw%2BUHAFuMAQ3siuTz8bfam%2BrByPB%2BJQbuC9%2BUqPxCgl9%2BfdHQyltIn1clEAANH0mVZeh7X1pF%2BMGf4YQJACCssxzK%2BPp%2BRKq1mjnw0V04MiajFRQh2N3CAojfik6fcN7092MpYiN4CJR3whh9kB%2F8dhmdgFftIzgnqp4rQbPylYZXNpD1BJDduVyUsOjRaf%2FrkHuH7Uu8TgbBgyPCfEhWS9DtsSiBMDpUn3PYB6BAJ2d7FaC6xSYH7CazZmn%2FS3hsjcbVjIryfCRvhiuljLp36fbxNPIW6aDjXepjNLkTy%2FR9HwP2WsO1Cc3vBt1jt2sO7osad6O6%2BCrM3CTUEiQ6qJVWG1VA7KKGw00h%2FT3kUNv0CN%2FPbI7NmhF9VAyJjjKFX%2BQgTZafqnGJdNYNoCjEwGLDInBwhtstZEsm%2BnHVsLBtUIFCUUBlvga3DvZX7J79Sfy6%2Ba7L2vfnnf5pA1W%2BcI1CHn3Zwfdet7K7qV8iXFGKJpHnNmfe8ECZ%2FxhTCjMPGz5cwGOqUB%2FnbAA81GrR2%2FbN9e2Py4yk079qf1ovCJOTgPULpXvuGZK1J%2Feug7f8mKzoBuvr8CfPm1Y4692r%2Fx46LHoOdcMrDReXBYRsWq5RcYYMdbeQ%2BRJQc2XrQyIIsk8scrMTzIGEMqJ7m%2Bd0vFBW7%2FxBXAejEAH9RGbb8jtBrrhQW76jbtlzQfiHr6DpEOUMCkN21HADPVzrDCLmzRXOwb0Wkm9%2B11ti5H&X-Amz-Signature=75c472c43fcd220386e581ab3ef141ae57273f3a3f4c689fb44cb529e52465ad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UINZMBWW%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083022Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDTVYD4j8oPywP%2FlKDfXW8Ykf5at8FMVG5sajRxDXKn0gIgWuogPrg3%2FeAAjC7o%2Bc25Yj46uI357FTwwC3kpSfmAa4qiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOAPN5VLOf%2BCmSG6myrcAx3BEhq58gbCxlEGZHAwj8qp29NTymtvH4BCXrCK6c6fJHELQf8OksHLWjk7qsXecVsawFhMa%2BZnWyoAhNVuHese6aUfajZ0gcasC8mWqkYwWw32Gd6SPlfiDV7fLyw%2BUHAFuMAQ3siuTz8bfam%2BrByPB%2BJQbuC9%2BUqPxCgl9%2BfdHQyltIn1clEAANH0mVZeh7X1pF%2BMGf4YQJACCssxzK%2BPp%2BRKq1mjnw0V04MiajFRQh2N3CAojfik6fcN7092MpYiN4CJR3whh9kB%2F8dhmdgFftIzgnqp4rQbPylYZXNpD1BJDduVyUsOjRaf%2FrkHuH7Uu8TgbBgyPCfEhWS9DtsSiBMDpUn3PYB6BAJ2d7FaC6xSYH7CazZmn%2FS3hsjcbVjIryfCRvhiuljLp36fbxNPIW6aDjXepjNLkTy%2FR9HwP2WsO1Cc3vBt1jt2sO7osad6O6%2BCrM3CTUEiQ6qJVWG1VA7KKGw00h%2FT3kUNv0CN%2FPbI7NmhF9VAyJjjKFX%2BQgTZafqnGJdNYNoCjEwGLDInBwhtstZEsm%2BnHVsLBtUIFCUUBlvga3DvZX7J79Sfy6%2Ba7L2vfnnf5pA1W%2BcI1CHn3Zwfdet7K7qV8iXFGKJpHnNmfe8ECZ%2FxhTCjMPGz5cwGOqUB%2FnbAA81GrR2%2FbN9e2Py4yk079qf1ovCJOTgPULpXvuGZK1J%2Feug7f8mKzoBuvr8CfPm1Y4692r%2Fx46LHoOdcMrDReXBYRsWq5RcYYMdbeQ%2BRJQc2XrQyIIsk8scrMTzIGEMqJ7m%2Bd0vFBW7%2FxBXAejEAH9RGbb8jtBrrhQW76jbtlzQfiHr6DpEOUMCkN21HADPVzrDCLmzRXOwb0Wkm9%2B11ti5H&X-Amz-Signature=2245dd2a6d2fce8c1695e2fc62fb70fc865ac7a4336af81dbceaec502451c794&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663I33RWU2%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083022Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDXOTvzMDkYraJRwyTHUwahiHTobcmgia4ZyJhNaubraAIgSagmOYz1%2Bw1B7mPrn2aTFTJ8bh4OF6b4ao%2BCrd%2BD4%2B8qiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDD%2FZpLDxeYcXGFkaMircA3Wg7EI6qtsSyE6MZg8g17uqOoWg87NB5MpfUZAboY6Mwq5Kk9RYqsS6YGVFUYM99n%2BkV1t6ARwYVUT9%2B8S5MJJVKoXapuDYyqQMnKZmZkUOc9siWQZkUj%2B7Xha3ByAGbNFnJEswSLci5wGLVjdiK5rS5kyntC%2FFsd7z%2BBQdQxb6%2Bq1GzUMMJokEnKH%2Fq3XsPyORkJTDr%2BAzbr%2BreRjIQy43p9iFKXOWIF1B1FLw9HAeKVSNkUZ%2Feu%2F94XoN%2FnnUcUG8pqytgn5K1NKi0JrA41eZqUqwwPhp4vLTUZEyRQKSHoI54mFF4%2BZ9NTcVe7TPCju1I4%2FPtfkaYu7JO97WwmiPpKIM66hb6AtwWxOMQaYZoUdi%2Bn8eZXjDN28UtZJYLLy442kRV3ibAMWBsGW96nqA34%2B7PGluaqwTeQi2QKpCha6brCJS13waXS5ldopFi1suMACOZr1qDwLbQmD4sbF858ebX6fBWciGVCR6Q744FojSjBsQl7a0TS9hWH%2BqQjZ9%2BZmVzXiKmjP%2BZ2nIcFlm2uGUVRR6888r1r0UvipT8nTSdCR1N9R9KJ2hsk3V%2FmnDzT4IYtc5O%2F9nFuWE8oX8GSg0GCGM3KIorKNvTahS9XzBHhJm95kXmG7UMOez5cwGOqUBx4EUYwysM2UWv%2FZK1hUtN0zTbiL4xZ1eb3RfwMDKsdmal3WwI%2BGf0J1Kshg7z9enUAS%2B1Za3tjnOd9FouBvz6lBZl5N%2BMGjwZJeulHn2NCl8Ex3aH5c31wI0RXwKK9Z4xxcwML0k%2FTegraf6MQgfvL5lUXg3FWWb%2FV6E%2Bn1cpJ4%2FfYblSk9EL7YLi1JSGUwD01H8pzNejcjne1WNxMOXJr02Usbb&X-Amz-Signature=34089033334278e4076da940070a647ebf05e486bb0a12938a3c11117c24667b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46637RLI6KZ%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083024Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBDrAFlFqW%2BkEOKoB7IbM%2BeiOt7albq3yrd31VdbfLKaAiEAnqHPjzDHC6b3trmmGEFXS97hHxILAMKe1d8bLdCtfiIqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBVHFR%2FXcVZC4h%2BzDyrcAwg6iB1T8vUHyP4e4HshZACMxoJT3yLMmkUEk%2FH0jAwl6SBZXcumIMUwSuGcvcxrzPYt%2B%2FSclYJRp%2FebJe%2FkMnKNnJyz47imbAa2pfh6277d%2FL25e52pgBumiysC9r7c7EI0RfOzOFe3fk7IdjTVgoj%2BDT%2BjjTenO03ehyjSjbzeeDXSYOOCt1x17qqLg95wkaiZYB1P4ZnewdwoH%2FUAbXWEtPNcFuXv7oEYpJI2sQunsNEbSfHVOZcQiMrN4Hfq1aLj8owschGUPjnUbKbh2FpxanVledyCAUhIML0QuQQMm%2FeBzfTaY6XEucT5vNDrgdPg8wrfUQjRmSv%2F%2F%2Fdb2Ez5uJkYGxxzfJgiV3u9bgnnw6Rc9Z7VoyFyscm%2BZ%2FGz7cqB%2FVhx3HD2HcwIwOiTHKbQMJlCIxO0b0LJvB%2BPw%2FS7Oe3XrTVZjWctNRvsREKf8exVLV89o%2BqGvfJaYHqb4vUgZlK5BCU5Z%2BSdL5sj%2FKAMmOAu%2BnfnQNgn89QPItltIFtAKyYSj8cabpPMgDHfhznfxk6g4rOBN721BkE49EVDDjrQAegHez8MJboYKR7nuW13tDxRV3ugfsxst5ABKYtDu90heQeMWbzjtNgq1yX2Bkzet7mjpA3pMoaXMP2z5cwGOqUB4kJ%2FzO98%2BSK6fQrBOcymyfR%2FUVjY4ThmwWtSFIeX1XmxpLwsWe4XJgvPFeC%2Bgrv7YFsJxusC7iCTvlo2jZA6%2FHMOEhWr90VSZkZhilyxrJ%2B7E%2FoaHEMgEpmY7RAKNlXEx9xfsFx55H9Y%2B8N3cRQO0DEblXdaDXF9fUyt%2BmlIwrWjPmhWEgmvh6bDOA4wRuGbzcAzaJ5pl7E8fyXvOJH2TUw02%2Fhv&X-Amz-Signature=2e963927228dff1b05727265c50eb3b2c9bd0e3f0e72550836a627f08d9d0fa0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46637RLI6KZ%2F20260221%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260221T083024Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBDrAFlFqW%2BkEOKoB7IbM%2BeiOt7albq3yrd31VdbfLKaAiEAnqHPjzDHC6b3trmmGEFXS97hHxILAMKe1d8bLdCtfiIqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBVHFR%2FXcVZC4h%2BzDyrcAwg6iB1T8vUHyP4e4HshZACMxoJT3yLMmkUEk%2FH0jAwl6SBZXcumIMUwSuGcvcxrzPYt%2B%2FSclYJRp%2FebJe%2FkMnKNnJyz47imbAa2pfh6277d%2FL25e52pgBumiysC9r7c7EI0RfOzOFe3fk7IdjTVgoj%2BDT%2BjjTenO03ehyjSjbzeeDXSYOOCt1x17qqLg95wkaiZYB1P4ZnewdwoH%2FUAbXWEtPNcFuXv7oEYpJI2sQunsNEbSfHVOZcQiMrN4Hfq1aLj8owschGUPjnUbKbh2FpxanVledyCAUhIML0QuQQMm%2FeBzfTaY6XEucT5vNDrgdPg8wrfUQjRmSv%2F%2F%2Fdb2Ez5uJkYGxxzfJgiV3u9bgnnw6Rc9Z7VoyFyscm%2BZ%2FGz7cqB%2FVhx3HD2HcwIwOiTHKbQMJlCIxO0b0LJvB%2BPw%2FS7Oe3XrTVZjWctNRvsREKf8exVLV89o%2BqGvfJaYHqb4vUgZlK5BCU5Z%2BSdL5sj%2FKAMmOAu%2BnfnQNgn89QPItltIFtAKyYSj8cabpPMgDHfhznfxk6g4rOBN721BkE49EVDDjrQAegHez8MJboYKR7nuW13tDxRV3ugfsxst5ABKYtDu90heQeMWbzjtNgq1yX2Bkzet7mjpA3pMoaXMP2z5cwGOqUB4kJ%2FzO98%2BSK6fQrBOcymyfR%2FUVjY4ThmwWtSFIeX1XmxpLwsWe4XJgvPFeC%2Bgrv7YFsJxusC7iCTvlo2jZA6%2FHMOEhWr90VSZkZhilyxrJ%2B7E%2FoaHEMgEpmY7RAKNlXEx9xfsFx55H9Y%2B8N3cRQO0DEblXdaDXF9fUyt%2BmlIwrWjPmhWEgmvh6bDOA4wRuGbzcAzaJ5pl7E8fyXvOJH2TUw02%2Fhv&X-Amz-Signature=e5d2d44433dc771fa92428dc2b4b89befdac0482804f4867f841eae2e4344161&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
