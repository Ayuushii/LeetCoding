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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSVOB4UV%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDfWWrlUnH9aGddGe5M0Mcjpt2VUslk%2FEpSIb7wpukpQQIgfly3ZUKixTJI1V3kmSUUaUZog2g%2BFA1RoGepeYYCvBMq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDLpzlNra15VThqYudSrcA%2FWz%2BKlDKdjSAxyka%2FBNmP9UbqZgidipbdP1IwIIklaPrfnh8SE3FcLw20BiRQ4JoGQXGJ8N%2BtwCszXQAEgies1JNzFynx5ZyVp0cV%2B66KMPOQPPnqumuPDc%2B5hGsDgV4LEYsVx7CLQEOSvtOd1BMsNU9EO5LWVKaOdkQ1gsiJcDBAHZ5zJEPEp9V2kOaA%2FIwkkA7EHh1kocfRPYdiEpaLmuVw6XN8caMDWh3L%2FBUtFmoJeRc9R3AKSRuddLuD4Z7go7N%2FLKs6e2G8IbGzUbBlOo36SFsl77hBbTWZ21gU3bMV%2FyNW4iQZfJTQouqD2fJsbPDmOVZVuHTVENw9eLdF%2BvWikkiGMkjNJ6tHHBAT0r%2Bcu0i%2BSZVihMEfm1C%2Fz9lmibSwB9%2B2GBsv17RKJrN5i9eiDR0W0vIQvnIKwSpcaY40H4OipHDjX48MNMzhcuDEKIJ8FVps4k1jIPJCGAiiRp2Q2LL9kUS9VmdvBWqpreK3hX8TbWCOJVkkkp0LOgTP9I6rpDRpWrIQOQ%2BDRUNjtupPvWHpTr907GehSnYyH2cvqSonbiyhxO6BP%2BoZhzVPkPkmPXySbYxaFrRCygHXmevQLUb9IaNzx4GVH6OMYSTHGCx1gwM8LftbyrMNqBwNEGOqUBrORwYaA9ywo7ZYtlG2vZVrYNCIzUF53L4Aqn0PwnpoB661TGNB0GdoC3Ot1ZR5FGWtJHqr28tilk40HJeeyaxOvlkGSvldGzs0pX%2BLqxffZGYH%2Fm3nliaSwEAfLz5%2Bxvwi6h%2BjyIVJB1e%2B12%2FyzymmYzMujYQ9E%2BGhDx7sV%2FEUjT8v27YmyIi6pSKBkfTAIiGC5E%2BcFV99momZOM3ZZCznphs1KE&X-Amz-Signature=599a747f6aeaa9821ed114ba478348ac8ef2688b2bc396a716c87ace8826c92e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSVOB4UV%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDfWWrlUnH9aGddGe5M0Mcjpt2VUslk%2FEpSIb7wpukpQQIgfly3ZUKixTJI1V3kmSUUaUZog2g%2BFA1RoGepeYYCvBMq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDLpzlNra15VThqYudSrcA%2FWz%2BKlDKdjSAxyka%2FBNmP9UbqZgidipbdP1IwIIklaPrfnh8SE3FcLw20BiRQ4JoGQXGJ8N%2BtwCszXQAEgies1JNzFynx5ZyVp0cV%2B66KMPOQPPnqumuPDc%2B5hGsDgV4LEYsVx7CLQEOSvtOd1BMsNU9EO5LWVKaOdkQ1gsiJcDBAHZ5zJEPEp9V2kOaA%2FIwkkA7EHh1kocfRPYdiEpaLmuVw6XN8caMDWh3L%2FBUtFmoJeRc9R3AKSRuddLuD4Z7go7N%2FLKs6e2G8IbGzUbBlOo36SFsl77hBbTWZ21gU3bMV%2FyNW4iQZfJTQouqD2fJsbPDmOVZVuHTVENw9eLdF%2BvWikkiGMkjNJ6tHHBAT0r%2Bcu0i%2BSZVihMEfm1C%2Fz9lmibSwB9%2B2GBsv17RKJrN5i9eiDR0W0vIQvnIKwSpcaY40H4OipHDjX48MNMzhcuDEKIJ8FVps4k1jIPJCGAiiRp2Q2LL9kUS9VmdvBWqpreK3hX8TbWCOJVkkkp0LOgTP9I6rpDRpWrIQOQ%2BDRUNjtupPvWHpTr907GehSnYyH2cvqSonbiyhxO6BP%2BoZhzVPkPkmPXySbYxaFrRCygHXmevQLUb9IaNzx4GVH6OMYSTHGCx1gwM8LftbyrMNqBwNEGOqUBrORwYaA9ywo7ZYtlG2vZVrYNCIzUF53L4Aqn0PwnpoB661TGNB0GdoC3Ot1ZR5FGWtJHqr28tilk40HJeeyaxOvlkGSvldGzs0pX%2BLqxffZGYH%2Fm3nliaSwEAfLz5%2Bxvwi6h%2BjyIVJB1e%2B12%2FyzymmYzMujYQ9E%2BGhDx7sV%2FEUjT8v27YmyIi6pSKBkfTAIiGC5E%2BcFV99momZOM3ZZCznphs1KE&X-Amz-Signature=349a1a1603281d310c30a78cbc8a1382ae701ddd61131a581efbc0edb7c4534f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YSVOB4UV%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDfWWrlUnH9aGddGe5M0Mcjpt2VUslk%2FEpSIb7wpukpQQIgfly3ZUKixTJI1V3kmSUUaUZog2g%2BFA1RoGepeYYCvBMq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDLpzlNra15VThqYudSrcA%2FWz%2BKlDKdjSAxyka%2FBNmP9UbqZgidipbdP1IwIIklaPrfnh8SE3FcLw20BiRQ4JoGQXGJ8N%2BtwCszXQAEgies1JNzFynx5ZyVp0cV%2B66KMPOQPPnqumuPDc%2B5hGsDgV4LEYsVx7CLQEOSvtOd1BMsNU9EO5LWVKaOdkQ1gsiJcDBAHZ5zJEPEp9V2kOaA%2FIwkkA7EHh1kocfRPYdiEpaLmuVw6XN8caMDWh3L%2FBUtFmoJeRc9R3AKSRuddLuD4Z7go7N%2FLKs6e2G8IbGzUbBlOo36SFsl77hBbTWZ21gU3bMV%2FyNW4iQZfJTQouqD2fJsbPDmOVZVuHTVENw9eLdF%2BvWikkiGMkjNJ6tHHBAT0r%2Bcu0i%2BSZVihMEfm1C%2Fz9lmibSwB9%2B2GBsv17RKJrN5i9eiDR0W0vIQvnIKwSpcaY40H4OipHDjX48MNMzhcuDEKIJ8FVps4k1jIPJCGAiiRp2Q2LL9kUS9VmdvBWqpreK3hX8TbWCOJVkkkp0LOgTP9I6rpDRpWrIQOQ%2BDRUNjtupPvWHpTr907GehSnYyH2cvqSonbiyhxO6BP%2BoZhzVPkPkmPXySbYxaFrRCygHXmevQLUb9IaNzx4GVH6OMYSTHGCx1gwM8LftbyrMNqBwNEGOqUBrORwYaA9ywo7ZYtlG2vZVrYNCIzUF53L4Aqn0PwnpoB661TGNB0GdoC3Ot1ZR5FGWtJHqr28tilk40HJeeyaxOvlkGSvldGzs0pX%2BLqxffZGYH%2Fm3nliaSwEAfLz5%2Bxvwi6h%2BjyIVJB1e%2B12%2FyzymmYzMujYQ9E%2BGhDx7sV%2FEUjT8v27YmyIi6pSKBkfTAIiGC5E%2BcFV99momZOM3ZZCznphs1KE&X-Amz-Signature=870d56880f6366d0607485169b4d02b366004b9d7d4834c97ebd9c04b4a6b6be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GT4OVWH%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCIW%2BeDreFXXXBSLhseegFVhlqF7WVUEYcr%2FfxYHyP3LgIgKzYvK%2Fp8Hci63jMAjloDf%2Bx23V0ri14VlYaAXpCXMpkq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDMFcyKddd8Gudpsm6CrcA1FGFfUcaByEwJ5OlIJLaGP7pORj9wFMpSWUptZggJRLmPxXvbggEaGbxv%2BN0qpu1P6Kdyuvg%2FGM1iHDwKbm936ke0Dsgrb6dDhE846RWClLoNFNQYPaRCcWncs%2F5mSwDs7dI%2FtYvybLU0uKYw254%2BaccxBCmbiRTDpzwu8jtlEuDTfz%2F7cxRXG5%2F08VtIS3vfXVr4oS%2BCUyz41HgfEGWorTScGTph0AUMZ0P6WbcD6YVXpoXDTejjH0cur8cWVM%2Bd9U%2BI845qk6c%2FMqF%2Fn2RFh9TaI3fM689oiqc263LmNMFvQWHQJqns%2BRKR1UTFlb2bD%2B2eyETGxBjNJrHc5wGBVGOc%2F0C5AvGT83cMdL2gQ%2Fq92MPdZZmg2fXtamcYhLnBolikhW1AUTzHHv4MxpT3A%2F87MVzYH06dK1d9L4QXxteYANvZq%2FS6AmrKmB89MtdkU%2BdDGmzic4Je%2FNSSWaUU5YkBhB4%2FkWqkhWPB5kcto4B%2FFih9AtUImlkKuoeCMwnYQufMAn5soZHM7e79K4E7cBy9i7NeavDLbnQ5KCmIoicru3RUNZUly2T5ImdhXZa2u4QAXwlfoXyDIiHeJyA%2BFj%2BsN5PkZA0B0X0UIqP0dKJ76pQFGyZ%2BfS2nBfMK6AwNEGOqUBVAwRyeKkSqzlfIkz%2ByQUgkGIrsf%2FNRPOHH%2Bww0K7RcBSw2iDCE19rRUpYhbscMS%2BfxvUGmN1lxd4TlcFrBzKLyDgaSCSd5NzuhVMAv4gKWAf7vRn822%2BqsJ1C8bS7HB0WxfsKlGI5ZHiqn2K%2FZ9N71xAad%2BnsdkuCa%2FYkAp4GhBe8IWTYItQc53ms4nyaSQDi%2FcaPmszKwXP%2FWYRK8usWfM8GlgA&X-Amz-Signature=c9b9dabbaef37821de0cc6ab9f16678fa4dffb0e8cccd90f713204dd1396e0f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GT4OVWH%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCIW%2BeDreFXXXBSLhseegFVhlqF7WVUEYcr%2FfxYHyP3LgIgKzYvK%2Fp8Hci63jMAjloDf%2Bx23V0ri14VlYaAXpCXMpkq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDMFcyKddd8Gudpsm6CrcA1FGFfUcaByEwJ5OlIJLaGP7pORj9wFMpSWUptZggJRLmPxXvbggEaGbxv%2BN0qpu1P6Kdyuvg%2FGM1iHDwKbm936ke0Dsgrb6dDhE846RWClLoNFNQYPaRCcWncs%2F5mSwDs7dI%2FtYvybLU0uKYw254%2BaccxBCmbiRTDpzwu8jtlEuDTfz%2F7cxRXG5%2F08VtIS3vfXVr4oS%2BCUyz41HgfEGWorTScGTph0AUMZ0P6WbcD6YVXpoXDTejjH0cur8cWVM%2Bd9U%2BI845qk6c%2FMqF%2Fn2RFh9TaI3fM689oiqc263LmNMFvQWHQJqns%2BRKR1UTFlb2bD%2B2eyETGxBjNJrHc5wGBVGOc%2F0C5AvGT83cMdL2gQ%2Fq92MPdZZmg2fXtamcYhLnBolikhW1AUTzHHv4MxpT3A%2F87MVzYH06dK1d9L4QXxteYANvZq%2FS6AmrKmB89MtdkU%2BdDGmzic4Je%2FNSSWaUU5YkBhB4%2FkWqkhWPB5kcto4B%2FFih9AtUImlkKuoeCMwnYQufMAn5soZHM7e79K4E7cBy9i7NeavDLbnQ5KCmIoicru3RUNZUly2T5ImdhXZa2u4QAXwlfoXyDIiHeJyA%2BFj%2BsN5PkZA0B0X0UIqP0dKJ76pQFGyZ%2BfS2nBfMK6AwNEGOqUBVAwRyeKkSqzlfIkz%2ByQUgkGIrsf%2FNRPOHH%2Bww0K7RcBSw2iDCE19rRUpYhbscMS%2BfxvUGmN1lxd4TlcFrBzKLyDgaSCSd5NzuhVMAv4gKWAf7vRn822%2BqsJ1C8bS7HB0WxfsKlGI5ZHiqn2K%2FZ9N71xAad%2BnsdkuCa%2FYkAp4GhBe8IWTYItQc53ms4nyaSQDi%2FcaPmszKwXP%2FWYRK8usWfM8GlgA&X-Amz-Signature=2c08034ce25ff1752b5188b6f2e0220e95da0c54e3651884020d7bcbb02b6dfb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GT4OVWH%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCIW%2BeDreFXXXBSLhseegFVhlqF7WVUEYcr%2FfxYHyP3LgIgKzYvK%2Fp8Hci63jMAjloDf%2Bx23V0ri14VlYaAXpCXMpkq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDMFcyKddd8Gudpsm6CrcA1FGFfUcaByEwJ5OlIJLaGP7pORj9wFMpSWUptZggJRLmPxXvbggEaGbxv%2BN0qpu1P6Kdyuvg%2FGM1iHDwKbm936ke0Dsgrb6dDhE846RWClLoNFNQYPaRCcWncs%2F5mSwDs7dI%2FtYvybLU0uKYw254%2BaccxBCmbiRTDpzwu8jtlEuDTfz%2F7cxRXG5%2F08VtIS3vfXVr4oS%2BCUyz41HgfEGWorTScGTph0AUMZ0P6WbcD6YVXpoXDTejjH0cur8cWVM%2Bd9U%2BI845qk6c%2FMqF%2Fn2RFh9TaI3fM689oiqc263LmNMFvQWHQJqns%2BRKR1UTFlb2bD%2B2eyETGxBjNJrHc5wGBVGOc%2F0C5AvGT83cMdL2gQ%2Fq92MPdZZmg2fXtamcYhLnBolikhW1AUTzHHv4MxpT3A%2F87MVzYH06dK1d9L4QXxteYANvZq%2FS6AmrKmB89MtdkU%2BdDGmzic4Je%2FNSSWaUU5YkBhB4%2FkWqkhWPB5kcto4B%2FFih9AtUImlkKuoeCMwnYQufMAn5soZHM7e79K4E7cBy9i7NeavDLbnQ5KCmIoicru3RUNZUly2T5ImdhXZa2u4QAXwlfoXyDIiHeJyA%2BFj%2BsN5PkZA0B0X0UIqP0dKJ76pQFGyZ%2BfS2nBfMK6AwNEGOqUBVAwRyeKkSqzlfIkz%2ByQUgkGIrsf%2FNRPOHH%2Bww0K7RcBSw2iDCE19rRUpYhbscMS%2BfxvUGmN1lxd4TlcFrBzKLyDgaSCSd5NzuhVMAv4gKWAf7vRn822%2BqsJ1C8bS7HB0WxfsKlGI5ZHiqn2K%2FZ9N71xAad%2BnsdkuCa%2FYkAp4GhBe8IWTYItQc53ms4nyaSQDi%2FcaPmszKwXP%2FWYRK8usWfM8GlgA&X-Amz-Signature=64d4d691529df7681080564d63752d5fc4b422afa30c1c1057b875eeca06232a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666GT4OVWH%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135415Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCIW%2BeDreFXXXBSLhseegFVhlqF7WVUEYcr%2FfxYHyP3LgIgKzYvK%2Fp8Hci63jMAjloDf%2Bx23V0ri14VlYaAXpCXMpkq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDMFcyKddd8Gudpsm6CrcA1FGFfUcaByEwJ5OlIJLaGP7pORj9wFMpSWUptZggJRLmPxXvbggEaGbxv%2BN0qpu1P6Kdyuvg%2FGM1iHDwKbm936ke0Dsgrb6dDhE846RWClLoNFNQYPaRCcWncs%2F5mSwDs7dI%2FtYvybLU0uKYw254%2BaccxBCmbiRTDpzwu8jtlEuDTfz%2F7cxRXG5%2F08VtIS3vfXVr4oS%2BCUyz41HgfEGWorTScGTph0AUMZ0P6WbcD6YVXpoXDTejjH0cur8cWVM%2Bd9U%2BI845qk6c%2FMqF%2Fn2RFh9TaI3fM689oiqc263LmNMFvQWHQJqns%2BRKR1UTFlb2bD%2B2eyETGxBjNJrHc5wGBVGOc%2F0C5AvGT83cMdL2gQ%2Fq92MPdZZmg2fXtamcYhLnBolikhW1AUTzHHv4MxpT3A%2F87MVzYH06dK1d9L4QXxteYANvZq%2FS6AmrKmB89MtdkU%2BdDGmzic4Je%2FNSSWaUU5YkBhB4%2FkWqkhWPB5kcto4B%2FFih9AtUImlkKuoeCMwnYQufMAn5soZHM7e79K4E7cBy9i7NeavDLbnQ5KCmIoicru3RUNZUly2T5ImdhXZa2u4QAXwlfoXyDIiHeJyA%2BFj%2BsN5PkZA0B0X0UIqP0dKJ76pQFGyZ%2BfS2nBfMK6AwNEGOqUBVAwRyeKkSqzlfIkz%2ByQUgkGIrsf%2FNRPOHH%2Bww0K7RcBSw2iDCE19rRUpYhbscMS%2BfxvUGmN1lxd4TlcFrBzKLyDgaSCSd5NzuhVMAv4gKWAf7vRn822%2BqsJ1C8bS7HB0WxfsKlGI5ZHiqn2K%2FZ9N71xAad%2BnsdkuCa%2FYkAp4GhBe8IWTYItQc53ms4nyaSQDi%2FcaPmszKwXP%2FWYRK8usWfM8GlgA&X-Amz-Signature=f8e5b89163d973a27364949b1f5e17aa68f3a082b6b71ff2a21c960122951fdc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YNYZBROJ%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135416Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIE1rjf4fXHVIKR903lmbhanVjme6BNXtbiIclRVQpzXEAiB%2F96iSjCdvolpJ0FXUmrn0EH%2BmByep4us34YAtyyc7ZCr%2FAwhfEAAaDDYzNzQyMzE4MzgwNSIMNtnSovqCRf1bTRgUKtwDKpEn35i77dHH9UwQf5FlihWy94AGn2%2BO9WSWwg9NLjyuSn6cuxve6%2Fjs%2B2ws3Hqn%2FRJKmnE0aDq7ffs%2FX6Hz52X54CaFqmJ68xGq77z2K8llpF9TVGouvuQq88lxNlu29ctToZUmEnszPyBVLDx6aqQE%2FgybixEY5E2OHgZ8fHwfflQut0YNfk1zIPvcqKcypNbrs3IjwuiYOAMZ5oTAQ4ilYm%2FQubb4N3PCs186KIG9LMZvzwbWbMffb7FVzH%2BG15WJdEnkibDkABQcRVYz5w5fHaUxVXxbBlx6AA%2B4SKjpD117XFqSwLbuwzagqKCpC9xB%2FYd7ZPQnQasGhTac1yEwiFScmFp4nxmKoydYpwy%2FuEQ4BkK0FGiifL2jHvnNDIvpx880kjm0GzSw614EwnosdY20tNtOccdWpG%2B1Vd2OpPgx0VEWz8R%2BlbcVtbOYzAvx3Va2jYRGIl1gnwKUeFvIV9FZQfCwCLG5Ejbvu0dn6m8lKgHbiD2wt8kxhfqTUH9UKpqBngQZuTMV%2Bf3sTVMrlhrAKx%2FgVhyj8%2FOHbLY7SUBPbwubAQS%2BhmExWXyMr513qbVVsfK7Utp%2BPVX0mS9Fzj5NlZ96VJ3yW%2ByN59P4u%2BBd%2BS7cl8tQCXAwgYDA0QY6pgEd8IF34xZwekybPL5o6RqfGUO%2Bo5wKIEeEdXD4N%2FCLgWk6x1PwT8wyHbxHEUsuLkIWgW6MbwozqorOKkcm%2FLwdA6HQ9J7fHjotMJFUkd02Zxlnw0brh5b%2F5HcJZ10RqhYec5q7RPBx7SGPUAFRMqV1BJBNAsJBW%2BuSlxVFIOEdzp79eyS9CS3iVU6yV6GN63W31UaRGLJ6scyD%2FtjdMzCFPxKsyQQ5&X-Amz-Signature=b36040cd76a3c98c8b11db17a1f13b4feec6a92db6d9120fabf3221314937c01&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QUSJW2YS%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135416Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG42Fy6IeYDGsyLvUCMldXKYtpmxePn4%2FGT0Y6cIZxbOAiEA3Bw714GgEPP1KEEwHT7bS69jHK%2Fu3EEP7flTrSe6ukAq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDHtPiuMKAzA8dkKERCrcA9BU7jjg1DiG59HSVXj2wwfgrESmTZOVRm7mSPastaNfqLpT26wpRPzGDkoNW7gwLKW8PiT0f%2Fa%2FgBwo8fs%2BwDEwYm8axHBtesPjfnRN6504PPMF8KVioOQ0oOLVBhHrU3IZiRhE%2FuJ58a34YP4%2BmH0g4RV9eMtBygh5tDkccElEiSRaZlgwq%2BMATZUIEYN2Ov3cC15tiiN9pwQgPdd53Atf4SpWZCGO0PiY%2F5rRYyarEajQv1m9rNvQ7avsaCQbTsON1uTpT4J9Ay4MJg7BJmlc0In12xAcJeLZczTJUWsHv4nWkesTZEX4v46lnRkAqsuSOYxFhdmsARy1S3vushOn1eaIAfozFtzfudm4wo68lR6XrC3tj%2BVVWKKt6qUwA3GxZ9AgY00PLCkj4li0UTLAl7VANoZeP7xNg3G8KfDtX6PHHpNS82cY%2BA7LjEDW1e25NUi%2BqKvhYFtUl6q2Qbxe%2BS%2Fm7CtUAvwCpjWHQLr%2B6J%2Ff16TXQlGcKtw3j7LYMiqLTYTU6UZkQkUzrybJDqyPcFSJmtu4iOz4kC%2FzChMOYRSVmmAsX8QyDysYdNyTNtELRnMjZbwUMgcUvJLHJdlhXXpH6rCmhqlIRF1wqio3cqOLY39pulynyjCxMJyAwNEGOqUBBAWhEgfjt5kzwT1m9GjcOF%2B3BUe5ArUAFIMWfiTZar%2Fn5U0qs6l1d5aSeUs1cOdLlT5wrsEjHaG2Qblb63%2FL8%2BY5r9rmne9%2BVWMCfq7Sph7buWq7wJ%2FO%2FnlL82LIQJnEgB1evnik5EN0uojAZuwSZeRNF5jM00aHdxHiCCO1wvsfT3XCY53jeSWYTE%2B1%2FWkwmDDvTbaNdZEZQDb52UMfHAifJzIM&X-Amz-Signature=d19cb36f1b4b8a9629fce81bf9a7203815b38cb7e6a04afcbb1b5df1145cbed2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QUSJW2YS%2F20260615%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260615T135416Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG42Fy6IeYDGsyLvUCMldXKYtpmxePn4%2FGT0Y6cIZxbOAiEA3Bw714GgEPP1KEEwHT7bS69jHK%2Fu3EEP7flTrSe6ukAq%2FwMIXxAAGgw2Mzc0MjMxODM4MDUiDHtPiuMKAzA8dkKERCrcA9BU7jjg1DiG59HSVXj2wwfgrESmTZOVRm7mSPastaNfqLpT26wpRPzGDkoNW7gwLKW8PiT0f%2Fa%2FgBwo8fs%2BwDEwYm8axHBtesPjfnRN6504PPMF8KVioOQ0oOLVBhHrU3IZiRhE%2FuJ58a34YP4%2BmH0g4RV9eMtBygh5tDkccElEiSRaZlgwq%2BMATZUIEYN2Ov3cC15tiiN9pwQgPdd53Atf4SpWZCGO0PiY%2F5rRYyarEajQv1m9rNvQ7avsaCQbTsON1uTpT4J9Ay4MJg7BJmlc0In12xAcJeLZczTJUWsHv4nWkesTZEX4v46lnRkAqsuSOYxFhdmsARy1S3vushOn1eaIAfozFtzfudm4wo68lR6XrC3tj%2BVVWKKt6qUwA3GxZ9AgY00PLCkj4li0UTLAl7VANoZeP7xNg3G8KfDtX6PHHpNS82cY%2BA7LjEDW1e25NUi%2BqKvhYFtUl6q2Qbxe%2BS%2Fm7CtUAvwCpjWHQLr%2B6J%2Ff16TXQlGcKtw3j7LYMiqLTYTU6UZkQkUzrybJDqyPcFSJmtu4iOz4kC%2FzChMOYRSVmmAsX8QyDysYdNyTNtELRnMjZbwUMgcUvJLHJdlhXXpH6rCmhqlIRF1wqio3cqOLY39pulynyjCxMJyAwNEGOqUBBAWhEgfjt5kzwT1m9GjcOF%2B3BUe5ArUAFIMWfiTZar%2Fn5U0qs6l1d5aSeUs1cOdLlT5wrsEjHaG2Qblb63%2FL8%2BY5r9rmne9%2BVWMCfq7Sph7buWq7wJ%2FO%2FnlL82LIQJnEgB1evnik5EN0uojAZuwSZeRNF5jM00aHdxHiCCO1wvsfT3XCY53jeSWYTE%2B1%2FWkwmDDvTbaNdZEZQDb52UMfHAifJzIM&X-Amz-Signature=3e23605146beb81e46721f8f3ad14941f44a27cc6f0ab1bae2037f2bdfcc9006&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
