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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UBENVU6K%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111613Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJGMEQCIAfdjR5ieRBfjkpL0BRKaFCUbz6SS7mR3P2Up36N1jctAiBD72Wjy8zvwEW9vFCX7IHWdnDR%2BzE9JomKXmSwFtvvziqIBAjT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0JsKE8VRQ%2BqqT7RKKtwDxhmrbiiKsS0drQ4tsxBERPUiM%2FaI8Yug5Rn3j24IzlASZTIZqyz4BFvEO42gtAVoKZ0j%2B5aQ4dCWRbIo%2FINJ60Gt0lxfI4ZvYCVwlbEqr%2BV6dHdlthUnMWk0ECbuEbMVYY4baEPRU3mR3sUyD5DugkW%2FCQ9ZX2vZ%2FLUZ%2FTZj68nEXC6tAc4ZgIX3rRtGXATye%2FvDw%2FW42akPZhsb87DBKpLWeKV70XXYaV10a7vH3B1Nn0dBl5p8ORP9Xuk4%2F6S2dZ6HEcog9ols0aXCUGc6EWmF83L2Ef5RTajmmPkXGiM1Q5LrFQoE7U8EPSOSBKD7PwDa90ScwQzR2mNhSGfi516OHt5e%2BMcbpSC0lP4aif9MozRn6uBOotiMF386ur%2BhBqe7sNa8128gZtuNdgdokWt2yXxwvDNv3hMY2ujLbL9j%2Bvl%2B1KRlThFv%2FNOsVAx5ehx0pCxQVl6%2FNBoaG2LgvRPle9VCJNs7gcbTeAQ9DlaMe56ZOd9bWrZ1Ng%2BEMs%2BnY3wFOflPPLu%2BxAIjoSXKWBPGBuP9Q0ngBx510ugwWJnacjok2DcRXhSCtprOlHUIGEnM%2FhWxVZLSy2OWOPlwg4d7PVlZn5NJAqB4y32cCAY5Xcj40sYYySoCGYUwjOmw0AY6pgGcVp4kMJrCpKsfh36E7%2BCm4IAD97CQYbhOT0rStRIqS1jleqF5beQIxF8CdkJ7p%2F4QDYdurbwS2e6gujNFGOb5kdgOxwQGQpIrSKLob9vC9ps5i8NhHQcdewOxWx8stP6wzGxPOgTcycTggZlwstAEGoISIx9jqrIINtNo%2FHaZTl2OhHOkupaNhTEaxbtsUEz2%2F1frKatl12o%2FbG4VQ4eZRZt2rvOn&X-Amz-Signature=35fce062b7082a1ff9772e63475bf908a232824729d36f6b8db5db4a2579d204&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UBENVU6K%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111613Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJGMEQCIAfdjR5ieRBfjkpL0BRKaFCUbz6SS7mR3P2Up36N1jctAiBD72Wjy8zvwEW9vFCX7IHWdnDR%2BzE9JomKXmSwFtvvziqIBAjT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0JsKE8VRQ%2BqqT7RKKtwDxhmrbiiKsS0drQ4tsxBERPUiM%2FaI8Yug5Rn3j24IzlASZTIZqyz4BFvEO42gtAVoKZ0j%2B5aQ4dCWRbIo%2FINJ60Gt0lxfI4ZvYCVwlbEqr%2BV6dHdlthUnMWk0ECbuEbMVYY4baEPRU3mR3sUyD5DugkW%2FCQ9ZX2vZ%2FLUZ%2FTZj68nEXC6tAc4ZgIX3rRtGXATye%2FvDw%2FW42akPZhsb87DBKpLWeKV70XXYaV10a7vH3B1Nn0dBl5p8ORP9Xuk4%2F6S2dZ6HEcog9ols0aXCUGc6EWmF83L2Ef5RTajmmPkXGiM1Q5LrFQoE7U8EPSOSBKD7PwDa90ScwQzR2mNhSGfi516OHt5e%2BMcbpSC0lP4aif9MozRn6uBOotiMF386ur%2BhBqe7sNa8128gZtuNdgdokWt2yXxwvDNv3hMY2ujLbL9j%2Bvl%2B1KRlThFv%2FNOsVAx5ehx0pCxQVl6%2FNBoaG2LgvRPle9VCJNs7gcbTeAQ9DlaMe56ZOd9bWrZ1Ng%2BEMs%2BnY3wFOflPPLu%2BxAIjoSXKWBPGBuP9Q0ngBx510ugwWJnacjok2DcRXhSCtprOlHUIGEnM%2FhWxVZLSy2OWOPlwg4d7PVlZn5NJAqB4y32cCAY5Xcj40sYYySoCGYUwjOmw0AY6pgGcVp4kMJrCpKsfh36E7%2BCm4IAD97CQYbhOT0rStRIqS1jleqF5beQIxF8CdkJ7p%2F4QDYdurbwS2e6gujNFGOb5kdgOxwQGQpIrSKLob9vC9ps5i8NhHQcdewOxWx8stP6wzGxPOgTcycTggZlwstAEGoISIx9jqrIINtNo%2FHaZTl2OhHOkupaNhTEaxbtsUEz2%2F1frKatl12o%2FbG4VQ4eZRZt2rvOn&X-Amz-Signature=d08851155f32d46b8df5c5dba99d7e55062dd024b56af2fd06e81eca94474fa0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UBENVU6K%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111613Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJGMEQCIAfdjR5ieRBfjkpL0BRKaFCUbz6SS7mR3P2Up36N1jctAiBD72Wjy8zvwEW9vFCX7IHWdnDR%2BzE9JomKXmSwFtvvziqIBAjT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0JsKE8VRQ%2BqqT7RKKtwDxhmrbiiKsS0drQ4tsxBERPUiM%2FaI8Yug5Rn3j24IzlASZTIZqyz4BFvEO42gtAVoKZ0j%2B5aQ4dCWRbIo%2FINJ60Gt0lxfI4ZvYCVwlbEqr%2BV6dHdlthUnMWk0ECbuEbMVYY4baEPRU3mR3sUyD5DugkW%2FCQ9ZX2vZ%2FLUZ%2FTZj68nEXC6tAc4ZgIX3rRtGXATye%2FvDw%2FW42akPZhsb87DBKpLWeKV70XXYaV10a7vH3B1Nn0dBl5p8ORP9Xuk4%2F6S2dZ6HEcog9ols0aXCUGc6EWmF83L2Ef5RTajmmPkXGiM1Q5LrFQoE7U8EPSOSBKD7PwDa90ScwQzR2mNhSGfi516OHt5e%2BMcbpSC0lP4aif9MozRn6uBOotiMF386ur%2BhBqe7sNa8128gZtuNdgdokWt2yXxwvDNv3hMY2ujLbL9j%2Bvl%2B1KRlThFv%2FNOsVAx5ehx0pCxQVl6%2FNBoaG2LgvRPle9VCJNs7gcbTeAQ9DlaMe56ZOd9bWrZ1Ng%2BEMs%2BnY3wFOflPPLu%2BxAIjoSXKWBPGBuP9Q0ngBx510ugwWJnacjok2DcRXhSCtprOlHUIGEnM%2FhWxVZLSy2OWOPlwg4d7PVlZn5NJAqB4y32cCAY5Xcj40sYYySoCGYUwjOmw0AY6pgGcVp4kMJrCpKsfh36E7%2BCm4IAD97CQYbhOT0rStRIqS1jleqF5beQIxF8CdkJ7p%2F4QDYdurbwS2e6gujNFGOb5kdgOxwQGQpIrSKLob9vC9ps5i8NhHQcdewOxWx8stP6wzGxPOgTcycTggZlwstAEGoISIx9jqrIINtNo%2FHaZTl2OhHOkupaNhTEaxbtsUEz2%2F1frKatl12o%2FbG4VQ4eZRZt2rvOn&X-Amz-Signature=660c1625501ff8e8f932cbb3905b12093bc444530c8304da44cbc48f31cd1365&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNQOAEWQ%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111614Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIDkebegk64qEO5eLLBboGxVv%2FTN4gx0Clne0uPfBvqhzAiEAyNxoh%2B3t0S%2BXimGO9a1CqON0GnijzERkiRDM5e5S1boqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEBEDh%2B1bsD%2FuqvDbyrcA83O2fn7IgoWVvhKysp2n%2BtZCf86SMW1azEFm0zYAe0Pu%2F5%2Fh9PYJrpsgi78hCfxnz%2F1cR%2BqQtq6vozl56pVmxYArFbE4xKMrb9ekM0k5yidnFoExx5eltFLXiGro4d5e4LfGnhhylHCMgLbWkn9qgNapTyMHCzKUmneNUMrtEPdMMIJeAP4kLNUyZ59pwAfeXmXQmXfnXW0UAXhdDtyou1kBPrIevb4%2FOLEGdd9n4UVyRD%2Fe3BMQ4kkn3v3MWObkKqwgeGjgRtwfAlHeIv%2BGAjMFclQcLb%2F3o0J%2BOkNTputaZ9zkt1%2F%2B84%2FXuXmc0LMHxg%2FcLoB7HX3lAUin3uBSdNn9IIpzp03IVfzMmXFky5aQd%2Fk9SwXwxIcEiikk2s4Fe3bnDBwCdlmgE3UgA9uHd3r3fPwN4yBPwM1CxSNI2J9Re7tmjmhnAVPER5Xvj66k8tr9qt%2Bl4%2F4kqg10uemgyDHnusL8m9wj6RM3KeCBbdjjkBejxRl4rlE4xRdZG4YqZWWo8syVQcGd%2BBhA7l%2BQ6Hr65Bdgzn8jCLzvrwcTx1MRMpOZvOA5gfoHA3YWuVySIbAXqNT0OtajXPCKB9gN%2FiFYyHdVQYArKClk2q1gzi5t%2FE3r2Tt818R%2BuSUMNvosNAGOqUBpXxPoIY5AJNHWyGGoBYoNv0wLNwIy%2FWeV2v2RL5IcoWaHjI%2BpckLKtMIBnQinmT5AtwIlOSRLbzMUlj9XhhQFhhqDeL%2FRXtTMzXOM9hEkZgHyN9bq3FSSW8nbX4xQV70hUDhRnOnv%2FTcA0faz5lbUka8Db7TKed0gTfj7BF1dxJCINruy5apyDu2FOEGEbYBo0t5pwvIjnsjHJ940N%2BlRy8GKiF9&X-Amz-Signature=9cd6d5b3ced3b4c9b6b96a2e590dfb4418f695ef16e0694ed5289684c4747185&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNQOAEWQ%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111614Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIDkebegk64qEO5eLLBboGxVv%2FTN4gx0Clne0uPfBvqhzAiEAyNxoh%2B3t0S%2BXimGO9a1CqON0GnijzERkiRDM5e5S1boqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEBEDh%2B1bsD%2FuqvDbyrcA83O2fn7IgoWVvhKysp2n%2BtZCf86SMW1azEFm0zYAe0Pu%2F5%2Fh9PYJrpsgi78hCfxnz%2F1cR%2BqQtq6vozl56pVmxYArFbE4xKMrb9ekM0k5yidnFoExx5eltFLXiGro4d5e4LfGnhhylHCMgLbWkn9qgNapTyMHCzKUmneNUMrtEPdMMIJeAP4kLNUyZ59pwAfeXmXQmXfnXW0UAXhdDtyou1kBPrIevb4%2FOLEGdd9n4UVyRD%2Fe3BMQ4kkn3v3MWObkKqwgeGjgRtwfAlHeIv%2BGAjMFclQcLb%2F3o0J%2BOkNTputaZ9zkt1%2F%2B84%2FXuXmc0LMHxg%2FcLoB7HX3lAUin3uBSdNn9IIpzp03IVfzMmXFky5aQd%2Fk9SwXwxIcEiikk2s4Fe3bnDBwCdlmgE3UgA9uHd3r3fPwN4yBPwM1CxSNI2J9Re7tmjmhnAVPER5Xvj66k8tr9qt%2Bl4%2F4kqg10uemgyDHnusL8m9wj6RM3KeCBbdjjkBejxRl4rlE4xRdZG4YqZWWo8syVQcGd%2BBhA7l%2BQ6Hr65Bdgzn8jCLzvrwcTx1MRMpOZvOA5gfoHA3YWuVySIbAXqNT0OtajXPCKB9gN%2FiFYyHdVQYArKClk2q1gzi5t%2FE3r2Tt818R%2BuSUMNvosNAGOqUBpXxPoIY5AJNHWyGGoBYoNv0wLNwIy%2FWeV2v2RL5IcoWaHjI%2BpckLKtMIBnQinmT5AtwIlOSRLbzMUlj9XhhQFhhqDeL%2FRXtTMzXOM9hEkZgHyN9bq3FSSW8nbX4xQV70hUDhRnOnv%2FTcA0faz5lbUka8Db7TKed0gTfj7BF1dxJCINruy5apyDu2FOEGEbYBo0t5pwvIjnsjHJ940N%2BlRy8GKiF9&X-Amz-Signature=192e1123fcb3f7ebf0974bc64a703b76fe42b08b49de14bd3168a23a59cec7d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNQOAEWQ%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111614Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIDkebegk64qEO5eLLBboGxVv%2FTN4gx0Clne0uPfBvqhzAiEAyNxoh%2B3t0S%2BXimGO9a1CqON0GnijzERkiRDM5e5S1boqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEBEDh%2B1bsD%2FuqvDbyrcA83O2fn7IgoWVvhKysp2n%2BtZCf86SMW1azEFm0zYAe0Pu%2F5%2Fh9PYJrpsgi78hCfxnz%2F1cR%2BqQtq6vozl56pVmxYArFbE4xKMrb9ekM0k5yidnFoExx5eltFLXiGro4d5e4LfGnhhylHCMgLbWkn9qgNapTyMHCzKUmneNUMrtEPdMMIJeAP4kLNUyZ59pwAfeXmXQmXfnXW0UAXhdDtyou1kBPrIevb4%2FOLEGdd9n4UVyRD%2Fe3BMQ4kkn3v3MWObkKqwgeGjgRtwfAlHeIv%2BGAjMFclQcLb%2F3o0J%2BOkNTputaZ9zkt1%2F%2B84%2FXuXmc0LMHxg%2FcLoB7HX3lAUin3uBSdNn9IIpzp03IVfzMmXFky5aQd%2Fk9SwXwxIcEiikk2s4Fe3bnDBwCdlmgE3UgA9uHd3r3fPwN4yBPwM1CxSNI2J9Re7tmjmhnAVPER5Xvj66k8tr9qt%2Bl4%2F4kqg10uemgyDHnusL8m9wj6RM3KeCBbdjjkBejxRl4rlE4xRdZG4YqZWWo8syVQcGd%2BBhA7l%2BQ6Hr65Bdgzn8jCLzvrwcTx1MRMpOZvOA5gfoHA3YWuVySIbAXqNT0OtajXPCKB9gN%2FiFYyHdVQYArKClk2q1gzi5t%2FE3r2Tt818R%2BuSUMNvosNAGOqUBpXxPoIY5AJNHWyGGoBYoNv0wLNwIy%2FWeV2v2RL5IcoWaHjI%2BpckLKtMIBnQinmT5AtwIlOSRLbzMUlj9XhhQFhhqDeL%2FRXtTMzXOM9hEkZgHyN9bq3FSSW8nbX4xQV70hUDhRnOnv%2FTcA0faz5lbUka8Db7TKed0gTfj7BF1dxJCINruy5apyDu2FOEGEbYBo0t5pwvIjnsjHJ940N%2BlRy8GKiF9&X-Amz-Signature=787fa4b916f82a7c63818e021cd9909b23e09a919ea7c54fe580e052d0bfe82f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZNQOAEWQ%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111614Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIDkebegk64qEO5eLLBboGxVv%2FTN4gx0Clne0uPfBvqhzAiEAyNxoh%2B3t0S%2BXimGO9a1CqON0GnijzERkiRDM5e5S1boqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEBEDh%2B1bsD%2FuqvDbyrcA83O2fn7IgoWVvhKysp2n%2BtZCf86SMW1azEFm0zYAe0Pu%2F5%2Fh9PYJrpsgi78hCfxnz%2F1cR%2BqQtq6vozl56pVmxYArFbE4xKMrb9ekM0k5yidnFoExx5eltFLXiGro4d5e4LfGnhhylHCMgLbWkn9qgNapTyMHCzKUmneNUMrtEPdMMIJeAP4kLNUyZ59pwAfeXmXQmXfnXW0UAXhdDtyou1kBPrIevb4%2FOLEGdd9n4UVyRD%2Fe3BMQ4kkn3v3MWObkKqwgeGjgRtwfAlHeIv%2BGAjMFclQcLb%2F3o0J%2BOkNTputaZ9zkt1%2F%2B84%2FXuXmc0LMHxg%2FcLoB7HX3lAUin3uBSdNn9IIpzp03IVfzMmXFky5aQd%2Fk9SwXwxIcEiikk2s4Fe3bnDBwCdlmgE3UgA9uHd3r3fPwN4yBPwM1CxSNI2J9Re7tmjmhnAVPER5Xvj66k8tr9qt%2Bl4%2F4kqg10uemgyDHnusL8m9wj6RM3KeCBbdjjkBejxRl4rlE4xRdZG4YqZWWo8syVQcGd%2BBhA7l%2BQ6Hr65Bdgzn8jCLzvrwcTx1MRMpOZvOA5gfoHA3YWuVySIbAXqNT0OtajXPCKB9gN%2FiFYyHdVQYArKClk2q1gzi5t%2FE3r2Tt818R%2BuSUMNvosNAGOqUBpXxPoIY5AJNHWyGGoBYoNv0wLNwIy%2FWeV2v2RL5IcoWaHjI%2BpckLKtMIBnQinmT5AtwIlOSRLbzMUlj9XhhQFhhqDeL%2FRXtTMzXOM9hEkZgHyN9bq3FSSW8nbX4xQV70hUDhRnOnv%2FTcA0faz5lbUka8Db7TKed0gTfj7BF1dxJCINruy5apyDu2FOEGEbYBo0t5pwvIjnsjHJ940N%2BlRy8GKiF9&X-Amz-Signature=a5f76248e304f805f6a348d6551c22f18bb3e0585703cfa7ab8f1214ef4170ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SBPJHPPJ%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111615Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAsaCXVzLXdlc3QtMiJHMEUCIG7mzCC8L0QYnSMfk2OSnOOHYiqJwMHc%2BLdqHy249yqwAiEAiZqIusuMAUYtEv0HGobJOeQHmCHgYXcrjlIarvNj2z0qiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDELsfECZo2W1riTm5yrcA9%2BHckX85d039lpCheDOBdFXx7lVZJqNL%2BBQ%2BCOczfHAPcIF5Dg2mUaT2uui6rJZu0IaYc%2BDsLTyJmW%2FidGNDEa%2BFbY7AiXwm%2BQElGDLvjaywopZ1aOfFXjbSAd%2FiG3N%2FCBqmF74Uk%2FSlM%2BnUba4HSyeK%2BKNJ7boRVyaAlTCTqiKqiUnJodoMc0Cd1Pw%2F5A%2FHoY9E1qJUNaiG6MAu4eyL3k7elo2lJRjBBHCtqJF5vYdLaiTJezlrgERTtlbfe3X8cT48cwRS9JFhMtUf2RyInCTPUt528crRqb5QGp%2BSLwL8okYMwmhXazKVw8XPzNJt8MKbo9826Y%2FVWOm07ZGPN%2B5Bpo%2FKaWtV46ihULSBMRO%2FOTf5diLMbbzIHR5KX53dw8ODM29gi7sdcoqibntM0r3boLhTGdHD1jE3oh187zB1gUKVvu6iUtUxGpAgjycyq3BPEWHwcacYVMMJuCGJruHz7LjfU%2FU3Xwr0KdUyKOAPbUR2LGJQCrUDBMkaqqztiz7pKh3ONjN%2ByHwZ%2BIhwBi7Jb2rpIUG3WOHc226ssWOfm5IsBRGgK45iXAHxROG6BtsldvVfTi6MA6OZrMBoUETTiTI99p%2BFCjFQEMW3RUHnN%2B6pTuslMKdqndNMJv0sNAGOqUBW8G11XbmVHoOE53pc%2FlFdzIhuXLLOIB3tnNJ%2BbNLaqFpmUoRYWfQB3H4vCI6l8Hi42JeXgDlqbhBxuGE78dL86pkXi0%2Bb8pEi6qypcmp8hhL7C8zfgxcmMZCzcPvm9sRw3pjOCmaeO0idCkn3xJd25uOwQfSsXTWZmqMsOFTNqYB9Fy3MUSxvHIejBUnczu9CFlYFHODr3Y0F1UGks7pFEYI63ez&X-Amz-Signature=170cd8ed42cf4f3ddb09a4501cf68302497ce53f14d69f0d3f6189638d28473a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VOG5UPFV%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111615Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQC0cnaeKYPId6oKQvJic5GBymxskJEGtPNK96Z10Mg2ZwIgNhT5quyYlNTMly8vHeJ5TSa9wkwHLWt4NGUW03osOlsqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMfJ9jTHqCpBWZTNqircAxg38OQyQOLRbHoWXb%2BH%2B6vaSHtxW9359C%2F6osdwjc8W8mWCSA%2FqRhje4OjzlcqJeo2JQnLiI3cuNhgSbXPgoC0X%2F9i8teOdqGXbcpEx0FXnNKC9y1d%2B8vsXSKwd%2BUq3iqxmx3Wkjl1zFwtd32t4XmBpoa1t9wFW95jU8qn4oNGmQ1c9lvYQnnOfD8xxhxkK8ZgNiAQXHVbvtVuwqO6yAE71%2BaLhHyb3m9%2F9uHZy9FFwqkJwUPSYWRrWeUwI%2Bei7Mo6mgizZgXFSWKNkNJpi4EBKBHPSFg0rhLCk1fJc1pwgsHnSVFD8LQKvwf%2BLRrWonp5%2FFYS8aUzlpHUjvlC0X66Lx7Rk35ldwi5qqRXw150%2B396kqB60ITs%2BM83AJ10VW%2BlpEkbLQqRfU77sQzzZkGItsNdBo2kIrOR3WZV76uWOUQWSwJ3ZbwKF3cqngEcWrtz%2BCSY%2BAJgbPu0LdsU%2BU%2Fk7%2BYBTbrwKtKEvwtlWXQfhme1%2FPKDy3FSNurNbqj7Uz5%2Fo9ifHXX%2BTAjqxl%2BTTEhCOE3g3qyYPwDfTo44ywaNMo%2Bv4oLpgciLnDM2NLHwht4BOlxuAl1xXvnqJ5hf1ujQvMcs1MS4S1YZacOXTH2q94YKa3vhKFm5ckOIYMJ%2FpsNAGOqUBilyw2llVRUJKlZbyg6VydmgBLbC8wLBt%2Fto8xggWWtsIue2m1oL3n8ykhf1nmfyai2TH6b%2FZDnNfBIlJAxxNfAoViw5oR6HD70A4S3fNmvdGXpIaKTeTqdkmoXyGsSHXid%2F0bHrQZFHPy7eQTRNf1Yj18Pz494zF0RcEu3jWMnQqkOY58aGes4o%2FCvMz9Ja1JPr8OK8K67OwUSLQVtGlLByl6RHK&X-Amz-Signature=d0e8a31b54625cca6ae0430d214456c61105a02afa4e99a7e8ba5552b99ce76b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VOG5UPFV%2F20260519%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260519T111615Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAoaCXVzLXdlc3QtMiJHMEUCIQC0cnaeKYPId6oKQvJic5GBymxskJEGtPNK96Z10Mg2ZwIgNhT5quyYlNTMly8vHeJ5TSa9wkwHLWt4NGUW03osOlsqiAQI0%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMfJ9jTHqCpBWZTNqircAxg38OQyQOLRbHoWXb%2BH%2B6vaSHtxW9359C%2F6osdwjc8W8mWCSA%2FqRhje4OjzlcqJeo2JQnLiI3cuNhgSbXPgoC0X%2F9i8teOdqGXbcpEx0FXnNKC9y1d%2B8vsXSKwd%2BUq3iqxmx3Wkjl1zFwtd32t4XmBpoa1t9wFW95jU8qn4oNGmQ1c9lvYQnnOfD8xxhxkK8ZgNiAQXHVbvtVuwqO6yAE71%2BaLhHyb3m9%2F9uHZy9FFwqkJwUPSYWRrWeUwI%2Bei7Mo6mgizZgXFSWKNkNJpi4EBKBHPSFg0rhLCk1fJc1pwgsHnSVFD8LQKvwf%2BLRrWonp5%2FFYS8aUzlpHUjvlC0X66Lx7Rk35ldwi5qqRXw150%2B396kqB60ITs%2BM83AJ10VW%2BlpEkbLQqRfU77sQzzZkGItsNdBo2kIrOR3WZV76uWOUQWSwJ3ZbwKF3cqngEcWrtz%2BCSY%2BAJgbPu0LdsU%2BU%2Fk7%2BYBTbrwKtKEvwtlWXQfhme1%2FPKDy3FSNurNbqj7Uz5%2Fo9ifHXX%2BTAjqxl%2BTTEhCOE3g3qyYPwDfTo44ywaNMo%2Bv4oLpgciLnDM2NLHwht4BOlxuAl1xXvnqJ5hf1ujQvMcs1MS4S1YZacOXTH2q94YKa3vhKFm5ckOIYMJ%2FpsNAGOqUBilyw2llVRUJKlZbyg6VydmgBLbC8wLBt%2Fto8xggWWtsIue2m1oL3n8ykhf1nmfyai2TH6b%2FZDnNfBIlJAxxNfAoViw5oR6HD70A4S3fNmvdGXpIaKTeTqdkmoXyGsSHXid%2F0bHrQZFHPy7eQTRNf1Yj18Pz494zF0RcEu3jWMnQqkOY58aGes4o%2FCvMz9Ja1JPr8OK8K67OwUSLQVtGlLByl6RHK&X-Amz-Signature=25cd8351afc606abb6035e93be7809917758b24f1d0cb8c018ccdc06e50f85f1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
