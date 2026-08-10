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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SE2YLECF%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHHvnP1mmGs%2F7IAahnS2o1VmZiDjFIK5un7rJnwpWYRIAiEAjuojIhruFS09uMKX3ijViXCOQ4euIhd6hK4DjpjGwAYqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA2lhRJvS6aypyHSCyrcA82%2F4trMydFj6nBpua5HXLfToSUwCfuWtLrnrseh7HR42eQfLadeGM5Ytv8fTDFo184ev5k1vHQneJsPmHUaRzHah74mIBGUAibOip2%2F2oS9BE33BTt6P7gofYCnIsuDa0LKyv3doQVtnVecphFCfMrECZG46mrLmrOnmUZaTtfOMxhNnNPAW08upGHZnSXnLIgUtOb1kTv87lZU3jprPrU2vRI3ctLCqhNZEtq44dNtSWqIJCQ9vByis34WsRQAtv1Bomq4na6IpWtvmoT21AAXE1M1b4NcMLOgid6V5RHRaSuHHNIdEteQmgfo0jr%2B0%2B4ZfGs5%2FR47j9i89Wdz2h5qXdlyd8adRrNU2fdTIl61q2qyykczUrQF3ZtbzD6HrRfcsPuENCqeQbrk0Yx0BCRxItnULr6jl%2FTvBn%2FJTawVUI1NEsmr%2FLdCRG90YF57MCA1q%2BwjHH5TxGzfpIPePPudpzcBZXrlOJ%2F9RxBp5uYNUDZw4VWUvza3XRpdE5jWhqKX4TxCq%2F11v6o0pCDqqMf7aIOpbNNeteAGSh0HjJmlRpeohcTB8XMVQiayxXRr%2BqnlrzCm%2FtbMT9f3qaTPyGlPiJl%2BrWYPpiKIYXn%2Fnpj6b1tdrxpuSo1I9u9OMNWA5tMGOqUBAjvM09pIalE5WyKySIjVptYehlCKOc4FiVeDYDVWKr%2Fb8W6Oomjd7vzMoLmuyBOX%2FY%2FM99ui6at%2F43cGVw%2FWRFA1MTTfiJnI7Ozoy%2B1qGRORUBNShcvkVWgGsHGLEf5XrjiG%2FiJKKPO1yFzdj%2B4rtBrBS8cJHQ%2FbXaqSfvSP5lY927xkccFE90IjaRgBmqToqzgVTHTzVvjUDgWORMBb%2FIsMLZ2b&X-Amz-Signature=7fb7649c1e6a89ac99868ca79e834e4fbf1c767e7156c9886e149b8b4d81af40&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SE2YLECF%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHHvnP1mmGs%2F7IAahnS2o1VmZiDjFIK5un7rJnwpWYRIAiEAjuojIhruFS09uMKX3ijViXCOQ4euIhd6hK4DjpjGwAYqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA2lhRJvS6aypyHSCyrcA82%2F4trMydFj6nBpua5HXLfToSUwCfuWtLrnrseh7HR42eQfLadeGM5Ytv8fTDFo184ev5k1vHQneJsPmHUaRzHah74mIBGUAibOip2%2F2oS9BE33BTt6P7gofYCnIsuDa0LKyv3doQVtnVecphFCfMrECZG46mrLmrOnmUZaTtfOMxhNnNPAW08upGHZnSXnLIgUtOb1kTv87lZU3jprPrU2vRI3ctLCqhNZEtq44dNtSWqIJCQ9vByis34WsRQAtv1Bomq4na6IpWtvmoT21AAXE1M1b4NcMLOgid6V5RHRaSuHHNIdEteQmgfo0jr%2B0%2B4ZfGs5%2FR47j9i89Wdz2h5qXdlyd8adRrNU2fdTIl61q2qyykczUrQF3ZtbzD6HrRfcsPuENCqeQbrk0Yx0BCRxItnULr6jl%2FTvBn%2FJTawVUI1NEsmr%2FLdCRG90YF57MCA1q%2BwjHH5TxGzfpIPePPudpzcBZXrlOJ%2F9RxBp5uYNUDZw4VWUvza3XRpdE5jWhqKX4TxCq%2F11v6o0pCDqqMf7aIOpbNNeteAGSh0HjJmlRpeohcTB8XMVQiayxXRr%2BqnlrzCm%2FtbMT9f3qaTPyGlPiJl%2BrWYPpiKIYXn%2Fnpj6b1tdrxpuSo1I9u9OMNWA5tMGOqUBAjvM09pIalE5WyKySIjVptYehlCKOc4FiVeDYDVWKr%2Fb8W6Oomjd7vzMoLmuyBOX%2FY%2FM99ui6at%2F43cGVw%2FWRFA1MTTfiJnI7Ozoy%2B1qGRORUBNShcvkVWgGsHGLEf5XrjiG%2FiJKKPO1yFzdj%2B4rtBrBS8cJHQ%2FbXaqSfvSP5lY927xkccFE90IjaRgBmqToqzgVTHTzVvjUDgWORMBb%2FIsMLZ2b&X-Amz-Signature=be687c909975fdab0d251d30e71ece22cac3083030c48c08a46f5c90cc4f6ebb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SE2YLECF%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHHvnP1mmGs%2F7IAahnS2o1VmZiDjFIK5un7rJnwpWYRIAiEAjuojIhruFS09uMKX3ijViXCOQ4euIhd6hK4DjpjGwAYqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA2lhRJvS6aypyHSCyrcA82%2F4trMydFj6nBpua5HXLfToSUwCfuWtLrnrseh7HR42eQfLadeGM5Ytv8fTDFo184ev5k1vHQneJsPmHUaRzHah74mIBGUAibOip2%2F2oS9BE33BTt6P7gofYCnIsuDa0LKyv3doQVtnVecphFCfMrECZG46mrLmrOnmUZaTtfOMxhNnNPAW08upGHZnSXnLIgUtOb1kTv87lZU3jprPrU2vRI3ctLCqhNZEtq44dNtSWqIJCQ9vByis34WsRQAtv1Bomq4na6IpWtvmoT21AAXE1M1b4NcMLOgid6V5RHRaSuHHNIdEteQmgfo0jr%2B0%2B4ZfGs5%2FR47j9i89Wdz2h5qXdlyd8adRrNU2fdTIl61q2qyykczUrQF3ZtbzD6HrRfcsPuENCqeQbrk0Yx0BCRxItnULr6jl%2FTvBn%2FJTawVUI1NEsmr%2FLdCRG90YF57MCA1q%2BwjHH5TxGzfpIPePPudpzcBZXrlOJ%2F9RxBp5uYNUDZw4VWUvza3XRpdE5jWhqKX4TxCq%2F11v6o0pCDqqMf7aIOpbNNeteAGSh0HjJmlRpeohcTB8XMVQiayxXRr%2BqnlrzCm%2FtbMT9f3qaTPyGlPiJl%2BrWYPpiKIYXn%2Fnpj6b1tdrxpuSo1I9u9OMNWA5tMGOqUBAjvM09pIalE5WyKySIjVptYehlCKOc4FiVeDYDVWKr%2Fb8W6Oomjd7vzMoLmuyBOX%2FY%2FM99ui6at%2F43cGVw%2FWRFA1MTTfiJnI7Ozoy%2B1qGRORUBNShcvkVWgGsHGLEf5XrjiG%2FiJKKPO1yFzdj%2B4rtBrBS8cJHQ%2FbXaqSfvSP5lY927xkccFE90IjaRgBmqToqzgVTHTzVvjUDgWORMBb%2FIsMLZ2b&X-Amz-Signature=819f754ef20f2273322d6d49691fb68d1bc4eba40ccc40c056fe2ac94809de39&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PZZCEOU%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC2Uj%2Fsb0%2BC4G080jnitLXerPcMbMDNlHDtw4H8SflwkAIgEOvl8CdxiWRGn7jVsgCIMMu%2BU5aJp%2FrLZt5qS5JqsVoqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC5h20JdoxHv3%2B8PaSrcAxbnG62nAuYWqKZvsTqBeLwM3np%2B3UlzeRCox89ndxC9C963qkG1r4f%2Fd6EW%2FhIA2gBq%2FfsEfcJxgY1YxLzmRs%2F8CjFLa3JVcuYSGdF3keNsXyVLcpQfF%2FRFFpZ3Hn%2BHZBx%2BXrcQoEMqiSvTex3BndHSLfZMM%2BRjes8Y4h8j54dn6u2CiQK7iqTmckot5tUD0uOpIvBlSL4u3HVyqHDng%2FTrxzh6CYqD4qQGAkfCxGOBtoBhoqd9FtD3BRrFfvzGqvcaPNQoKIPOlE07bqs9Ab11vVAa0I0yxUrIy0wjwXHXxRmI1z7WwWeBSLJwRMbPnzXoffH50mOC9CEKFTwuqOeRxrbaYrenx2oCrlCNfgbQ5HnVNyzyCdOP5rNVtV2GFJTi8H5KfoT3Kfbuh4kyDuElQyBduBmztXKem0zIAVEZiEh5qiKMLyyUTDhViH0HljU6JSDL1ubZ0VeapiS7ux3WvxH%2Bb67sAgIA4z15k%2F6JcNbGCSFhEpqZSE4inUeoPbW2FagT7DVvWO0rkqAfeJZuFqFEf%2FKp51762smGj0vBtfLYPEZzhKTTXUDnn3RdGXAKxAb80P9XfslzA%2BSwStPhCCFUHtYu5qfaKOCqZHC545SuXZXGPaB7EZkLMKGB5tMGOqUBjOhKFMbCWGYVPaTKX959L5oM%2Fvq65SUJIOcQ%2FE3%2Fm%2BTged8xQM2q87lqjQWcT2tiGABlexICouexrDCxcfYlmNcOYtUtnnazpzCE%2BdNKU%2BSAUMezqxoTtycVoUyPhC3CsX2whIT5arXGQxz7IxjrMGaYow7%2FQNkB6BACtVP1Epm%2BAEQ%2F0kBUg6bxkIsqr0n2T%2BZaBhRRFwcdTGuzRrMxJ6dmU%2FBA&X-Amz-Signature=0f312e512bb65a8533a1bb8f3b08a60afe73673cb9faa43ae64ad1396f23ac52&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PZZCEOU%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC2Uj%2Fsb0%2BC4G080jnitLXerPcMbMDNlHDtw4H8SflwkAIgEOvl8CdxiWRGn7jVsgCIMMu%2BU5aJp%2FrLZt5qS5JqsVoqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC5h20JdoxHv3%2B8PaSrcAxbnG62nAuYWqKZvsTqBeLwM3np%2B3UlzeRCox89ndxC9C963qkG1r4f%2Fd6EW%2FhIA2gBq%2FfsEfcJxgY1YxLzmRs%2F8CjFLa3JVcuYSGdF3keNsXyVLcpQfF%2FRFFpZ3Hn%2BHZBx%2BXrcQoEMqiSvTex3BndHSLfZMM%2BRjes8Y4h8j54dn6u2CiQK7iqTmckot5tUD0uOpIvBlSL4u3HVyqHDng%2FTrxzh6CYqD4qQGAkfCxGOBtoBhoqd9FtD3BRrFfvzGqvcaPNQoKIPOlE07bqs9Ab11vVAa0I0yxUrIy0wjwXHXxRmI1z7WwWeBSLJwRMbPnzXoffH50mOC9CEKFTwuqOeRxrbaYrenx2oCrlCNfgbQ5HnVNyzyCdOP5rNVtV2GFJTi8H5KfoT3Kfbuh4kyDuElQyBduBmztXKem0zIAVEZiEh5qiKMLyyUTDhViH0HljU6JSDL1ubZ0VeapiS7ux3WvxH%2Bb67sAgIA4z15k%2F6JcNbGCSFhEpqZSE4inUeoPbW2FagT7DVvWO0rkqAfeJZuFqFEf%2FKp51762smGj0vBtfLYPEZzhKTTXUDnn3RdGXAKxAb80P9XfslzA%2BSwStPhCCFUHtYu5qfaKOCqZHC545SuXZXGPaB7EZkLMKGB5tMGOqUBjOhKFMbCWGYVPaTKX959L5oM%2Fvq65SUJIOcQ%2FE3%2Fm%2BTged8xQM2q87lqjQWcT2tiGABlexICouexrDCxcfYlmNcOYtUtnnazpzCE%2BdNKU%2BSAUMezqxoTtycVoUyPhC3CsX2whIT5arXGQxz7IxjrMGaYow7%2FQNkB6BACtVP1Epm%2BAEQ%2F0kBUg6bxkIsqr0n2T%2BZaBhRRFwcdTGuzRrMxJ6dmU%2FBA&X-Amz-Signature=a177ab95edea3d323099dc8cbe730280b4c33f0f1c97700632e9d633c1e6a56d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PZZCEOU%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC2Uj%2Fsb0%2BC4G080jnitLXerPcMbMDNlHDtw4H8SflwkAIgEOvl8CdxiWRGn7jVsgCIMMu%2BU5aJp%2FrLZt5qS5JqsVoqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC5h20JdoxHv3%2B8PaSrcAxbnG62nAuYWqKZvsTqBeLwM3np%2B3UlzeRCox89ndxC9C963qkG1r4f%2Fd6EW%2FhIA2gBq%2FfsEfcJxgY1YxLzmRs%2F8CjFLa3JVcuYSGdF3keNsXyVLcpQfF%2FRFFpZ3Hn%2BHZBx%2BXrcQoEMqiSvTex3BndHSLfZMM%2BRjes8Y4h8j54dn6u2CiQK7iqTmckot5tUD0uOpIvBlSL4u3HVyqHDng%2FTrxzh6CYqD4qQGAkfCxGOBtoBhoqd9FtD3BRrFfvzGqvcaPNQoKIPOlE07bqs9Ab11vVAa0I0yxUrIy0wjwXHXxRmI1z7WwWeBSLJwRMbPnzXoffH50mOC9CEKFTwuqOeRxrbaYrenx2oCrlCNfgbQ5HnVNyzyCdOP5rNVtV2GFJTi8H5KfoT3Kfbuh4kyDuElQyBduBmztXKem0zIAVEZiEh5qiKMLyyUTDhViH0HljU6JSDL1ubZ0VeapiS7ux3WvxH%2Bb67sAgIA4z15k%2F6JcNbGCSFhEpqZSE4inUeoPbW2FagT7DVvWO0rkqAfeJZuFqFEf%2FKp51762smGj0vBtfLYPEZzhKTTXUDnn3RdGXAKxAb80P9XfslzA%2BSwStPhCCFUHtYu5qfaKOCqZHC545SuXZXGPaB7EZkLMKGB5tMGOqUBjOhKFMbCWGYVPaTKX959L5oM%2Fvq65SUJIOcQ%2FE3%2Fm%2BTged8xQM2q87lqjQWcT2tiGABlexICouexrDCxcfYlmNcOYtUtnnazpzCE%2BdNKU%2BSAUMezqxoTtycVoUyPhC3CsX2whIT5arXGQxz7IxjrMGaYow7%2FQNkB6BACtVP1Epm%2BAEQ%2F0kBUg6bxkIsqr0n2T%2BZaBhRRFwcdTGuzRrMxJ6dmU%2FBA&X-Amz-Signature=9d0770fe64d55e600daac950907585e75ec1c005a54a4b62590135e8478eb92c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PZZCEOU%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091833Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC2Uj%2Fsb0%2BC4G080jnitLXerPcMbMDNlHDtw4H8SflwkAIgEOvl8CdxiWRGn7jVsgCIMMu%2BU5aJp%2FrLZt5qS5JqsVoqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC5h20JdoxHv3%2B8PaSrcAxbnG62nAuYWqKZvsTqBeLwM3np%2B3UlzeRCox89ndxC9C963qkG1r4f%2Fd6EW%2FhIA2gBq%2FfsEfcJxgY1YxLzmRs%2F8CjFLa3JVcuYSGdF3keNsXyVLcpQfF%2FRFFpZ3Hn%2BHZBx%2BXrcQoEMqiSvTex3BndHSLfZMM%2BRjes8Y4h8j54dn6u2CiQK7iqTmckot5tUD0uOpIvBlSL4u3HVyqHDng%2FTrxzh6CYqD4qQGAkfCxGOBtoBhoqd9FtD3BRrFfvzGqvcaPNQoKIPOlE07bqs9Ab11vVAa0I0yxUrIy0wjwXHXxRmI1z7WwWeBSLJwRMbPnzXoffH50mOC9CEKFTwuqOeRxrbaYrenx2oCrlCNfgbQ5HnVNyzyCdOP5rNVtV2GFJTi8H5KfoT3Kfbuh4kyDuElQyBduBmztXKem0zIAVEZiEh5qiKMLyyUTDhViH0HljU6JSDL1ubZ0VeapiS7ux3WvxH%2Bb67sAgIA4z15k%2F6JcNbGCSFhEpqZSE4inUeoPbW2FagT7DVvWO0rkqAfeJZuFqFEf%2FKp51762smGj0vBtfLYPEZzhKTTXUDnn3RdGXAKxAb80P9XfslzA%2BSwStPhCCFUHtYu5qfaKOCqZHC545SuXZXGPaB7EZkLMKGB5tMGOqUBjOhKFMbCWGYVPaTKX959L5oM%2Fvq65SUJIOcQ%2FE3%2Fm%2BTged8xQM2q87lqjQWcT2tiGABlexICouexrDCxcfYlmNcOYtUtnnazpzCE%2BdNKU%2BSAUMezqxoTtycVoUyPhC3CsX2whIT5arXGQxz7IxjrMGaYow7%2FQNkB6BACtVP1Epm%2BAEQ%2F0kBUg6bxkIsqr0n2T%2BZaBhRRFwcdTGuzRrMxJ6dmU%2FBA&X-Amz-Signature=c37bc43bc42890f189cd7dfbd9f1b136c7239b98db4518eba5da78f4b25b201e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YMPO46OW%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091834Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCJ5sYDEQ8xAA4%2BtYYdZWfkj4r1FIT19%2FpN%2FhBz10M0TwIhAJG1KDoqC%2BQZLVV4QDw3t6sKG3zwjx2nAUJdX2v4v4qGKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzFzXSUMfXHcz8Sg%2FQq3AMSz7B3bYfTXxOYpXb0PM5bSW8pbTLDoc%2FCTpqnMwQVy1iF5RiMqLUa%2F5ovrMAOt1xro9SeZv1a7xBwZ3luJeTroGJKFiHBg2nujeb3rXgQF5%2BVczKoxcpmvNWNbpl%2BDVr%2FUjxP2waJJE73lcaCpzNdYXpcmG7EYmXi4acDe4B3E%2F7NzvS5kCnelvMhPrsOPO9OAtkGNYL5LAiiM3TY7E49i2ObJFwskH6Yy%2BJW7qYHZUdJtB%2BViXJ5y3vS%2BqHm6Qi1nB6Sv5vEe5X24i3FQCJ4gw3Fjvj0XF7xf6WQNacaribmSsd%2BWwn7SL6JJaVW6sva8nndmpBPcwgP6dHN5MTkzyABZEksUb92EUS%2Fg%2FPnreRk6pEK9YgdDKU%2BckBeluL1pMfF4fBhyEVgt6lgm%2F6cAyMW6evO4im%2BbNRbP7jySu0sZIXHFbeJxSN53AVHwq7ZwWWQAFjAAygB6AAicbl1Xkbq0ro0Bh4XQZJkvRqP%2BJbkYxM5Nv%2FzI9hidSzC4ACg%2B0syLgew5pUQl6NUWMBtsqFyD4p%2BpU6GDCQhSOCQKSknNxLos0PbA8kcxJnKTodvz6nquJjj2b7yndm88CCl5F1BsJVvpaXMtn%2BiRbDBlstWtRqR4xebXz97rTDPkebTBjqkATpkXIRL3aIyw9DsUbBrHmcLC10P8hcxYmlgXoY8elBXS9Uqq5wQR4y4%2FZ3PDxd7BXyUy6M5Yig0PcNw6F7PZ%2Fi5duoM7P9EFUttn1b4TW0cCbJ11mPHL171B3dRCZq62EzzAuD6jpZDUaNcI%2BahoMt%2FED%2Fmdb3sN%2FTtd%2FOSgIruiRYDvpkRa7To1YZ%2BbVNvsYuBtStjCMc1YU3YfolsDCPIiSBr&X-Amz-Signature=5ca3cf6efc1bd5d9a2330eeb0365e9740d79971c7735d602449a8a9e053dd212&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RU5ST75L%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091834Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGXx93Q36kuTWuyukifygxZX5U088NITfiThNl%2Fp16wSAiABCPagD3MhWRAAiy2gLbGYXZPqrJu%2BgpiIvScj9q8e%2BCqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvjdBP%2FpqlHhSA9apKtwD7LDhXM6hxcwW0%2Bz0bLlXVAspBwcH5cUQCCoeOIiBEuF3MEPc5xhrC9OWDsypF4W%2F5RROd4EemG%2F32xdN6qut7hQq%2FCm14y99O%2Bae6ytH5O8Rpcz%2ByxnejZ9ygyF2Vv0XUMyGwrIalKTujkOT9MDd9eu2NtEwsHADidVTUVJjdD4%2FpVJmCbPvZeai65uuDQzj5OvO%2FzVDLSkrJmpMyc%2FGuXB91qGVbkOW8vrGqunNYSEMFKQjnJj4KFk5PRoQiuBkPKO3iDmmx79k%2BmXHHY4ZjNOd9cplrPWGCDGcM738EuOL9yrCSiyCd7UCFes21BOzOpng6sevvI9BSGJkTJsQYWPS1Sm1u1PLpgtLHcPxDguBrkDDM3eo0fKVfYzM6jCNk3CfuWFhG14qE1%2FMvPIiUUQX8EkjKRh4TEus14OH7hw6zo7YV95W5Dqc5t7D6Y3iyhAf4TJvdOVCzhG6cmWJH5ZrhGhA9ruMJd%2BzyM%2BciHgXsRAHg%2F7Cb5DAe2wLerRSRW27nTeAp2gZWrNz%2F3%2FTb5ks4EeLYZxdvFpVWm6CQTFGCp98YL9wQVhre2yK%2Fq3GYosoSBDl4W%2Fztl7C0iaItna9nnj6OWP29X6eiDn71Gss9IBjtOvZGdEsXaQw8v%2Fl0wY6pgFcEoOBY6HxltgAtG6GLY90ofwpxpL%2FDIuvQaF9C8iuqv2%2B32uQsriIIIRi0S9CgY5gmUJOhrBoeOOUB6YVfnrXPwUy7tujLUkTP4y4LeofjNrMuVXhhEHNxPAWK%2FJt2kCDjR3MeVi%2BtbxA6JEhXsxmj5FyCWj5MESR13Cepbzw%2B%2FZdXl2oww%2FybxCio%2BF0crp1mgDu%2FAzLKpSLxks1NT8Iy24rSquh&X-Amz-Signature=0552f347bb2b86ef34ef5439cd36379e8051bb732c91d13f01e5fc85788698ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RU5ST75L%2F20260810%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260810T091834Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGXx93Q36kuTWuyukifygxZX5U088NITfiThNl%2Fp16wSAiABCPagD3MhWRAAiy2gLbGYXZPqrJu%2BgpiIvScj9q8e%2BCqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvjdBP%2FpqlHhSA9apKtwD7LDhXM6hxcwW0%2Bz0bLlXVAspBwcH5cUQCCoeOIiBEuF3MEPc5xhrC9OWDsypF4W%2F5RROd4EemG%2F32xdN6qut7hQq%2FCm14y99O%2Bae6ytH5O8Rpcz%2ByxnejZ9ygyF2Vv0XUMyGwrIalKTujkOT9MDd9eu2NtEwsHADidVTUVJjdD4%2FpVJmCbPvZeai65uuDQzj5OvO%2FzVDLSkrJmpMyc%2FGuXB91qGVbkOW8vrGqunNYSEMFKQjnJj4KFk5PRoQiuBkPKO3iDmmx79k%2BmXHHY4ZjNOd9cplrPWGCDGcM738EuOL9yrCSiyCd7UCFes21BOzOpng6sevvI9BSGJkTJsQYWPS1Sm1u1PLpgtLHcPxDguBrkDDM3eo0fKVfYzM6jCNk3CfuWFhG14qE1%2FMvPIiUUQX8EkjKRh4TEus14OH7hw6zo7YV95W5Dqc5t7D6Y3iyhAf4TJvdOVCzhG6cmWJH5ZrhGhA9ruMJd%2BzyM%2BciHgXsRAHg%2F7Cb5DAe2wLerRSRW27nTeAp2gZWrNz%2F3%2FTb5ks4EeLYZxdvFpVWm6CQTFGCp98YL9wQVhre2yK%2Fq3GYosoSBDl4W%2Fztl7C0iaItna9nnj6OWP29X6eiDn71Gss9IBjtOvZGdEsXaQw8v%2Fl0wY6pgFcEoOBY6HxltgAtG6GLY90ofwpxpL%2FDIuvQaF9C8iuqv2%2B32uQsriIIIRi0S9CgY5gmUJOhrBoeOOUB6YVfnrXPwUy7tujLUkTP4y4LeofjNrMuVXhhEHNxPAWK%2FJt2kCDjR3MeVi%2BtbxA6JEhXsxmj5FyCWj5MESR13Cepbzw%2B%2FZdXl2oww%2FybxCio%2BF0crp1mgDu%2FAzLKpSLxks1NT8Iy24rSquh&X-Amz-Signature=78a6269e3d5c5d4fbee66fdfcdf933d6a70a7cba943c47b63fab3996aa37a20c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
