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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUQU3NTF%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJHMEUCIQCYCkk9k0CyQaVa0EOUasJQ9U7WPgytr4vdLjfPzhCTWgIgLnn2UQMunktq1Nstu2sxr75WijiXn27Onmf8xTqp0KcqiAQI5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDSKLxt43ukWjKFUmCrcA9VdvD7fnq%2BgGrbwiKSchMFG%2Fmnvr6oJg0GEyB4UWjwG8qjrTLAU7M4CbstmRtibHSkoVuNHOpLLMA3h0KOJH6s9efRtVQZ4K3wl1H1VUNwp%2F7N6Ip4CI5Xa0QgLzT%2F9eFceA9HHfgSWbBLcYvdQ7tNst7JDl%2FZozof2yxNx4rKnvA2SCOzzBqpjcOR2mrlEiQE1ES6k3wF%2BBv%2Fl%2B3BBtEYqx5vJqODL7nh20Y1%2Fdrf2bRHuiKE8awlGeOke3%2Bvn97hw9ejQT8jVLw6dzaM%2BVSQIIf5FQPAjPcByYdUcOxgCUH7A6Ki1NeJZxhB%2BL7C3wTp8kQ2GUsmvGJZm02YK%2BrQ7cllcymHKQx%2FhklbE7E%2BmQvl1QicK1E3wLJVFJb%2F%2B7Xp4ULV%2BWwPiv5eTu7i%2FfRnqKG%2F%2FyukO5XESOYlzSyVfFkWY93DxyNeWIJL0fX5NLqKIlhKErROQa7oEmS9MwS35D%2BIs%2BR2%2FYfwfcj00mHJuqd0JcsF3EdhJYwkwxcfQQ9wlwaYhYEJesyKh%2BHFLZAy4YGwnJNbooESgVD%2FejGULca%2BNXPL3vrKPzR9Nn6WWAhPLh26FMUmjyZ6Idu9I%2FnC7WHoAqUjlWFp7SY%2Fxqxj4e%2B5h2SdSgzB%2BusUBMOqB3tEGOqUB5J44ISL3WgAIx%2FQXfgVntUEBT6UUlnnY6iWOYP1zUcjx20pQ4mQRzpTph7dwiBZyB3c%2FJyvRc9H0C0ygqRgRWrDw5EDH5VnbxgC9fiZeH0VYqhGDXTQqB5bQSqR9DHc%2BT7aHw6cukhQiSmEMgtSL1Rq1TrvJB49XQK0fHuoXhQUZcQXgEtwveUYKKIFTILPDn3jiiJf2zXG9GAGl%2Fswq1oVCwjgD&X-Amz-Signature=3f4dd06cba2020c7714c0e311705bfeaabc86b7ada4c6bc2c0d9d19d08b72405&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUQU3NTF%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJHMEUCIQCYCkk9k0CyQaVa0EOUasJQ9U7WPgytr4vdLjfPzhCTWgIgLnn2UQMunktq1Nstu2sxr75WijiXn27Onmf8xTqp0KcqiAQI5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDSKLxt43ukWjKFUmCrcA9VdvD7fnq%2BgGrbwiKSchMFG%2Fmnvr6oJg0GEyB4UWjwG8qjrTLAU7M4CbstmRtibHSkoVuNHOpLLMA3h0KOJH6s9efRtVQZ4K3wl1H1VUNwp%2F7N6Ip4CI5Xa0QgLzT%2F9eFceA9HHfgSWbBLcYvdQ7tNst7JDl%2FZozof2yxNx4rKnvA2SCOzzBqpjcOR2mrlEiQE1ES6k3wF%2BBv%2Fl%2B3BBtEYqx5vJqODL7nh20Y1%2Fdrf2bRHuiKE8awlGeOke3%2Bvn97hw9ejQT8jVLw6dzaM%2BVSQIIf5FQPAjPcByYdUcOxgCUH7A6Ki1NeJZxhB%2BL7C3wTp8kQ2GUsmvGJZm02YK%2BrQ7cllcymHKQx%2FhklbE7E%2BmQvl1QicK1E3wLJVFJb%2F%2B7Xp4ULV%2BWwPiv5eTu7i%2FfRnqKG%2F%2FyukO5XESOYlzSyVfFkWY93DxyNeWIJL0fX5NLqKIlhKErROQa7oEmS9MwS35D%2BIs%2BR2%2FYfwfcj00mHJuqd0JcsF3EdhJYwkwxcfQQ9wlwaYhYEJesyKh%2BHFLZAy4YGwnJNbooESgVD%2FejGULca%2BNXPL3vrKPzR9Nn6WWAhPLh26FMUmjyZ6Idu9I%2FnC7WHoAqUjlWFp7SY%2Fxqxj4e%2B5h2SdSgzB%2BusUBMOqB3tEGOqUB5J44ISL3WgAIx%2FQXfgVntUEBT6UUlnnY6iWOYP1zUcjx20pQ4mQRzpTph7dwiBZyB3c%2FJyvRc9H0C0ygqRgRWrDw5EDH5VnbxgC9fiZeH0VYqhGDXTQqB5bQSqR9DHc%2BT7aHw6cukhQiSmEMgtSL1Rq1TrvJB49XQK0fHuoXhQUZcQXgEtwveUYKKIFTILPDn3jiiJf2zXG9GAGl%2Fswq1oVCwjgD&X-Amz-Signature=bc4fbe8a38ac56d99d59442ac4565825368c30fe4af54790140c78d17f246ae3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZUQU3NTF%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJHMEUCIQCYCkk9k0CyQaVa0EOUasJQ9U7WPgytr4vdLjfPzhCTWgIgLnn2UQMunktq1Nstu2sxr75WijiXn27Onmf8xTqp0KcqiAQI5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDSKLxt43ukWjKFUmCrcA9VdvD7fnq%2BgGrbwiKSchMFG%2Fmnvr6oJg0GEyB4UWjwG8qjrTLAU7M4CbstmRtibHSkoVuNHOpLLMA3h0KOJH6s9efRtVQZ4K3wl1H1VUNwp%2F7N6Ip4CI5Xa0QgLzT%2F9eFceA9HHfgSWbBLcYvdQ7tNst7JDl%2FZozof2yxNx4rKnvA2SCOzzBqpjcOR2mrlEiQE1ES6k3wF%2BBv%2Fl%2B3BBtEYqx5vJqODL7nh20Y1%2Fdrf2bRHuiKE8awlGeOke3%2Bvn97hw9ejQT8jVLw6dzaM%2BVSQIIf5FQPAjPcByYdUcOxgCUH7A6Ki1NeJZxhB%2BL7C3wTp8kQ2GUsmvGJZm02YK%2BrQ7cllcymHKQx%2FhklbE7E%2BmQvl1QicK1E3wLJVFJb%2F%2B7Xp4ULV%2BWwPiv5eTu7i%2FfRnqKG%2F%2FyukO5XESOYlzSyVfFkWY93DxyNeWIJL0fX5NLqKIlhKErROQa7oEmS9MwS35D%2BIs%2BR2%2FYfwfcj00mHJuqd0JcsF3EdhJYwkwxcfQQ9wlwaYhYEJesyKh%2BHFLZAy4YGwnJNbooESgVD%2FejGULca%2BNXPL3vrKPzR9Nn6WWAhPLh26FMUmjyZ6Idu9I%2FnC7WHoAqUjlWFp7SY%2Fxqxj4e%2B5h2SdSgzB%2BusUBMOqB3tEGOqUB5J44ISL3WgAIx%2FQXfgVntUEBT6UUlnnY6iWOYP1zUcjx20pQ4mQRzpTph7dwiBZyB3c%2FJyvRc9H0C0ygqRgRWrDw5EDH5VnbxgC9fiZeH0VYqhGDXTQqB5bQSqR9DHc%2BT7aHw6cukhQiSmEMgtSL1Rq1TrvJB49XQK0fHuoXhQUZcQXgEtwveUYKKIFTILPDn3jiiJf2zXG9GAGl%2Fswq1oVCwjgD&X-Amz-Signature=eddac72f3c7a688a3a6c95abe2de5afbe999d4a33cbb4bbfba741409fa07515a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VN6QVG5S%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJGMEQCICnB5aAnFB%2B3lTxNrkNk9Xlz2vy36ygI%2BeD%2B9lcRSmanAiAQQ%2FBTY%2B2I2bAwJwRRRcuYtf%2BYQzzXPkg6tIYUrJ%2BcqSqIBAjn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0NQm7UG3gsPKdRglKtwDwUXGqBI8tbhnhbd8%2B2mwQG0ujgE0IMpYOssJxVAWhoJi4eRQ4%2FTsovztADzmR226Do3ErI44PMlUCEZmw9l6KlNMdDnliE%2FI09aDBor0zlx%2BpdFafvkVUMxs0Fb6P0wAPlKt2g5WoJUQqFjgZeyWZdbQOaUkJnHoOdaksQoTFNumfRQxQSeaZaF5KyjT2FV9xmyxMmr6fua3OFOieokJlS0HIFQBd7yXw6BT%2FFmI26ApspQLL%2FxMvteDRyOrBYv6DwDETPaIChVKMXPBRFi5b6c3eM04tCjtakT%2FcHdltOSm4CQ2H3rKn1SvF5AC1j0DEoL1iYlW9BrG8YmHejrll0LyfhYP8w6dYGtpaPJs54rynID08uPyW0PwJENmK1R9RnEWvt2BJVg8n0UNb7oh7xUFn76ajasdQyn9aYQSVsM%2FHS1cw6C%2FBL3kgFqm6jPzKxYh3y4nUBIS%2F7OeHf%2BCag9XvCrnrHPFJR%2BXcoyQkwuvUPvMa8c0EhGE3%2BayI3Qljst4d2oBxuOK%2BNfSAqOvSuav%2FJiwuXqB64Iow9hylWTDN5kkmpmjOpBUkVQidtYy46ClJ8k6iOymGhXC4xIR2FfkWfKJcUvDNWHxzn6x%2FEg%2FZsdNAv%2BipNwDHe0wzf%2Fd0QY6pgEdE%2F3tcRO1gpR%2F2HKJ8qSfRiiit8FqpZPwkiJAlKQVL1tLsZaVVtzlv8BCTpzQ2RjX%2F1Yc3CYErO8jOl5T8DVwYuckqRYWHv7PfkBSX4mZRYA3SSZ%2BuZNPQpBDHeLVKFI5ZjUneatiw9vdz7pxC6Rrsophm07D3KySiPVl8XSFfXFCrhGAKwRE7P0Beu6Q0QmwPgd1Jww7dHEl%2BvYHUUBBkVA6kXt1&X-Amz-Signature=405a216da608400a7f8e53312a6507937e2ba234591a945abe21c17ba12b3bba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VN6QVG5S%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJGMEQCICnB5aAnFB%2B3lTxNrkNk9Xlz2vy36ygI%2BeD%2B9lcRSmanAiAQQ%2FBTY%2B2I2bAwJwRRRcuYtf%2BYQzzXPkg6tIYUrJ%2BcqSqIBAjn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0NQm7UG3gsPKdRglKtwDwUXGqBI8tbhnhbd8%2B2mwQG0ujgE0IMpYOssJxVAWhoJi4eRQ4%2FTsovztADzmR226Do3ErI44PMlUCEZmw9l6KlNMdDnliE%2FI09aDBor0zlx%2BpdFafvkVUMxs0Fb6P0wAPlKt2g5WoJUQqFjgZeyWZdbQOaUkJnHoOdaksQoTFNumfRQxQSeaZaF5KyjT2FV9xmyxMmr6fua3OFOieokJlS0HIFQBd7yXw6BT%2FFmI26ApspQLL%2FxMvteDRyOrBYv6DwDETPaIChVKMXPBRFi5b6c3eM04tCjtakT%2FcHdltOSm4CQ2H3rKn1SvF5AC1j0DEoL1iYlW9BrG8YmHejrll0LyfhYP8w6dYGtpaPJs54rynID08uPyW0PwJENmK1R9RnEWvt2BJVg8n0UNb7oh7xUFn76ajasdQyn9aYQSVsM%2FHS1cw6C%2FBL3kgFqm6jPzKxYh3y4nUBIS%2F7OeHf%2BCag9XvCrnrHPFJR%2BXcoyQkwuvUPvMa8c0EhGE3%2BayI3Qljst4d2oBxuOK%2BNfSAqOvSuav%2FJiwuXqB64Iow9hylWTDN5kkmpmjOpBUkVQidtYy46ClJ8k6iOymGhXC4xIR2FfkWfKJcUvDNWHxzn6x%2FEg%2FZsdNAv%2BipNwDHe0wzf%2Fd0QY6pgEdE%2F3tcRO1gpR%2F2HKJ8qSfRiiit8FqpZPwkiJAlKQVL1tLsZaVVtzlv8BCTpzQ2RjX%2F1Yc3CYErO8jOl5T8DVwYuckqRYWHv7PfkBSX4mZRYA3SSZ%2BuZNPQpBDHeLVKFI5ZjUneatiw9vdz7pxC6Rrsophm07D3KySiPVl8XSFfXFCrhGAKwRE7P0Beu6Q0QmwPgd1Jww7dHEl%2BvYHUUBBkVA6kXt1&X-Amz-Signature=a8f6e38ea326d0f1b0c63b2e3f3727f1608014363ff99555b20406ed20d063a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VN6QVG5S%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJGMEQCICnB5aAnFB%2B3lTxNrkNk9Xlz2vy36ygI%2BeD%2B9lcRSmanAiAQQ%2FBTY%2B2I2bAwJwRRRcuYtf%2BYQzzXPkg6tIYUrJ%2BcqSqIBAjn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0NQm7UG3gsPKdRglKtwDwUXGqBI8tbhnhbd8%2B2mwQG0ujgE0IMpYOssJxVAWhoJi4eRQ4%2FTsovztADzmR226Do3ErI44PMlUCEZmw9l6KlNMdDnliE%2FI09aDBor0zlx%2BpdFafvkVUMxs0Fb6P0wAPlKt2g5WoJUQqFjgZeyWZdbQOaUkJnHoOdaksQoTFNumfRQxQSeaZaF5KyjT2FV9xmyxMmr6fua3OFOieokJlS0HIFQBd7yXw6BT%2FFmI26ApspQLL%2FxMvteDRyOrBYv6DwDETPaIChVKMXPBRFi5b6c3eM04tCjtakT%2FcHdltOSm4CQ2H3rKn1SvF5AC1j0DEoL1iYlW9BrG8YmHejrll0LyfhYP8w6dYGtpaPJs54rynID08uPyW0PwJENmK1R9RnEWvt2BJVg8n0UNb7oh7xUFn76ajasdQyn9aYQSVsM%2FHS1cw6C%2FBL3kgFqm6jPzKxYh3y4nUBIS%2F7OeHf%2BCag9XvCrnrHPFJR%2BXcoyQkwuvUPvMa8c0EhGE3%2BayI3Qljst4d2oBxuOK%2BNfSAqOvSuav%2FJiwuXqB64Iow9hylWTDN5kkmpmjOpBUkVQidtYy46ClJ8k6iOymGhXC4xIR2FfkWfKJcUvDNWHxzn6x%2FEg%2FZsdNAv%2BipNwDHe0wzf%2Fd0QY6pgEdE%2F3tcRO1gpR%2F2HKJ8qSfRiiit8FqpZPwkiJAlKQVL1tLsZaVVtzlv8BCTpzQ2RjX%2F1Yc3CYErO8jOl5T8DVwYuckqRYWHv7PfkBSX4mZRYA3SSZ%2BuZNPQpBDHeLVKFI5ZjUneatiw9vdz7pxC6Rrsophm07D3KySiPVl8XSFfXFCrhGAKwRE7P0Beu6Q0QmwPgd1Jww7dHEl%2BvYHUUBBkVA6kXt1&X-Amz-Signature=5666c4f93fbcffa96c206107fdf4939e6ec6ec5afced8e6e0cb8348b4f3c58d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VN6QVG5S%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJGMEQCICnB5aAnFB%2B3lTxNrkNk9Xlz2vy36ygI%2BeD%2B9lcRSmanAiAQQ%2FBTY%2B2I2bAwJwRRRcuYtf%2BYQzzXPkg6tIYUrJ%2BcqSqIBAjn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0NQm7UG3gsPKdRglKtwDwUXGqBI8tbhnhbd8%2B2mwQG0ujgE0IMpYOssJxVAWhoJi4eRQ4%2FTsovztADzmR226Do3ErI44PMlUCEZmw9l6KlNMdDnliE%2FI09aDBor0zlx%2BpdFafvkVUMxs0Fb6P0wAPlKt2g5WoJUQqFjgZeyWZdbQOaUkJnHoOdaksQoTFNumfRQxQSeaZaF5KyjT2FV9xmyxMmr6fua3OFOieokJlS0HIFQBd7yXw6BT%2FFmI26ApspQLL%2FxMvteDRyOrBYv6DwDETPaIChVKMXPBRFi5b6c3eM04tCjtakT%2FcHdltOSm4CQ2H3rKn1SvF5AC1j0DEoL1iYlW9BrG8YmHejrll0LyfhYP8w6dYGtpaPJs54rynID08uPyW0PwJENmK1R9RnEWvt2BJVg8n0UNb7oh7xUFn76ajasdQyn9aYQSVsM%2FHS1cw6C%2FBL3kgFqm6jPzKxYh3y4nUBIS%2F7OeHf%2BCag9XvCrnrHPFJR%2BXcoyQkwuvUPvMa8c0EhGE3%2BayI3Qljst4d2oBxuOK%2BNfSAqOvSuav%2FJiwuXqB64Iow9hylWTDN5kkmpmjOpBUkVQidtYy46ClJ8k6iOymGhXC4xIR2FfkWfKJcUvDNWHxzn6x%2FEg%2FZsdNAv%2BipNwDHe0wzf%2Fd0QY6pgEdE%2F3tcRO1gpR%2F2HKJ8qSfRiiit8FqpZPwkiJAlKQVL1tLsZaVVtzlv8BCTpzQ2RjX%2F1Yc3CYErO8jOl5T8DVwYuckqRYWHv7PfkBSX4mZRYA3SSZ%2BuZNPQpBDHeLVKFI5ZjUneatiw9vdz7pxC6Rrsophm07D3KySiPVl8XSFfXFCrhGAKwRE7P0Beu6Q0QmwPgd1Jww7dHEl%2BvYHUUBBkVA6kXt1&X-Amz-Signature=3b7a2824402ef1ec37d7bf5532e3a9e972e451fbe96a5e1552054557d3687434&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677CNZKWO%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111445Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJGMEQCICpiSyGnuuv15nn85kthUtO0N0r9E6gLof85nKEdIQ9YAiBy66enkfQS9VfKqCIaBNztuaHDKtRIbSxPMi9I78MgsCqIBAjn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX7HXUiyonpb1cok2KtwDsEzLvnoV8Ptb22i8z8yLAom0CtlRbFEmqg1iFCFwE6qg7oPPsUDfkGZkQqLh3FrIBmRsAdY1937t3pZrGpvU6vgZxSFRV0M1f9FTnk3KDVlYGJfJWEojM9TLJx%2FJOtrf%2BiQBJfyjF3QZFJHl2GLJM1GpMz7yjgVzD4gK285JNT8asAnsa0Go%2FFIkjbjw8o7mYv7TgmXw0WAtdE3902k8ZAc6vU0Hq%2Fq33hfoYbdYDvurMj9KhumyuC1ALKpO0JqzJkd5DSrh2Prfn4UKVywO26B47V%2F4woX2qpSnOkzbKauXvMiXTiQxFIcBnyURbI4g8E5fR6fGwxvajp4etU95n4aYyFxVgjmD2Xg4snTk5LtDIXHt9KyYur%2F%2BluNsINT6TF%2Bec0Be4CG9P4ROIH0WMWdk73MuxbOEoG2E4zDLC0vUeyfPJVu2sncqcyQlffJI9CfdLdkoc28VhpkZvTIuLw0O4xQA31oEZ3hgfQilRS0SfWK6J75awnTl%2BJ5biJNA2N9zpZ8TfkgtjzjoofVk1mGVxxyMJFlpPB2VJOdV2uUR2BJk38LZoEKt8py2i1iw4IS81IFupqb9xlquc8WdwsdF0YROH38z55RhSxt%2BUtGTIkQ2jwqqz52e%2Bz0wiYDe0QY6pgHYS2%2FeefgXdG4wdVMZWxOItpai6IiDSdUzC5SJFRqy7Tk87BM%2Bd92Oe9Ud%2FuyhouwJFAeSOCM5rdX8GRyAPDLoOsyOYf%2BQuY%2FjNDnEbbNQ85UjMyuMFfI5ez%2FKqRBnBzw4YRmTwU0HXZVmObLpRGey8LjbcxSLCA%2FaZKKtRPrqslfBQ4RU8d9JxitBWRHBBbsuiPgLpWSamT9SbWc%2BmdSjeAnFqet6&X-Amz-Signature=b11a11570f4e879960f2fe30ba0cfca72dedb8de1b45038c479dff4a94568cd5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664FINZCK%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111446Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJHMEUCIQC%2FbL6RybaqubZdV0rNoTClwYTouWvr0wN81XoG0nHQegIgLubHVMJfV%2BYZPN3NprbNbRNIC3z2oIr%2FQqMmaMy34MgqiAQI5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIWnAyxKVXHAereNuCrcA9wLPL2Oo15AbIwKBLvkP6KLEWPFw6TzQj27lR5RR4H781GvtC%2BKAXGN4OJs%2BXCFPU%2Bdl1m8x%2BiMj1nUwRnGn56qb7F8Fuo7w7SlQuydkxyD7%2FPkJ%2FMi2kkF4LZ%2FpSKGpmx7R77wXaSyo66gsoFMSBNJxRbjl4scqGkBxsz0QYxmAJv0f2cGtTSXVZ%2F%2FVsEXM64K%2BR7pmHmHj17Bjeops%2FjM6k8SNv8NHEzTc4o2sLM3qc6Vh87faPI%2BqHUYZru8FgVZfTAo5%2BVFKW%2BE10anmQfo8c3ayF8QZUGNng8O3H5bM37HVPOT0Kpt2Fyb2HPoZ7E0CCb1EjIL92wRe7hHn06JeW2TdGphINRa2PrnGiMQWjVQEcpkvp61QATBB1r11QTQ4%2BoRaLlJqIFy%2FRqSVxDQCXzKuiOdc00oPjFAfd7BXHHowYdMW53iT5SkkYZRw0lBfC90m7SDqJxNAyGZsSiebsxUO3fj%2FgwpsBBjICLrwFgaviNiM9%2B8kFf5heuXWySPQsZFy0MNkCdpJro5m%2B8rVVia4pZr4zq7ZlC59YfOFVau0nPZKOxlvhARZAHZbmcw0NICSdjvc4hWJeLzyE3rs%2BQ9wuIYe5vsJa3thC0GfedKn%2BJ9lmHxgJopMOmB3tEGOqUB0jKpTfJ0hqk4xAdM92DgRV%2FcOiR3I5%2BCrCSJGTkbH6ma%2BYxhTuMtOIzMD%2BSNrf082ZQAq5yzB6NjJbhaTDMK6b%2FSgq6H9Cvcwycx84Co1u6YcaIkjz3ltbaGUTT9mG%2FqZuUCuCL8NwRSccWuAni3hgsl9QD58NZ4IKrQGOzurYjNlIm0NlpxOL02J2I%2F2NTdevXBF1wXTkRn%2BEP%2Bswa0B1TTTpjI&X-Amz-Signature=2b13e10829d2e1eb433e4b3ced3329f73b3dc212dc192a5e82ff933da540e67c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664FINZCK%2F20260621%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260621T111446Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB4aCXVzLXdlc3QtMiJHMEUCIQC%2FbL6RybaqubZdV0rNoTClwYTouWvr0wN81XoG0nHQegIgLubHVMJfV%2BYZPN3NprbNbRNIC3z2oIr%2FQqMmaMy34MgqiAQI5%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIWnAyxKVXHAereNuCrcA9wLPL2Oo15AbIwKBLvkP6KLEWPFw6TzQj27lR5RR4H781GvtC%2BKAXGN4OJs%2BXCFPU%2Bdl1m8x%2BiMj1nUwRnGn56qb7F8Fuo7w7SlQuydkxyD7%2FPkJ%2FMi2kkF4LZ%2FpSKGpmx7R77wXaSyo66gsoFMSBNJxRbjl4scqGkBxsz0QYxmAJv0f2cGtTSXVZ%2F%2FVsEXM64K%2BR7pmHmHj17Bjeops%2FjM6k8SNv8NHEzTc4o2sLM3qc6Vh87faPI%2BqHUYZru8FgVZfTAo5%2BVFKW%2BE10anmQfo8c3ayF8QZUGNng8O3H5bM37HVPOT0Kpt2Fyb2HPoZ7E0CCb1EjIL92wRe7hHn06JeW2TdGphINRa2PrnGiMQWjVQEcpkvp61QATBB1r11QTQ4%2BoRaLlJqIFy%2FRqSVxDQCXzKuiOdc00oPjFAfd7BXHHowYdMW53iT5SkkYZRw0lBfC90m7SDqJxNAyGZsSiebsxUO3fj%2FgwpsBBjICLrwFgaviNiM9%2B8kFf5heuXWySPQsZFy0MNkCdpJro5m%2B8rVVia4pZr4zq7ZlC59YfOFVau0nPZKOxlvhARZAHZbmcw0NICSdjvc4hWJeLzyE3rs%2BQ9wuIYe5vsJa3thC0GfedKn%2BJ9lmHxgJopMOmB3tEGOqUB0jKpTfJ0hqk4xAdM92DgRV%2FcOiR3I5%2BCrCSJGTkbH6ma%2BYxhTuMtOIzMD%2BSNrf082ZQAq5yzB6NjJbhaTDMK6b%2FSgq6H9Cvcwycx84Co1u6YcaIkjz3ltbaGUTT9mG%2FqZuUCuCL8NwRSccWuAni3hgsl9QD58NZ4IKrQGOzurYjNlIm0NlpxOL02J2I%2F2NTdevXBF1wXTkRn%2BEP%2Bswa0B1TTTpjI&X-Amz-Signature=6223cb2dd756277cb468f6e13950f87dee527b954ea75f1b6e682aad46eb044c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
