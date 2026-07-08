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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MXPQ6PG%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaN9ouvsMiLYqmE4mTcYIMTllkFgFnKAH9NzpCGw2PuAIhAOWnUSaF%2FGpyc1KSarZpmrmyW%2FBlreUcLjonW1yvL6UeKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwje6uKxSGbpwQ%2FWfwq3AM3m1rkE8G4txi3npfgXGvQcTkV7gEKE0clBhxxYgqpDfQfnhD6%2FuNEvEEqMvSUaS7NoXSl%2BwYm7Kkfl9br5jjyVGjLh3qu2FXm%2FiiJ1V%2FBeQh8Y1Sax%2Bx6Sy7Ot%2FWuREbMD0vigObWNbrj0a4h6FkJVQ2H3Opu1Zur30bZC0PuuWHwy4azJEpoiiiOJ3AITgBr%2FRg25oFnWkjyf8b3diGvAXw1eo103pfDtni57cmpJkG7Eup4L9egSTNf0a7zA02MX%2FToft50fLty%2F1Qj%2B0lMluVuPyJUElouZkwR2V18B6Sr5CZW2MkTUbM51NTBXSo1Hbz1Ge5deGV1Uv9rG%2FCSmf0dAroSX%2BUeQWn3xzv7KLFuJVVtCysGMxy44uAScv3MRLGI9OexESFupeudgQEGJcF4BvZrEv9z8IoV6uOH2myjH0wctp7ZE%2F4yAIGgtTlNGsggClcNiN5UtF%2B2oPws6f3G%2BxonU27E9QDJbTK4kXjNKKeKZQdnF1FIMplqmdJB6CSVFVRwxxS7EGQ9IMqRa5kxn5CY1MfeT27CQHvBZzWMWDMF9Ih%2BqoZObRkkuAeklnlB9TXwGFc0GgkFLnzHcGqDwkfYLv618DqOjXuQBGUP7XCvlYBjIgdApTDLvrjSBjqkAYp9oxlpqD8vH5bDFKj7LivnvvTYnmZsZS1R8sMtFQq2rqcWY9pnzOVN9gADye2fN%2B%2BS4uEUL3ySqIOegqGDJYI4cKVvxHBNdaY1LS1M3a5ZKuoIXpAkwoy48Aia6FiGKYrNtKbbutWU2pTxIuD%2BqLlBcVyVyacCQMEHiyHJ0WyDnV9cYYrxnh6mQsFYrU8%2BQ1nCv1EW9YA75x9kljiYyix2DuKS&X-Amz-Signature=819b478f7a35fb7eacb389ba76737b2e2be6147f2e445c009ef407277568bf86&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MXPQ6PG%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaN9ouvsMiLYqmE4mTcYIMTllkFgFnKAH9NzpCGw2PuAIhAOWnUSaF%2FGpyc1KSarZpmrmyW%2FBlreUcLjonW1yvL6UeKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwje6uKxSGbpwQ%2FWfwq3AM3m1rkE8G4txi3npfgXGvQcTkV7gEKE0clBhxxYgqpDfQfnhD6%2FuNEvEEqMvSUaS7NoXSl%2BwYm7Kkfl9br5jjyVGjLh3qu2FXm%2FiiJ1V%2FBeQh8Y1Sax%2Bx6Sy7Ot%2FWuREbMD0vigObWNbrj0a4h6FkJVQ2H3Opu1Zur30bZC0PuuWHwy4azJEpoiiiOJ3AITgBr%2FRg25oFnWkjyf8b3diGvAXw1eo103pfDtni57cmpJkG7Eup4L9egSTNf0a7zA02MX%2FToft50fLty%2F1Qj%2B0lMluVuPyJUElouZkwR2V18B6Sr5CZW2MkTUbM51NTBXSo1Hbz1Ge5deGV1Uv9rG%2FCSmf0dAroSX%2BUeQWn3xzv7KLFuJVVtCysGMxy44uAScv3MRLGI9OexESFupeudgQEGJcF4BvZrEv9z8IoV6uOH2myjH0wctp7ZE%2F4yAIGgtTlNGsggClcNiN5UtF%2B2oPws6f3G%2BxonU27E9QDJbTK4kXjNKKeKZQdnF1FIMplqmdJB6CSVFVRwxxS7EGQ9IMqRa5kxn5CY1MfeT27CQHvBZzWMWDMF9Ih%2BqoZObRkkuAeklnlB9TXwGFc0GgkFLnzHcGqDwkfYLv618DqOjXuQBGUP7XCvlYBjIgdApTDLvrjSBjqkAYp9oxlpqD8vH5bDFKj7LivnvvTYnmZsZS1R8sMtFQq2rqcWY9pnzOVN9gADye2fN%2B%2BS4uEUL3ySqIOegqGDJYI4cKVvxHBNdaY1LS1M3a5ZKuoIXpAkwoy48Aia6FiGKYrNtKbbutWU2pTxIuD%2BqLlBcVyVyacCQMEHiyHJ0WyDnV9cYYrxnh6mQsFYrU8%2BQ1nCv1EW9YA75x9kljiYyix2DuKS&X-Amz-Signature=2ef74310b67f76a98bb736e28e72ee1563889535568b67a2f69614923c00ece7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MXPQ6PG%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCaN9ouvsMiLYqmE4mTcYIMTllkFgFnKAH9NzpCGw2PuAIhAOWnUSaF%2FGpyc1KSarZpmrmyW%2FBlreUcLjonW1yvL6UeKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwje6uKxSGbpwQ%2FWfwq3AM3m1rkE8G4txi3npfgXGvQcTkV7gEKE0clBhxxYgqpDfQfnhD6%2FuNEvEEqMvSUaS7NoXSl%2BwYm7Kkfl9br5jjyVGjLh3qu2FXm%2FiiJ1V%2FBeQh8Y1Sax%2Bx6Sy7Ot%2FWuREbMD0vigObWNbrj0a4h6FkJVQ2H3Opu1Zur30bZC0PuuWHwy4azJEpoiiiOJ3AITgBr%2FRg25oFnWkjyf8b3diGvAXw1eo103pfDtni57cmpJkG7Eup4L9egSTNf0a7zA02MX%2FToft50fLty%2F1Qj%2B0lMluVuPyJUElouZkwR2V18B6Sr5CZW2MkTUbM51NTBXSo1Hbz1Ge5deGV1Uv9rG%2FCSmf0dAroSX%2BUeQWn3xzv7KLFuJVVtCysGMxy44uAScv3MRLGI9OexESFupeudgQEGJcF4BvZrEv9z8IoV6uOH2myjH0wctp7ZE%2F4yAIGgtTlNGsggClcNiN5UtF%2B2oPws6f3G%2BxonU27E9QDJbTK4kXjNKKeKZQdnF1FIMplqmdJB6CSVFVRwxxS7EGQ9IMqRa5kxn5CY1MfeT27CQHvBZzWMWDMF9Ih%2BqoZObRkkuAeklnlB9TXwGFc0GgkFLnzHcGqDwkfYLv618DqOjXuQBGUP7XCvlYBjIgdApTDLvrjSBjqkAYp9oxlpqD8vH5bDFKj7LivnvvTYnmZsZS1R8sMtFQq2rqcWY9pnzOVN9gADye2fN%2B%2BS4uEUL3ySqIOegqGDJYI4cKVvxHBNdaY1LS1M3a5ZKuoIXpAkwoy48Aia6FiGKYrNtKbbutWU2pTxIuD%2BqLlBcVyVyacCQMEHiyHJ0WyDnV9cYYrxnh6mQsFYrU8%2BQ1nCv1EW9YA75x9kljiYyix2DuKS&X-Amz-Signature=e415cce61fb7317e9c7d8801529a8e3c95e72c9e79e68f3ff05b9a71b151d944&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46653YZWD6V%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD5QFRXgJifBCeiwxZQmB9e1YX5WHqWcDwl87Jf9gqa0gIhAJKek0aPgjsv4j0QU0MMKGEf2jmlad59nNqEquNQd5ooKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyYLi3SbsU4UoNiiRoq3AO5fi9S9Nqucl5Om9BSMhpIbbDIZRRjZXtxCTVaQ%2Bx3pdNJtfAYJoU%2FxYJw1peEEhZwpQ8tmRPNRF12fP8mM4UPA5xMxHvWakj23i%2BkFXdOJOfO%2BFuHe1JwXrS7zKQ86Iqn3Pjgj79TYi%2F4gJpAPbBvD0rn7UiQo7mDk5QxRCP94O1AHL3RWWN%2BrXhwG48NomMl0DI4PodyMkk%2FS0myv0%2BS%2FR2K3v7ZFK2o2GkGaLHyLGEhIm6Rw2AAzixRq9hUZE91vrifWbW%2BEJXfDbTDg%2FWNcQs9EgIxuvNxaiVN3jSuWfqIqM4ZZqlC8M1zXP8J4jkwsesIyY%2By6SKYDFlCC8mQrKpZ1SAtlfTjIpvez62zJBwnZTECO07Qd6HIQTYm8kprkw6%2BLDdQEG%2FCiN2uNy%2FtVsmWqeuK4BM0C%2F%2Ffy6mEnSSYCQhnG3YbvrDL0MiKSf8IyhWaVpM9P9rWxXyPt6vn1HBxQSSh07Gk3zo21Geh4Z1qsSlHRga%2FgbJCsfIuaK2cp5rlJpvlTWBsMXu8yTRi8tK2zbY1R5kCVtR67mpQUKThOoBGw%2FYyzI%2FCFuHmT97YXc5Js0FXLFnWxN%2BsXST7UEp1BVh1uMyauNyMCw90hKcuS1uINfoxLeqJvTCHwLjSBjqkAQjBHry3p%2B2YHyPT%2BWhkELARY9wtuKaNpOTxajlFs6ak22Z1BXL8g3yNeJ0tYd3NcxCdD1UWTBKbXU47VQWTDguwBtCXeCg0bIy61ZSzLIvoGEKK2WD%2BJwHac%2Br7OvAi0ag%2BCIJOrzdtY7kxDG84ICRiW2x%2FXD%2BeTIT8PsND7Sp31qpA8S1hpBbFniGsUoMJRu6ukFY3jHk6ZRR6QdZUTLCwTDlJ&X-Amz-Signature=74191f3f4efbf58140e9151247a086670b764bc831bbfd9eee3cd363725890d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46653YZWD6V%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD5QFRXgJifBCeiwxZQmB9e1YX5WHqWcDwl87Jf9gqa0gIhAJKek0aPgjsv4j0QU0MMKGEf2jmlad59nNqEquNQd5ooKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyYLi3SbsU4UoNiiRoq3AO5fi9S9Nqucl5Om9BSMhpIbbDIZRRjZXtxCTVaQ%2Bx3pdNJtfAYJoU%2FxYJw1peEEhZwpQ8tmRPNRF12fP8mM4UPA5xMxHvWakj23i%2BkFXdOJOfO%2BFuHe1JwXrS7zKQ86Iqn3Pjgj79TYi%2F4gJpAPbBvD0rn7UiQo7mDk5QxRCP94O1AHL3RWWN%2BrXhwG48NomMl0DI4PodyMkk%2FS0myv0%2BS%2FR2K3v7ZFK2o2GkGaLHyLGEhIm6Rw2AAzixRq9hUZE91vrifWbW%2BEJXfDbTDg%2FWNcQs9EgIxuvNxaiVN3jSuWfqIqM4ZZqlC8M1zXP8J4jkwsesIyY%2By6SKYDFlCC8mQrKpZ1SAtlfTjIpvez62zJBwnZTECO07Qd6HIQTYm8kprkw6%2BLDdQEG%2FCiN2uNy%2FtVsmWqeuK4BM0C%2F%2Ffy6mEnSSYCQhnG3YbvrDL0MiKSf8IyhWaVpM9P9rWxXyPt6vn1HBxQSSh07Gk3zo21Geh4Z1qsSlHRga%2FgbJCsfIuaK2cp5rlJpvlTWBsMXu8yTRi8tK2zbY1R5kCVtR67mpQUKThOoBGw%2FYyzI%2FCFuHmT97YXc5Js0FXLFnWxN%2BsXST7UEp1BVh1uMyauNyMCw90hKcuS1uINfoxLeqJvTCHwLjSBjqkAQjBHry3p%2B2YHyPT%2BWhkELARY9wtuKaNpOTxajlFs6ak22Z1BXL8g3yNeJ0tYd3NcxCdD1UWTBKbXU47VQWTDguwBtCXeCg0bIy61ZSzLIvoGEKK2WD%2BJwHac%2Br7OvAi0ag%2BCIJOrzdtY7kxDG84ICRiW2x%2FXD%2BeTIT8PsND7Sp31qpA8S1hpBbFniGsUoMJRu6ukFY3jHk6ZRR6QdZUTLCwTDlJ&X-Amz-Signature=71d87f4e5855de40be7175b1da6ec58d60aaddb1300197b2c4a53b41137c6d7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46653YZWD6V%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD5QFRXgJifBCeiwxZQmB9e1YX5WHqWcDwl87Jf9gqa0gIhAJKek0aPgjsv4j0QU0MMKGEf2jmlad59nNqEquNQd5ooKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyYLi3SbsU4UoNiiRoq3AO5fi9S9Nqucl5Om9BSMhpIbbDIZRRjZXtxCTVaQ%2Bx3pdNJtfAYJoU%2FxYJw1peEEhZwpQ8tmRPNRF12fP8mM4UPA5xMxHvWakj23i%2BkFXdOJOfO%2BFuHe1JwXrS7zKQ86Iqn3Pjgj79TYi%2F4gJpAPbBvD0rn7UiQo7mDk5QxRCP94O1AHL3RWWN%2BrXhwG48NomMl0DI4PodyMkk%2FS0myv0%2BS%2FR2K3v7ZFK2o2GkGaLHyLGEhIm6Rw2AAzixRq9hUZE91vrifWbW%2BEJXfDbTDg%2FWNcQs9EgIxuvNxaiVN3jSuWfqIqM4ZZqlC8M1zXP8J4jkwsesIyY%2By6SKYDFlCC8mQrKpZ1SAtlfTjIpvez62zJBwnZTECO07Qd6HIQTYm8kprkw6%2BLDdQEG%2FCiN2uNy%2FtVsmWqeuK4BM0C%2F%2Ffy6mEnSSYCQhnG3YbvrDL0MiKSf8IyhWaVpM9P9rWxXyPt6vn1HBxQSSh07Gk3zo21Geh4Z1qsSlHRga%2FgbJCsfIuaK2cp5rlJpvlTWBsMXu8yTRi8tK2zbY1R5kCVtR67mpQUKThOoBGw%2FYyzI%2FCFuHmT97YXc5Js0FXLFnWxN%2BsXST7UEp1BVh1uMyauNyMCw90hKcuS1uINfoxLeqJvTCHwLjSBjqkAQjBHry3p%2B2YHyPT%2BWhkELARY9wtuKaNpOTxajlFs6ak22Z1BXL8g3yNeJ0tYd3NcxCdD1UWTBKbXU47VQWTDguwBtCXeCg0bIy61ZSzLIvoGEKK2WD%2BJwHac%2Br7OvAi0ag%2BCIJOrzdtY7kxDG84ICRiW2x%2FXD%2BeTIT8PsND7Sp31qpA8S1hpBbFniGsUoMJRu6ukFY3jHk6ZRR6QdZUTLCwTDlJ&X-Amz-Signature=2b9bf3595ec167ce91693f09c618eeb42f41191f49430a427a2a65e51dd33b3e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46653YZWD6V%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101620Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD5QFRXgJifBCeiwxZQmB9e1YX5WHqWcDwl87Jf9gqa0gIhAJKek0aPgjsv4j0QU0MMKGEf2jmlad59nNqEquNQd5ooKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyYLi3SbsU4UoNiiRoq3AO5fi9S9Nqucl5Om9BSMhpIbbDIZRRjZXtxCTVaQ%2Bx3pdNJtfAYJoU%2FxYJw1peEEhZwpQ8tmRPNRF12fP8mM4UPA5xMxHvWakj23i%2BkFXdOJOfO%2BFuHe1JwXrS7zKQ86Iqn3Pjgj79TYi%2F4gJpAPbBvD0rn7UiQo7mDk5QxRCP94O1AHL3RWWN%2BrXhwG48NomMl0DI4PodyMkk%2FS0myv0%2BS%2FR2K3v7ZFK2o2GkGaLHyLGEhIm6Rw2AAzixRq9hUZE91vrifWbW%2BEJXfDbTDg%2FWNcQs9EgIxuvNxaiVN3jSuWfqIqM4ZZqlC8M1zXP8J4jkwsesIyY%2By6SKYDFlCC8mQrKpZ1SAtlfTjIpvez62zJBwnZTECO07Qd6HIQTYm8kprkw6%2BLDdQEG%2FCiN2uNy%2FtVsmWqeuK4BM0C%2F%2Ffy6mEnSSYCQhnG3YbvrDL0MiKSf8IyhWaVpM9P9rWxXyPt6vn1HBxQSSh07Gk3zo21Geh4Z1qsSlHRga%2FgbJCsfIuaK2cp5rlJpvlTWBsMXu8yTRi8tK2zbY1R5kCVtR67mpQUKThOoBGw%2FYyzI%2FCFuHmT97YXc5Js0FXLFnWxN%2BsXST7UEp1BVh1uMyauNyMCw90hKcuS1uINfoxLeqJvTCHwLjSBjqkAQjBHry3p%2B2YHyPT%2BWhkELARY9wtuKaNpOTxajlFs6ak22Z1BXL8g3yNeJ0tYd3NcxCdD1UWTBKbXU47VQWTDguwBtCXeCg0bIy61ZSzLIvoGEKK2WD%2BJwHac%2Br7OvAi0ag%2BCIJOrzdtY7kxDG84ICRiW2x%2FXD%2BeTIT8PsND7Sp31qpA8S1hpBbFniGsUoMJRu6ukFY3jHk6ZRR6QdZUTLCwTDlJ&X-Amz-Signature=fddc3a2fec0ba47f2562239588fe5257ddca3c6db929a69cd279c6704ba2e3c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WSJV5NES%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101620Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQClfaL0wHZ7fHaC5AHSNZ0bkm5X4RMKhr7DmGSyFZoEBgIhAKaOZ9MG9qAueeOPHYfuPQE3hgAkEAQN1QWpv7a711MSKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwj7FB90N84%2FKHZUBYq3AOuU0UPYIWXAYFvt4qbg06W3acdpBMgWTvFbniqpC1q%2F3C%2F0lLYKlXa9c%2BG7KwRfQ13k9Fm%2B%2B2vGR5f91S0PQJB2ZzaHdKnE1ki3JP5w3AyieE%2BX1hDIWLslMkqrWjjLAKlIRcRJgW5jx1jFD1V3dUuGXcDLIuJr0cQvqThHj3j8s2rV5CklMz8VAbBkAnIqRKCU4D%2BvsBlN%2FNaPL5GxDObTNLbtsUkzGZfc2VYD2scwpm%2BRUQX58QEX3phzlsMtogvmBcd5wfFsdJIE96UCPQLOfRjFpbSFwfs5TCW%2BAtRK1KWtEYnCwtT40KZUaNV%2FjhLLZ%2Bj7S30pboiybSU3A0kJnuVljVEvFAHhpbfb4yPWuV40p8oj7X0bnpq%2Fdh9pYpFnfJlbhHrrZH4M9DGWE7ZIs9rqfPQcec0pCBgW%2FrFFdHRos93BAh8g9M%2BdjZhxbvx0l%2FNlx%2FOIzA5Aenu5y8B%2FTxueGNn7dQL0GTUE7Jb3y4YfLgrGnt9Zg6%2BDBpY3UXDgY6tLA2%2Bty7x%2Fc%2B2xEn5zipskWkrnv5FJWb4eL4m6maWcqvYwp3LuvtmwSZGF0vaR87RyVze%2BFdO3%2FYARWeP7ZHfu7Fm858FfhPROXE55xn5bxx%2FcR3LJ1%2FBCDDMvrjSBjqkARidir9Gh2sgzfo38ykzXGTqv6rpdZjiIhqAh7YJ9Mb0iAeOeJ94vZVIwLWiK4pLiIH1L0w7fFGEY05l8qDIfLuAThsAGdW0nMRv7GLVnGoRbToAWBnW500ww0io4MxyVUgiHg32hpQ7ej4anhBXa10u3NS%2Fap4pWL4zLPebehgIr3NewOaHyb%2BJxIZIBzrDOe2AWZvYm%2BBhoA6HHm5I4VYbjP8z&X-Amz-Signature=a5691531eb7c14f5398abd72647d580b495c222461235f4057587c0dbc1073dd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WRSIP7DH%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101620Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDsUXcbxA6XppfapbmaDAWvSJmwo%2B%2F6KcbB%2FSBc9%2FHGCQIhAPKz8SPp%2FiUBopddUQ%2BOSHXH9iPkwv1Fuw4K564qap4jKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz4rS7svr8K6EeFwGEq3AODXo5M69LApNwV0q%2BXpUZpVxtPYgFKydwhxarC2bKqQx5kJ3BXTrIph062WM55OgNLdQdwL0I3N29EfyAoTUW0v%2FvadaaIoJEtbBRUXNiRtCw%2Bx%2BtELw%2BeodByT2I9NPLNSDOk5XwGO%2BdLZHG%2Bi9Bx0RowhS3IpmPxGyW4VdDBg6lOm498JXA0WEFSWe5g7mPj6ntN33GxMwmiMpRbS%2FIWEHD9MAXf70auuDXfVm8%2F6L9CCHeim%2FasbUqDYToGdPKng6SJ9bfjmb70zsKiJXw22wM7YRffI81ukWCenpSrgdNFJ9N60bXvEZQHYbia6IftJNHPyE3MrWb8NLqIqlp0wUtjhkB%2FvPO8sDI74iPlUEAkx%2BIKmMYa9cjG6lQ1qg2FOSJWoMWmmAwC%2FMCYZF1zBkuaTMuB1L8j2bR5OUgo8UeB6ITQUfBt%2FAyHbaUjRtZKtDuMvkNd3Pj7VihBMsWh249qQJB9r%2FsBzAH%2BOCGSve6P5bCVu7rghTAK8V2c5MBKz%2BYr7XuX7QJPYmHJe1Eg8IxmxeEf4ZlaFcgERx6LziN4b6DX9n14JhvsnKLWOOBRzW7b4WEKvGGFTs3ZBiY%2BfMIC5L%2Fcus8NqBkekezvQnpq4W2pzZO2GU3LcDDQvLjSBjqkAWTyQvynGYBumPGs6olA9AFTB1ixh9dZSJP0hzTpBf4KPQ0LVzcb4ei3UWvkNoPjGCwtvUsy1pATMdIU5VoA07Of3ZNvGCB17vVzIG%2BoqK7mQavtAfLDMPCj2gYrIxNVDvAFRRP3cMa9G05hH4RkjXH7XgXjQhCWHbZ3hHxT4db9mFlrYDoCjRl%2F%2FfXbkfy5CM7pLJFoeCp61JgNh6PWQqp2gVjb&X-Amz-Signature=560226d3092daeed878a38fdb2eba3b909af1bffd4ecefc02e9f38f67b9dade0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WRSIP7DH%2F20260708%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260708T101620Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDsUXcbxA6XppfapbmaDAWvSJmwo%2B%2F6KcbB%2FSBc9%2FHGCQIhAPKz8SPp%2FiUBopddUQ%2BOSHXH9iPkwv1Fuw4K564qap4jKogECIP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz4rS7svr8K6EeFwGEq3AODXo5M69LApNwV0q%2BXpUZpVxtPYgFKydwhxarC2bKqQx5kJ3BXTrIph062WM55OgNLdQdwL0I3N29EfyAoTUW0v%2FvadaaIoJEtbBRUXNiRtCw%2Bx%2BtELw%2BeodByT2I9NPLNSDOk5XwGO%2BdLZHG%2Bi9Bx0RowhS3IpmPxGyW4VdDBg6lOm498JXA0WEFSWe5g7mPj6ntN33GxMwmiMpRbS%2FIWEHD9MAXf70auuDXfVm8%2F6L9CCHeim%2FasbUqDYToGdPKng6SJ9bfjmb70zsKiJXw22wM7YRffI81ukWCenpSrgdNFJ9N60bXvEZQHYbia6IftJNHPyE3MrWb8NLqIqlp0wUtjhkB%2FvPO8sDI74iPlUEAkx%2BIKmMYa9cjG6lQ1qg2FOSJWoMWmmAwC%2FMCYZF1zBkuaTMuB1L8j2bR5OUgo8UeB6ITQUfBt%2FAyHbaUjRtZKtDuMvkNd3Pj7VihBMsWh249qQJB9r%2FsBzAH%2BOCGSve6P5bCVu7rghTAK8V2c5MBKz%2BYr7XuX7QJPYmHJe1Eg8IxmxeEf4ZlaFcgERx6LziN4b6DX9n14JhvsnKLWOOBRzW7b4WEKvGGFTs3ZBiY%2BfMIC5L%2Fcus8NqBkekezvQnpq4W2pzZO2GU3LcDDQvLjSBjqkAWTyQvynGYBumPGs6olA9AFTB1ixh9dZSJP0hzTpBf4KPQ0LVzcb4ei3UWvkNoPjGCwtvUsy1pATMdIU5VoA07Of3ZNvGCB17vVzIG%2BoqK7mQavtAfLDMPCj2gYrIxNVDvAFRRP3cMa9G05hH4RkjXH7XgXjQhCWHbZ3hHxT4db9mFlrYDoCjRl%2F%2FfXbkfy5CM7pLJFoeCp61JgNh6PWQqp2gVjb&X-Amz-Signature=f41142cc70c5d248147c4e08f5b06151853de43c5154b36bafc8d4203e831090&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
