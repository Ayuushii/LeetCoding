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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX22U32Y%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsIccTsDBkOtxma3dTqwoDAx4KXFHgafn1AOsKJ3D0AgIhAIPcffyTNnIRk3kxAzIgku29e1gEO%2BZf7eahN3n6%2BX2cKogECJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwXlLomL2OFtq0eurEq3AOTdHdb0pi%2B6l6OfGKYhFHgRcxiJRaDYzFi9If7j0OwiuMVi5iqKifB%2BbAbysREdzGV8%2FCf%2FYEUXgNgTTW%2BRxZgJIAOilQ9E12LWRddHe2lHm4uaDpb1ZXn7%2F087owUzFmCsWf24d%2B8wlRe9dSLXZvRsOzfGgR4RkHCoWoADazAsayU9qz0m2R8%2FUDENm%2FVJm3jGCHmA1AvZcmT%2FgMrWneC6Cqc0bdWxDuqzyLusWlHZiMZI%2F9P%2FiLhE2%2B2FQlhqJq9d80siF1FxyZ7r2U9S7Y514NXcEMVQJXdY0B496irPLHhxqUJRVHfbvoiP%2FsZeaKVMHuegXETr%2Fq1vmQgkaP6Sor5PPi3Eer2DA8zPOrKqijHhe8ETZNgkJKIAakE9jHsiCAMvEse132xRtqKWaibLMimGCWEWENCG%2BF4omSfbBz0ruRwJCKlMU2n7%2F1mhNe%2B92%2BADj%2FCKuizNhGLLKQ2ytc4qT72ndFi3vHZLlhQNOw%2BCuJpaRJbv8WzVDfEUVFSUaxcnYnPSnzoByiw9cFjvD%2FpGeQMIOSBtOe%2FD4SeEEF%2BRKGowZ7afD7XbA%2Bnhw0pgWxbSbeE%2BmMcDoWl8kBr2K%2B%2BiM9xLThVTiNXpSrEH5GufllodQqtNT2Y5zCJvuHXBjqkAZlNIeNubfAzLrTwqAA4ahRGGJVJWzqV%2BJulVH%2FGsJ93uRoM4YAQrwCYzGQXcI3jh6Op6EmiGu77rS%2Bl8iLE0a2c8YYe6%2BQ8aPdTKHajbYMveXbc2upQMomYmMSbGbM6%2B1t6sSlpgE3UE1GR0Pm56tcAC8D9VJEGuDaWd1A%2FNOjSzbYw1PMGurVGIw%2F6OBAcVpGsTrvawmEI%2FoB2e34R5OCgXO3W&X-Amz-Signature=b5bdeb978999255a67941d1403a1735a80ab91532e1866fc2f288de306243862&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX22U32Y%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsIccTsDBkOtxma3dTqwoDAx4KXFHgafn1AOsKJ3D0AgIhAIPcffyTNnIRk3kxAzIgku29e1gEO%2BZf7eahN3n6%2BX2cKogECJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwXlLomL2OFtq0eurEq3AOTdHdb0pi%2B6l6OfGKYhFHgRcxiJRaDYzFi9If7j0OwiuMVi5iqKifB%2BbAbysREdzGV8%2FCf%2FYEUXgNgTTW%2BRxZgJIAOilQ9E12LWRddHe2lHm4uaDpb1ZXn7%2F087owUzFmCsWf24d%2B8wlRe9dSLXZvRsOzfGgR4RkHCoWoADazAsayU9qz0m2R8%2FUDENm%2FVJm3jGCHmA1AvZcmT%2FgMrWneC6Cqc0bdWxDuqzyLusWlHZiMZI%2F9P%2FiLhE2%2B2FQlhqJq9d80siF1FxyZ7r2U9S7Y514NXcEMVQJXdY0B496irPLHhxqUJRVHfbvoiP%2FsZeaKVMHuegXETr%2Fq1vmQgkaP6Sor5PPi3Eer2DA8zPOrKqijHhe8ETZNgkJKIAakE9jHsiCAMvEse132xRtqKWaibLMimGCWEWENCG%2BF4omSfbBz0ruRwJCKlMU2n7%2F1mhNe%2B92%2BADj%2FCKuizNhGLLKQ2ytc4qT72ndFi3vHZLlhQNOw%2BCuJpaRJbv8WzVDfEUVFSUaxcnYnPSnzoByiw9cFjvD%2FpGeQMIOSBtOe%2FD4SeEEF%2BRKGowZ7afD7XbA%2Bnhw0pgWxbSbeE%2BmMcDoWl8kBr2K%2B%2BiM9xLThVTiNXpSrEH5GufllodQqtNT2Y5zCJvuHXBjqkAZlNIeNubfAzLrTwqAA4ahRGGJVJWzqV%2BJulVH%2FGsJ93uRoM4YAQrwCYzGQXcI3jh6Op6EmiGu77rS%2Bl8iLE0a2c8YYe6%2BQ8aPdTKHajbYMveXbc2upQMomYmMSbGbM6%2B1t6sSlpgE3UE1GR0Pm56tcAC8D9VJEGuDaWd1A%2FNOjSzbYw1PMGurVGIw%2F6OBAcVpGsTrvawmEI%2FoB2e34R5OCgXO3W&X-Amz-Signature=3448ea8c454252eb281813a5b483b53bdbb6bae5631badd322958aee6db6c40d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX22U32Y%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsIccTsDBkOtxma3dTqwoDAx4KXFHgafn1AOsKJ3D0AgIhAIPcffyTNnIRk3kxAzIgku29e1gEO%2BZf7eahN3n6%2BX2cKogECJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwXlLomL2OFtq0eurEq3AOTdHdb0pi%2B6l6OfGKYhFHgRcxiJRaDYzFi9If7j0OwiuMVi5iqKifB%2BbAbysREdzGV8%2FCf%2FYEUXgNgTTW%2BRxZgJIAOilQ9E12LWRddHe2lHm4uaDpb1ZXn7%2F087owUzFmCsWf24d%2B8wlRe9dSLXZvRsOzfGgR4RkHCoWoADazAsayU9qz0m2R8%2FUDENm%2FVJm3jGCHmA1AvZcmT%2FgMrWneC6Cqc0bdWxDuqzyLusWlHZiMZI%2F9P%2FiLhE2%2B2FQlhqJq9d80siF1FxyZ7r2U9S7Y514NXcEMVQJXdY0B496irPLHhxqUJRVHfbvoiP%2FsZeaKVMHuegXETr%2Fq1vmQgkaP6Sor5PPi3Eer2DA8zPOrKqijHhe8ETZNgkJKIAakE9jHsiCAMvEse132xRtqKWaibLMimGCWEWENCG%2BF4omSfbBz0ruRwJCKlMU2n7%2F1mhNe%2B92%2BADj%2FCKuizNhGLLKQ2ytc4qT72ndFi3vHZLlhQNOw%2BCuJpaRJbv8WzVDfEUVFSUaxcnYnPSnzoByiw9cFjvD%2FpGeQMIOSBtOe%2FD4SeEEF%2BRKGowZ7afD7XbA%2Bnhw0pgWxbSbeE%2BmMcDoWl8kBr2K%2B%2BiM9xLThVTiNXpSrEH5GufllodQqtNT2Y5zCJvuHXBjqkAZlNIeNubfAzLrTwqAA4ahRGGJVJWzqV%2BJulVH%2FGsJ93uRoM4YAQrwCYzGQXcI3jh6Op6EmiGu77rS%2Bl8iLE0a2c8YYe6%2BQ8aPdTKHajbYMveXbc2upQMomYmMSbGbM6%2B1t6sSlpgE3UE1GR0Pm56tcAC8D9VJEGuDaWd1A%2FNOjSzbYw1PMGurVGIw%2F6OBAcVpGsTrvawmEI%2FoB2e34R5OCgXO3W&X-Amz-Signature=6b90f38cd555af17c4e6304142da593684a0a3cb83f11f292c6b6f19f66d68a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGJMJFAE%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEWtuIBF3opvJ5BnaAuwhxfmIASLJBk8xbKeJWku%2Bb3FAiBdSIaAw08swSlweXzKo99LtQOTJH3W%2FFTw8Zrt6dsdtiqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhFj7j6X1KSppyIKlKtwDa7TggZLmNnK0gsHZ0iIqNMFD6TB2S2wNAPij%2Fj7qL644CUAixxE2URHO4WnZQ8Hz%2BPCf2jF4MvGxoi78CEUcV%2BJVQuwaSuO%2BMFnsiDXTRH5V7G4ZndjSQVcE8qaqzggaJaCeovUwStwvTP1aDIyQshe1owkBu0Q2d38GmGe7C8EZ51EXl0xcQ0hs3mObvzLi6EEMkfSjzrIFibZHboOD4XfhiMZe65kUBhTExtKPBTY9bKqfyAwAbLVFfyNlv3xrO0phmr5B2USQjZ0BwGydm6QRFVXB6BuYrObKGD1NtHxvDXjtIeiru%2Fl5VoHdm%2FkXtkDjdE86uTGOu1FbabojoJhXUDPk1UrvZRyDlpQ150cDO3XRQP%2BnvY%2BOXcLwi2WZSGMTM5%2BJGmHPrQsPsTxJEs%2F6pcLwmWHlnQ6F8%2BMmL5Zb6EuCsl5n6lTxL57Vf6C9bRxfcvo%2FrmymEZL0WAoYV%2Baesv%2FtZs4CN9Bkufe8TQQ364VteYnOp2rGP7wk3w97lq7LsI9ub%2BwwD4ZqeALmlQi3OfYKHJjbo37Mztscu12%2FZ9%2BnmwNilRJ3zQu3gw%2Bz%2B78ekKvmlxchg1m1%2F0FlEL0M0T8LuPHLIo6ZmAioe5yo3fkg9YJQBQCCozow8r7h1wY6pgG6Ge6e5mm33vE16Y5h%2B55Y2VRTUBwVJI2eU7IJButDP%2FGQYWefESQzkFpqOz%2F3ZIO%2BmTuOGATb3q%2B68Pi8URbtszCsl6PScyNsI%2BE%2B2D%2FemqIRoypMEg0A1DYZr0lDmdWQDj7Tm28wmqpZ%2BspF49S6PVt4vXpCh60W6R922nnh8E51WFG0JApSgxN6pYvhrUR544E4bl8X6tiMBIrnTIJSXU7BEzD6&X-Amz-Signature=f82a5daf3363c0870ae9832ef9ceb56f63d7194b45c23b6648912b85cc089060&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGJMJFAE%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEWtuIBF3opvJ5BnaAuwhxfmIASLJBk8xbKeJWku%2Bb3FAiBdSIaAw08swSlweXzKo99LtQOTJH3W%2FFTw8Zrt6dsdtiqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhFj7j6X1KSppyIKlKtwDa7TggZLmNnK0gsHZ0iIqNMFD6TB2S2wNAPij%2Fj7qL644CUAixxE2URHO4WnZQ8Hz%2BPCf2jF4MvGxoi78CEUcV%2BJVQuwaSuO%2BMFnsiDXTRH5V7G4ZndjSQVcE8qaqzggaJaCeovUwStwvTP1aDIyQshe1owkBu0Q2d38GmGe7C8EZ51EXl0xcQ0hs3mObvzLi6EEMkfSjzrIFibZHboOD4XfhiMZe65kUBhTExtKPBTY9bKqfyAwAbLVFfyNlv3xrO0phmr5B2USQjZ0BwGydm6QRFVXB6BuYrObKGD1NtHxvDXjtIeiru%2Fl5VoHdm%2FkXtkDjdE86uTGOu1FbabojoJhXUDPk1UrvZRyDlpQ150cDO3XRQP%2BnvY%2BOXcLwi2WZSGMTM5%2BJGmHPrQsPsTxJEs%2F6pcLwmWHlnQ6F8%2BMmL5Zb6EuCsl5n6lTxL57Vf6C9bRxfcvo%2FrmymEZL0WAoYV%2Baesv%2FtZs4CN9Bkufe8TQQ364VteYnOp2rGP7wk3w97lq7LsI9ub%2BwwD4ZqeALmlQi3OfYKHJjbo37Mztscu12%2FZ9%2BnmwNilRJ3zQu3gw%2Bz%2B78ekKvmlxchg1m1%2F0FlEL0M0T8LuPHLIo6ZmAioe5yo3fkg9YJQBQCCozow8r7h1wY6pgG6Ge6e5mm33vE16Y5h%2B55Y2VRTUBwVJI2eU7IJButDP%2FGQYWefESQzkFpqOz%2F3ZIO%2BmTuOGATb3q%2B68Pi8URbtszCsl6PScyNsI%2BE%2B2D%2FemqIRoypMEg0A1DYZr0lDmdWQDj7Tm28wmqpZ%2BspF49S6PVt4vXpCh60W6R922nnh8E51WFG0JApSgxN6pYvhrUR544E4bl8X6tiMBIrnTIJSXU7BEzD6&X-Amz-Signature=c4153aaadf3fcbef8c8bdcff6e3ab1e5bcd6d50cbc000312b57077e8c183581a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGJMJFAE%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEWtuIBF3opvJ5BnaAuwhxfmIASLJBk8xbKeJWku%2Bb3FAiBdSIaAw08swSlweXzKo99LtQOTJH3W%2FFTw8Zrt6dsdtiqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhFj7j6X1KSppyIKlKtwDa7TggZLmNnK0gsHZ0iIqNMFD6TB2S2wNAPij%2Fj7qL644CUAixxE2URHO4WnZQ8Hz%2BPCf2jF4MvGxoi78CEUcV%2BJVQuwaSuO%2BMFnsiDXTRH5V7G4ZndjSQVcE8qaqzggaJaCeovUwStwvTP1aDIyQshe1owkBu0Q2d38GmGe7C8EZ51EXl0xcQ0hs3mObvzLi6EEMkfSjzrIFibZHboOD4XfhiMZe65kUBhTExtKPBTY9bKqfyAwAbLVFfyNlv3xrO0phmr5B2USQjZ0BwGydm6QRFVXB6BuYrObKGD1NtHxvDXjtIeiru%2Fl5VoHdm%2FkXtkDjdE86uTGOu1FbabojoJhXUDPk1UrvZRyDlpQ150cDO3XRQP%2BnvY%2BOXcLwi2WZSGMTM5%2BJGmHPrQsPsTxJEs%2F6pcLwmWHlnQ6F8%2BMmL5Zb6EuCsl5n6lTxL57Vf6C9bRxfcvo%2FrmymEZL0WAoYV%2Baesv%2FtZs4CN9Bkufe8TQQ364VteYnOp2rGP7wk3w97lq7LsI9ub%2BwwD4ZqeALmlQi3OfYKHJjbo37Mztscu12%2FZ9%2BnmwNilRJ3zQu3gw%2Bz%2B78ekKvmlxchg1m1%2F0FlEL0M0T8LuPHLIo6ZmAioe5yo3fkg9YJQBQCCozow8r7h1wY6pgG6Ge6e5mm33vE16Y5h%2B55Y2VRTUBwVJI2eU7IJButDP%2FGQYWefESQzkFpqOz%2F3ZIO%2BmTuOGATb3q%2B68Pi8URbtszCsl6PScyNsI%2BE%2B2D%2FemqIRoypMEg0A1DYZr0lDmdWQDj7Tm28wmqpZ%2BspF49S6PVt4vXpCh60W6R922nnh8E51WFG0JApSgxN6pYvhrUR544E4bl8X6tiMBIrnTIJSXU7BEzD6&X-Amz-Signature=12f571adb394d8c52cd5801199811aa0824b51150b4a773fc7fb78357f8ff4c8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TGJMJFAE%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144605Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEWtuIBF3opvJ5BnaAuwhxfmIASLJBk8xbKeJWku%2Bb3FAiBdSIaAw08swSlweXzKo99LtQOTJH3W%2FFTw8Zrt6dsdtiqIBAie%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhFj7j6X1KSppyIKlKtwDa7TggZLmNnK0gsHZ0iIqNMFD6TB2S2wNAPij%2Fj7qL644CUAixxE2URHO4WnZQ8Hz%2BPCf2jF4MvGxoi78CEUcV%2BJVQuwaSuO%2BMFnsiDXTRH5V7G4ZndjSQVcE8qaqzggaJaCeovUwStwvTP1aDIyQshe1owkBu0Q2d38GmGe7C8EZ51EXl0xcQ0hs3mObvzLi6EEMkfSjzrIFibZHboOD4XfhiMZe65kUBhTExtKPBTY9bKqfyAwAbLVFfyNlv3xrO0phmr5B2USQjZ0BwGydm6QRFVXB6BuYrObKGD1NtHxvDXjtIeiru%2Fl5VoHdm%2FkXtkDjdE86uTGOu1FbabojoJhXUDPk1UrvZRyDlpQ150cDO3XRQP%2BnvY%2BOXcLwi2WZSGMTM5%2BJGmHPrQsPsTxJEs%2F6pcLwmWHlnQ6F8%2BMmL5Zb6EuCsl5n6lTxL57Vf6C9bRxfcvo%2FrmymEZL0WAoYV%2Baesv%2FtZs4CN9Bkufe8TQQ364VteYnOp2rGP7wk3w97lq7LsI9ub%2BwwD4ZqeALmlQi3OfYKHJjbo37Mztscu12%2FZ9%2BnmwNilRJ3zQu3gw%2Bz%2B78ekKvmlxchg1m1%2F0FlEL0M0T8LuPHLIo6ZmAioe5yo3fkg9YJQBQCCozow8r7h1wY6pgG6Ge6e5mm33vE16Y5h%2B55Y2VRTUBwVJI2eU7IJButDP%2FGQYWefESQzkFpqOz%2F3ZIO%2BmTuOGATb3q%2B68Pi8URbtszCsl6PScyNsI%2BE%2B2D%2FemqIRoypMEg0A1DYZr0lDmdWQDj7Tm28wmqpZ%2BspF49S6PVt4vXpCh60W6R922nnh8E51WFG0JApSgxN6pYvhrUR544E4bl8X6tiMBIrnTIJSXU7BEzD6&X-Amz-Signature=b84604109d08ba3dd5280d88a8c6a9fe679ddabbc5be2fd7ba8fa24ec7822eef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466URWHX6JG%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144606Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCy%2FR1N%2FjBBTunhsXN6%2F0c1bpEd95K9FyGqHaWsizWZbQIgWlDk8enqlpJgqTRSy0TmGGn8SzqxLQ7%2BC2PBOmMHtngqiAQInv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGerWL4OWNPpSNHo%2BCrcA0r9lpVDv0Hb3IRpnuIrlUhR960x0qiw4NnkRJtgXenbU33NNuuUGasCXBbzNlrvYPE8ZZgi%2FiLbk%2BttnT5ufJrd8PdF%2FboFYWpHcDQcV589HSLMobZ%2B%2FVNO8mVv33hP4cxJN01WYeNjoFbdoVXaEb%2BAHkAPDrxP8FmCYAFJRVNp%2F2qsdgLss5Ot2yMBxq%2BmfzSZERhgDkZnzy9SPtVkAbX%2FkloE%2BHkNZ42PxFH6vTSSHrYZHw5f2b4I4rwigBbi3bdRbHcLNOPlE0xhhnx3HwnAcUuWfCpFeJrbxDfrcWAPlnnLDl5Kh9%2B8UvFph7iuKvSuarv06lEYUR0%2F9ezu%2B62ctQ6CcNSN%2FZBqGP7CkchyMsn1m%2FyLlP3oRM9yoN1PMMZKnLoRVDzbQKiKdHexZVRRhbn21mzHF%2B1ov9fqwRAsP3lVJH3Tjtx2cuzRBp7bpmfVgu%2FuvSGrMt2yZiGF2O6klZKnonl7G3bnifNlQ9WdY7GgvxIMeXMhGg%2FCKb8LIRignHt3pFU8PDFZYQx6Z5oC489ZLuIv4YyB6qjeN5%2BpqOjtLvGSKUAQ9bGw0LxG43z8cL0iebbgQIsbvAy70bVyRzIVptQF7Ai4MGO%2FC%2BMtiVDQu1g4iZx1Fl3RMJC94dcGOqUB1bAYJyItOchxFf33Q6UpLqr3HZO9J%2B45NI4zZ%2BULB%2BBmFgJPFLcVaTLV4zGZzQCxM4jveuL%2Fk%2B2JzxNvaYTnEcxYaOzM%2F%2FXYYGN4JuSmEu11vX%2BBC2vi5jeOuUAW1FozLbEmtS5UHMl95cBE7pJCPcrJT3wjHwAyDYJ%2BPI1uRzw1BxEW%2Bqy3vrR3n78Qm%2Bl58O8V0vZhPyY7Cy80gJbZAuII3paX&X-Amz-Signature=690c394dd106457f62c6e51e3cad544751f4889d6411784c8523c0f7e2465608&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QGPXFG42%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144606Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDaG2H7O8Z5gYVT3Dls0289ZNnaLi4OyBhcVpSbyVpH9AIhAIQWpNKRCaHERoF1mPT8eKLTdFJqepODbHiKoSSQwRynKogECJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy%2Fr8NO%2BuoloMdNP08q3AOsgUFrLGkPEvk15n6CjYFOB%2Fbjsxg3sDVwXMScrUl2gICS0APkE1LEpLKpklRdOVMbERvFrvn7a02GlhryUHy2uCu3uBd0zNcp8R1Xfb65CTqhEL5GFOC%2BTVVG5uu7ybXxDZY9UYqyP3EbKt4LmZycComA%2FWzB4HhIqa5yW9dqyrSoxoff4BC86UVvkTNjuHw2wCL%2FtUoX4u13pPRMqnz3BReh4N3ADvLKRXhhi%2BZGBB0TUW%2Blx35a6jROJOv%2FKDHAVNqDJJyMeh%2Fq6Ljjqe51lw8XyxCNsbcssd1Ap2wlWQ0io%2FU40nnm%2FSB0ZyJCUiakTwjs%2B0E7kjtidC1LwDIhksNy%2Bc1BwMJjhGzBrnZPyNXvBYE92Ou1w37NNCKpm7A%2BmLqTWNugDAjMX8RDrOdHWEU5peNGoAAgfZMY0BJT9%2Fbmd7EBxHGExd44HG51oRrZnSboY0Vxqn1C%2Bzosx2i%2FRL2vt4QIwfFvKESHu3fkeEzUEs2yKngRD%2BDwbzKrlT44sSEcp9nt17yxdsBgOXxRcp7aXn1N4PpiBOnopSHd%2FegNS9nwiLX46lnJaEhXd8NsJ7A1ShkVXINTUizGY1LqLNTs49LSo%2Bo7zPMgbboiXgcVMHyK3pHMm8PqTzC6veHXBjqkAaOP62vSlU3hH71S4OOG7tHltK%2BztkLtvJ3PPtcyPJmMtMvmw7Gq25NlQPm0zeV13GgxijZ60mUs3gauc8KCEFXSubWQIfCaJGSxJh6TX43%2BJYP8SPkysxeZbJpZzpTuQzsNlHCP6SOb1aHC2rj5r7VkwYxU3y4TJp6qKZKYfbXiuHVeylp67XS350x4fuvlmBQf3hclZ2MBG9%2FY5cNJM%2FSIwAac&X-Amz-Signature=813dfd71faba119a7590970f0017104c5d384881a3980be12875166cb9fb205e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QGPXFG42%2F20261114%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261114T144606Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDaG2H7O8Z5gYVT3Dls0289ZNnaLi4OyBhcVpSbyVpH9AIhAIQWpNKRCaHERoF1mPT8eKLTdFJqepODbHiKoSSQwRynKogECJ7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy%2Fr8NO%2BuoloMdNP08q3AOsgUFrLGkPEvk15n6CjYFOB%2Fbjsxg3sDVwXMScrUl2gICS0APkE1LEpLKpklRdOVMbERvFrvn7a02GlhryUHy2uCu3uBd0zNcp8R1Xfb65CTqhEL5GFOC%2BTVVG5uu7ybXxDZY9UYqyP3EbKt4LmZycComA%2FWzB4HhIqa5yW9dqyrSoxoff4BC86UVvkTNjuHw2wCL%2FtUoX4u13pPRMqnz3BReh4N3ADvLKRXhhi%2BZGBB0TUW%2Blx35a6jROJOv%2FKDHAVNqDJJyMeh%2Fq6Ljjqe51lw8XyxCNsbcssd1Ap2wlWQ0io%2FU40nnm%2FSB0ZyJCUiakTwjs%2B0E7kjtidC1LwDIhksNy%2Bc1BwMJjhGzBrnZPyNXvBYE92Ou1w37NNCKpm7A%2BmLqTWNugDAjMX8RDrOdHWEU5peNGoAAgfZMY0BJT9%2Fbmd7EBxHGExd44HG51oRrZnSboY0Vxqn1C%2Bzosx2i%2FRL2vt4QIwfFvKESHu3fkeEzUEs2yKngRD%2BDwbzKrlT44sSEcp9nt17yxdsBgOXxRcp7aXn1N4PpiBOnopSHd%2FegNS9nwiLX46lnJaEhXd8NsJ7A1ShkVXINTUizGY1LqLNTs49LSo%2Bo7zPMgbboiXgcVMHyK3pHMm8PqTzC6veHXBjqkAaOP62vSlU3hH71S4OOG7tHltK%2BztkLtvJ3PPtcyPJmMtMvmw7Gq25NlQPm0zeV13GgxijZ60mUs3gauc8KCEFXSubWQIfCaJGSxJh6TX43%2BJYP8SPkysxeZbJpZzpTuQzsNlHCP6SOb1aHC2rj5r7VkwYxU3y4TJp6qKZKYfbXiuHVeylp67XS350x4fuvlmBQf3hclZ2MBG9%2FY5cNJM%2FSIwAac&X-Amz-Signature=b2ef3a0b0d5a85b0bc935636f1f31d7e8c23a8bd4cd73b7d17869880d25cdc88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
