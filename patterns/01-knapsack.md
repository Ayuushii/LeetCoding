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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646DMVFG6%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIDUagA2F1l6WCjVRr2vJr6MvwAW%2B%2B6tr0zAfRuyZL%2Ft0AiEAwYoWPqmMlcur8wsjH%2BrtkFcvlIgv6amKk4RSNvXt%2F5gq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDOSV0lLVrfNthLA9SCrcA6yuzGrC9lpykXpfxFOzoCTojhP2hpo%2B%2FktUeJNEht%2BFzshKfFn8ZkcCWou%2F4URg77jYZxO%2BXL4OSv8l4ZuwEAEqPGSB135E0Hr4b%2BHDrXX0OfVReJQZf2orMO6g3w1QvzG3nQsmAyjZDwc1FpH9306wnDLexLAAz38YdTknQRN%2B3sdK0Lj5ixYG73I1AgGZKpZCAIY0Kp34iVrPkcif5gIzYfFIuqiii2oWORUDsLEOfgevEaVWgU8HjStqHQIzIZlsaNMofFUvQlA%2B9OGAqwE%2BVl1%2BVSsSGPNP84lrkgibrFulret3NPoIU6mTK9kZxXiwTZo%2FqFqdLFec8BjwJ7T0SSIEPL9mcfc37OT7rVs%2BBPBofCqhBnX7e4wJRLcxpqXWMqAuWl2jvbtoHoFXGMkOJzIXyZOzGF4twB2WrCFvsKTPnlzsIYWTP5AG13cedPT14cf6KAoojSCS2FSG8RcueF3giZUYCz4cqn5bnVKxoUmhMcSlDnjEeKCvLuwP5KAZykEUt5noQWq216c8NFbYZD1QCGPmryK7scAFJmjoAHKIwuav15Wpg3%2FfdioQM6WPnYsXY%2FmG2oB1K09YIqAA3epekXu2L6DtT6IJaQeVAamB1feXnzzkuUn2MJLk9dAGOqUBbIha65kw%2BP8XJcgAp2oBaQkwzB9F8SIFAVdsC6LgrdP%2FL%2FLcZviGs3BgM6ZDklJw5IUyV%2FCwnNNINm6D7I63nFABdxcXyF%2BVWtXY1s9HI9rRr1%2BUHNUJdL5kySW1sFHPhwc9QcIuHn56sqJOM6cG2a%2BHKLBKIrtEHDf7Yt7ZRkqWi7qLEDHjwPb%2FxpieNiOQDRWOWrjXoZh2iz24K%2BQcVG7cSnim&X-Amz-Signature=ddbfa42c5af18c9b4c0b130770ac2298fee6ade929b6f3a66f2d076755e80c50&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646DMVFG6%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIDUagA2F1l6WCjVRr2vJr6MvwAW%2B%2B6tr0zAfRuyZL%2Ft0AiEAwYoWPqmMlcur8wsjH%2BrtkFcvlIgv6amKk4RSNvXt%2F5gq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDOSV0lLVrfNthLA9SCrcA6yuzGrC9lpykXpfxFOzoCTojhP2hpo%2B%2FktUeJNEht%2BFzshKfFn8ZkcCWou%2F4URg77jYZxO%2BXL4OSv8l4ZuwEAEqPGSB135E0Hr4b%2BHDrXX0OfVReJQZf2orMO6g3w1QvzG3nQsmAyjZDwc1FpH9306wnDLexLAAz38YdTknQRN%2B3sdK0Lj5ixYG73I1AgGZKpZCAIY0Kp34iVrPkcif5gIzYfFIuqiii2oWORUDsLEOfgevEaVWgU8HjStqHQIzIZlsaNMofFUvQlA%2B9OGAqwE%2BVl1%2BVSsSGPNP84lrkgibrFulret3NPoIU6mTK9kZxXiwTZo%2FqFqdLFec8BjwJ7T0SSIEPL9mcfc37OT7rVs%2BBPBofCqhBnX7e4wJRLcxpqXWMqAuWl2jvbtoHoFXGMkOJzIXyZOzGF4twB2WrCFvsKTPnlzsIYWTP5AG13cedPT14cf6KAoojSCS2FSG8RcueF3giZUYCz4cqn5bnVKxoUmhMcSlDnjEeKCvLuwP5KAZykEUt5noQWq216c8NFbYZD1QCGPmryK7scAFJmjoAHKIwuav15Wpg3%2FfdioQM6WPnYsXY%2FmG2oB1K09YIqAA3epekXu2L6DtT6IJaQeVAamB1feXnzzkuUn2MJLk9dAGOqUBbIha65kw%2BP8XJcgAp2oBaQkwzB9F8SIFAVdsC6LgrdP%2FL%2FLcZviGs3BgM6ZDklJw5IUyV%2FCwnNNINm6D7I63nFABdxcXyF%2BVWtXY1s9HI9rRr1%2BUHNUJdL5kySW1sFHPhwc9QcIuHn56sqJOM6cG2a%2BHKLBKIrtEHDf7Yt7ZRkqWi7qLEDHjwPb%2FxpieNiOQDRWOWrjXoZh2iz24K%2BQcVG7cSnim&X-Amz-Signature=ba1d2b0c0305465e20f91d4353af117b8335e050306c6ff2943bc9417a8f4b12&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646DMVFG6%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIDUagA2F1l6WCjVRr2vJr6MvwAW%2B%2B6tr0zAfRuyZL%2Ft0AiEAwYoWPqmMlcur8wsjH%2BrtkFcvlIgv6amKk4RSNvXt%2F5gq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDOSV0lLVrfNthLA9SCrcA6yuzGrC9lpykXpfxFOzoCTojhP2hpo%2B%2FktUeJNEht%2BFzshKfFn8ZkcCWou%2F4URg77jYZxO%2BXL4OSv8l4ZuwEAEqPGSB135E0Hr4b%2BHDrXX0OfVReJQZf2orMO6g3w1QvzG3nQsmAyjZDwc1FpH9306wnDLexLAAz38YdTknQRN%2B3sdK0Lj5ixYG73I1AgGZKpZCAIY0Kp34iVrPkcif5gIzYfFIuqiii2oWORUDsLEOfgevEaVWgU8HjStqHQIzIZlsaNMofFUvQlA%2B9OGAqwE%2BVl1%2BVSsSGPNP84lrkgibrFulret3NPoIU6mTK9kZxXiwTZo%2FqFqdLFec8BjwJ7T0SSIEPL9mcfc37OT7rVs%2BBPBofCqhBnX7e4wJRLcxpqXWMqAuWl2jvbtoHoFXGMkOJzIXyZOzGF4twB2WrCFvsKTPnlzsIYWTP5AG13cedPT14cf6KAoojSCS2FSG8RcueF3giZUYCz4cqn5bnVKxoUmhMcSlDnjEeKCvLuwP5KAZykEUt5noQWq216c8NFbYZD1QCGPmryK7scAFJmjoAHKIwuav15Wpg3%2FfdioQM6WPnYsXY%2FmG2oB1K09YIqAA3epekXu2L6DtT6IJaQeVAamB1feXnzzkuUn2MJLk9dAGOqUBbIha65kw%2BP8XJcgAp2oBaQkwzB9F8SIFAVdsC6LgrdP%2FL%2FLcZviGs3BgM6ZDklJw5IUyV%2FCwnNNINm6D7I63nFABdxcXyF%2BVWtXY1s9HI9rRr1%2BUHNUJdL5kySW1sFHPhwc9QcIuHn56sqJOM6cG2a%2BHKLBKIrtEHDf7Yt7ZRkqWi7qLEDHjwPb%2FxpieNiOQDRWOWrjXoZh2iz24K%2BQcVG7cSnim&X-Amz-Signature=687780bd94df68036c7693714605a6aaeaab54b12ca602ee5a4ea5d69e3fec9f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YZCAAKIT%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIBzv%2Fu8ABpbQMv6pF7wHgdf0S%2F4%2FZ9a2%2BN4NOrsXiVXcAiEA3IsW8u%2Fjk1oAJKtZ1whUgkthNix6pCcvbyr%2BQsR3wtMq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDI1UCuE%2BvIVBY3gFNCrcAxwXcFbbweevOjotTuoVwDKfyLoPCEXV5ImEPscPZdRM0LktwgCMOUvDLqV0XLtHmDoUPQ5UJ7bfkUKrpQqskotU8sKzV06EKoxxGfHt%2FxsafJXFgouDG74Yr71nH4jHFD1c6IqPeg7ubwz6uX63G%2F9vLz8UnJaP25nweyg5SyxX1EXRUPCz8muR2%2Fuz9dn5gxzTB902z8sVRDDWLj5cG0B5ef%2F6%2BYPbyHIceQbQqX%2FI4VmXlOYKoJWkOS%2BlEBuO0YR4p3og%2FlbIfYqA8b2HtlCO6vDxr71rvYHayysUNV3YWs%2BQm3AOWjwoMsrxwZVPKOlioJ%2BckRQ69OUlbknHGsnJXGJbu0MXEwhrGO6ZFg6a9ZBOFKV3wJwjx%2BTQmFIpNMR4h8%2FuW%2B5ItwiWc8cEDzvu1R5u2fnzGPOSFlP%2BK8NtmyxlCUI0aKghuBHplFnWMna0mvgoY0is9DdXwpnIZ0wC3o%2BO9lAGmrD844HBkgAabK9T8QrdoSkye6mbVBti4MYaNQoAQX6Ecn%2FodWD27b5W539D5Yw8UVOn811x8nS2FStAPzQZUudfE6P5hI2EwpfYvVqs6gb%2BP2KBfg7fxG%2FOTXFhb1VETHNI1buda%2B2Gv3FjJx00b93qiE7aMKnm9dAGOqUBH2JzBe1zo7qpzK%2Fov%2BPxgBeMMNhsuzT2%2B%2Bq9CjR1XkvQr00fw6y3gbzRQe9Zytr7Y7XKGPnVk05N9xiREanPKKMbk0rYf%2Bn15sqCtoEH9Y2Y6znV9Hodau910aKvQ03ClJY7s8DAEmnrEXG11QYNqJnuaiBxv%2B%2BOWPfI%2BOGPzdnZcMmU7tWyiG0L5Bjxf69JLGu%2BQbMAnLikv2npNSK7jR3V%2BW0Y&X-Amz-Signature=a41c32c5f225881962fcd8ee754dd464437ba177a377b9a7c0cc79979ccbb16a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YZCAAKIT%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIBzv%2Fu8ABpbQMv6pF7wHgdf0S%2F4%2FZ9a2%2BN4NOrsXiVXcAiEA3IsW8u%2Fjk1oAJKtZ1whUgkthNix6pCcvbyr%2BQsR3wtMq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDI1UCuE%2BvIVBY3gFNCrcAxwXcFbbweevOjotTuoVwDKfyLoPCEXV5ImEPscPZdRM0LktwgCMOUvDLqV0XLtHmDoUPQ5UJ7bfkUKrpQqskotU8sKzV06EKoxxGfHt%2FxsafJXFgouDG74Yr71nH4jHFD1c6IqPeg7ubwz6uX63G%2F9vLz8UnJaP25nweyg5SyxX1EXRUPCz8muR2%2Fuz9dn5gxzTB902z8sVRDDWLj5cG0B5ef%2F6%2BYPbyHIceQbQqX%2FI4VmXlOYKoJWkOS%2BlEBuO0YR4p3og%2FlbIfYqA8b2HtlCO6vDxr71rvYHayysUNV3YWs%2BQm3AOWjwoMsrxwZVPKOlioJ%2BckRQ69OUlbknHGsnJXGJbu0MXEwhrGO6ZFg6a9ZBOFKV3wJwjx%2BTQmFIpNMR4h8%2FuW%2B5ItwiWc8cEDzvu1R5u2fnzGPOSFlP%2BK8NtmyxlCUI0aKghuBHplFnWMna0mvgoY0is9DdXwpnIZ0wC3o%2BO9lAGmrD844HBkgAabK9T8QrdoSkye6mbVBti4MYaNQoAQX6Ecn%2FodWD27b5W539D5Yw8UVOn811x8nS2FStAPzQZUudfE6P5hI2EwpfYvVqs6gb%2BP2KBfg7fxG%2FOTXFhb1VETHNI1buda%2B2Gv3FjJx00b93qiE7aMKnm9dAGOqUBH2JzBe1zo7qpzK%2Fov%2BPxgBeMMNhsuzT2%2B%2Bq9CjR1XkvQr00fw6y3gbzRQe9Zytr7Y7XKGPnVk05N9xiREanPKKMbk0rYf%2Bn15sqCtoEH9Y2Y6znV9Hodau910aKvQ03ClJY7s8DAEmnrEXG11QYNqJnuaiBxv%2B%2BOWPfI%2BOGPzdnZcMmU7tWyiG0L5Bjxf69JLGu%2BQbMAnLikv2npNSK7jR3V%2BW0Y&X-Amz-Signature=8baa20616d9bf55f272aa80c50177cbe4fb85e0e102a53ebc571abc9e1746cd6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YZCAAKIT%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIBzv%2Fu8ABpbQMv6pF7wHgdf0S%2F4%2FZ9a2%2BN4NOrsXiVXcAiEA3IsW8u%2Fjk1oAJKtZ1whUgkthNix6pCcvbyr%2BQsR3wtMq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDI1UCuE%2BvIVBY3gFNCrcAxwXcFbbweevOjotTuoVwDKfyLoPCEXV5ImEPscPZdRM0LktwgCMOUvDLqV0XLtHmDoUPQ5UJ7bfkUKrpQqskotU8sKzV06EKoxxGfHt%2FxsafJXFgouDG74Yr71nH4jHFD1c6IqPeg7ubwz6uX63G%2F9vLz8UnJaP25nweyg5SyxX1EXRUPCz8muR2%2Fuz9dn5gxzTB902z8sVRDDWLj5cG0B5ef%2F6%2BYPbyHIceQbQqX%2FI4VmXlOYKoJWkOS%2BlEBuO0YR4p3og%2FlbIfYqA8b2HtlCO6vDxr71rvYHayysUNV3YWs%2BQm3AOWjwoMsrxwZVPKOlioJ%2BckRQ69OUlbknHGsnJXGJbu0MXEwhrGO6ZFg6a9ZBOFKV3wJwjx%2BTQmFIpNMR4h8%2FuW%2B5ItwiWc8cEDzvu1R5u2fnzGPOSFlP%2BK8NtmyxlCUI0aKghuBHplFnWMna0mvgoY0is9DdXwpnIZ0wC3o%2BO9lAGmrD844HBkgAabK9T8QrdoSkye6mbVBti4MYaNQoAQX6Ecn%2FodWD27b5W539D5Yw8UVOn811x8nS2FStAPzQZUudfE6P5hI2EwpfYvVqs6gb%2BP2KBfg7fxG%2FOTXFhb1VETHNI1buda%2B2Gv3FjJx00b93qiE7aMKnm9dAGOqUBH2JzBe1zo7qpzK%2Fov%2BPxgBeMMNhsuzT2%2B%2Bq9CjR1XkvQr00fw6y3gbzRQe9Zytr7Y7XKGPnVk05N9xiREanPKKMbk0rYf%2Bn15sqCtoEH9Y2Y6znV9Hodau910aKvQ03ClJY7s8DAEmnrEXG11QYNqJnuaiBxv%2B%2BOWPfI%2BOGPzdnZcMmU7tWyiG0L5Bjxf69JLGu%2BQbMAnLikv2npNSK7jR3V%2BW0Y&X-Amz-Signature=610e846224a8de105aaf04c074be2d0772106e3b9d1d8189b8c6427a6961cf2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YZCAAKIT%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIBzv%2Fu8ABpbQMv6pF7wHgdf0S%2F4%2FZ9a2%2BN4NOrsXiVXcAiEA3IsW8u%2Fjk1oAJKtZ1whUgkthNix6pCcvbyr%2BQsR3wtMq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDI1UCuE%2BvIVBY3gFNCrcAxwXcFbbweevOjotTuoVwDKfyLoPCEXV5ImEPscPZdRM0LktwgCMOUvDLqV0XLtHmDoUPQ5UJ7bfkUKrpQqskotU8sKzV06EKoxxGfHt%2FxsafJXFgouDG74Yr71nH4jHFD1c6IqPeg7ubwz6uX63G%2F9vLz8UnJaP25nweyg5SyxX1EXRUPCz8muR2%2Fuz9dn5gxzTB902z8sVRDDWLj5cG0B5ef%2F6%2BYPbyHIceQbQqX%2FI4VmXlOYKoJWkOS%2BlEBuO0YR4p3og%2FlbIfYqA8b2HtlCO6vDxr71rvYHayysUNV3YWs%2BQm3AOWjwoMsrxwZVPKOlioJ%2BckRQ69OUlbknHGsnJXGJbu0MXEwhrGO6ZFg6a9ZBOFKV3wJwjx%2BTQmFIpNMR4h8%2FuW%2B5ItwiWc8cEDzvu1R5u2fnzGPOSFlP%2BK8NtmyxlCUI0aKghuBHplFnWMna0mvgoY0is9DdXwpnIZ0wC3o%2BO9lAGmrD844HBkgAabK9T8QrdoSkye6mbVBti4MYaNQoAQX6Ecn%2FodWD27b5W539D5Yw8UVOn811x8nS2FStAPzQZUudfE6P5hI2EwpfYvVqs6gb%2BP2KBfg7fxG%2FOTXFhb1VETHNI1buda%2B2Gv3FjJx00b93qiE7aMKnm9dAGOqUBH2JzBe1zo7qpzK%2Fov%2BPxgBeMMNhsuzT2%2B%2Bq9CjR1XkvQr00fw6y3gbzRQe9Zytr7Y7XKGPnVk05N9xiREanPKKMbk0rYf%2Bn15sqCtoEH9Y2Y6znV9Hodau910aKvQ03ClJY7s8DAEmnrEXG11QYNqJnuaiBxv%2B%2BOWPfI%2BOGPzdnZcMmU7tWyiG0L5Bjxf69JLGu%2BQbMAnLikv2npNSK7jR3V%2BW0Y&X-Amz-Signature=53d68b31e7924e39c04bf98b90cbd0ea90f02b1b00c8c3bff3769ae50c4b522e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XFYZ3LSO%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133448Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJHMEUCIEgjIGMvRmoR0BEtr0LdHMoxjhtPzsdYLR3zPkyVS0gVAiEA97NQlIMtJ9qe2NfOnZPdx1KUH34DpkcMKlXcB2f5A6Mq%2FwMIDRAAGgw2Mzc0MjMxODM4MDUiDO%2FUwdfaaEetZ83bsyrcA947nl%2FtZGPmwjTrzNdPe9MTQUT%2Bi9%2FRGJo8Evo%2FIf%2FQC9EiAp7Qy0x6CLofMmtD2Wonf3Spzo7F3dC9etV8Gg1M9lA10j%2BTCwSd19X8y%2BXonGGrjiYM2hyS1y3TkQby7vsAjGxGmH0fw3wcE5KEUBisn%2BthXBucIDEeKn%2FGA5qLn6%2BCDq2sLO7v20NIvrkkWyFw4c3wiShUlgmAhhOgOMb8WibyTG6qzv5Q54QM2mOnaXX0Tztfk7nQCtqOLBniMeV5ecXZxZh0lPIIjLUQ4R3NTQCh0McuLDBdaxGP1V9lRYZKi4oA7DxAMJCmU1i9OoYLMAv%2Bn%2F2NzyIXOa1jX%2BcTUG3kgcEahil7HJLjx7AoBbsv8u73mrz4x2ALAPk9oe3N8cRtxtdJEpUdthX5keT%2FkfgqqbcfwnMB%2F31l%2B1Dgot3%2BXso4hN9DoBx1chzL8WA%2F%2BmBuMUt9poaalSUC%2Fb3qSXag2diHF0gPcSsdTbuWyOoxJRHnjR4ihdqVp7%2Fm38Ovax7fAEkUjfgVuOj5zyg%2Bc6Rb0l%2F3qDwQ7Q4D2O5VvzoXSL3zpcjKSoBQKippSSabi3JN4I045%2FNLpb5m9XMStJIXb2aqTnmrnXs0Memjbr41a1sYVu4dh672MPns9dAGOqUBfXYRS%2Bf8UAvXE89SlrydynLm7Ei%2B6h3srFDk6dpWdKRz795gYqsisOmipgG2Irnr3by%2Fjgzaw6cSztOxZRTE%2B6h3IIC7sJQNORJzB%2Ff2mAE7glpqkQmowSJU7kelh7yccgmIs%2FKpFYAXtL2V4xoAwf40wGcRW2IovMQo314U8ewq6FYHl7r6WfBQCL2%2BAj8SGm7MwgpnG9brOfu70i3Qy3Elzs0E&X-Amz-Signature=f4a67fd6110e136e2f7e02a7875983da5ae1948952524b469784f122407ff1b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZGZKFELX%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133448Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJGMEQCIA9jfilsZvbsRrY1gQ05jChanY2DwWMi6vVxDqlYQ4ArAiAGCricn4gtgx9T9vgxpg6oPmiWFMumNkPUhjbCnVsamCr%2FAwgNEAAaDDYzNzQyMzE4MzgwNSIMIqPopT3f5trCflV%2FKtwD%2FxMRUnGpld9YBRwxk1iZTp6rp1%2FvUXYs4KqaZyMCMBTOpU5KT1Qoq%2F6uTkJtJU37rgdxly1OK9Fj%2FFbUJ5KXPw5pq5RDfywRlCY8M6MnK%2B6T601MCuJRe%2Fxq1ZRLXDi5PqTM8Wu2Nmbmz3VUPoRAvCI5agO%2FrJHLbwlyGUN5ZP8%2BUr%2F9YzFj5saTxL1sctG0jbpcAM6JhtrX3QoLd%2FG33C15Uqcg7HdzsuXKL7rnhfYfngc31LwxF3sbrY%2BPx94AjmnSDBT3mYPRtfwRgghxOVjSNu54NRwjSrD6qbCDTxKx%2Bicfk3N%2BD18nuNOSajWrQWpC3tQuHoh9oUJ185Ka69BNGRAqym9ZS71Gu3Omg2QtCZbmmZhzQA5WNx%2BkfhFsUtWi6rfrrGq5wkosaAjRrJMmuH38jocKWPztNNuhNrWLVoVGWZ03lDyDx0%2Br%2Fx6Isk76r05Ij4TmVcIhoEvLhV3iixjyEOn6antJeFBu1qoSa%2Ft9Y7rc9heyUZxwOV76X5IQ3L734PUbQdXwIzMP2lWpMHC0tCv%2BaL7j1LdNxwDbcM2vuubYIKwOHa0TY%2FEAnj8lUtvfeV3fljPjNN54sh5EEjn0zQLoiJOodho2G4cHKGAtjdOopfFaKaAwkuT10AY6pgFsv%2FzQTqNTqS8nh5e5jWSud3DR6UyDCyWspbekW3TS6U3uCJCkUFKwEVXz7i2PxgOgYSyMRq0MDEUQ4JS%2BriGq8yEYjZsQJS9aoAvkc44O%2BMS1npn560bZ4mCo%2FZR17FdOUrwg2lbA7nc%2F%2F8XW9y3VUPECIISY1aZf4P8ZgJhJxoWhTl4SYfTB1OC0OH4VzJT27FpVOG0sTqsGvNpWWvUsRLSqttNC&X-Amz-Signature=cd5ba138455d7f92953097187a7886775ab6f1ab7156f6444d5e2d09a79a8a73&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZGZKFELX%2F20260601%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260601T133448Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEQaCXVzLXdlc3QtMiJGMEQCIA9jfilsZvbsRrY1gQ05jChanY2DwWMi6vVxDqlYQ4ArAiAGCricn4gtgx9T9vgxpg6oPmiWFMumNkPUhjbCnVsamCr%2FAwgNEAAaDDYzNzQyMzE4MzgwNSIMIqPopT3f5trCflV%2FKtwD%2FxMRUnGpld9YBRwxk1iZTp6rp1%2FvUXYs4KqaZyMCMBTOpU5KT1Qoq%2F6uTkJtJU37rgdxly1OK9Fj%2FFbUJ5KXPw5pq5RDfywRlCY8M6MnK%2B6T601MCuJRe%2Fxq1ZRLXDi5PqTM8Wu2Nmbmz3VUPoRAvCI5agO%2FrJHLbwlyGUN5ZP8%2BUr%2F9YzFj5saTxL1sctG0jbpcAM6JhtrX3QoLd%2FG33C15Uqcg7HdzsuXKL7rnhfYfngc31LwxF3sbrY%2BPx94AjmnSDBT3mYPRtfwRgghxOVjSNu54NRwjSrD6qbCDTxKx%2Bicfk3N%2BD18nuNOSajWrQWpC3tQuHoh9oUJ185Ka69BNGRAqym9ZS71Gu3Omg2QtCZbmmZhzQA5WNx%2BkfhFsUtWi6rfrrGq5wkosaAjRrJMmuH38jocKWPztNNuhNrWLVoVGWZ03lDyDx0%2Br%2Fx6Isk76r05Ij4TmVcIhoEvLhV3iixjyEOn6antJeFBu1qoSa%2Ft9Y7rc9heyUZxwOV76X5IQ3L734PUbQdXwIzMP2lWpMHC0tCv%2BaL7j1LdNxwDbcM2vuubYIKwOHa0TY%2FEAnj8lUtvfeV3fljPjNN54sh5EEjn0zQLoiJOodho2G4cHKGAtjdOopfFaKaAwkuT10AY6pgFsv%2FzQTqNTqS8nh5e5jWSud3DR6UyDCyWspbekW3TS6U3uCJCkUFKwEVXz7i2PxgOgYSyMRq0MDEUQ4JS%2BriGq8yEYjZsQJS9aoAvkc44O%2BMS1npn560bZ4mCo%2FZR17FdOUrwg2lbA7nc%2F%2F8XW9y3VUPECIISY1aZf4P8ZgJhJxoWhTl4SYfTB1OC0OH4VzJT27FpVOG0sTqsGvNpWWvUsRLSqttNC&X-Amz-Signature=c3a88cf8a18106837f79d44161342e32dbedf8f7e3bd60be33a01f54d6da09b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
