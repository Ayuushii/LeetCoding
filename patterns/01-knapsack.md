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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SVTYGTZO%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIA4%2BeQeEIvUPZmsfmOBOED37X2RaSarSRX4ICwC3%2FKq8AiEAz3Yu6KawURVaF1bCUT76w5tyB3heUVYIPiCeYi9lsFkqiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCrYphbZKZO4Xa4Z4yrcA4c%2FEfFMNmjTCwx3QTPXRAQ%2Fx0mkGUVhowzOeKujhxIhylHYfjoMVV0j6T65Mxol6qD6W%2BiPURzn69NyqYsShjLuNFfqPap6p9Pyyq%2BaT9DFZnZVA59cBe%2FmLTthdgLnCcyUYE%2F%2BAyH6UI849nhK6ISXYR3gM6Z1rKQ0JjDWnHvFvVQBCMUe3Je5GSLMMDaCod5pfizl9nNoZMBlxKstKpXutRGBt3QE0Bc9kjDTSUZW%2BNdX28856Jx5y6Be74o3gQpe%2FNPXHwjJM%2FbOQXYySjw%2FnUA1YmuJNzkny9gpwyXsvJZKSHrkZoAepKHNEsLSd%2Ba3sKSM6R4X04pDYryfATkngrQvzwh9y09UZc80%2BiGqlNC62A8jd9PAxjNqzuc7urBpERZfVyHMQBHfBJkCqNUvx1%2BZtfNl3m7TjeUZru9ZfdmPtbmEOOl5dGMAgvzYRT%2FlNNckGvEY2eWMmD6Z12KvFisv8vMm66oQd2CSHeFuKNRZCsbK0sWI3Z3oB73nUc52o2MnTxZwRneloNOm6ezi%2BdXCMDe1JHLVz%2F%2BJG6IYuN8%2FYogFW1SvRFl2fCY82gubHs50ZqRt56BjC4edE1OQv%2B7f83C6PNyLHBkuYTCRojNYZJ8mF2kQlafDMPyYk9YGOqUBO3TQQ8Sw5fFORZTYtkKvPPV6wel7FlaASiJ1BdbLIGFg7pU2aeOtyWMTPy4X1vkBIHNW1QAh3XuSMDc7u%2BIhBeQPP%2BoJf7B5nZTzgJ2mJyA8np06HagQdmVhDQ7m9HQZJOWaEaxBS%2BERv3TGDrBiKmBxYHrm7src%2FCg4ME59Rjsg20UCZ9ksb%2Bp65GgziOKOdsYwWs5Kjr3Jmf%2FLdWBtqZp5BTbO&X-Amz-Signature=3037e5c94ebaf619be2b88cdb1c3faaaefa235956fb02e698e855e38b6d60ccc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SVTYGTZO%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIA4%2BeQeEIvUPZmsfmOBOED37X2RaSarSRX4ICwC3%2FKq8AiEAz3Yu6KawURVaF1bCUT76w5tyB3heUVYIPiCeYi9lsFkqiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCrYphbZKZO4Xa4Z4yrcA4c%2FEfFMNmjTCwx3QTPXRAQ%2Fx0mkGUVhowzOeKujhxIhylHYfjoMVV0j6T65Mxol6qD6W%2BiPURzn69NyqYsShjLuNFfqPap6p9Pyyq%2BaT9DFZnZVA59cBe%2FmLTthdgLnCcyUYE%2F%2BAyH6UI849nhK6ISXYR3gM6Z1rKQ0JjDWnHvFvVQBCMUe3Je5GSLMMDaCod5pfizl9nNoZMBlxKstKpXutRGBt3QE0Bc9kjDTSUZW%2BNdX28856Jx5y6Be74o3gQpe%2FNPXHwjJM%2FbOQXYySjw%2FnUA1YmuJNzkny9gpwyXsvJZKSHrkZoAepKHNEsLSd%2Ba3sKSM6R4X04pDYryfATkngrQvzwh9y09UZc80%2BiGqlNC62A8jd9PAxjNqzuc7urBpERZfVyHMQBHfBJkCqNUvx1%2BZtfNl3m7TjeUZru9ZfdmPtbmEOOl5dGMAgvzYRT%2FlNNckGvEY2eWMmD6Z12KvFisv8vMm66oQd2CSHeFuKNRZCsbK0sWI3Z3oB73nUc52o2MnTxZwRneloNOm6ezi%2BdXCMDe1JHLVz%2F%2BJG6IYuN8%2FYogFW1SvRFl2fCY82gubHs50ZqRt56BjC4edE1OQv%2B7f83C6PNyLHBkuYTCRojNYZJ8mF2kQlafDMPyYk9YGOqUBO3TQQ8Sw5fFORZTYtkKvPPV6wel7FlaASiJ1BdbLIGFg7pU2aeOtyWMTPy4X1vkBIHNW1QAh3XuSMDc7u%2BIhBeQPP%2BoJf7B5nZTzgJ2mJyA8np06HagQdmVhDQ7m9HQZJOWaEaxBS%2BERv3TGDrBiKmBxYHrm7src%2FCg4ME59Rjsg20UCZ9ksb%2Bp65GgziOKOdsYwWs5Kjr3Jmf%2FLdWBtqZp5BTbO&X-Amz-Signature=a7339633ff404765c4883ad2fdc69209033dc408d35389ace4e8c6ccd53a7177&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SVTYGTZO%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIA4%2BeQeEIvUPZmsfmOBOED37X2RaSarSRX4ICwC3%2FKq8AiEAz3Yu6KawURVaF1bCUT76w5tyB3heUVYIPiCeYi9lsFkqiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCrYphbZKZO4Xa4Z4yrcA4c%2FEfFMNmjTCwx3QTPXRAQ%2Fx0mkGUVhowzOeKujhxIhylHYfjoMVV0j6T65Mxol6qD6W%2BiPURzn69NyqYsShjLuNFfqPap6p9Pyyq%2BaT9DFZnZVA59cBe%2FmLTthdgLnCcyUYE%2F%2BAyH6UI849nhK6ISXYR3gM6Z1rKQ0JjDWnHvFvVQBCMUe3Je5GSLMMDaCod5pfizl9nNoZMBlxKstKpXutRGBt3QE0Bc9kjDTSUZW%2BNdX28856Jx5y6Be74o3gQpe%2FNPXHwjJM%2FbOQXYySjw%2FnUA1YmuJNzkny9gpwyXsvJZKSHrkZoAepKHNEsLSd%2Ba3sKSM6R4X04pDYryfATkngrQvzwh9y09UZc80%2BiGqlNC62A8jd9PAxjNqzuc7urBpERZfVyHMQBHfBJkCqNUvx1%2BZtfNl3m7TjeUZru9ZfdmPtbmEOOl5dGMAgvzYRT%2FlNNckGvEY2eWMmD6Z12KvFisv8vMm66oQd2CSHeFuKNRZCsbK0sWI3Z3oB73nUc52o2MnTxZwRneloNOm6ezi%2BdXCMDe1JHLVz%2F%2BJG6IYuN8%2FYogFW1SvRFl2fCY82gubHs50ZqRt56BjC4edE1OQv%2B7f83C6PNyLHBkuYTCRojNYZJ8mF2kQlafDMPyYk9YGOqUBO3TQQ8Sw5fFORZTYtkKvPPV6wel7FlaASiJ1BdbLIGFg7pU2aeOtyWMTPy4X1vkBIHNW1QAh3XuSMDc7u%2BIhBeQPP%2BoJf7B5nZTzgJ2mJyA8np06HagQdmVhDQ7m9HQZJOWaEaxBS%2BERv3TGDrBiKmBxYHrm7src%2FCg4ME59Rjsg20UCZ9ksb%2Bp65GgziOKOdsYwWs5Kjr3Jmf%2FLdWBtqZp5BTbO&X-Amz-Signature=cb0922dfe1fd82de27086a2295188c616f83df1b8b38721ad40a399f08f84778&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662Q4PXLRN%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIFoPfuOTwlpwtBw9bALUNmyeMWCBLfuqo5Cdw3MxqHLrAiEAjQ1U0qXf0Vs7YurOgvEc9xHdcOptDLPbOsdnnErbo84qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAkKLihRHMZMR%2FKxlCrcA4F3X7d1IKM%2BMovABaTG%2FJJ3UfCu0RnKG3yZ2Z6FMnViUAwCYo05AJ3td%2FnOBtWBtA2GpT62xVUuzva6ECHW3bWgZbGviwpgTpi0QSBr%2FVuNfG72tt96WP8rReYoExEpRpDa6ilvDXvtH7z0e9skmcx53OmSa0X3Ob5trTtrNQ4vLwKPNxAyjkbLbR1B1JoBBEPfj72HvhV5vk2olvNWd5rpys4tcuoJGE2HJ8Xy4P%2BC8YQQZT1CmIWCB8QlCcruitPIem%2F6ZZNVPai9I0ubKrOKtNAZ%2FlKEqCdX4H6Cc%2F2aZE0MoVeDptsBdQG8VuNt8YvOVR64RtDM00gxkmEv%2Faa2JX4smkltg092PQulpQ848nOFTYFj5qXU1c%2BfUaMGkzk2Hh%2FLeBHAYhzNrA3v9x5O5%2Bomonu0xCg%2FkzgGDs%2FiGMdRDwDKmUOyK5eGiNz%2FmOJIOc3KY7%2FprlFPr08gQpUkVITMHyUKybcC%2FPXVI0kDcp%2BMofqH9kReUyNmP4Nm5UKUr%2BqU8U5njg08ZdyDjh3iSU5N90Br1G5WEp%2BwKrnrkzHG1B7jZ%2BU2iQ1v4M8NSWuJFu3xT7kvikNL3d6fZrQEAsEtW20p%2B88EiIH%2F4GgXzd0aJViLrJPqRmL%2FMPOZk9YGOqUBXs9RRn6yAv04eq81pTaUKxe28aMRSTFn2GTJl13ali8kPMcdpvKCOLOcKLNHSLP%2FZvTYDly9PBaCFsb9%2BbEdU7hFWEX3AqlLutbb5%2BM6WmTdk3Z2UxQiwuzzeHuKqsMpCKPv9mAdgEFpryl5xV16Umm6BGeKc9tO9y6y5vMzQo9WIHV7h1JYRLKVQUd352sznV%2BWQOD%2F8KJoulwTdZoldbh58mce&X-Amz-Signature=15cb9f6eeaf85db44c350bdf362fa2a6d5476dbe8d127af9b86da41b749730b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662Q4PXLRN%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIFoPfuOTwlpwtBw9bALUNmyeMWCBLfuqo5Cdw3MxqHLrAiEAjQ1U0qXf0Vs7YurOgvEc9xHdcOptDLPbOsdnnErbo84qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAkKLihRHMZMR%2FKxlCrcA4F3X7d1IKM%2BMovABaTG%2FJJ3UfCu0RnKG3yZ2Z6FMnViUAwCYo05AJ3td%2FnOBtWBtA2GpT62xVUuzva6ECHW3bWgZbGviwpgTpi0QSBr%2FVuNfG72tt96WP8rReYoExEpRpDa6ilvDXvtH7z0e9skmcx53OmSa0X3Ob5trTtrNQ4vLwKPNxAyjkbLbR1B1JoBBEPfj72HvhV5vk2olvNWd5rpys4tcuoJGE2HJ8Xy4P%2BC8YQQZT1CmIWCB8QlCcruitPIem%2F6ZZNVPai9I0ubKrOKtNAZ%2FlKEqCdX4H6Cc%2F2aZE0MoVeDptsBdQG8VuNt8YvOVR64RtDM00gxkmEv%2Faa2JX4smkltg092PQulpQ848nOFTYFj5qXU1c%2BfUaMGkzk2Hh%2FLeBHAYhzNrA3v9x5O5%2Bomonu0xCg%2FkzgGDs%2FiGMdRDwDKmUOyK5eGiNz%2FmOJIOc3KY7%2FprlFPr08gQpUkVITMHyUKybcC%2FPXVI0kDcp%2BMofqH9kReUyNmP4Nm5UKUr%2BqU8U5njg08ZdyDjh3iSU5N90Br1G5WEp%2BwKrnrkzHG1B7jZ%2BU2iQ1v4M8NSWuJFu3xT7kvikNL3d6fZrQEAsEtW20p%2B88EiIH%2F4GgXzd0aJViLrJPqRmL%2FMPOZk9YGOqUBXs9RRn6yAv04eq81pTaUKxe28aMRSTFn2GTJl13ali8kPMcdpvKCOLOcKLNHSLP%2FZvTYDly9PBaCFsb9%2BbEdU7hFWEX3AqlLutbb5%2BM6WmTdk3Z2UxQiwuzzeHuKqsMpCKPv9mAdgEFpryl5xV16Umm6BGeKc9tO9y6y5vMzQo9WIHV7h1JYRLKVQUd352sznV%2BWQOD%2F8KJoulwTdZoldbh58mce&X-Amz-Signature=78213e449e66f3cef7a1cc277ee3e88ce6465ec9d0697d8a3b5a0b5ef24b54c8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662Q4PXLRN%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIFoPfuOTwlpwtBw9bALUNmyeMWCBLfuqo5Cdw3MxqHLrAiEAjQ1U0qXf0Vs7YurOgvEc9xHdcOptDLPbOsdnnErbo84qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAkKLihRHMZMR%2FKxlCrcA4F3X7d1IKM%2BMovABaTG%2FJJ3UfCu0RnKG3yZ2Z6FMnViUAwCYo05AJ3td%2FnOBtWBtA2GpT62xVUuzva6ECHW3bWgZbGviwpgTpi0QSBr%2FVuNfG72tt96WP8rReYoExEpRpDa6ilvDXvtH7z0e9skmcx53OmSa0X3Ob5trTtrNQ4vLwKPNxAyjkbLbR1B1JoBBEPfj72HvhV5vk2olvNWd5rpys4tcuoJGE2HJ8Xy4P%2BC8YQQZT1CmIWCB8QlCcruitPIem%2F6ZZNVPai9I0ubKrOKtNAZ%2FlKEqCdX4H6Cc%2F2aZE0MoVeDptsBdQG8VuNt8YvOVR64RtDM00gxkmEv%2Faa2JX4smkltg092PQulpQ848nOFTYFj5qXU1c%2BfUaMGkzk2Hh%2FLeBHAYhzNrA3v9x5O5%2Bomonu0xCg%2FkzgGDs%2FiGMdRDwDKmUOyK5eGiNz%2FmOJIOc3KY7%2FprlFPr08gQpUkVITMHyUKybcC%2FPXVI0kDcp%2BMofqH9kReUyNmP4Nm5UKUr%2BqU8U5njg08ZdyDjh3iSU5N90Br1G5WEp%2BwKrnrkzHG1B7jZ%2BU2iQ1v4M8NSWuJFu3xT7kvikNL3d6fZrQEAsEtW20p%2B88EiIH%2F4GgXzd0aJViLrJPqRmL%2FMPOZk9YGOqUBXs9RRn6yAv04eq81pTaUKxe28aMRSTFn2GTJl13ali8kPMcdpvKCOLOcKLNHSLP%2FZvTYDly9PBaCFsb9%2BbEdU7hFWEX3AqlLutbb5%2BM6WmTdk3Z2UxQiwuzzeHuKqsMpCKPv9mAdgEFpryl5xV16Umm6BGeKc9tO9y6y5vMzQo9WIHV7h1JYRLKVQUd352sznV%2BWQOD%2F8KJoulwTdZoldbh58mce&X-Amz-Signature=0b4a17233fde76961f96f7e43082cee389bd51441a3b7535bd13cc679c86f4be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662Q4PXLRN%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJHMEUCIFoPfuOTwlpwtBw9bALUNmyeMWCBLfuqo5Cdw3MxqHLrAiEAjQ1U0qXf0Vs7YurOgvEc9xHdcOptDLPbOsdnnErbo84qiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAkKLihRHMZMR%2FKxlCrcA4F3X7d1IKM%2BMovABaTG%2FJJ3UfCu0RnKG3yZ2Z6FMnViUAwCYo05AJ3td%2FnOBtWBtA2GpT62xVUuzva6ECHW3bWgZbGviwpgTpi0QSBr%2FVuNfG72tt96WP8rReYoExEpRpDa6ilvDXvtH7z0e9skmcx53OmSa0X3Ob5trTtrNQ4vLwKPNxAyjkbLbR1B1JoBBEPfj72HvhV5vk2olvNWd5rpys4tcuoJGE2HJ8Xy4P%2BC8YQQZT1CmIWCB8QlCcruitPIem%2F6ZZNVPai9I0ubKrOKtNAZ%2FlKEqCdX4H6Cc%2F2aZE0MoVeDptsBdQG8VuNt8YvOVR64RtDM00gxkmEv%2Faa2JX4smkltg092PQulpQ848nOFTYFj5qXU1c%2BfUaMGkzk2Hh%2FLeBHAYhzNrA3v9x5O5%2Bomonu0xCg%2FkzgGDs%2FiGMdRDwDKmUOyK5eGiNz%2FmOJIOc3KY7%2FprlFPr08gQpUkVITMHyUKybcC%2FPXVI0kDcp%2BMofqH9kReUyNmP4Nm5UKUr%2BqU8U5njg08ZdyDjh3iSU5N90Br1G5WEp%2BwKrnrkzHG1B7jZ%2BU2iQ1v4M8NSWuJFu3xT7kvikNL3d6fZrQEAsEtW20p%2B88EiIH%2F4GgXzd0aJViLrJPqRmL%2FMPOZk9YGOqUBXs9RRn6yAv04eq81pTaUKxe28aMRSTFn2GTJl13ali8kPMcdpvKCOLOcKLNHSLP%2FZvTYDly9PBaCFsb9%2BbEdU7hFWEX3AqlLutbb5%2BM6WmTdk3Z2UxQiwuzzeHuKqsMpCKPv9mAdgEFpryl5xV16Umm6BGeKc9tO9y6y5vMzQo9WIHV7h1JYRLKVQUd352sznV%2BWQOD%2F8KJoulwTdZoldbh58mce&X-Amz-Signature=e93e2ab60f773c2d0aea45c827a9367fb93708d8a523083c04503b0e746a8a0f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y6HNSJ4D%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144507Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJGMEQCIBKr4t92DpTmu%2Bx2h3Zx4f0xzW9lnNGaJ5AnNsJutm9WAiBaceEk7qiV4vXTOsOO4ZkkJ9Ml7YyRpb5H3NWGClT%2BESqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFxOkaIDPgMHAEsMyKtwD%2Fj7r8UKIEXQD71Y6s%2Fsjmnr6HOov3wv%2BJugwTpelcRi%2BY5%2Bs3MgzJnPq0RH7TVw%2Fe802mNbvPCboOlIPxICzBaeUZO71O9rA1cqSryOI8nikqjbGmM%2F5j6KTyAhyXj56HSQmV%2BJrU9HRf%2BHkPW3XAVU1XPnV%2FOk0UXk%2FWlJj9%2FX6J%2FCwwGqXEcQQHiF7naCmy4bFvQhKeH80dnh2U1tTkNsYS%2FJ96M2fxpu%2FLdEWxUoh9enbWFZkCne4tlOZPtJWCR4I4H0G6%2BQX%2FYG7t3u8u5ofoaQLX%2BQbh6dYa8xkcitH%2Flb%2BW1nwChKbpwtrcc583kSvR2upO3KPgeYjSy81tPMmtqskQRTCDrklj1nNY8ptpJcHt6uIWvY208sUEbraNuRx0xZrdTI%2BdE3KcFTlP%2BcCXFba02%2B4ce7Bw21BoadIchcJIpv1HtSHOT3lZydPAQ8QYy%2FwGwQz%2BLKA2OEwKzv1dPiZ%2FEhm9rET4dfUy1dyFXcKI%2BCu1GikorV3bgD8cZwivLoJU3om1GSZQiL1lYm2kbcuohlxZ5NxAmfKuoslqRP92pSL%2BqwENe28TNLSRIy4ZYnxE19UuEsHOOt2C7m9lbMm6KtpcDSkBF3pj4iT6%2FDPA%2FSyKG5c%2Bj4w4JiT1gY6pgHSNw45n5OGhVmChWDkcdHEPOl90vN34ib5xKHkxhUlTNMgKuBNY7n3EDcRN%2BVmvMmcunmDFk%2F5fLmkqPgUDtExwHyN5AlPHlWwmFkLek34y5QK2QWbRCP%2FF%2BQ5g8YMbLCaduzUYQkTuCGtjbW5U8v9O5scI3hhJBZZiFDIwI2SLL%2FHPs%2FOaUSY5QIUTwBcHcPW1sjoA5tctPYICD6m3XI5hWonzxAI&X-Amz-Signature=941a67dad243f5f7290b894c85ff7659a3d01927ba27bfcbe3460255a0a73246&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q55YUNIX%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJIMEYCIQCJawVmqvAPYixB%2FFrf6lUhgZRmRP3mygQ%2Bn%2B2VQrBEqQIhAKRn2G6WeQracWHfhRPJ2z%2FQxqu9DwkcAbooDkfYpSXLKogECPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxM2xHjT%2FdWtCvmICwq3AMgY5QgzscmxbsL3XJcmJLQ%2BvVNSmEC%2BHOQMwA2hLWUQ%2BR6OgWoFuHg6UekMMq%2FUwUcBabYwlVMOP3za%2BXPKeuFIw8iwlJ4wOhDf7saCF8lmBfprr7wmYgxm6VRQZqvJe4JQRfjzxlx9h0soinP5%2F7hmvknUTU4e3agqq6JZjmZY9B0jICGvDUnQdgS8C8z6Qz9vAHmOgzoxVKVfdlvEugSiYc9HR2D4yEeenDjCNSYRiS%2BKAeYOe72bhWmyigOZlFzY59ekz0KS44OQqqKO0IQfeBQXBJZ8p2Ezt8vnD0v7rzay%2F%2BapelhBDsJrgGGXP9bL4WvwodKUoF55xGivA0Coeuxm%2F6qhL23aS5SRXttR606FkksUOpQJ3JwDPrO92SFvm9n55TUulKKcZh8YP8WYjybZsWTCReld4iOdoKUJSplGUcub0hvyR%2Fn1dZbdtjnayyG4qI2p1DfD%2FDMMO4RAsehq9CWzbdqvpy8p1zQn51wt7bMeY7KIFoIfrYFuWjdjY338xS%2BZgf%2Bjxu13tR49sxbvVbSVu5foDk9J2gjXQbpJM8I2LzJHhfvDtyzRL9ucuzHcTst679EDNyQzcWASEPQKA%2B6fBylg9Fwn8MUioGIiQ1CpDjjGmRjDDCXmpPWBjqkAVMkZXiA1ax2Ov%2F2zTdsHxqWJnu20SHCgQD6QcJkXRzz1o8QRcW3aV6LHmcFBQFSXedEnG5nn9s%2B4sXZag2e5u3JOh6VHksaE8ikF11qJNQUChTj77ggwEzt0ZM0d9x7H5KFVnXvUbwM8DC5xZbmkOhLqZbOUkR0nbUdQzaRwbBViwfvH87hJvQBUVskIS4rq4DKaeONOH2rPfDAyg%2FxAcAMmrkm&X-Amz-Signature=e394b170548940410c66d9adcea03af7c3b463a8705bb1e9135c91a8a8ee6b6a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q55YUNIX%2F20261006%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261006T144508Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECsaCXVzLXdlc3QtMiJIMEYCIQCJawVmqvAPYixB%2FFrf6lUhgZRmRP3mygQ%2Bn%2B2VQrBEqQIhAKRn2G6WeQracWHfhRPJ2z%2FQxqu9DwkcAbooDkfYpSXLKogECPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxM2xHjT%2FdWtCvmICwq3AMgY5QgzscmxbsL3XJcmJLQ%2BvVNSmEC%2BHOQMwA2hLWUQ%2BR6OgWoFuHg6UekMMq%2FUwUcBabYwlVMOP3za%2BXPKeuFIw8iwlJ4wOhDf7saCF8lmBfprr7wmYgxm6VRQZqvJe4JQRfjzxlx9h0soinP5%2F7hmvknUTU4e3agqq6JZjmZY9B0jICGvDUnQdgS8C8z6Qz9vAHmOgzoxVKVfdlvEugSiYc9HR2D4yEeenDjCNSYRiS%2BKAeYOe72bhWmyigOZlFzY59ekz0KS44OQqqKO0IQfeBQXBJZ8p2Ezt8vnD0v7rzay%2F%2BapelhBDsJrgGGXP9bL4WvwodKUoF55xGivA0Coeuxm%2F6qhL23aS5SRXttR606FkksUOpQJ3JwDPrO92SFvm9n55TUulKKcZh8YP8WYjybZsWTCReld4iOdoKUJSplGUcub0hvyR%2Fn1dZbdtjnayyG4qI2p1DfD%2FDMMO4RAsehq9CWzbdqvpy8p1zQn51wt7bMeY7KIFoIfrYFuWjdjY338xS%2BZgf%2Bjxu13tR49sxbvVbSVu5foDk9J2gjXQbpJM8I2LzJHhfvDtyzRL9ucuzHcTst679EDNyQzcWASEPQKA%2B6fBylg9Fwn8MUioGIiQ1CpDjjGmRjDDCXmpPWBjqkAVMkZXiA1ax2Ov%2F2zTdsHxqWJnu20SHCgQD6QcJkXRzz1o8QRcW3aV6LHmcFBQFSXedEnG5nn9s%2B4sXZag2e5u3JOh6VHksaE8ikF11qJNQUChTj77ggwEzt0ZM0d9x7H5KFVnXvUbwM8DC5xZbmkOhLqZbOUkR0nbUdQzaRwbBViwfvH87hJvQBUVskIS4rq4DKaeONOH2rPfDAyg%2FxAcAMmrkm&X-Amz-Signature=992a01068283432b19f31d5150ef80b5c1929cf5e889057e53458d3d38549639&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
