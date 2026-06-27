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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVZL63CI%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAEGmzTTxTx%2F5svrauPe39mH4jMEMSqzCdHDAGBz3VqUAiEA4wuo9HDNAP5Mrgfe1s%2FYBF%2BSrf3znRnnyDKXYmR%2B8Mcq%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDNPh9YWJRwcw5PKN5SrcAy3Z7%2F2mpG1uh1ZXqbr620K7njMGGLVwF5hTgmcbmbizAirm4R17Md0vbSqkIpUxlyJnZLGTIOBvZCPxUwL95PQQYHCCNWs8p6LGfl1ClwXG82wnz9x1%2BckUgMHJKOpAh0d%2Fd9LjE3IfP5MDXF2eIrPy%2FpJcNyHbURjgUCz3SZj9mQxgFqGbunMSPBPSbd%2BXqltNkKxlVwVtPuBj9%2BN2kmbnWLQezu2d3tN1wpsgtGTZsvQSa0SF5jWCq7y33dt2Ce14j5n9HmWZU1n6i7kRNxJuan9%2FtSECCvDMxtoAVAlordwaMVmoHm%2ByIvFuLy55Q6VEPTrMlSSGqY8bB0IoS3zXah%2FHWOTq6OdjG9ZdGoEcv6C3tkKVwAKA17%2BuaJ%2Fd34qC%2Fz9Lpta%2BC3njcW%2BQRzde4p8THrTtXogsh53OWjd3FEO7AjnQ9z79fcwl2ry1Fjj5nhQguPOOr4ExuMqT1m%2FKXSfmQ9isJstW3EhN7C0sHiQ5lkPHXyHzTwCqkHQ8FLJraaFuHn9m6dxgRvNnaBafJ8D%2B%2FkiU32H0GyVPvrZJpOSuPHvMExW2EIL1gnCNAAR5hcgs91RqyWDbPV7ljKDiyjQfa74F6Mayxx1gxBaLOKRpRqwXUOIav%2FqBMJOk%2FtEGOqUBAY7N7XASFrgqqEetdH5Iv4y2S4rfy%2BELVgxkNdoAM2%2FJhFiBBxyMKx5%2BxT3CjnEtpKqt9uSfX9yRsxqxqlFMUubOCyLfyXtpdV8BFUsvnSiy90JHRMbZnQY9%2BhsejSVpyd39MaDMAnv0xSnzDkq0RKQQ38Ahvim0ixAi3p0Os1pQENJNArCZl5xLRKBIJh8iJ6%2Bj534mA7s%2B68YLbX3wAeMcQyNs&X-Amz-Signature=77a7d1e31e6bb940ecee58992d73a43d18d3f1070a3d0e5ea69024733bd197ab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVZL63CI%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAEGmzTTxTx%2F5svrauPe39mH4jMEMSqzCdHDAGBz3VqUAiEA4wuo9HDNAP5Mrgfe1s%2FYBF%2BSrf3znRnnyDKXYmR%2B8Mcq%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDNPh9YWJRwcw5PKN5SrcAy3Z7%2F2mpG1uh1ZXqbr620K7njMGGLVwF5hTgmcbmbizAirm4R17Md0vbSqkIpUxlyJnZLGTIOBvZCPxUwL95PQQYHCCNWs8p6LGfl1ClwXG82wnz9x1%2BckUgMHJKOpAh0d%2Fd9LjE3IfP5MDXF2eIrPy%2FpJcNyHbURjgUCz3SZj9mQxgFqGbunMSPBPSbd%2BXqltNkKxlVwVtPuBj9%2BN2kmbnWLQezu2d3tN1wpsgtGTZsvQSa0SF5jWCq7y33dt2Ce14j5n9HmWZU1n6i7kRNxJuan9%2FtSECCvDMxtoAVAlordwaMVmoHm%2ByIvFuLy55Q6VEPTrMlSSGqY8bB0IoS3zXah%2FHWOTq6OdjG9ZdGoEcv6C3tkKVwAKA17%2BuaJ%2Fd34qC%2Fz9Lpta%2BC3njcW%2BQRzde4p8THrTtXogsh53OWjd3FEO7AjnQ9z79fcwl2ry1Fjj5nhQguPOOr4ExuMqT1m%2FKXSfmQ9isJstW3EhN7C0sHiQ5lkPHXyHzTwCqkHQ8FLJraaFuHn9m6dxgRvNnaBafJ8D%2B%2FkiU32H0GyVPvrZJpOSuPHvMExW2EIL1gnCNAAR5hcgs91RqyWDbPV7ljKDiyjQfa74F6Mayxx1gxBaLOKRpRqwXUOIav%2FqBMJOk%2FtEGOqUBAY7N7XASFrgqqEetdH5Iv4y2S4rfy%2BELVgxkNdoAM2%2FJhFiBBxyMKx5%2BxT3CjnEtpKqt9uSfX9yRsxqxqlFMUubOCyLfyXtpdV8BFUsvnSiy90JHRMbZnQY9%2BhsejSVpyd39MaDMAnv0xSnzDkq0RKQQ38Ahvim0ixAi3p0Os1pQENJNArCZl5xLRKBIJh8iJ6%2Bj534mA7s%2B68YLbX3wAeMcQyNs&X-Amz-Signature=7af9984e089d719bcafa1da1d941e6b62b9928a362b9742642157cb276ff7748&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZVZL63CI%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAEGmzTTxTx%2F5svrauPe39mH4jMEMSqzCdHDAGBz3VqUAiEA4wuo9HDNAP5Mrgfe1s%2FYBF%2BSrf3znRnnyDKXYmR%2B8Mcq%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDNPh9YWJRwcw5PKN5SrcAy3Z7%2F2mpG1uh1ZXqbr620K7njMGGLVwF5hTgmcbmbizAirm4R17Md0vbSqkIpUxlyJnZLGTIOBvZCPxUwL95PQQYHCCNWs8p6LGfl1ClwXG82wnz9x1%2BckUgMHJKOpAh0d%2Fd9LjE3IfP5MDXF2eIrPy%2FpJcNyHbURjgUCz3SZj9mQxgFqGbunMSPBPSbd%2BXqltNkKxlVwVtPuBj9%2BN2kmbnWLQezu2d3tN1wpsgtGTZsvQSa0SF5jWCq7y33dt2Ce14j5n9HmWZU1n6i7kRNxJuan9%2FtSECCvDMxtoAVAlordwaMVmoHm%2ByIvFuLy55Q6VEPTrMlSSGqY8bB0IoS3zXah%2FHWOTq6OdjG9ZdGoEcv6C3tkKVwAKA17%2BuaJ%2Fd34qC%2Fz9Lpta%2BC3njcW%2BQRzde4p8THrTtXogsh53OWjd3FEO7AjnQ9z79fcwl2ry1Fjj5nhQguPOOr4ExuMqT1m%2FKXSfmQ9isJstW3EhN7C0sHiQ5lkPHXyHzTwCqkHQ8FLJraaFuHn9m6dxgRvNnaBafJ8D%2B%2FkiU32H0GyVPvrZJpOSuPHvMExW2EIL1gnCNAAR5hcgs91RqyWDbPV7ljKDiyjQfa74F6Mayxx1gxBaLOKRpRqwXUOIav%2FqBMJOk%2FtEGOqUBAY7N7XASFrgqqEetdH5Iv4y2S4rfy%2BELVgxkNdoAM2%2FJhFiBBxyMKx5%2BxT3CjnEtpKqt9uSfX9yRsxqxqlFMUubOCyLfyXtpdV8BFUsvnSiy90JHRMbZnQY9%2BhsejSVpyd39MaDMAnv0xSnzDkq0RKQQ38Ahvim0ixAi3p0Os1pQENJNArCZl5xLRKBIJh8iJ6%2Bj534mA7s%2B68YLbX3wAeMcQyNs&X-Amz-Signature=fc95fe8fb11bca6d9397f8f0f7447f5cca64263ffec13174ab3e082717b4bc73&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRZKTPSD%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIARWCQJyPrPcKam5TU5PJ57aBF3fXKz5jn2BgHII8%2F23AiEAy2%2BlEAUsjWwFhYscfmiw51qkK2QPmY5ysp41CmPxN20q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDGxtyujMjmxexF9THSrcAzmgn0nuqF1HpFV%2F8Ti2bhfNyX8StLsq92s0Um4ovNtxJdGVomoInCkBFM%2FhKiaS6W82ZI10Vt7qd8eyoyWOknSBIztPvwVtRVAYTUC8CDRgedFxYyGZUJHQAqH5Lai6pINrQuYejwFnWUokt%2Bm9FAPMKV0ttvfPXYV0cooEscT%2FK8fAcyPrsPBbJqLRvkymr%2FojiclfxA36%2FfcvrfQEvD2h75bdDAOTgSR3PPqnlO976iIbi39seyztCCnlWiIU2fK0nPgTQxtNrN9iBA%2FT3CCWqlV8GBdmdPaUESIgD60XrLKY4rk9kLL%2BY%2FwhwLNuOhYp84%2BZ4FdgAq30LC4kXF5H8YhT7QK9jegGgONzJ6XoQ9SjMhOo6Q5u2qHqyg6ymwt3rlakIWNG0O581Vp4oNDR4XLWTD613Ca3BEiVvzlEYJUhK%2BSfBf306V2R7GW8vByn8GH3Kb%2BEzdD0scuLZk38Jt07VUqXTErmP88ULh1BDtmVmQga3eg964%2BowwWEk8UrIq6escREqvbk9aa5oqyxkl1yk2dJrvkNFN1h8az16kr7NCQ6DmaZPT8uKmhvtA7oMHXLXt9vKKsMt1uh38SrW9Ux%2BQrYnjkOrsH2o8fkiMQrL1V4U%2BU0mL8OMNuh%2FtEGOqUBq3nQlm1DKaAYdkevt93sdJC7XKP7tbAfyzulBqFefbqyvFeeucX9syjuYSM0Zu5xLbYXlTEn4B%2B8xGeyw2lQ3Y4p8%2BHDyVKzbqh2fQIHcA92PhaZ3ewq9f0%2FIoJZZpPu0Nwj0gFXvWN2IynUlnGUr5bmV6950P3aBpEEV7eDJ02%2BgdCyQiWOiYHy0SuzWH419sZkEhMIEzivwCzmZEEdRY%2Fl4%2BSY&X-Amz-Signature=5eda39d6e7bc5c50eeb90af26b44ebac82db9452dcc704d8cca24cc6832c3f45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRZKTPSD%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIARWCQJyPrPcKam5TU5PJ57aBF3fXKz5jn2BgHII8%2F23AiEAy2%2BlEAUsjWwFhYscfmiw51qkK2QPmY5ysp41CmPxN20q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDGxtyujMjmxexF9THSrcAzmgn0nuqF1HpFV%2F8Ti2bhfNyX8StLsq92s0Um4ovNtxJdGVomoInCkBFM%2FhKiaS6W82ZI10Vt7qd8eyoyWOknSBIztPvwVtRVAYTUC8CDRgedFxYyGZUJHQAqH5Lai6pINrQuYejwFnWUokt%2Bm9FAPMKV0ttvfPXYV0cooEscT%2FK8fAcyPrsPBbJqLRvkymr%2FojiclfxA36%2FfcvrfQEvD2h75bdDAOTgSR3PPqnlO976iIbi39seyztCCnlWiIU2fK0nPgTQxtNrN9iBA%2FT3CCWqlV8GBdmdPaUESIgD60XrLKY4rk9kLL%2BY%2FwhwLNuOhYp84%2BZ4FdgAq30LC4kXF5H8YhT7QK9jegGgONzJ6XoQ9SjMhOo6Q5u2qHqyg6ymwt3rlakIWNG0O581Vp4oNDR4XLWTD613Ca3BEiVvzlEYJUhK%2BSfBf306V2R7GW8vByn8GH3Kb%2BEzdD0scuLZk38Jt07VUqXTErmP88ULh1BDtmVmQga3eg964%2BowwWEk8UrIq6escREqvbk9aa5oqyxkl1yk2dJrvkNFN1h8az16kr7NCQ6DmaZPT8uKmhvtA7oMHXLXt9vKKsMt1uh38SrW9Ux%2BQrYnjkOrsH2o8fkiMQrL1V4U%2BU0mL8OMNuh%2FtEGOqUBq3nQlm1DKaAYdkevt93sdJC7XKP7tbAfyzulBqFefbqyvFeeucX9syjuYSM0Zu5xLbYXlTEn4B%2B8xGeyw2lQ3Y4p8%2BHDyVKzbqh2fQIHcA92PhaZ3ewq9f0%2FIoJZZpPu0Nwj0gFXvWN2IynUlnGUr5bmV6950P3aBpEEV7eDJ02%2BgdCyQiWOiYHy0SuzWH419sZkEhMIEzivwCzmZEEdRY%2Fl4%2BSY&X-Amz-Signature=ad3a48c7a5e252da57a4ccb8d9b997c5e43df0b57bb5b59c9b5da18cef33f332&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRZKTPSD%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIARWCQJyPrPcKam5TU5PJ57aBF3fXKz5jn2BgHII8%2F23AiEAy2%2BlEAUsjWwFhYscfmiw51qkK2QPmY5ysp41CmPxN20q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDGxtyujMjmxexF9THSrcAzmgn0nuqF1HpFV%2F8Ti2bhfNyX8StLsq92s0Um4ovNtxJdGVomoInCkBFM%2FhKiaS6W82ZI10Vt7qd8eyoyWOknSBIztPvwVtRVAYTUC8CDRgedFxYyGZUJHQAqH5Lai6pINrQuYejwFnWUokt%2Bm9FAPMKV0ttvfPXYV0cooEscT%2FK8fAcyPrsPBbJqLRvkymr%2FojiclfxA36%2FfcvrfQEvD2h75bdDAOTgSR3PPqnlO976iIbi39seyztCCnlWiIU2fK0nPgTQxtNrN9iBA%2FT3CCWqlV8GBdmdPaUESIgD60XrLKY4rk9kLL%2BY%2FwhwLNuOhYp84%2BZ4FdgAq30LC4kXF5H8YhT7QK9jegGgONzJ6XoQ9SjMhOo6Q5u2qHqyg6ymwt3rlakIWNG0O581Vp4oNDR4XLWTD613Ca3BEiVvzlEYJUhK%2BSfBf306V2R7GW8vByn8GH3Kb%2BEzdD0scuLZk38Jt07VUqXTErmP88ULh1BDtmVmQga3eg964%2BowwWEk8UrIq6escREqvbk9aa5oqyxkl1yk2dJrvkNFN1h8az16kr7NCQ6DmaZPT8uKmhvtA7oMHXLXt9vKKsMt1uh38SrW9Ux%2BQrYnjkOrsH2o8fkiMQrL1V4U%2BU0mL8OMNuh%2FtEGOqUBq3nQlm1DKaAYdkevt93sdJC7XKP7tbAfyzulBqFefbqyvFeeucX9syjuYSM0Zu5xLbYXlTEn4B%2B8xGeyw2lQ3Y4p8%2BHDyVKzbqh2fQIHcA92PhaZ3ewq9f0%2FIoJZZpPu0Nwj0gFXvWN2IynUlnGUr5bmV6950P3aBpEEV7eDJ02%2BgdCyQiWOiYHy0SuzWH419sZkEhMIEzivwCzmZEEdRY%2Fl4%2BSY&X-Amz-Signature=6f08301616ed6f20a054264d4e2e34d2b81861b19a87bc826f499972c4c802a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VRZKTPSD%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIARWCQJyPrPcKam5TU5PJ57aBF3fXKz5jn2BgHII8%2F23AiEAy2%2BlEAUsjWwFhYscfmiw51qkK2QPmY5ysp41CmPxN20q%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDGxtyujMjmxexF9THSrcAzmgn0nuqF1HpFV%2F8Ti2bhfNyX8StLsq92s0Um4ovNtxJdGVomoInCkBFM%2FhKiaS6W82ZI10Vt7qd8eyoyWOknSBIztPvwVtRVAYTUC8CDRgedFxYyGZUJHQAqH5Lai6pINrQuYejwFnWUokt%2Bm9FAPMKV0ttvfPXYV0cooEscT%2FK8fAcyPrsPBbJqLRvkymr%2FojiclfxA36%2FfcvrfQEvD2h75bdDAOTgSR3PPqnlO976iIbi39seyztCCnlWiIU2fK0nPgTQxtNrN9iBA%2FT3CCWqlV8GBdmdPaUESIgD60XrLKY4rk9kLL%2BY%2FwhwLNuOhYp84%2BZ4FdgAq30LC4kXF5H8YhT7QK9jegGgONzJ6XoQ9SjMhOo6Q5u2qHqyg6ymwt3rlakIWNG0O581Vp4oNDR4XLWTD613Ca3BEiVvzlEYJUhK%2BSfBf306V2R7GW8vByn8GH3Kb%2BEzdD0scuLZk38Jt07VUqXTErmP88ULh1BDtmVmQga3eg964%2BowwWEk8UrIq6escREqvbk9aa5oqyxkl1yk2dJrvkNFN1h8az16kr7NCQ6DmaZPT8uKmhvtA7oMHXLXt9vKKsMt1uh38SrW9Ux%2BQrYnjkOrsH2o8fkiMQrL1V4U%2BU0mL8OMNuh%2FtEGOqUBq3nQlm1DKaAYdkevt93sdJC7XKP7tbAfyzulBqFefbqyvFeeucX9syjuYSM0Zu5xLbYXlTEn4B%2B8xGeyw2lQ3Y4p8%2BHDyVKzbqh2fQIHcA92PhaZ3ewq9f0%2FIoJZZpPu0Nwj0gFXvWN2IynUlnGUr5bmV6950P3aBpEEV7eDJ02%2BgdCyQiWOiYHy0SuzWH419sZkEhMIEzivwCzmZEEdRY%2Fl4%2BSY&X-Amz-Signature=fc96d52e229a0316ddba3a96c1e8dc885a214ba66df935406554ad663c3c3557&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664ICN4GV3%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100706Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD9FH8fqaHIVRzdHffeFJ3BE7d6XDIf4VHbg%2BeW7ivTPgIgVuzJrmCbxtFxizRXqPbuieF7AKuNHMbnfFYcnDH5FYMq%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDJCH3vJmHqGjJcgq2SrcAy6cQllwPl0xmMOfOMTaN9Qop78sUIZXpT%2F5p7JM3KtPGAjm792%2B119Yxrld2FW3MDrc4AIeCBxs2JhxAMUFNHIH5t0iIJZPTqiDKRxmu9tbJL74lbLK9LVECU3wR%2FeU0k584sSK%2FBybxsWgtuh2WBxXIfoKZJkRO1xY2gkLu0nswnHuUjsWUAOsTExngxVX134fzavwfoeAoanOeLmB8BQkP0SEFUxtu2aZl7POollMApppGQl%2FOTuva3u0nZRd9Z1Ym3yB%2BJuPf8n2Caop5F3MbnJVA7EEP6fq6I4ZJJn4UlafXQVK%2BX8lVCM5vNd05%2FYDVGltVRgwMZML30CjX2yG8uzTv%2BC1oGZFgptHM4HmHKhnRjlU8pV7HyZs8m9aw46h%2Bqg9EaD022fSaGKoMhzivaLJKFhK3l9kX%2Bir%2FF7A7SYlciCSdQoslVPqLOOBFIriQUl%2B597D0%2F3UjFjq98xZb9U1AFHpPXT9SseWElByUxzvUjJmlItwRL5ijOZVwIxXBO%2BqyGzAlEGrV4wsJ1UDHny1f5c7O8qp1FTdvh0mtsYUo3brCGCBov0s%2B4cope%2FYN0WW4mN%2B%2Bo2SBNzY2tpvuLzxnsWKkZg%2B8agzWqXdU2Au7IYJ8RRK0A62MPyj%2FtEGOqUBzYExLVaqnfY%2FiNmCez1yokbZ669s7G50dWB0ltPEVJCzksNeHsOZHCrfRNLnXYXst0%2FrV7o8zPz4ze0XDOoB4nnDD7NrFjp8I5l%2FXdE8eLwO115Z35EWJ69sBOrA4dQM4NC9HUkr2wRoOffadSMHECSgu43jOWIjtjMnb%2Fy9WKSqJWnPzRzKykKYnkX9HdQIgpX8JY9zmZe4sickvzNB89lSEO8g&X-Amz-Signature=d2c18c47fc4951e950619dd4c3a2fb032995caf59058a509b402b88143fb9113&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664W5DATCX%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100706Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCSosmb%2B%2F3MBrgeeEqZY7vqiSDvuI7PFemrud4LC3anGgIgSHHztAWwMxdu0GGcRmyL25C%2B3cFtZeRWA6dvVIOe5WEq%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDI9tppj0ImR76dBqfyrcA0ZVvdwE2mD%2BiVXvN71yJz%2B%2FROm2sWpVktRADMZxOLChnWNo2BNpWMbT9mbZp8d67PKH9lkZUdVfZFsu9fQrCzgMIzsylFwKbRdrej9EKxP%2BA%2Bk%2BTFPAryL3tkhv2rH7uhjCZFsPRCC4Kd53oFRbdQDqImFmRxrM7T7mCX%2F4JB0L593AVLVvoLoguxRXwN6URIcOlV2fiIR4VUtFjPqe8QmnUes%2BWVTh4%2FcY1mUpAHUt0GDPbJf0WZd3%2BDP%2Brih9s0z0WVeMl1FJ5livFqV%2BzeIXVn1Ov414xfrxHJiKOf5AIC5LGDUxtKBlNTW19dvKciwyqJjt4l2Aqt2Sd2zy8dp%2BovByswCMejU%2FAOQJd5%2B9MiALvlgCYGvUsYFPwM21tX18McPVj7IKHYPluIhPRIj2qQ%2FTrwN7LNB0JIzubBn6fQ8wotUnMXea9iYvTOXmXVbiUgJqMjBB45J2j%2BRJIPhDuYgkj7tVsjM%2F9JEKHye05SO8ygf4TmdYEq%2B9CN9De1%2FyWfFo%2FMfysEMgdWhBX0oQtkrrEh2daUMVoQzl3%2FqneHitcxq7ka60VN%2FL1rjenDkefkgL0oIx2iqmo23XIStigRlfZIZiS%2BlvQLDh%2B%2B3c4R7FG5kVEVHUayNBMN%2Bj%2FtEGOqUB7LIg5FTpcesKXh3iNWNVb9JzC%2Bgbusb%2BtGbbuHFMMtE53eC%2B6PBRJGyEu1Hd6%2FT8KmEDm14XDjxEza5z1e5xMxIaNSQLrE9EPiD%2FZOm40Qw5akn6e%2FMxt6JCnmDbo2aQfp7P77p6kxo8F6%2BGn1v5O4k7hORw90HzaTDpzWznuL31IKDZETmkqA4bWZEiv9KF9ZNzIicj%2B7clJlZlhOfLTrQY6HOU&X-Amz-Signature=db6cebfe03e63deebfd7d621a93b788580c7123ce2cbcdb0f1a1252fa5fb156c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664W5DATCX%2F20260627%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260627T100706Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCSosmb%2B%2F3MBrgeeEqZY7vqiSDvuI7PFemrud4LC3anGgIgSHHztAWwMxdu0GGcRmyL25C%2B3cFtZeRWA6dvVIOe5WEq%2FwMIehAAGgw2Mzc0MjMxODM4MDUiDI9tppj0ImR76dBqfyrcA0ZVvdwE2mD%2BiVXvN71yJz%2B%2FROm2sWpVktRADMZxOLChnWNo2BNpWMbT9mbZp8d67PKH9lkZUdVfZFsu9fQrCzgMIzsylFwKbRdrej9EKxP%2BA%2Bk%2BTFPAryL3tkhv2rH7uhjCZFsPRCC4Kd53oFRbdQDqImFmRxrM7T7mCX%2F4JB0L593AVLVvoLoguxRXwN6URIcOlV2fiIR4VUtFjPqe8QmnUes%2BWVTh4%2FcY1mUpAHUt0GDPbJf0WZd3%2BDP%2Brih9s0z0WVeMl1FJ5livFqV%2BzeIXVn1Ov414xfrxHJiKOf5AIC5LGDUxtKBlNTW19dvKciwyqJjt4l2Aqt2Sd2zy8dp%2BovByswCMejU%2FAOQJd5%2B9MiALvlgCYGvUsYFPwM21tX18McPVj7IKHYPluIhPRIj2qQ%2FTrwN7LNB0JIzubBn6fQ8wotUnMXea9iYvTOXmXVbiUgJqMjBB45J2j%2BRJIPhDuYgkj7tVsjM%2F9JEKHye05SO8ygf4TmdYEq%2B9CN9De1%2FyWfFo%2FMfysEMgdWhBX0oQtkrrEh2daUMVoQzl3%2FqneHitcxq7ka60VN%2FL1rjenDkefkgL0oIx2iqmo23XIStigRlfZIZiS%2BlvQLDh%2B%2B3c4R7FG5kVEVHUayNBMN%2Bj%2FtEGOqUB7LIg5FTpcesKXh3iNWNVb9JzC%2Bgbusb%2BtGbbuHFMMtE53eC%2B6PBRJGyEu1Hd6%2FT8KmEDm14XDjxEza5z1e5xMxIaNSQLrE9EPiD%2FZOm40Qw5akn6e%2FMxt6JCnmDbo2aQfp7P77p6kxo8F6%2BGn1v5O4k7hORw90HzaTDpzWznuL31IKDZETmkqA4bWZEiv9KF9ZNzIicj%2B7clJlZlhOfLTrQY6HOU&X-Amz-Signature=892943a976e52e2934c17d0e8e3fcc980d72784670c8ade5a6ce47b4ac498348&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
