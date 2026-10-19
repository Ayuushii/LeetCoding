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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFFBVPGG%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJHMEUCIFA1atlFprROJlPJf55lgGl8wE8hSYJH1ZZJudAbdHKNAiEA8noPHgzNySJXsIVmCdjfn%2FFtLStYakT3wfGBnon8Cnwq%2FwMIMBAAGgw2Mzc0MjMxODM4MDUiDPp8UD7RZPdX4qyR%2FSrcA8bheAAZPtgHlGD25ZUXotlyrwUrlotrGHdlz2OMOpgNKcpugGDBbQCMYWQG%2F5ejIvdn7x4UxmeDjSZWEwXAckIcPbDs0xB2YRTrN7Xoa8Lr2Kkt5XBh4qXw4j%2B9fUDQRewqbjebr3WSUq1iOnLszq2HPdFLhfVkjrwXbLdXTbrywnwCCkMBfMialh7Lv1k%2BD9Tv7S9aZKkXbD9xa1KYtiNdfat2vk1%2FDV%2BvDyTxgWc2TxlbXJrDBkqX9Py6RMEkHgpmslYSVgFuft4AP6oSmQfiLItUnS2M2aLaC5ho4YlS5OZitt8JWRrIJI53UuovYyorgfJIRaxOXU3rMVn%2BYr70r4uBsjwVM75dpPVL9eiJ1PKGwxm2TaIBvbrlsR92p6W%2FHeNHP%2BIbpWHCC5GzufWJH%2Fo%2B06I9gXnwZ9gOlA7IJgXNK%2BUPzlF7PqTFISvaFSn5%2BkgOyaMwBks2LVLgL5Q2lIPd9ZcrPS%2B9%2BFrDI7%2B9jT7ac3YziqO%2FwJh%2BWh5cckflz8RUVTIWneZnNSKuxHkWJ%2FFzAioc%2FNa3ajU%2FokKnejvamaMu34oxiKSmJfr31EXKUbizHkU2YX8XkPyvrAMMGULArVtoiLc%2B658rvPzrJGE1h%2F6ytRKBylNlMLPh2NYGOqUBfjMWe92A%2FvypdVj1OMEnIsMJN2BhtTdbNEy%2BkVX40eDSU3gF4w%2F7apm1441afqHBZdcdplDvO0OTSu9TgoqCyYE5mtxOkQInuyw9wMfqR5sAIWwZiHEz5cMsJToVdeCgqA7ly5W%2BCLcr9Uzj9sVrHZ3ltP6CIWjMjrkB8kUtskOhCAEdeP%2B%2Bh3OVnPUruqcqO7g3Mk2kquBuh8lZOGF8k9bQ8WiV&X-Amz-Signature=4bacecd15b4832467b707770a8ba3fcefc813878910eaa5162a64cb5ef8f3829&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFFBVPGG%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJHMEUCIFA1atlFprROJlPJf55lgGl8wE8hSYJH1ZZJudAbdHKNAiEA8noPHgzNySJXsIVmCdjfn%2FFtLStYakT3wfGBnon8Cnwq%2FwMIMBAAGgw2Mzc0MjMxODM4MDUiDPp8UD7RZPdX4qyR%2FSrcA8bheAAZPtgHlGD25ZUXotlyrwUrlotrGHdlz2OMOpgNKcpugGDBbQCMYWQG%2F5ejIvdn7x4UxmeDjSZWEwXAckIcPbDs0xB2YRTrN7Xoa8Lr2Kkt5XBh4qXw4j%2B9fUDQRewqbjebr3WSUq1iOnLszq2HPdFLhfVkjrwXbLdXTbrywnwCCkMBfMialh7Lv1k%2BD9Tv7S9aZKkXbD9xa1KYtiNdfat2vk1%2FDV%2BvDyTxgWc2TxlbXJrDBkqX9Py6RMEkHgpmslYSVgFuft4AP6oSmQfiLItUnS2M2aLaC5ho4YlS5OZitt8JWRrIJI53UuovYyorgfJIRaxOXU3rMVn%2BYr70r4uBsjwVM75dpPVL9eiJ1PKGwxm2TaIBvbrlsR92p6W%2FHeNHP%2BIbpWHCC5GzufWJH%2Fo%2B06I9gXnwZ9gOlA7IJgXNK%2BUPzlF7PqTFISvaFSn5%2BkgOyaMwBks2LVLgL5Q2lIPd9ZcrPS%2B9%2BFrDI7%2B9jT7ac3YziqO%2FwJh%2BWh5cckflz8RUVTIWneZnNSKuxHkWJ%2FFzAioc%2FNa3ajU%2FokKnejvamaMu34oxiKSmJfr31EXKUbizHkU2YX8XkPyvrAMMGULArVtoiLc%2B658rvPzrJGE1h%2F6ytRKBylNlMLPh2NYGOqUBfjMWe92A%2FvypdVj1OMEnIsMJN2BhtTdbNEy%2BkVX40eDSU3gF4w%2F7apm1441afqHBZdcdplDvO0OTSu9TgoqCyYE5mtxOkQInuyw9wMfqR5sAIWwZiHEz5cMsJToVdeCgqA7ly5W%2BCLcr9Uzj9sVrHZ3ltP6CIWjMjrkB8kUtskOhCAEdeP%2B%2Bh3OVnPUruqcqO7g3Mk2kquBuh8lZOGF8k9bQ8WiV&X-Amz-Signature=bc8b7f4725d4b87747390cdea368605148e9b556c4745788bd68dc97505cbb3a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WFFBVPGG%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJHMEUCIFA1atlFprROJlPJf55lgGl8wE8hSYJH1ZZJudAbdHKNAiEA8noPHgzNySJXsIVmCdjfn%2FFtLStYakT3wfGBnon8Cnwq%2FwMIMBAAGgw2Mzc0MjMxODM4MDUiDPp8UD7RZPdX4qyR%2FSrcA8bheAAZPtgHlGD25ZUXotlyrwUrlotrGHdlz2OMOpgNKcpugGDBbQCMYWQG%2F5ejIvdn7x4UxmeDjSZWEwXAckIcPbDs0xB2YRTrN7Xoa8Lr2Kkt5XBh4qXw4j%2B9fUDQRewqbjebr3WSUq1iOnLszq2HPdFLhfVkjrwXbLdXTbrywnwCCkMBfMialh7Lv1k%2BD9Tv7S9aZKkXbD9xa1KYtiNdfat2vk1%2FDV%2BvDyTxgWc2TxlbXJrDBkqX9Py6RMEkHgpmslYSVgFuft4AP6oSmQfiLItUnS2M2aLaC5ho4YlS5OZitt8JWRrIJI53UuovYyorgfJIRaxOXU3rMVn%2BYr70r4uBsjwVM75dpPVL9eiJ1PKGwxm2TaIBvbrlsR92p6W%2FHeNHP%2BIbpWHCC5GzufWJH%2Fo%2B06I9gXnwZ9gOlA7IJgXNK%2BUPzlF7PqTFISvaFSn5%2BkgOyaMwBks2LVLgL5Q2lIPd9ZcrPS%2B9%2BFrDI7%2B9jT7ac3YziqO%2FwJh%2BWh5cckflz8RUVTIWneZnNSKuxHkWJ%2FFzAioc%2FNa3ajU%2FokKnejvamaMu34oxiKSmJfr31EXKUbizHkU2YX8XkPyvrAMMGULArVtoiLc%2B658rvPzrJGE1h%2F6ytRKBylNlMLPh2NYGOqUBfjMWe92A%2FvypdVj1OMEnIsMJN2BhtTdbNEy%2BkVX40eDSU3gF4w%2F7apm1441afqHBZdcdplDvO0OTSu9TgoqCyYE5mtxOkQInuyw9wMfqR5sAIWwZiHEz5cMsJToVdeCgqA7ly5W%2BCLcr9Uzj9sVrHZ3ltP6CIWjMjrkB8kUtskOhCAEdeP%2B%2Bh3OVnPUruqcqO7g3Mk2kquBuh8lZOGF8k9bQ8WiV&X-Amz-Signature=7dcb80661f6c8d89ce322b54f6563f0942046b027a53023ef1c907e27b5f4a60&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VJYTR3RD%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJIMEYCIQCCsNL5%2FOv0G8OWMhyDwGmOgoW%2BnxdLJbYnIqBhOjXAdwIhAPiDMbN84pS8er67smxprRoYokfMusNTs3Hq6pVFHtNeKv8DCDAQABoMNjM3NDIzMTgzODA1Igx3sFzgtypF1FbIkJIq3AMOPBsFZp4mX7K%2BPaUXlKVr5t%2FqnVSW1t9zwXsrjQ5iGHI%2BlzdHeV8zvKYbRoyR7upwC0GbtogC%2BgxY9os73fgMZWAVFKqHkM0%2BQSQ9BL2psDDvBGengDgoHIgtByg5D83TpYKz57a0gCgmOpZ8HzskE9QBkOLarBqviNFiHPsmBB06p7RAv%2B3%2Fv0xUf1jqteA1jYYWdonE88bZtngUebH1wwn6ot4Xi9Ne9GO5JwkS6LYC8o0pmcwGJyTT8%2BGGZ%2BTzQt2ldJNePDQNU%2BArWGrqEp6bfzj2FAa%2BIDshT2vuOlNBHR5gVv%2Bo5D3m%2FQ4wSZEXbovqJgTWfEkQTGigVEXn48pnysq%2FT6m%2FboUD5b5udAhUYAlC%2FW9FDF5sXxXYt2WiBTUg51T4QRbbQsMa44tr%2BQ69uRM%2Fa93I29M%2BoOkyPFlAHRZ2sZ0XphVqeFRo2yrIVFo9ZIzXycqeypVtA5pQS8h%2FdEQ9TKi0pM2WCPow02OWUoIScbxrVxJi%2BfKD%2FTWoW8LISHe4FQ%2BjHybRxlyQWSMl5vO1PduE%2FLYOxhFdflGBd6Nps9WqYqYRlPp1Eln5ALaxN0fywjKqDfA%2BdnnOvnP%2Bty18rEjq5AdzEItmk118M5Qrsomtak5q2zDk4djWBjqkAbFbPp2Rj8y5UCJV4N9d%2Ff7Q%2Fv%2BPFOLkxPXwJ%2FnxawVFSmHTAN45UbEc%2BwtlYji3UKnsaSVvGL5jlNX3HmhSmk3va0qr4ZVw8yR1rZa76sfS77WNDNqDY%2F0M6GPhBYCfaHnOhj1YESpxOjDyDEUGKxlaBzn72MPCd6MTQU9EFRqtIlceLU6aS6GvurD%2FeTCmFVcfz2Yz2t4i3jVsvQChXSToEtIY&X-Amz-Signature=32896e37d8ec5a4842b6af4448c0b94676aeaedb5efbd25c0573f08c564829c7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VJYTR3RD%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJIMEYCIQCCsNL5%2FOv0G8OWMhyDwGmOgoW%2BnxdLJbYnIqBhOjXAdwIhAPiDMbN84pS8er67smxprRoYokfMusNTs3Hq6pVFHtNeKv8DCDAQABoMNjM3NDIzMTgzODA1Igx3sFzgtypF1FbIkJIq3AMOPBsFZp4mX7K%2BPaUXlKVr5t%2FqnVSW1t9zwXsrjQ5iGHI%2BlzdHeV8zvKYbRoyR7upwC0GbtogC%2BgxY9os73fgMZWAVFKqHkM0%2BQSQ9BL2psDDvBGengDgoHIgtByg5D83TpYKz57a0gCgmOpZ8HzskE9QBkOLarBqviNFiHPsmBB06p7RAv%2B3%2Fv0xUf1jqteA1jYYWdonE88bZtngUebH1wwn6ot4Xi9Ne9GO5JwkS6LYC8o0pmcwGJyTT8%2BGGZ%2BTzQt2ldJNePDQNU%2BArWGrqEp6bfzj2FAa%2BIDshT2vuOlNBHR5gVv%2Bo5D3m%2FQ4wSZEXbovqJgTWfEkQTGigVEXn48pnysq%2FT6m%2FboUD5b5udAhUYAlC%2FW9FDF5sXxXYt2WiBTUg51T4QRbbQsMa44tr%2BQ69uRM%2Fa93I29M%2BoOkyPFlAHRZ2sZ0XphVqeFRo2yrIVFo9ZIzXycqeypVtA5pQS8h%2FdEQ9TKi0pM2WCPow02OWUoIScbxrVxJi%2BfKD%2FTWoW8LISHe4FQ%2BjHybRxlyQWSMl5vO1PduE%2FLYOxhFdflGBd6Nps9WqYqYRlPp1Eln5ALaxN0fywjKqDfA%2BdnnOvnP%2Bty18rEjq5AdzEItmk118M5Qrsomtak5q2zDk4djWBjqkAbFbPp2Rj8y5UCJV4N9d%2Ff7Q%2Fv%2BPFOLkxPXwJ%2FnxawVFSmHTAN45UbEc%2BwtlYji3UKnsaSVvGL5jlNX3HmhSmk3va0qr4ZVw8yR1rZa76sfS77WNDNqDY%2F0M6GPhBYCfaHnOhj1YESpxOjDyDEUGKxlaBzn72MPCd6MTQU9EFRqtIlceLU6aS6GvurD%2FeTCmFVcfz2Yz2t4i3jVsvQChXSToEtIY&X-Amz-Signature=d6574ddd6b31d938b6aee8165d4e09a89a15a710bd5ecb8da8175e05d27ce561&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VJYTR3RD%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJIMEYCIQCCsNL5%2FOv0G8OWMhyDwGmOgoW%2BnxdLJbYnIqBhOjXAdwIhAPiDMbN84pS8er67smxprRoYokfMusNTs3Hq6pVFHtNeKv8DCDAQABoMNjM3NDIzMTgzODA1Igx3sFzgtypF1FbIkJIq3AMOPBsFZp4mX7K%2BPaUXlKVr5t%2FqnVSW1t9zwXsrjQ5iGHI%2BlzdHeV8zvKYbRoyR7upwC0GbtogC%2BgxY9os73fgMZWAVFKqHkM0%2BQSQ9BL2psDDvBGengDgoHIgtByg5D83TpYKz57a0gCgmOpZ8HzskE9QBkOLarBqviNFiHPsmBB06p7RAv%2B3%2Fv0xUf1jqteA1jYYWdonE88bZtngUebH1wwn6ot4Xi9Ne9GO5JwkS6LYC8o0pmcwGJyTT8%2BGGZ%2BTzQt2ldJNePDQNU%2BArWGrqEp6bfzj2FAa%2BIDshT2vuOlNBHR5gVv%2Bo5D3m%2FQ4wSZEXbovqJgTWfEkQTGigVEXn48pnysq%2FT6m%2FboUD5b5udAhUYAlC%2FW9FDF5sXxXYt2WiBTUg51T4QRbbQsMa44tr%2BQ69uRM%2Fa93I29M%2BoOkyPFlAHRZ2sZ0XphVqeFRo2yrIVFo9ZIzXycqeypVtA5pQS8h%2FdEQ9TKi0pM2WCPow02OWUoIScbxrVxJi%2BfKD%2FTWoW8LISHe4FQ%2BjHybRxlyQWSMl5vO1PduE%2FLYOxhFdflGBd6Nps9WqYqYRlPp1Eln5ALaxN0fywjKqDfA%2BdnnOvnP%2Bty18rEjq5AdzEItmk118M5Qrsomtak5q2zDk4djWBjqkAbFbPp2Rj8y5UCJV4N9d%2Ff7Q%2Fv%2BPFOLkxPXwJ%2FnxawVFSmHTAN45UbEc%2BwtlYji3UKnsaSVvGL5jlNX3HmhSmk3va0qr4ZVw8yR1rZa76sfS77WNDNqDY%2F0M6GPhBYCfaHnOhj1YESpxOjDyDEUGKxlaBzn72MPCd6MTQU9EFRqtIlceLU6aS6GvurD%2FeTCmFVcfz2Yz2t4i3jVsvQChXSToEtIY&X-Amz-Signature=304827d9f199eeba09addd5ca5e9ba8cbeac7d1978f945eac03b2d980c1d2a17&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VJYTR3RD%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151703Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJIMEYCIQCCsNL5%2FOv0G8OWMhyDwGmOgoW%2BnxdLJbYnIqBhOjXAdwIhAPiDMbN84pS8er67smxprRoYokfMusNTs3Hq6pVFHtNeKv8DCDAQABoMNjM3NDIzMTgzODA1Igx3sFzgtypF1FbIkJIq3AMOPBsFZp4mX7K%2BPaUXlKVr5t%2FqnVSW1t9zwXsrjQ5iGHI%2BlzdHeV8zvKYbRoyR7upwC0GbtogC%2BgxY9os73fgMZWAVFKqHkM0%2BQSQ9BL2psDDvBGengDgoHIgtByg5D83TpYKz57a0gCgmOpZ8HzskE9QBkOLarBqviNFiHPsmBB06p7RAv%2B3%2Fv0xUf1jqteA1jYYWdonE88bZtngUebH1wwn6ot4Xi9Ne9GO5JwkS6LYC8o0pmcwGJyTT8%2BGGZ%2BTzQt2ldJNePDQNU%2BArWGrqEp6bfzj2FAa%2BIDshT2vuOlNBHR5gVv%2Bo5D3m%2FQ4wSZEXbovqJgTWfEkQTGigVEXn48pnysq%2FT6m%2FboUD5b5udAhUYAlC%2FW9FDF5sXxXYt2WiBTUg51T4QRbbQsMa44tr%2BQ69uRM%2Fa93I29M%2BoOkyPFlAHRZ2sZ0XphVqeFRo2yrIVFo9ZIzXycqeypVtA5pQS8h%2FdEQ9TKi0pM2WCPow02OWUoIScbxrVxJi%2BfKD%2FTWoW8LISHe4FQ%2BjHybRxlyQWSMl5vO1PduE%2FLYOxhFdflGBd6Nps9WqYqYRlPp1Eln5ALaxN0fywjKqDfA%2BdnnOvnP%2Bty18rEjq5AdzEItmk118M5Qrsomtak5q2zDk4djWBjqkAbFbPp2Rj8y5UCJV4N9d%2Ff7Q%2Fv%2BPFOLkxPXwJ%2FnxawVFSmHTAN45UbEc%2BwtlYji3UKnsaSVvGL5jlNX3HmhSmk3va0qr4ZVw8yR1rZa76sfS77WNDNqDY%2F0M6GPhBYCfaHnOhj1YESpxOjDyDEUGKxlaBzn72MPCd6MTQU9EFRqtIlceLU6aS6GvurD%2FeTCmFVcfz2Yz2t4i3jVsvQChXSToEtIY&X-Amz-Signature=2c9a6b124fd548bea689a9fda337f02a5d668e0a38eee39c1e313d6eeb3a277e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665LZK4CZD%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJGMEQCIHbt9pArq76wIutmTqxzBVmB2sv3mEgkky6IfsdVzXx4AiANF2KL9%2Ff2Y32keJ49d4XxVv1FaUiq77Z%2FnOkZMOpgKyr%2FAwgwEAAaDDYzNzQyMzE4MzgwNSIMUnQPH4H4wnBGx6JLKtwDPYryQFvoPY%2BMqjmROmQ4IiwtLXpVYZaYEB9MEofP3l%2BbVXTXYlveKMGfCnQgS8Sz929u8cJfp3MQUEsxQlCEd7DdKQRoxY1%2BKVGWlopoHges2se8ky1Vf20VoAuaxEuF9Or3HETjoPBdNEYb7kZfTsPksCsr316CQX6RItXa39jHznHDe0%2BtAh76yv2T%2FXmTULLeg1pDzgiH7gfESjpQtvN2aAqSle8ik%2BVvBS7By1wPIEc7fAjUSOPkXAn0ygxLSHeU0sjCxfwQiEthtW%2FX%2FmmBespn6M3nY9kFit3eC8wkF2PAL6Ol%2B93CkbOKY5Czcq%2FE2NrYOnYC8TOmCxUrh5LIn2ar%2FZc3QAfMsG7%2FvQKpAmYVW28Jo6BY0kxQSRNUuhC3rw55qyrcdyQtVpj%2BWA3VgvJgfUHlKSoT5Lf7BZZux6gH4hezTYf6chfj4Bxf3sCqhiOOzcxM6GP%2BCfJK8mLE%2Bt4QSgtwq2F4pZtum2moc21JPWxQo4C%2Bo0ZBJIeWHEIIzYIjIaQdtnYIqabq%2FygfIKSXghNGTfjtJRlgcbpzC4Gf2KhLWdtHehxIpCfMGYM7A%2B9UPyvCQiyJ9NgQi2ntTxWUbwLH1tbyazIeWk0KxE7nQ%2FsqMoeek0Mwo%2BDY1gY6pgHILHXEAB6A%2BPB1MJjgVQH36EFhP3LwQocEWM1FixBK4k%2FI%2Bf4XTRhjhsJZUWlX0T2Qs5ClXdxLmOnwnhGAReB8Izrh6pgwkf6IppkHIKVJeHqlP5bfFj%2F16uvIJ4v8SR6CeJDM6t9Jg7MUdaaaqd4BqVZ6h%2FLuLFcCG%2B6l5X7vMWboVSCoZrx93Zm%2FNGEkY%2FJQMxYxMrwlm9mz51wY%2F1x9ir3X%2BDb4&X-Amz-Signature=56508009788685356d378b79cb1eb9f6be6c45f165b4ee551df55e6f2b98d8e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQNRZR3O%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJHMEUCIQCpUNPujB6TT8QtsOif1frEXPOJvfWdEN%2FN3ez%2FevB%2BhwIgEtnWl%2F4tT28YC7Y4EMfHqfvCwfGuCIOKisrufEcxYG0q%2FwMILxAAGgw2Mzc0MjMxODM4MDUiDNgxx%2F%2FxpfpR%2Fa%2BjQCrcA6mXu38HaJJbS3dpVvrhWy57jl08Bhr2cr6ifF9csY94ov6ycdBVKK8g8277gFrrpcqIq2FPObHdLz3QtnFSssuOiTtZNCHYLk9V0N%2FAwckO4lZSRn6kBaS9L5v9Qln1J%2BUR2B9WCfKh5LF1ibn8aEsXVGC2Xsu%2BoF7p80zp024ZtzLMixl9Yuiw%2FH8hgD4DWYj0dx9R1MsjhaF1xOSk%2BLYfG%2B%2F2Fp4%2FBpWHFZgkAJKVH6O7ZmkvbFEIBN2Hdt8feDK5dxlyXImzAAwH4Fxulgo9iYIhVfQKrlOnkmC%2F1H4Zj6JHOGsyLcEYlM%2BkSqwc%2BuG%2BZDZYhpXYUYhyuEZ%2FbYlZro7nZtEnMJ55coVP079I2ZRf%2FwglcedPzHACfG1HZX643H6l3QOH4hy%2B5cE9yrAp11QwFRE1JH5lORCQOz1dGFcIIBLQLE2kkOORnOjglbXxDp57C43UB%2FCrdJhzidZ5vaTnFaj5ns%2FdQsw%2FDAObTg%2B8qgY5o0tI4A4t%2FBSKxWpZqwVSaln4C4P3UzkjtyQnphIW2ZYH0jlvpj4a0MM9NxdVWru2xNlh6vCQkNMi2Hp352cgX8%2FVqrF4S4%2FQ58Gz0%2FXpU6v26Eo6d8VrKoypbNh5Bh6azT2SUcNeMJHi2NYGOqUBxuvVvA7k1xPXPg5C4zGJHIz9AtEgOYXXM6AjEaZm1nlcOHeVjTJUZdfpKsklMcbtrzdeS2oOpQSEPkn1q7rVYxa%2BGp0BWo6Mnxr3vPB5QoAycSBoXsWHksaN5LBxGP9hsWdl3O4x7gmX3%2B5nbaIjrXfS2c05AFA72XRvq3Qy16YVEVoeCr9eOzxsXGb6eNcHonNzyAGcW9nWd9oFscKEtUF4DeZo&X-Amz-Signature=f09661cce2d3115eddf549c91ba6d8c30ef68fe97ca895b9b78df8516dfcb5cc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQNRZR3O%2F20261019%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261019T151704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGcaCXVzLXdlc3QtMiJHMEUCIQCpUNPujB6TT8QtsOif1frEXPOJvfWdEN%2FN3ez%2FevB%2BhwIgEtnWl%2F4tT28YC7Y4EMfHqfvCwfGuCIOKisrufEcxYG0q%2FwMILxAAGgw2Mzc0MjMxODM4MDUiDNgxx%2F%2FxpfpR%2Fa%2BjQCrcA6mXu38HaJJbS3dpVvrhWy57jl08Bhr2cr6ifF9csY94ov6ycdBVKK8g8277gFrrpcqIq2FPObHdLz3QtnFSssuOiTtZNCHYLk9V0N%2FAwckO4lZSRn6kBaS9L5v9Qln1J%2BUR2B9WCfKh5LF1ibn8aEsXVGC2Xsu%2BoF7p80zp024ZtzLMixl9Yuiw%2FH8hgD4DWYj0dx9R1MsjhaF1xOSk%2BLYfG%2B%2F2Fp4%2FBpWHFZgkAJKVH6O7ZmkvbFEIBN2Hdt8feDK5dxlyXImzAAwH4Fxulgo9iYIhVfQKrlOnkmC%2F1H4Zj6JHOGsyLcEYlM%2BkSqwc%2BuG%2BZDZYhpXYUYhyuEZ%2FbYlZro7nZtEnMJ55coVP079I2ZRf%2FwglcedPzHACfG1HZX643H6l3QOH4hy%2B5cE9yrAp11QwFRE1JH5lORCQOz1dGFcIIBLQLE2kkOORnOjglbXxDp57C43UB%2FCrdJhzidZ5vaTnFaj5ns%2FdQsw%2FDAObTg%2B8qgY5o0tI4A4t%2FBSKxWpZqwVSaln4C4P3UzkjtyQnphIW2ZYH0jlvpj4a0MM9NxdVWru2xNlh6vCQkNMi2Hp352cgX8%2FVqrF4S4%2FQ58Gz0%2FXpU6v26Eo6d8VrKoypbNh5Bh6azT2SUcNeMJHi2NYGOqUBxuvVvA7k1xPXPg5C4zGJHIz9AtEgOYXXM6AjEaZm1nlcOHeVjTJUZdfpKsklMcbtrzdeS2oOpQSEPkn1q7rVYxa%2BGp0BWo6Mnxr3vPB5QoAycSBoXsWHksaN5LBxGP9hsWdl3O4x7gmX3%2B5nbaIjrXfS2c05AFA72XRvq3Qy16YVEVoeCr9eOzxsXGb6eNcHonNzyAGcW9nWd9oFscKEtUF4DeZo&X-Amz-Signature=87043a2a236562a39d2753de7b38dbe9b22e658695b9bb9b0e0e7f8872c46ef5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
