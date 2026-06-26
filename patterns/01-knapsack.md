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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OCSGHTG%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUhEQvqdUXXAgqh4yFoYYrvWEeANa0Hdvz0wL8s7WWxAiB5F2sifQWqjxSv8ggrh9ZbPX1Ws%2FRG2zgxBH8PGalXZCr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIMO5GS1XS8vqk01%2BpVKtwDNCDf3YJqLpkR6%2B6Mzb7gyPosMR%2Bdk3IBwxbfPDSjvQ7E2CFwpa8%2BYVBqBvGLgHTIfJXbudaZxpmKNJkuSlF1WB7IwZgn4RB7o9kroh51VDU2pVbfFlAYjZpygWZ885nJm1M55Zi0dkEaPMpKvAVTGDjzIAVcHTJ2ZdaAtHZdmr4292mIz%2FQCXbF1%2Fz3Px5AgFpCvyYpfD07ZX5AMXqkoH18LlT7B85YHruhF1nCGev8PFUalt5c%2BaBT%2FmnHsUHkh8thNh9OK2SLwdCaAL0vMfvcbO8%2F9EA9nknwa9zf6u386fUSjHIPON0j1MItTsumbbqaxBYalAFrM1%2BltyE%2FZiTJdEmwKYMyl%2FANQ0mgYE3JPBqrJRFMREQojmLvRRV7agN7tpUyFEoz%2FQoc2elyp4%2B55ZCz08GVKqdzbfDEXKc2kdIDrbSFZNifZger%2B4frxdMONXD8kuShFRnNi7wtE%2BPuAeknv1lgoLjNOmlLwYUcGKByn8rDPDOILO01fFWvrEpZftszZBUWegYBeUaQ5uQSXRZ7qWJvMgz5ueaFHk5c5MYFPW4TBNAXdB1b9UV1Fxdzq1DkseyRbhAQNbfrq%2BA6fXW4Pnqpx6a%2F2JxtPnZokZ%2BdcYSnsrgLQ5lYwk5%2F50QY6pgHKndLMeKdGnWfpTgYy4pA4m2PZyaAxO8DnDt2rDGRO3CxvWWrfahsO40dukJuV4fefqbI8KXPCfQukQ%2FJV9IQjFvxD2V7jfDeGQuTlouyMuqNpeOAUDYKSaArRnHiGeY%2B3gsTazf44mDoWchbVZGG8DC4FTqTdoWi9YXpzMmp2y1mnixIe76B69rI3FdFQsFgiIPp7Uj06uTAQFJcdNS08%2B8d%2B5AqC&X-Amz-Signature=7526ca9c0e5434cf85356a452c2d7ab9c3ba9fd4dcdac2686b7dc68e6d045a48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OCSGHTG%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUhEQvqdUXXAgqh4yFoYYrvWEeANa0Hdvz0wL8s7WWxAiB5F2sifQWqjxSv8ggrh9ZbPX1Ws%2FRG2zgxBH8PGalXZCr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIMO5GS1XS8vqk01%2BpVKtwDNCDf3YJqLpkR6%2B6Mzb7gyPosMR%2Bdk3IBwxbfPDSjvQ7E2CFwpa8%2BYVBqBvGLgHTIfJXbudaZxpmKNJkuSlF1WB7IwZgn4RB7o9kroh51VDU2pVbfFlAYjZpygWZ885nJm1M55Zi0dkEaPMpKvAVTGDjzIAVcHTJ2ZdaAtHZdmr4292mIz%2FQCXbF1%2Fz3Px5AgFpCvyYpfD07ZX5AMXqkoH18LlT7B85YHruhF1nCGev8PFUalt5c%2BaBT%2FmnHsUHkh8thNh9OK2SLwdCaAL0vMfvcbO8%2F9EA9nknwa9zf6u386fUSjHIPON0j1MItTsumbbqaxBYalAFrM1%2BltyE%2FZiTJdEmwKYMyl%2FANQ0mgYE3JPBqrJRFMREQojmLvRRV7agN7tpUyFEoz%2FQoc2elyp4%2B55ZCz08GVKqdzbfDEXKc2kdIDrbSFZNifZger%2B4frxdMONXD8kuShFRnNi7wtE%2BPuAeknv1lgoLjNOmlLwYUcGKByn8rDPDOILO01fFWvrEpZftszZBUWegYBeUaQ5uQSXRZ7qWJvMgz5ueaFHk5c5MYFPW4TBNAXdB1b9UV1Fxdzq1DkseyRbhAQNbfrq%2BA6fXW4Pnqpx6a%2F2JxtPnZokZ%2BdcYSnsrgLQ5lYwk5%2F50QY6pgHKndLMeKdGnWfpTgYy4pA4m2PZyaAxO8DnDt2rDGRO3CxvWWrfahsO40dukJuV4fefqbI8KXPCfQukQ%2FJV9IQjFvxD2V7jfDeGQuTlouyMuqNpeOAUDYKSaArRnHiGeY%2B3gsTazf44mDoWchbVZGG8DC4FTqTdoWi9YXpzMmp2y1mnixIe76B69rI3FdFQsFgiIPp7Uj06uTAQFJcdNS08%2B8d%2B5AqC&X-Amz-Signature=a552f3b4f4a0bf392ac9cecd539c4ce902ed454fd5dd8ed352af8c44ff55a417&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OCSGHTG%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFUhEQvqdUXXAgqh4yFoYYrvWEeANa0Hdvz0wL8s7WWxAiB5F2sifQWqjxSv8ggrh9ZbPX1Ws%2FRG2zgxBH8PGalXZCr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIMO5GS1XS8vqk01%2BpVKtwDNCDf3YJqLpkR6%2B6Mzb7gyPosMR%2Bdk3IBwxbfPDSjvQ7E2CFwpa8%2BYVBqBvGLgHTIfJXbudaZxpmKNJkuSlF1WB7IwZgn4RB7o9kroh51VDU2pVbfFlAYjZpygWZ885nJm1M55Zi0dkEaPMpKvAVTGDjzIAVcHTJ2ZdaAtHZdmr4292mIz%2FQCXbF1%2Fz3Px5AgFpCvyYpfD07ZX5AMXqkoH18LlT7B85YHruhF1nCGev8PFUalt5c%2BaBT%2FmnHsUHkh8thNh9OK2SLwdCaAL0vMfvcbO8%2F9EA9nknwa9zf6u386fUSjHIPON0j1MItTsumbbqaxBYalAFrM1%2BltyE%2FZiTJdEmwKYMyl%2FANQ0mgYE3JPBqrJRFMREQojmLvRRV7agN7tpUyFEoz%2FQoc2elyp4%2B55ZCz08GVKqdzbfDEXKc2kdIDrbSFZNifZger%2B4frxdMONXD8kuShFRnNi7wtE%2BPuAeknv1lgoLjNOmlLwYUcGKByn8rDPDOILO01fFWvrEpZftszZBUWegYBeUaQ5uQSXRZ7qWJvMgz5ueaFHk5c5MYFPW4TBNAXdB1b9UV1Fxdzq1DkseyRbhAQNbfrq%2BA6fXW4Pnqpx6a%2F2JxtPnZokZ%2BdcYSnsrgLQ5lYwk5%2F50QY6pgHKndLMeKdGnWfpTgYy4pA4m2PZyaAxO8DnDt2rDGRO3CxvWWrfahsO40dukJuV4fefqbI8KXPCfQukQ%2FJV9IQjFvxD2V7jfDeGQuTlouyMuqNpeOAUDYKSaArRnHiGeY%2B3gsTazf44mDoWchbVZGG8DC4FTqTdoWi9YXpzMmp2y1mnixIe76B69rI3FdFQsFgiIPp7Uj06uTAQFJcdNS08%2B8d%2B5AqC&X-Amz-Signature=56aa58b060855d533045e6194212969b352101e00eb8fea934395f312caa34c5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5CBVLFZ%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBVc9fWZ9gwmCY3FRS2CHn%2BNPrJb6j2S2Aq9VjGfLbKYAiB%2F1oitealF8AOnj94Doqnfm2HbYLgFjzBhsJriqk%2BogSr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIM7%2BlrIWilPhhW%2F9W%2BKtwDvTgf%2FUEi1Q5VfOsKGo05%2BWTdPX7GfMmr5uJCZpyla6vxYL%2BwDqQjGd26gMHlwdEzHrRphPUxGtFXmNjHx%2FmWIhxN6uFewusETvVMFczfYmL9%2FN9PxEwT60D%2BtjgYG6Gtd%2BM%2BjzmuyJpHRd82m81M0WZ3TNAGq0z55VoYfkLYgIzfaNvOnucnX90qi2lA4%2FF0eCF8BKYfvIharVEkRE1Ssj296MNHYBN1z4rGdMk1AxjBVVt0HG6BulFWP66wbNliJsBpoc8uWP3DA0lIoo98xPwdTZF0rCWlgtoMgTXgOvNO4wT3UMpiNy8CCE8UMbfNhGfpmjj%2F8uwiNWzsuYDCXieWXOS0W9TEejI1h8b%2FR1DsesF9Cc4NXKeVBvU1k6rKh6LLgvCGcZQxEbnXRp%2FcECbrzZVHQU0fKzhdajuUKAEDs96RCMKZC7t5ogejOEI5Xnj41I6CALQkP7b7CTrPrJqvw5YbWifB0olgjV5bvtaMb8VlUa8CLEKygQgN1pdE7lZK1vLXdlaCSgT7PNqJSTGfASzpAMi7%2BL8d2yOJsuTDmd8xGFpZPOLRkfnm4HiZAjBH4Pdu4Rvo4xHWDdq%2F9yiQq5Q%2F%2FtdhUvZ055FRmEgcOTD6DQQiYgcaODkwoKD50QY6pgH%2BJB6jj3s2ENCRVxOAosq%2F5CpQD%2FGcUunPxDSjLEbg4FjbStLp5UP840v%2FdCAaLake9EJUnV79ZqzWjTgBY6Cle3mIjwxuRidcAFR3JrRX15MS86fctjvKPkBqpU9PXvu9%2BB%2FBfaNCZkEp%2FbYJK4K24vCNrEGjzWMV2D8jxK91h1PzSl5Way3aM36yD%2FP0vJhnccQ7gFS8glUv4UCa757jheL2PPhV&X-Amz-Signature=e7f9c0cec7a47f676549bed161c59580681939dde38615f12b13494de0cfa653&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5CBVLFZ%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBVc9fWZ9gwmCY3FRS2CHn%2BNPrJb6j2S2Aq9VjGfLbKYAiB%2F1oitealF8AOnj94Doqnfm2HbYLgFjzBhsJriqk%2BogSr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIM7%2BlrIWilPhhW%2F9W%2BKtwDvTgf%2FUEi1Q5VfOsKGo05%2BWTdPX7GfMmr5uJCZpyla6vxYL%2BwDqQjGd26gMHlwdEzHrRphPUxGtFXmNjHx%2FmWIhxN6uFewusETvVMFczfYmL9%2FN9PxEwT60D%2BtjgYG6Gtd%2BM%2BjzmuyJpHRd82m81M0WZ3TNAGq0z55VoYfkLYgIzfaNvOnucnX90qi2lA4%2FF0eCF8BKYfvIharVEkRE1Ssj296MNHYBN1z4rGdMk1AxjBVVt0HG6BulFWP66wbNliJsBpoc8uWP3DA0lIoo98xPwdTZF0rCWlgtoMgTXgOvNO4wT3UMpiNy8CCE8UMbfNhGfpmjj%2F8uwiNWzsuYDCXieWXOS0W9TEejI1h8b%2FR1DsesF9Cc4NXKeVBvU1k6rKh6LLgvCGcZQxEbnXRp%2FcECbrzZVHQU0fKzhdajuUKAEDs96RCMKZC7t5ogejOEI5Xnj41I6CALQkP7b7CTrPrJqvw5YbWifB0olgjV5bvtaMb8VlUa8CLEKygQgN1pdE7lZK1vLXdlaCSgT7PNqJSTGfASzpAMi7%2BL8d2yOJsuTDmd8xGFpZPOLRkfnm4HiZAjBH4Pdu4Rvo4xHWDdq%2F9yiQq5Q%2F%2FtdhUvZ055FRmEgcOTD6DQQiYgcaODkwoKD50QY6pgH%2BJB6jj3s2ENCRVxOAosq%2F5CpQD%2FGcUunPxDSjLEbg4FjbStLp5UP840v%2FdCAaLake9EJUnV79ZqzWjTgBY6Cle3mIjwxuRidcAFR3JrRX15MS86fctjvKPkBqpU9PXvu9%2BB%2FBfaNCZkEp%2FbYJK4K24vCNrEGjzWMV2D8jxK91h1PzSl5Way3aM36yD%2FP0vJhnccQ7gFS8glUv4UCa757jheL2PPhV&X-Amz-Signature=f4b8a18e461ebf560057f735047c8a7a3d611e4094bfe5019c2d10c073c7ff69&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5CBVLFZ%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBVc9fWZ9gwmCY3FRS2CHn%2BNPrJb6j2S2Aq9VjGfLbKYAiB%2F1oitealF8AOnj94Doqnfm2HbYLgFjzBhsJriqk%2BogSr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIM7%2BlrIWilPhhW%2F9W%2BKtwDvTgf%2FUEi1Q5VfOsKGo05%2BWTdPX7GfMmr5uJCZpyla6vxYL%2BwDqQjGd26gMHlwdEzHrRphPUxGtFXmNjHx%2FmWIhxN6uFewusETvVMFczfYmL9%2FN9PxEwT60D%2BtjgYG6Gtd%2BM%2BjzmuyJpHRd82m81M0WZ3TNAGq0z55VoYfkLYgIzfaNvOnucnX90qi2lA4%2FF0eCF8BKYfvIharVEkRE1Ssj296MNHYBN1z4rGdMk1AxjBVVt0HG6BulFWP66wbNliJsBpoc8uWP3DA0lIoo98xPwdTZF0rCWlgtoMgTXgOvNO4wT3UMpiNy8CCE8UMbfNhGfpmjj%2F8uwiNWzsuYDCXieWXOS0W9TEejI1h8b%2FR1DsesF9Cc4NXKeVBvU1k6rKh6LLgvCGcZQxEbnXRp%2FcECbrzZVHQU0fKzhdajuUKAEDs96RCMKZC7t5ogejOEI5Xnj41I6CALQkP7b7CTrPrJqvw5YbWifB0olgjV5bvtaMb8VlUa8CLEKygQgN1pdE7lZK1vLXdlaCSgT7PNqJSTGfASzpAMi7%2BL8d2yOJsuTDmd8xGFpZPOLRkfnm4HiZAjBH4Pdu4Rvo4xHWDdq%2F9yiQq5Q%2F%2FtdhUvZ055FRmEgcOTD6DQQiYgcaODkwoKD50QY6pgH%2BJB6jj3s2ENCRVxOAosq%2F5CpQD%2FGcUunPxDSjLEbg4FjbStLp5UP840v%2FdCAaLake9EJUnV79ZqzWjTgBY6Cle3mIjwxuRidcAFR3JrRX15MS86fctjvKPkBqpU9PXvu9%2BB%2FBfaNCZkEp%2FbYJK4K24vCNrEGjzWMV2D8jxK91h1PzSl5Way3aM36yD%2FP0vJhnccQ7gFS8glUv4UCa757jheL2PPhV&X-Amz-Signature=70c07c312c598d03237b48029a008e16306f364bb5047a45b648f85f76093d98&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5CBVLFZ%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105012Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBVc9fWZ9gwmCY3FRS2CHn%2BNPrJb6j2S2Aq9VjGfLbKYAiB%2F1oitealF8AOnj94Doqnfm2HbYLgFjzBhsJriqk%2BogSr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIM7%2BlrIWilPhhW%2F9W%2BKtwDvTgf%2FUEi1Q5VfOsKGo05%2BWTdPX7GfMmr5uJCZpyla6vxYL%2BwDqQjGd26gMHlwdEzHrRphPUxGtFXmNjHx%2FmWIhxN6uFewusETvVMFczfYmL9%2FN9PxEwT60D%2BtjgYG6Gtd%2BM%2BjzmuyJpHRd82m81M0WZ3TNAGq0z55VoYfkLYgIzfaNvOnucnX90qi2lA4%2FF0eCF8BKYfvIharVEkRE1Ssj296MNHYBN1z4rGdMk1AxjBVVt0HG6BulFWP66wbNliJsBpoc8uWP3DA0lIoo98xPwdTZF0rCWlgtoMgTXgOvNO4wT3UMpiNy8CCE8UMbfNhGfpmjj%2F8uwiNWzsuYDCXieWXOS0W9TEejI1h8b%2FR1DsesF9Cc4NXKeVBvU1k6rKh6LLgvCGcZQxEbnXRp%2FcECbrzZVHQU0fKzhdajuUKAEDs96RCMKZC7t5ogejOEI5Xnj41I6CALQkP7b7CTrPrJqvw5YbWifB0olgjV5bvtaMb8VlUa8CLEKygQgN1pdE7lZK1vLXdlaCSgT7PNqJSTGfASzpAMi7%2BL8d2yOJsuTDmd8xGFpZPOLRkfnm4HiZAjBH4Pdu4Rvo4xHWDdq%2F9yiQq5Q%2F%2FtdhUvZ055FRmEgcOTD6DQQiYgcaODkwoKD50QY6pgH%2BJB6jj3s2ENCRVxOAosq%2F5CpQD%2FGcUunPxDSjLEbg4FjbStLp5UP840v%2FdCAaLake9EJUnV79ZqzWjTgBY6Cle3mIjwxuRidcAFR3JrRX15MS86fctjvKPkBqpU9PXvu9%2BB%2FBfaNCZkEp%2FbYJK4K24vCNrEGjzWMV2D8jxK91h1PzSl5Way3aM36yD%2FP0vJhnccQ7gFS8glUv4UCa757jheL2PPhV&X-Amz-Signature=b85d5931783551acb163c18553d4dbeeb567f1e3432772cf4c17efb0d1eabfa9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663AWIE4I2%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105013Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICb4IWiEgUZqgjvlUSJCizKNZuTfl%2FfBlXHvHR29VAF%2FAiAmFqMmzyqMhkwCh7fWzzzHLRrfM%2FW%2BPgPSmFGVFIG6lyr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIMtwVQ3JDNkIS2xT5sKtwDnc67wTzGv1RHc5WqgtfxZHsm3NdmlTGlcNE54Gm%2BVw4sMkEov%2BJuB02c5wpIzjgQ%2FaeUwzEWfpOlqei1nZok6Ke2SibrgIqsKvUr1%2Fz8Nx2OPHTrmRjKqyxG25tNCmPloXqiCJoaTZ4ZpDkjj%2BQDkx1mRMXT1bV%2FcdbZk1zl6bEsuIzLLjV3%2B9JLbfJK4t%2FBqWUl%2BV%2FHvXjnCP7Q50AqjmoN450IcshMYdmk%2Bcr8CVd7Z1Fdv7J83340S9iQLWs5%2FL9tDNJGbjAxe56V%2BW9MieK1QFzmXMUc5c6blKLivKPQiaDEAf8Nc1XTBKNjG4N%2BrPOS58A73fGWKImdv%2BK58DNXWajVKyHYm0Qsg0oP5nVA6w00hGL59n6fhkqZkJEOz6qizd1Qz7EUnHIgN3I0OdFpdNtBO7ShSMe2UZnAAApSqdHH6OyfPx1KMyg0oekeu4v313wVehzWEh3F9Oz%2BnuONFDyU1JusM2x%2Br9n%2F6yiVooDv8YPLcRVBGN9HxG9KbhxHVoIBdFUcHTdo7sIHbsMSYFxtBjvuhs8j9q1R3HtxWwTOZ%2BywPVMnCJNWKrv9JNvM6pVt7zAGTPZgleQw5nIdCewJC9VU%2FAQiEYsVmqjzaEzIBZoRHYyH0hMw9Z350QY6pgEWQk9QABUSB6ybR57%2FL0r0THw67kn0mu5RN6AYBemUwJNWwT42Q5NZ3isEkBH1rw1jEV63MssGAbX1m5GH6Zdt2WzkJjlbO4Wta%2FNqiHyxNti8NxbPMVPKqfYygMI4yEFydg1TanoI6cPylX92w8QTeh7SKPcvGVvoAUchkaY4J%2F043UPrHeTTCvodmDtJeBtvrTyMkzv3Ie5Xygb1MO8Nyuwrl4ZV&X-Amz-Signature=97fcc1fa7f8181fc3c8db1c0a3c70cdcbca9b24e54819c363c2539cf998c1e61&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663QWB6EV5%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105013Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGIdMyzCsaSgfddO9dki6Dc51xEAeZSSJjSQ%2BpkO%2BadJAiBZHDSQA8XC5EtqACHB1vDumS72oBzW7Vxnchfy3h0zMCr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIMjLw0MVTajN3ltoS6KtwDnrr7dPrpk%2Bsd%2BgnjfUW2fZ6PVwUkTZccrkRoHhx10iQiqFLytFMnuAxf4slT%2Fbtp0G1AUeCAtpad8xOBX72b59Eq4Z9XPVKMhsPeQnw2OzNH8euS4yLpCA1GTGxhBZ6vVqp27Q%2BXA3Y8Tna7XGLJL9aR8hyA7nuJaSuVVPEbagK4Xy39oQLvQpcSso%2BlAIQp%2BBWsqhuGEYSq5DqP%2FdCSGH2e2z45JWgijXGlaWN7jriW7%2BR4QSIU4Ec8KPVsogcTeUkDfpjdg%2B35RLPAkC71dJMVAfdUklYtc6zrsXeNqozdbPZ9Wz4DDbrYBxdC4zdZZm%2BxMEN4sBo1L44bAU1HdxLOjZry25yaLLpBCSYTfzT3xEK1q0RTR%2FPew85Zxnhb3OWglRwt9YxCm8%2FfkHpk0aqI5A1NGgbmicDRWwf3i7nU2lSr50UDWIQ6aR%2BbLgNhkUDJ6glgT3UHvHGpgMQDEZnBa6ccRL9O6jaPbpfEIBLdEpKISog5WgeFceJS0ifOPfSoPz77Ltmw9CQRsd3dF8GOY6%2FRvZtmq4QcKAsiHBFKMbDt5nq546kJLVUU7aTJU6hCgAAqyXVwMw7iI0nUigjbHIO3f5hoxkWqknJPBqfyiigH%2BEHMgzPM%2F7Aw7pz50QY6pgHC2Lk3pgEWwLcIi1Z5eYPi2vAOsSmzf7DpIUDFQm8NJZ%2FWQMDsJdjpTXHKo1dDTdZycvs1eKMhZEGWGO0smf05oFmFEa0gM2MTaJcuuwMPQlvhTDuyPqnXKX5FL1QIjRgmX3qM9Dppf6v9tIRP%2B1uXJlHdGVgOGRHbwWm9nD3mV4FJ2%2B%2FM%2BumBw1E1Rfz6KBKJrDxKAs5pJBlFmrNcPwYzdtbs3zOZ&X-Amz-Signature=1c0af00427f1af50f63bada54830f57ef48456011e9f15c791569fb7b451990a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663QWB6EV5%2F20260626%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260626T105013Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGIdMyzCsaSgfddO9dki6Dc51xEAeZSSJjSQ%2BpkO%2BadJAiBZHDSQA8XC5EtqACHB1vDumS72oBzW7Vxnchfy3h0zMCr%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIMjLw0MVTajN3ltoS6KtwDnrr7dPrpk%2Bsd%2BgnjfUW2fZ6PVwUkTZccrkRoHhx10iQiqFLytFMnuAxf4slT%2Fbtp0G1AUeCAtpad8xOBX72b59Eq4Z9XPVKMhsPeQnw2OzNH8euS4yLpCA1GTGxhBZ6vVqp27Q%2BXA3Y8Tna7XGLJL9aR8hyA7nuJaSuVVPEbagK4Xy39oQLvQpcSso%2BlAIQp%2BBWsqhuGEYSq5DqP%2FdCSGH2e2z45JWgijXGlaWN7jriW7%2BR4QSIU4Ec8KPVsogcTeUkDfpjdg%2B35RLPAkC71dJMVAfdUklYtc6zrsXeNqozdbPZ9Wz4DDbrYBxdC4zdZZm%2BxMEN4sBo1L44bAU1HdxLOjZry25yaLLpBCSYTfzT3xEK1q0RTR%2FPew85Zxnhb3OWglRwt9YxCm8%2FfkHpk0aqI5A1NGgbmicDRWwf3i7nU2lSr50UDWIQ6aR%2BbLgNhkUDJ6glgT3UHvHGpgMQDEZnBa6ccRL9O6jaPbpfEIBLdEpKISog5WgeFceJS0ifOPfSoPz77Ltmw9CQRsd3dF8GOY6%2FRvZtmq4QcKAsiHBFKMbDt5nq546kJLVUU7aTJU6hCgAAqyXVwMw7iI0nUigjbHIO3f5hoxkWqknJPBqfyiigH%2BEHMgzPM%2F7Aw7pz50QY6pgHC2Lk3pgEWwLcIi1Z5eYPi2vAOsSmzf7DpIUDFQm8NJZ%2FWQMDsJdjpTXHKo1dDTdZycvs1eKMhZEGWGO0smf05oFmFEa0gM2MTaJcuuwMPQlvhTDuyPqnXKX5FL1QIjRgmX3qM9Dppf6v9tIRP%2B1uXJlHdGVgOGRHbwWm9nD3mV4FJ2%2B%2FM%2BumBw1E1Rfz6KBKJrDxKAs5pJBlFmrNcPwYzdtbs3zOZ&X-Amz-Signature=8c1f8070c4b2c1992191eac3af123832c6ebc17265f45833673f4eaade7b58c5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
