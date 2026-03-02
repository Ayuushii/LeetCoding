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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VACZDHUH%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEpRHtTTBvaZmDQLpbhDAiIUGd0f67fplkDhIQeHbLIkAiEAqazDhrUdKfUv8pq7vqHvnutQn0kicxvzAyfhBRPwxq4qiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAmEB7Gdc2mV42uKlircA4DFmH4AGM38Scebouc3%2FytC4IbyJfdmcSR%2B%2FFdsTplKimuSGBII5rn68brIH%2FkIcleH0iC8bMZ1rGtdJNWAjREqWHu2UzRzFrVxtvCnvL7ZeVai8z%2FfLvV87rTdeb2QbRGWKP9GK%2BMIft%2BZK53r8snY88GSPiXtqX0iBuh3XHdNIkv4QEjO69hs6u7SeYi8ST0hrgTyLqeS1%2FpsvjfcRFH86BlOt%2FhimKYD2qD3fZb5Tye6wiB8bItPMF2rglYdm51DbqEbpwd0dJZQCEMK0%2BewydiSPdGEoz4rdxrcKciOVWlVgEkDE3D1w1Zi7JUbbAr541DzuNLPpmdd3swni6KjT2BFKJl9C1mM6D8KcMAsIPWULcNFnw1mbp5Xwkous11XHenqtnb8yQdEAsLUgHG70VjLDldvkYKE9aJakNwrSMHsHwOCrQMLeFhvmH1pvTelcX7M%2Ft3EFxWNyp5QOpz7fK88I0c40ZKCtxGVP6%2B2xYpa%2BgGkIh2o0y5mozSJwS3au9faSIHODVBB1bkbWrdeW2N4zZPYwVuoFbZS9N86kSQJwMF%2BvyN5AJWUmP9ALwtRrWXgeAsk5kpgAZuWVsEP4r68kxAOx%2B6zFSvhB0Es43TC5b%2B43had0XGJMMqDlc0GOqUBsyDzykLuENpabiiMD62v7Cuf3sO9prVUdiPxcrfP0%2FKZndUW69iXGcNoC1qeQlBqNpTMT1i7fXksAsSYUmKCu3B7ra09JQdbgKCmwaQW0fijhFoa7XdjtNpo%2FJs9Spd9ATyApbDTK1XTtmksYbGOZ3FuZ%2FutKSBs%2BZvoaitfd4%2B2VN7L7AOXqxsD3tyUbw6kMFz2FogdCKq0QSn3nTRUy%2FUFeEjM&X-Amz-Signature=6d22dbec19bb69f71f1b269d23dece7b626c41d434b9aff07a9187ed0efacb78&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VACZDHUH%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEpRHtTTBvaZmDQLpbhDAiIUGd0f67fplkDhIQeHbLIkAiEAqazDhrUdKfUv8pq7vqHvnutQn0kicxvzAyfhBRPwxq4qiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAmEB7Gdc2mV42uKlircA4DFmH4AGM38Scebouc3%2FytC4IbyJfdmcSR%2B%2FFdsTplKimuSGBII5rn68brIH%2FkIcleH0iC8bMZ1rGtdJNWAjREqWHu2UzRzFrVxtvCnvL7ZeVai8z%2FfLvV87rTdeb2QbRGWKP9GK%2BMIft%2BZK53r8snY88GSPiXtqX0iBuh3XHdNIkv4QEjO69hs6u7SeYi8ST0hrgTyLqeS1%2FpsvjfcRFH86BlOt%2FhimKYD2qD3fZb5Tye6wiB8bItPMF2rglYdm51DbqEbpwd0dJZQCEMK0%2BewydiSPdGEoz4rdxrcKciOVWlVgEkDE3D1w1Zi7JUbbAr541DzuNLPpmdd3swni6KjT2BFKJl9C1mM6D8KcMAsIPWULcNFnw1mbp5Xwkous11XHenqtnb8yQdEAsLUgHG70VjLDldvkYKE9aJakNwrSMHsHwOCrQMLeFhvmH1pvTelcX7M%2Ft3EFxWNyp5QOpz7fK88I0c40ZKCtxGVP6%2B2xYpa%2BgGkIh2o0y5mozSJwS3au9faSIHODVBB1bkbWrdeW2N4zZPYwVuoFbZS9N86kSQJwMF%2BvyN5AJWUmP9ALwtRrWXgeAsk5kpgAZuWVsEP4r68kxAOx%2B6zFSvhB0Es43TC5b%2B43had0XGJMMqDlc0GOqUBsyDzykLuENpabiiMD62v7Cuf3sO9prVUdiPxcrfP0%2FKZndUW69iXGcNoC1qeQlBqNpTMT1i7fXksAsSYUmKCu3B7ra09JQdbgKCmwaQW0fijhFoa7XdjtNpo%2FJs9Spd9ATyApbDTK1XTtmksYbGOZ3FuZ%2FutKSBs%2BZvoaitfd4%2B2VN7L7AOXqxsD3tyUbw6kMFz2FogdCKq0QSn3nTRUy%2FUFeEjM&X-Amz-Signature=eb4a826beeed101265ec3cd27d76a991a75965414bc873f27f09f155d1e1a20d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VACZDHUH%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEpRHtTTBvaZmDQLpbhDAiIUGd0f67fplkDhIQeHbLIkAiEAqazDhrUdKfUv8pq7vqHvnutQn0kicxvzAyfhBRPwxq4qiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAmEB7Gdc2mV42uKlircA4DFmH4AGM38Scebouc3%2FytC4IbyJfdmcSR%2B%2FFdsTplKimuSGBII5rn68brIH%2FkIcleH0iC8bMZ1rGtdJNWAjREqWHu2UzRzFrVxtvCnvL7ZeVai8z%2FfLvV87rTdeb2QbRGWKP9GK%2BMIft%2BZK53r8snY88GSPiXtqX0iBuh3XHdNIkv4QEjO69hs6u7SeYi8ST0hrgTyLqeS1%2FpsvjfcRFH86BlOt%2FhimKYD2qD3fZb5Tye6wiB8bItPMF2rglYdm51DbqEbpwd0dJZQCEMK0%2BewydiSPdGEoz4rdxrcKciOVWlVgEkDE3D1w1Zi7JUbbAr541DzuNLPpmdd3swni6KjT2BFKJl9C1mM6D8KcMAsIPWULcNFnw1mbp5Xwkous11XHenqtnb8yQdEAsLUgHG70VjLDldvkYKE9aJakNwrSMHsHwOCrQMLeFhvmH1pvTelcX7M%2Ft3EFxWNyp5QOpz7fK88I0c40ZKCtxGVP6%2B2xYpa%2BgGkIh2o0y5mozSJwS3au9faSIHODVBB1bkbWrdeW2N4zZPYwVuoFbZS9N86kSQJwMF%2BvyN5AJWUmP9ALwtRrWXgeAsk5kpgAZuWVsEP4r68kxAOx%2B6zFSvhB0Es43TC5b%2B43had0XGJMMqDlc0GOqUBsyDzykLuENpabiiMD62v7Cuf3sO9prVUdiPxcrfP0%2FKZndUW69iXGcNoC1qeQlBqNpTMT1i7fXksAsSYUmKCu3B7ra09JQdbgKCmwaQW0fijhFoa7XdjtNpo%2FJs9Spd9ATyApbDTK1XTtmksYbGOZ3FuZ%2FutKSBs%2BZvoaitfd4%2B2VN7L7AOXqxsD3tyUbw6kMFz2FogdCKq0QSn3nTRUy%2FUFeEjM&X-Amz-Signature=a2139ed629b20a562d5f613c5659a97d3f85b65f0fd0a18fc466fa075f65ab95&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VGAWDPC%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC%2B5ksFjZecGs4A%2FwakHLERwNQMdWkwi3A4B8VHLQG3YAiBy1cOilHANbhTz2a1gIU0KD%2FfsMtyI%2F3fM8%2BweAiMt8CqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxvrGTcuCXEfzpeSbKtwDLjBqpiu1XZduVYhYTxODscd9lbc%2B3ERLzlePUkrSk%2BK1UurUK3eap6HA24PUvN0A1DNw6eo4n0nhmrqdAlzZoneTa5Wdebiok%2F5TVpRtHpLhydNfE3csBb851N9%2BU8m%2BHOm%2FGO1C1h9DiOogRmqXa6bYRPpwNHrvbge3%2FZbGF1oA0CHeoTIXZd8X%2FQyKMip7pA1gRftiLdRC9XgO2m%2FhLGzFa2CTESj%2F6Usg38coqvSao0QTbU%2BaLk7%2Fy5Y7QfTPATlvtXm6QPVuN%2B2%2BemaqQkYAPBYVrAvmTqxpMDM8Q3s1%2B1c1Qv6KPBS%2Bm9hHlfRMn%2FEtr7S3M3zoRU1s01qg%2FJ456lL3SZPjCPGzbHbi9vjUUhc7WSUzgjLKRJk1JiL8sTtBeq3FKVpog1jlsCkBDDEYLngpg%2FzTmDPyGzQTNORuFWMBBC3O4l0CacakvISzJoFask1Kdz9kuJa6Lq%2FGIauiLW%2FfJgoiSzAi2OWoItYvhOUsfNBGHK1PU%2Famz10WNf5jytdXfu46z5ulijsg4dLCOBBc5yJ2O2OMi7UWUg%2Bg78J5oI%2BwZ04EXgahYZXVEJ4cEUZthqL7N6n0M%2B4joQ4G9%2BCftj9e4BhvBJRxrKcjgSH0k6%2Fiz8QdKOMwvIOVzQY6pgH%2B3kcmQXSp4CewqiYcCjRzNw%2B7SeRPSySZYBYaSuQ9ImsGzm9l63V9Oc544%2FAgWpqz%2BDhz%2Fz1Xy97fvp83FuQj7m8zSaG00okhx%2B1QKYp4qF7C4xXyeSL%2FxVPGWP5MMCAmVCfEA4QRMT55URyfn5MeTaq6%2FJwgvBADpS0VVoOsfOCWDnI2RaRnERWZ5MsZjcGjAuZbszxro86LiK48urqTRuOMlFcy&X-Amz-Signature=d8e0d971698b86849f20e18cfe628f5dfe793a8aa6a89d68b153114bc3d8ae6a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VGAWDPC%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC%2B5ksFjZecGs4A%2FwakHLERwNQMdWkwi3A4B8VHLQG3YAiBy1cOilHANbhTz2a1gIU0KD%2FfsMtyI%2F3fM8%2BweAiMt8CqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxvrGTcuCXEfzpeSbKtwDLjBqpiu1XZduVYhYTxODscd9lbc%2B3ERLzlePUkrSk%2BK1UurUK3eap6HA24PUvN0A1DNw6eo4n0nhmrqdAlzZoneTa5Wdebiok%2F5TVpRtHpLhydNfE3csBb851N9%2BU8m%2BHOm%2FGO1C1h9DiOogRmqXa6bYRPpwNHrvbge3%2FZbGF1oA0CHeoTIXZd8X%2FQyKMip7pA1gRftiLdRC9XgO2m%2FhLGzFa2CTESj%2F6Usg38coqvSao0QTbU%2BaLk7%2Fy5Y7QfTPATlvtXm6QPVuN%2B2%2BemaqQkYAPBYVrAvmTqxpMDM8Q3s1%2B1c1Qv6KPBS%2Bm9hHlfRMn%2FEtr7S3M3zoRU1s01qg%2FJ456lL3SZPjCPGzbHbi9vjUUhc7WSUzgjLKRJk1JiL8sTtBeq3FKVpog1jlsCkBDDEYLngpg%2FzTmDPyGzQTNORuFWMBBC3O4l0CacakvISzJoFask1Kdz9kuJa6Lq%2FGIauiLW%2FfJgoiSzAi2OWoItYvhOUsfNBGHK1PU%2Famz10WNf5jytdXfu46z5ulijsg4dLCOBBc5yJ2O2OMi7UWUg%2Bg78J5oI%2BwZ04EXgahYZXVEJ4cEUZthqL7N6n0M%2B4joQ4G9%2BCftj9e4BhvBJRxrKcjgSH0k6%2Fiz8QdKOMwvIOVzQY6pgH%2B3kcmQXSp4CewqiYcCjRzNw%2B7SeRPSySZYBYaSuQ9ImsGzm9l63V9Oc544%2FAgWpqz%2BDhz%2Fz1Xy97fvp83FuQj7m8zSaG00okhx%2B1QKYp4qF7C4xXyeSL%2FxVPGWP5MMCAmVCfEA4QRMT55URyfn5MeTaq6%2FJwgvBADpS0VVoOsfOCWDnI2RaRnERWZ5MsZjcGjAuZbszxro86LiK48urqTRuOMlFcy&X-Amz-Signature=a531a7a815dd7da8d9e19115b5aaf36b684757c241e8763cb6663491f29fc41a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VGAWDPC%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC%2B5ksFjZecGs4A%2FwakHLERwNQMdWkwi3A4B8VHLQG3YAiBy1cOilHANbhTz2a1gIU0KD%2FfsMtyI%2F3fM8%2BweAiMt8CqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxvrGTcuCXEfzpeSbKtwDLjBqpiu1XZduVYhYTxODscd9lbc%2B3ERLzlePUkrSk%2BK1UurUK3eap6HA24PUvN0A1DNw6eo4n0nhmrqdAlzZoneTa5Wdebiok%2F5TVpRtHpLhydNfE3csBb851N9%2BU8m%2BHOm%2FGO1C1h9DiOogRmqXa6bYRPpwNHrvbge3%2FZbGF1oA0CHeoTIXZd8X%2FQyKMip7pA1gRftiLdRC9XgO2m%2FhLGzFa2CTESj%2F6Usg38coqvSao0QTbU%2BaLk7%2Fy5Y7QfTPATlvtXm6QPVuN%2B2%2BemaqQkYAPBYVrAvmTqxpMDM8Q3s1%2B1c1Qv6KPBS%2Bm9hHlfRMn%2FEtr7S3M3zoRU1s01qg%2FJ456lL3SZPjCPGzbHbi9vjUUhc7WSUzgjLKRJk1JiL8sTtBeq3FKVpog1jlsCkBDDEYLngpg%2FzTmDPyGzQTNORuFWMBBC3O4l0CacakvISzJoFask1Kdz9kuJa6Lq%2FGIauiLW%2FfJgoiSzAi2OWoItYvhOUsfNBGHK1PU%2Famz10WNf5jytdXfu46z5ulijsg4dLCOBBc5yJ2O2OMi7UWUg%2Bg78J5oI%2BwZ04EXgahYZXVEJ4cEUZthqL7N6n0M%2B4joQ4G9%2BCftj9e4BhvBJRxrKcjgSH0k6%2Fiz8QdKOMwvIOVzQY6pgH%2B3kcmQXSp4CewqiYcCjRzNw%2B7SeRPSySZYBYaSuQ9ImsGzm9l63V9Oc544%2FAgWpqz%2BDhz%2Fz1Xy97fvp83FuQj7m8zSaG00okhx%2B1QKYp4qF7C4xXyeSL%2FxVPGWP5MMCAmVCfEA4QRMT55URyfn5MeTaq6%2FJwgvBADpS0VVoOsfOCWDnI2RaRnERWZ5MsZjcGjAuZbszxro86LiK48urqTRuOMlFcy&X-Amz-Signature=412c11d395f7896a820394dbfc13b184a01e0db489d33f334854c6e04c86d37b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666VGAWDPC%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084322Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC%2B5ksFjZecGs4A%2FwakHLERwNQMdWkwi3A4B8VHLQG3YAiBy1cOilHANbhTz2a1gIU0KD%2FfsMtyI%2F3fM8%2BweAiMt8CqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMxvrGTcuCXEfzpeSbKtwDLjBqpiu1XZduVYhYTxODscd9lbc%2B3ERLzlePUkrSk%2BK1UurUK3eap6HA24PUvN0A1DNw6eo4n0nhmrqdAlzZoneTa5Wdebiok%2F5TVpRtHpLhydNfE3csBb851N9%2BU8m%2BHOm%2FGO1C1h9DiOogRmqXa6bYRPpwNHrvbge3%2FZbGF1oA0CHeoTIXZd8X%2FQyKMip7pA1gRftiLdRC9XgO2m%2FhLGzFa2CTESj%2F6Usg38coqvSao0QTbU%2BaLk7%2Fy5Y7QfTPATlvtXm6QPVuN%2B2%2BemaqQkYAPBYVrAvmTqxpMDM8Q3s1%2B1c1Qv6KPBS%2Bm9hHlfRMn%2FEtr7S3M3zoRU1s01qg%2FJ456lL3SZPjCPGzbHbi9vjUUhc7WSUzgjLKRJk1JiL8sTtBeq3FKVpog1jlsCkBDDEYLngpg%2FzTmDPyGzQTNORuFWMBBC3O4l0CacakvISzJoFask1Kdz9kuJa6Lq%2FGIauiLW%2FfJgoiSzAi2OWoItYvhOUsfNBGHK1PU%2Famz10WNf5jytdXfu46z5ulijsg4dLCOBBc5yJ2O2OMi7UWUg%2Bg78J5oI%2BwZ04EXgahYZXVEJ4cEUZthqL7N6n0M%2B4joQ4G9%2BCftj9e4BhvBJRxrKcjgSH0k6%2Fiz8QdKOMwvIOVzQY6pgH%2B3kcmQXSp4CewqiYcCjRzNw%2B7SeRPSySZYBYaSuQ9ImsGzm9l63V9Oc544%2FAgWpqz%2BDhz%2Fz1Xy97fvp83FuQj7m8zSaG00okhx%2B1QKYp4qF7C4xXyeSL%2FxVPGWP5MMCAmVCfEA4QRMT55URyfn5MeTaq6%2FJwgvBADpS0VVoOsfOCWDnI2RaRnERWZ5MsZjcGjAuZbszxro86LiK48urqTRuOMlFcy&X-Amz-Signature=ceae9219d6cac5c96aee014e191c0ba342694c9a32654b09733f8130b83a3531&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XVI2NUEC%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084329Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIATACra2f02yUuulaNUry5piYaOX4IkRcIw9fEzUP9VxAiB9Uec6oa16Xu6WBsX2cVOCm74iF5PdG%2F9FnDOew1vLlSqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMgl7W%2F1NHU8YgKjY6KtwDtKHzzOQ%2Bh8BwKKvKUXCJdqg14d04b8NiaFnbsx2RePF0CYfN%2FIOo3uda6IrK2A5IiFz1wrxl9nRiY2cWsrqCxcBwN3EDdQhprQbmAZp96%2BZT1rWSW8ZshZ8f7PVpczApiQvVsdl60AIWRNqELkQWq8EXRP9FH550RvVzxCYyAEIl0pgJAirIfSY0e0aBuFHgx7%2BhpK5hMV4jyKF0pt97T6kZd0lnmBBn9zv4CFykJMsKUUE050Nt8%2Fesig%2BAJa%2FVK7DGEIeaeGbKBrsmtsRDrtOEXIEv6UK4xO6sktl9QU1M82g2XVpgriFF21aO%2FHkcy7aSMpXvS6XSlzTlwHJS%2BM835lepE9qQG1QydXn%2BNy2Wx1Ehb%2By%2BoSIrEMw8579sqVmJPAeBaJpeykpcQAyMZdcH9C1LslCJIHo4nJWs44ygqXalzlMD%2FQYS1tshaP4dE3LMTRU4Ut9%2BCP2cVIv5fO5cYNEdfvAvNY5q%2BiuYqQCTucS44Lbr5QWtxjs6NusRfc%2BsPPS39plgDNLx8oG80V1nPsopcpeJaAGw6OItyNlvxUrhlUZVL3VFXTwEEJyxawLnIxy06VTRFbCXoZ%2FWFGaZ3mRDqzn30nfvTCoCpX%2F9Ei6AFzDRHq1nBNcw5oSVzQY6pgH6LpTpd97tbCQKAcN0wOGneSwfl5yNnE3Fc02RPGlDKjYZjE5HbsQMUC%2BwSCiC%2Bypho5GvHY23cb3Qsde4vMQVzeU2vXI8YHJ2E%2BQpHV8fy0cif5MzsX38HRMt8Sr3UorXhJHw%2FQZaGTjE6ZwSWhMR1cLrrt%2Fl%2FXe02JGMV7EHDrhThajxDNIJG74UdF7wSAstO6SwW7y%2BcOO2w2MNCz3%2F4ke%2BgVe4&X-Amz-Signature=21b791d143edb8f5dc05c12af5c1d70fc7a9eafe016d47a85a3ee251615e1a5e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S2VSWME7%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084329Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCYsuhSjVGv2h2AxAFY3VDDUOjOIHjrMZv%2FTBf7eWSDZQIgZDRtuU5cFUvaa%2FUKEVA%2BhpYaYgbnF%2BQlFMVL2tiW9tcqiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNxqsReVe7TG5xoqqCrcAzmTAHiY7yuyY83Sj%2BcmUI17Bk2Kn56s%2FdN1DMcJDZ80ROInnOPbRqGv3e%2FfkKrbClxzG4sZqLYCA4ZyaenNgTeNkjJy2pUDl0iYVbk28BAWOqdh4%2FNhUEwXjpRC2KbGQz2wqHEtEWFsop%2B2Un%2FrHiDvhLN6wHT3TEYlN%2FQEL%2FspYCdx3V4WuesOa%2B7jTgCDHcKV0pQZaEl5Az1JkXrZ3zr%2FksurLPP9CYfgzo5toFPUmDRjaCNHLaJicg8WZY%2F%2Bzoornm3sg36xPJ%2F%2FO0aukLetkXLVv18%2FMOhK0%2FR5RDs6yv9qkMUqB2l6C9q4IYZVZlkltEwd%2BieYRJlYUWOThzbv%2B28JcCh%2FJPAD0IbBmsSdbjV0fCZ1M5zTndCTBCOsGxhNWwFEDo4PIPyaB7zXUaXAJT7zcooJ5gkeBlv3JFCTqRLcGF6nbCDVSYZWRVUePFAdKIidTSLpg%2BohW71Q61%2BMF9kBzO6VCtQbnKqmu3LjROsf276iJgoVlGHBen8qNQ2AmXSxamu2AzVF5cK4EqV0fYmWAmYDHfC8ExU9ap3i5BfA8vA3MluQXWVBWxmxQkPtufhJiJHjIxM06EbraoDojwlEaY8dNmP%2FqKYv%2B9QRLSsWYc9BQTMv%2F0tHMPGElc0GOqUBAQ1Tm6qPyhdBZw1NbMjAezlT%2FHF0S1yztwWXlZtnGvxCoQ1qmzEB7bKQVYZMlkAmuIE1ziYiHf57YkMNIMF4ZgaifYABYOXsRP7KGqJmGI8v5Kx%2BG%2BHtwl%2F2y6pyxFzskQ8PANZrh5uVsTHvopApPYT91Di3W0WDHpWBWsOMHg23YqR6B%2FEvb3bNSM6JZmsGOJaJ720lzgvbFCZS3o5ZHCDF7Y8G&X-Amz-Signature=a89c8483424d44a9bfd1b0b7153517a5f37d5573e60cf2281b4f6ef4bc778d7d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S2VSWME7%2F20260302%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260302T084329Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCYsuhSjVGv2h2AxAFY3VDDUOjOIHjrMZv%2FTBf7eWSDZQIgZDRtuU5cFUvaa%2FUKEVA%2BhpYaYgbnF%2BQlFMVL2tiW9tcqiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNxqsReVe7TG5xoqqCrcAzmTAHiY7yuyY83Sj%2BcmUI17Bk2Kn56s%2FdN1DMcJDZ80ROInnOPbRqGv3e%2FfkKrbClxzG4sZqLYCA4ZyaenNgTeNkjJy2pUDl0iYVbk28BAWOqdh4%2FNhUEwXjpRC2KbGQz2wqHEtEWFsop%2B2Un%2FrHiDvhLN6wHT3TEYlN%2FQEL%2FspYCdx3V4WuesOa%2B7jTgCDHcKV0pQZaEl5Az1JkXrZ3zr%2FksurLPP9CYfgzo5toFPUmDRjaCNHLaJicg8WZY%2F%2Bzoornm3sg36xPJ%2F%2FO0aukLetkXLVv18%2FMOhK0%2FR5RDs6yv9qkMUqB2l6C9q4IYZVZlkltEwd%2BieYRJlYUWOThzbv%2B28JcCh%2FJPAD0IbBmsSdbjV0fCZ1M5zTndCTBCOsGxhNWwFEDo4PIPyaB7zXUaXAJT7zcooJ5gkeBlv3JFCTqRLcGF6nbCDVSYZWRVUePFAdKIidTSLpg%2BohW71Q61%2BMF9kBzO6VCtQbnKqmu3LjROsf276iJgoVlGHBen8qNQ2AmXSxamu2AzVF5cK4EqV0fYmWAmYDHfC8ExU9ap3i5BfA8vA3MluQXWVBWxmxQkPtufhJiJHjIxM06EbraoDojwlEaY8dNmP%2FqKYv%2B9QRLSsWYc9BQTMv%2F0tHMPGElc0GOqUBAQ1Tm6qPyhdBZw1NbMjAezlT%2FHF0S1yztwWXlZtnGvxCoQ1qmzEB7bKQVYZMlkAmuIE1ziYiHf57YkMNIMF4ZgaifYABYOXsRP7KGqJmGI8v5Kx%2BG%2BHtwl%2F2y6pyxFzskQ8PANZrh5uVsTHvopApPYT91Di3W0WDHpWBWsOMHg23YqR6B%2FEvb3bNSM6JZmsGOJaJ720lzgvbFCZS3o5ZHCDF7Y8G&X-Amz-Signature=ecaaafaa1358761e58746ce15918496041b3770caa778f141f57ad78ab515e10&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
