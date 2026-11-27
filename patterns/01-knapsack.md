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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSATCEY3%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCIBCS9EiHYu0jJw0bzIqvvFuqkPmhy02GBiwqhf1m9IFlAiBFPwgAF12M%2Blx%2BMpziujGpe3%2Fx3JsVl1lzm6GD1UY%2ByCqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMURr9hfOmKyhtNRO9KtwD66PfnxdmuvuwaHAiik0UhDHDCQMHdnDT6L%2B3lLnVMV1TXatQ93g%2F77dva%2BRVXEdpQNHXPXNI81GLf48hBOu8SRMk0tmVxGXW5TdaqSBt5mHNmiBt74HCgpVi2BJFSL2ejUGghrkgijxzWfewGDM5zmI1G13VyUqT%2B6uYZzsIB9PH6qwBulFrT1Ab44B4gzt%2BDGgvmAAwNHKSffarQ7asEvCzklgcMuSYc9W%2BRcUYKPBu%2B2DjA7japUsnpZb%2B%2F05J0YrH%2FRsZsEflQGCk3wwSh3UvoAbZLySUza%2F8bFU23gGlCHRDHr2Nizj14hACy9uzRzULRPq5TppBaK2r1DKCJlqCsxoIKqE5STNOzdXoNQvGc83rQNWw19wEamc3d%2FH%2BpkYY63e3wb4BoKSLpHUJM4yDJ9MPHkU2HKSglR7x3ZnxrIayVGoBPpI1%2F00VR7kepMcjOneXDtbgB0SIyCfugMP7fPHMjIrwoFSsEXplxhFXS1FLTNjtZIHk4aVSMQXZq6SGeJCAVcK7hAkkr7CtgiyG7M47nGx2yzlgsrFDCyrnlo0IB13FquMHwahbfA2Zu6Ytd4o%2FWXcQ5lbwSXlT6kR4FvVz8sFzBQQE%2BNQKH828lgF01C9yAKI6CDsw7p6m2AY6pgHwSNcR7hOeatOYhdmKAgZBkNGtlR0ULA19OpcZAYQ1%2BLHu8IUh0GkQpDk3%2Bjl1W08Og5RgoGymVQkLb43DwW2Qosx1tRGCQuknuQQYuHhxxenncF8ayCT%2Fp1zcwCWnBKi%2F7oWI%2BR8897TgIYEzsZ8w22hGwdUEdADfzYNtzA7xsqAb8Nn8bd%2BOvacXgbf%2FMmZqx6AcCcfoX1Ax5SOuYPU23NZQVVn9&X-Amz-Signature=ba1bfd189673e1bcf7d44971d30ef52663ed1c029beb59d0ced6dd5212006786&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSATCEY3%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCIBCS9EiHYu0jJw0bzIqvvFuqkPmhy02GBiwqhf1m9IFlAiBFPwgAF12M%2Blx%2BMpziujGpe3%2Fx3JsVl1lzm6GD1UY%2ByCqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMURr9hfOmKyhtNRO9KtwD66PfnxdmuvuwaHAiik0UhDHDCQMHdnDT6L%2B3lLnVMV1TXatQ93g%2F77dva%2BRVXEdpQNHXPXNI81GLf48hBOu8SRMk0tmVxGXW5TdaqSBt5mHNmiBt74HCgpVi2BJFSL2ejUGghrkgijxzWfewGDM5zmI1G13VyUqT%2B6uYZzsIB9PH6qwBulFrT1Ab44B4gzt%2BDGgvmAAwNHKSffarQ7asEvCzklgcMuSYc9W%2BRcUYKPBu%2B2DjA7japUsnpZb%2B%2F05J0YrH%2FRsZsEflQGCk3wwSh3UvoAbZLySUza%2F8bFU23gGlCHRDHr2Nizj14hACy9uzRzULRPq5TppBaK2r1DKCJlqCsxoIKqE5STNOzdXoNQvGc83rQNWw19wEamc3d%2FH%2BpkYY63e3wb4BoKSLpHUJM4yDJ9MPHkU2HKSglR7x3ZnxrIayVGoBPpI1%2F00VR7kepMcjOneXDtbgB0SIyCfugMP7fPHMjIrwoFSsEXplxhFXS1FLTNjtZIHk4aVSMQXZq6SGeJCAVcK7hAkkr7CtgiyG7M47nGx2yzlgsrFDCyrnlo0IB13FquMHwahbfA2Zu6Ytd4o%2FWXcQ5lbwSXlT6kR4FvVz8sFzBQQE%2BNQKH828lgF01C9yAKI6CDsw7p6m2AY6pgHwSNcR7hOeatOYhdmKAgZBkNGtlR0ULA19OpcZAYQ1%2BLHu8IUh0GkQpDk3%2Bjl1W08Og5RgoGymVQkLb43DwW2Qosx1tRGCQuknuQQYuHhxxenncF8ayCT%2Fp1zcwCWnBKi%2F7oWI%2BR8897TgIYEzsZ8w22hGwdUEdADfzYNtzA7xsqAb8Nn8bd%2BOvacXgbf%2FMmZqx6AcCcfoX1Ax5SOuYPU23NZQVVn9&X-Amz-Signature=0ad32b452267ff47d7ae2a6f3bbf7fc4d82bf3433672c89c21c3c7a8dcf01343&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSATCEY3%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCIBCS9EiHYu0jJw0bzIqvvFuqkPmhy02GBiwqhf1m9IFlAiBFPwgAF12M%2Blx%2BMpziujGpe3%2Fx3JsVl1lzm6GD1UY%2ByCqIBAjW%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMURr9hfOmKyhtNRO9KtwD66PfnxdmuvuwaHAiik0UhDHDCQMHdnDT6L%2B3lLnVMV1TXatQ93g%2F77dva%2BRVXEdpQNHXPXNI81GLf48hBOu8SRMk0tmVxGXW5TdaqSBt5mHNmiBt74HCgpVi2BJFSL2ejUGghrkgijxzWfewGDM5zmI1G13VyUqT%2B6uYZzsIB9PH6qwBulFrT1Ab44B4gzt%2BDGgvmAAwNHKSffarQ7asEvCzklgcMuSYc9W%2BRcUYKPBu%2B2DjA7japUsnpZb%2B%2F05J0YrH%2FRsZsEflQGCk3wwSh3UvoAbZLySUza%2F8bFU23gGlCHRDHr2Nizj14hACy9uzRzULRPq5TppBaK2r1DKCJlqCsxoIKqE5STNOzdXoNQvGc83rQNWw19wEamc3d%2FH%2BpkYY63e3wb4BoKSLpHUJM4yDJ9MPHkU2HKSglR7x3ZnxrIayVGoBPpI1%2F00VR7kepMcjOneXDtbgB0SIyCfugMP7fPHMjIrwoFSsEXplxhFXS1FLTNjtZIHk4aVSMQXZq6SGeJCAVcK7hAkkr7CtgiyG7M47nGx2yzlgsrFDCyrnlo0IB13FquMHwahbfA2Zu6Ytd4o%2FWXcQ5lbwSXlT6kR4FvVz8sFzBQQE%2BNQKH828lgF01C9yAKI6CDsw7p6m2AY6pgHwSNcR7hOeatOYhdmKAgZBkNGtlR0ULA19OpcZAYQ1%2BLHu8IUh0GkQpDk3%2Bjl1W08Og5RgoGymVQkLb43DwW2Qosx1tRGCQuknuQQYuHhxxenncF8ayCT%2Fp1zcwCWnBKi%2F7oWI%2BR8897TgIYEzsZ8w22hGwdUEdADfzYNtzA7xsqAb8Nn8bd%2BOvacXgbf%2FMmZqx6AcCcfoX1Ax5SOuYPU23NZQVVn9&X-Amz-Signature=9a790f7cb1f6bc5c5f7291e48a620eed5538b17ccb6ec702b2fd1217f189e0f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666PDZ7NL5%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCICwJwFPmYHtdRhe2tJq3Su8PxNilSko9eDYX1QsxsNMMAiAlsMjp0QmudPku9qVaYv4VsFO4UhbqU%2BtMYajQsp5gZCqIBAjX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCZQyl02kazZWsCNkKtwDyDJPbx7xGxVxB2jYwycj2IU5Mdj0IC%2BEGAZGkZ5O20yoXvViOxyFRQNFSP2w0RLfgPB4pZpQmKjEHTJEkxEPFZwNzahg%2Bcoo2qfUEeg7MpKQQ0irFYyMtY6JA%2BY4mXumDWrWzRrFSiABtcCgkWGgF9q8pwNeFDfHOJvE2ODDmvqsPfGsLEnMmreQYBFtcGknVWc4vWD7RjShfuv07U5Fwy3AWgnW5pJVkz5CcYiXmQh3nbzdaHc6ozH3B3OR9F2vlzVpWY70PXL%2BpQ0%2BuP5jfiTXB3%2FmUcdyPjZxqPB8DCMLGBCV%2Bm8%2F8kEYYW8PH4l5MRbNliOeKL9a37QeNrT%2BDj6iUqhaS01PcuDZIcD4cOZVKf07iG9BSkUyXSlXCOAhLMtFiLJT%2BnX8k8N1GAtopzW8uqKftuVlTeJ15DWnLo6EvPV6%2BXBu82TcAHmI2RVNYXc2r90f0I1XulvzYu%2FyGQ67jbIH%2FWZ41JnyM8wenT2Y4YSPi7bBvg%2F7eqerY8Yus5sQUM%2Faez1ljsijQSuPWcQ4up83VJw8Fd1TQSULEc4iaksUgw7P%2FXUcGj7oqDedFSh4bPBq1dudb23otNYfWzk%2FcbXATDlx9rOKPyKjhGCsKMap4fZYSXAbBR4wzp6m2AY6pgEtT7uTLSiHf4kXdP6Cvy2r1AD9wzgJeENiHX6TrOgaifRzP%2BkKAr22%2FpDReEidZ6dJbQnLpQl6lGjtPxFj%2FjssUPRNHvwXEzKR8WuR1rIdzCW9ZPUcb%2FzV0dNCEApIoGCLLEoceiRKV6zh%2BCjVC3Bl%2Ba4Pp80uLJt7q313OyVM%2F9Md%2F8iUJRoaMSZ2I6lebiZu65f8e2FkN7ae1ZIISIpD5dqSAW4w&X-Amz-Signature=0d08a8972703918eec753114315513d4bd181e4072c6613a7dcf44caf67a0984&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666PDZ7NL5%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCICwJwFPmYHtdRhe2tJq3Su8PxNilSko9eDYX1QsxsNMMAiAlsMjp0QmudPku9qVaYv4VsFO4UhbqU%2BtMYajQsp5gZCqIBAjX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCZQyl02kazZWsCNkKtwDyDJPbx7xGxVxB2jYwycj2IU5Mdj0IC%2BEGAZGkZ5O20yoXvViOxyFRQNFSP2w0RLfgPB4pZpQmKjEHTJEkxEPFZwNzahg%2Bcoo2qfUEeg7MpKQQ0irFYyMtY6JA%2BY4mXumDWrWzRrFSiABtcCgkWGgF9q8pwNeFDfHOJvE2ODDmvqsPfGsLEnMmreQYBFtcGknVWc4vWD7RjShfuv07U5Fwy3AWgnW5pJVkz5CcYiXmQh3nbzdaHc6ozH3B3OR9F2vlzVpWY70PXL%2BpQ0%2BuP5jfiTXB3%2FmUcdyPjZxqPB8DCMLGBCV%2Bm8%2F8kEYYW8PH4l5MRbNliOeKL9a37QeNrT%2BDj6iUqhaS01PcuDZIcD4cOZVKf07iG9BSkUyXSlXCOAhLMtFiLJT%2BnX8k8N1GAtopzW8uqKftuVlTeJ15DWnLo6EvPV6%2BXBu82TcAHmI2RVNYXc2r90f0I1XulvzYu%2FyGQ67jbIH%2FWZ41JnyM8wenT2Y4YSPi7bBvg%2F7eqerY8Yus5sQUM%2Faez1ljsijQSuPWcQ4up83VJw8Fd1TQSULEc4iaksUgw7P%2FXUcGj7oqDedFSh4bPBq1dudb23otNYfWzk%2FcbXATDlx9rOKPyKjhGCsKMap4fZYSXAbBR4wzp6m2AY6pgEtT7uTLSiHf4kXdP6Cvy2r1AD9wzgJeENiHX6TrOgaifRzP%2BkKAr22%2FpDReEidZ6dJbQnLpQl6lGjtPxFj%2FjssUPRNHvwXEzKR8WuR1rIdzCW9ZPUcb%2FzV0dNCEApIoGCLLEoceiRKV6zh%2BCjVC3Bl%2Ba4Pp80uLJt7q313OyVM%2F9Md%2F8iUJRoaMSZ2I6lebiZu65f8e2FkN7ae1ZIISIpD5dqSAW4w&X-Amz-Signature=70b12021af1390dc89d023f8cfc739f010f67ad1f67b1d63dd7f27bff535c5ac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666PDZ7NL5%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCICwJwFPmYHtdRhe2tJq3Su8PxNilSko9eDYX1QsxsNMMAiAlsMjp0QmudPku9qVaYv4VsFO4UhbqU%2BtMYajQsp5gZCqIBAjX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCZQyl02kazZWsCNkKtwDyDJPbx7xGxVxB2jYwycj2IU5Mdj0IC%2BEGAZGkZ5O20yoXvViOxyFRQNFSP2w0RLfgPB4pZpQmKjEHTJEkxEPFZwNzahg%2Bcoo2qfUEeg7MpKQQ0irFYyMtY6JA%2BY4mXumDWrWzRrFSiABtcCgkWGgF9q8pwNeFDfHOJvE2ODDmvqsPfGsLEnMmreQYBFtcGknVWc4vWD7RjShfuv07U5Fwy3AWgnW5pJVkz5CcYiXmQh3nbzdaHc6ozH3B3OR9F2vlzVpWY70PXL%2BpQ0%2BuP5jfiTXB3%2FmUcdyPjZxqPB8DCMLGBCV%2Bm8%2F8kEYYW8PH4l5MRbNliOeKL9a37QeNrT%2BDj6iUqhaS01PcuDZIcD4cOZVKf07iG9BSkUyXSlXCOAhLMtFiLJT%2BnX8k8N1GAtopzW8uqKftuVlTeJ15DWnLo6EvPV6%2BXBu82TcAHmI2RVNYXc2r90f0I1XulvzYu%2FyGQ67jbIH%2FWZ41JnyM8wenT2Y4YSPi7bBvg%2F7eqerY8Yus5sQUM%2Faez1ljsijQSuPWcQ4up83VJw8Fd1TQSULEc4iaksUgw7P%2FXUcGj7oqDedFSh4bPBq1dudb23otNYfWzk%2FcbXATDlx9rOKPyKjhGCsKMap4fZYSXAbBR4wzp6m2AY6pgEtT7uTLSiHf4kXdP6Cvy2r1AD9wzgJeENiHX6TrOgaifRzP%2BkKAr22%2FpDReEidZ6dJbQnLpQl6lGjtPxFj%2FjssUPRNHvwXEzKR8WuR1rIdzCW9ZPUcb%2FzV0dNCEApIoGCLLEoceiRKV6zh%2BCjVC3Bl%2Ba4Pp80uLJt7q313OyVM%2F9Md%2F8iUJRoaMSZ2I6lebiZu65f8e2FkN7ae1ZIISIpD5dqSAW4w&X-Amz-Signature=bc67492f05817dd5d9fc09967c663c94def179e21aa36013e6a6e2587d556e27&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666PDZ7NL5%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA4aCXVzLXdlc3QtMiJGMEQCICwJwFPmYHtdRhe2tJq3Su8PxNilSko9eDYX1QsxsNMMAiAlsMjp0QmudPku9qVaYv4VsFO4UhbqU%2BtMYajQsp5gZCqIBAjX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCZQyl02kazZWsCNkKtwDyDJPbx7xGxVxB2jYwycj2IU5Mdj0IC%2BEGAZGkZ5O20yoXvViOxyFRQNFSP2w0RLfgPB4pZpQmKjEHTJEkxEPFZwNzahg%2Bcoo2qfUEeg7MpKQQ0irFYyMtY6JA%2BY4mXumDWrWzRrFSiABtcCgkWGgF9q8pwNeFDfHOJvE2ODDmvqsPfGsLEnMmreQYBFtcGknVWc4vWD7RjShfuv07U5Fwy3AWgnW5pJVkz5CcYiXmQh3nbzdaHc6ozH3B3OR9F2vlzVpWY70PXL%2BpQ0%2BuP5jfiTXB3%2FmUcdyPjZxqPB8DCMLGBCV%2Bm8%2F8kEYYW8PH4l5MRbNliOeKL9a37QeNrT%2BDj6iUqhaS01PcuDZIcD4cOZVKf07iG9BSkUyXSlXCOAhLMtFiLJT%2BnX8k8N1GAtopzW8uqKftuVlTeJ15DWnLo6EvPV6%2BXBu82TcAHmI2RVNYXc2r90f0I1XulvzYu%2FyGQ67jbIH%2FWZ41JnyM8wenT2Y4YSPi7bBvg%2F7eqerY8Yus5sQUM%2Faez1ljsijQSuPWcQ4up83VJw8Fd1TQSULEc4iaksUgw7P%2FXUcGj7oqDedFSh4bPBq1dudb23otNYfWzk%2FcbXATDlx9rOKPyKjhGCsKMap4fZYSXAbBR4wzp6m2AY6pgEtT7uTLSiHf4kXdP6Cvy2r1AD9wzgJeENiHX6TrOgaifRzP%2BkKAr22%2FpDReEidZ6dJbQnLpQl6lGjtPxFj%2FjssUPRNHvwXEzKR8WuR1rIdzCW9ZPUcb%2FzV0dNCEApIoGCLLEoceiRKV6zh%2BCjVC3Bl%2Ba4Pp80uLJt7q313OyVM%2F9Md%2F8iUJRoaMSZ2I6lebiZu65f8e2FkN7ae1ZIISIpD5dqSAW4w&X-Amz-Signature=ebbdd25c7f1a885ec48a7a9921539a1966c1fafda0b8bdeae6721cfbf7a0ea7e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZXSPAOTB%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175100Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA8aCXVzLXdlc3QtMiJHMEUCIDjMEDsDZtn0B30M8%2BeGpNLDAd91fr2epNpPaDQJgr77AiEAg16V6Vh4HhNKjlRKFuC073K77fvTCsCYGmcLPum%2FXJMqiAQI1%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLXgjCi84X2j%2FqXImCrcA%2BEs8pEIBgMlpLaYv25q0qP1nZrhoipqMNfUE9i%2BqFMt%2B%2BO74iSeYhEw5yeymtfpWIM1Ap0M8H5Qum%2FEEABc61c%2Bqo1WevCNVB7tDj1f394SsrDqDxAVSqk0msm63XqvNq4X8C0I1Wiu11FbH7OtJPKtty1vmw99jsvzFsWXnNGYJpK3I3Rn2DnrWo34B4aGBwpzsQXubCEXFfMbV2Hj8jV0RqJPQ9HbARSGil06%2F0%2BQRcmGEsf%2FEdwzRa5PTIQY7iOPgpHl82VlFoD46ApcNiiepvOO4qL%2BmzOLPxxtvM7xHO7OEO%2BfRLYXUCZsn6sgd%2FqYVB05xqfQKSwvUZBfUN5mp%2FH5%2FAB6XPQhq8%2FFVhhkNdpg%2FMozWx9%2BzLCfKGVffJQkZcT6CqqT0bKz98pb5Pt0eSKgAKoSmhNN2dU6pg6xTf3K4dPYe9swUXcPYlPI2sQ7yAlh%2BXWwgiVLCG8hwFbyzPDCj16JVzXdiqm%2BbxWivypfUytBslWviTLosO3vsdIuUBrta2DZibQZf9nNcXLpsp2LyRnpqAWbInH%2BsYlmKS3cHjlj9CkitdT8Vtmqxma7UZASjVkvTaOaixk2qb5IdL3lBqYGLf0zsbymhp9lW8Cf%2F8PNX4zJlfyBMJOnptgGOqUB6xRWXMFbdBU54fCBfdByu3zMXqVQm1yVlhC%2FuUH7QD32g48EYlGhVkmPVvonf1K2tZYF%2BwXIgdCZuUt8iLxyQ%2FiJBTGyTwF7KhnOoMcQVYNVL%2FrUUc6DGk5nUk6H9N0errwEwPMCqna9Db4A7O6CVgIH2JA0Vs5y17WbW78ynbEeX%2BY8aiN196Lg%2Faxx8ffu%2F%2BZog5nQwnlEz9Uy%2FLDOtlxJwzi2&X-Amz-Signature=f638cafd0016aa700a43153fafffbdcef94730d5fbf3d30329c435bc9f494766&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUU5HDPJ%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175100Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIBH0ijYxj591K811gKHsf%2Bp0fxLtt58ShRs1ZaMzGStaAiEA6RnJ%2BoFEPSJfyIMEEWaxGzjsGqArnBNFVMMzQ8SmnlIqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCCApKJE6H2sJfiN6CrcA%2BExc%2F2DK0MoiPhxQpt35xwzklbrKtmwPFi1P8Xb7QohJy98uVMeiRKGdya96uqq3BtJalINropP5GjoFqwZyyKCb8rWQe2tnjqxM4DQOk1moMEdrjdD%2B%2BP2%2FuRgixDyYMiG7rQJcrlQjByavk0f9F6W%2BRXwvQoxZD%2BnpvmZZla23d32aceZaRowv0xivDIwilBKa%2BZOLQqphZCAJOm0blBpZW8vKntLuQ0If6tXg9c0QpV38Mx9S9RmJUgQxhP4V%2BNDEfFFDSp5MdWcTdfcWXOj5twbkx7FO3ZBxva295HjzP%2FgoesG2NJjmvLL%2BRpzcVaBrzGe0zYRoHiEzAaPyhgpzYoOLK9tkSWYtqfiluC%2Bo1W7TlH0zHiX0XblDTwEyxq9%2BGwQXr1%2BVmHKgcbHDyoOHplbXqqiuOsEPMv8CnGbM3jXV17RTQ%2FHzXiBkL740bDF%2BrDLe2OO97y9SN05ZmC3RjXp0qbN8hbx3vO9U0ehzYJMHGNT%2FmqblhzoGuKdGCylBSY5KPRPjjg4GD1%2F%2Bgab8OBpBIiQOtJOqPCqsd0WEeiD3HKLwx3eZZIT%2Bx5SKXqEjyVGY9azJQcnEeJZBUFbSDE%2BVpROV%2BLmiFfempUi1IflFQQcx1Z48ql5MJqAptgGOqUB%2B03nHi%2F4rxJHO2zyIN2sMaV8dGLoLGJ3beczVGr0WZjOxlaRM2gO59b6yBBor7wahSxy4dJqOakYFfzGrL3Y9Kspl0QTRfOQILQqVueaNmM2Z0bfWos60UaLKnySScRZxUlyppqW5IJ4LS4kRsb6WB99p%2Fopt66kjxHBfl4%2FW2kMn%2BUcL4u2Gyml0uKlIJXFpgpn4kAJPOXwxi%2FHS0SB4yXLwGJr&X-Amz-Signature=eb1702ada236b6bcee9b75b33a1fb19b9286f4e4a92e8932e268b9975a5bdd71&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUU5HDPJ%2F20261127%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261127T175100Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEA0aCXVzLXdlc3QtMiJHMEUCIBH0ijYxj591K811gKHsf%2Bp0fxLtt58ShRs1ZaMzGStaAiEA6RnJ%2BoFEPSJfyIMEEWaxGzjsGqArnBNFVMMzQ8SmnlIqiAQI1v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCCApKJE6H2sJfiN6CrcA%2BExc%2F2DK0MoiPhxQpt35xwzklbrKtmwPFi1P8Xb7QohJy98uVMeiRKGdya96uqq3BtJalINropP5GjoFqwZyyKCb8rWQe2tnjqxM4DQOk1moMEdrjdD%2B%2BP2%2FuRgixDyYMiG7rQJcrlQjByavk0f9F6W%2BRXwvQoxZD%2BnpvmZZla23d32aceZaRowv0xivDIwilBKa%2BZOLQqphZCAJOm0blBpZW8vKntLuQ0If6tXg9c0QpV38Mx9S9RmJUgQxhP4V%2BNDEfFFDSp5MdWcTdfcWXOj5twbkx7FO3ZBxva295HjzP%2FgoesG2NJjmvLL%2BRpzcVaBrzGe0zYRoHiEzAaPyhgpzYoOLK9tkSWYtqfiluC%2Bo1W7TlH0zHiX0XblDTwEyxq9%2BGwQXr1%2BVmHKgcbHDyoOHplbXqqiuOsEPMv8CnGbM3jXV17RTQ%2FHzXiBkL740bDF%2BrDLe2OO97y9SN05ZmC3RjXp0qbN8hbx3vO9U0ehzYJMHGNT%2FmqblhzoGuKdGCylBSY5KPRPjjg4GD1%2F%2Bgab8OBpBIiQOtJOqPCqsd0WEeiD3HKLwx3eZZIT%2Bx5SKXqEjyVGY9azJQcnEeJZBUFbSDE%2BVpROV%2BLmiFfempUi1IflFQQcx1Z48ql5MJqAptgGOqUB%2B03nHi%2F4rxJHO2zyIN2sMaV8dGLoLGJ3beczVGr0WZjOxlaRM2gO59b6yBBor7wahSxy4dJqOakYFfzGrL3Y9Kspl0QTRfOQILQqVueaNmM2Z0bfWos60UaLKnySScRZxUlyppqW5IJ4LS4kRsb6WB99p%2Fopt66kjxHBfl4%2FW2kMn%2BUcL4u2Gyml0uKlIJXFpgpn4kAJPOXwxi%2FHS0SB4yXLwGJr&X-Amz-Signature=79fa4e158634d066b6849e6df4829ae72723367a4edfc8144b500b31e2feaac7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
