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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VHPB4KTC%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084128Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJGMEQCIEDqcvrUqPuraS4BfRmz3KhFClTTcmZuI21mvaA298TLAiAyTU3mf2Z8CflQs8NcJqE156J5ReCFfmMkKOSUvFpbXyqIBAjo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8sSU%2BNOtOYACSuqLKtwDG%2BZLn1vDsLHJ51iMcNvkMYH6ztsCZHVCYzmdthWqq1pawBpFsWGhwM26BHtmWKOAZXaSMesc1ULwthivv%2F1Tnuhk3pIKHfskEWQBh15oBheOh5P1oa6QFv3lanGicz2pDUkYci1SKgJkZwX7meNy3%2FSrfY74j1%2FxQbSNeQiZp%2FlAq1ixs3OjSq5xWwB382Wa%2BRHg5Guid3TyLTW1xJcxY2qurnTzTgrNeAIgYH4GKWtxhz4e3OhyAIwfMlQxDMf1hwz8sCpSpOCc8%2F9oJeYP0BwhUDQRTsH1GIZRGeUonLm99i5XTC7l9FGEUZ%2B%2BPRL4zOdU1p%2Fb5ARN0JQKzzbBJxJHyloazgskJ7FtyoVcVOjOYXSaxSSAWBFnR6K2Z2ezjScRpuYSd3%2FKk7fBKL%2F8w4wwWhMNZgnM8Z7Zgtuo1ViiSEnVlZFILw1KOv9yD%2BGCMWCTFZz0WGNsnKebKzGt9AndQk%2FL47C6uKFkXuFA7uTy%2Ba0AdeUXSyfbPhzUsVZUEdC7kP%2FdP3friu4110%2BHlIXqUJZa7xUHUGJ5H9smZd0XFOViapiYHO0Q8AVyjIXEAjINWA6%2B5YpvfIGrjMYemkR5hL%2B8QhE7oZcQ7kjo%2FkMvwaPc5NAOZ2i%2BLHMwgJC7zAY6pgG1G79pqD6JvUtkunYa%2BZLPXAYXsywy6Y21H6ya7it7fsSeOttSjzzGh1ald%2FOhhjbBcjk4N2u4jR8up8tiUomlLH6o9l5ug5h8slHuN9sTyheRm0uFi22oplRS7ics6VAbRmj6z%2BbYewkdtSHvr%2FW4V%2FqD%2BSGVDEAWtznzEFbkjlCM9piPWe2xkRRqrCSDT13gPYqyfkvFtSAtIFKibstgXJ3zucHC&X-Amz-Signature=e10fd6cf11d84a8cec58927e57b4a038f368cb542f63a78002670c3853f01707&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VHPB4KTC%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084128Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJGMEQCIEDqcvrUqPuraS4BfRmz3KhFClTTcmZuI21mvaA298TLAiAyTU3mf2Z8CflQs8NcJqE156J5ReCFfmMkKOSUvFpbXyqIBAjo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8sSU%2BNOtOYACSuqLKtwDG%2BZLn1vDsLHJ51iMcNvkMYH6ztsCZHVCYzmdthWqq1pawBpFsWGhwM26BHtmWKOAZXaSMesc1ULwthivv%2F1Tnuhk3pIKHfskEWQBh15oBheOh5P1oa6QFv3lanGicz2pDUkYci1SKgJkZwX7meNy3%2FSrfY74j1%2FxQbSNeQiZp%2FlAq1ixs3OjSq5xWwB382Wa%2BRHg5Guid3TyLTW1xJcxY2qurnTzTgrNeAIgYH4GKWtxhz4e3OhyAIwfMlQxDMf1hwz8sCpSpOCc8%2F9oJeYP0BwhUDQRTsH1GIZRGeUonLm99i5XTC7l9FGEUZ%2B%2BPRL4zOdU1p%2Fb5ARN0JQKzzbBJxJHyloazgskJ7FtyoVcVOjOYXSaxSSAWBFnR6K2Z2ezjScRpuYSd3%2FKk7fBKL%2F8w4wwWhMNZgnM8Z7Zgtuo1ViiSEnVlZFILw1KOv9yD%2BGCMWCTFZz0WGNsnKebKzGt9AndQk%2FL47C6uKFkXuFA7uTy%2Ba0AdeUXSyfbPhzUsVZUEdC7kP%2FdP3friu4110%2BHlIXqUJZa7xUHUGJ5H9smZd0XFOViapiYHO0Q8AVyjIXEAjINWA6%2B5YpvfIGrjMYemkR5hL%2B8QhE7oZcQ7kjo%2FkMvwaPc5NAOZ2i%2BLHMwgJC7zAY6pgG1G79pqD6JvUtkunYa%2BZLPXAYXsywy6Y21H6ya7it7fsSeOttSjzzGh1ald%2FOhhjbBcjk4N2u4jR8up8tiUomlLH6o9l5ug5h8slHuN9sTyheRm0uFi22oplRS7ics6VAbRmj6z%2BbYewkdtSHvr%2FW4V%2FqD%2BSGVDEAWtznzEFbkjlCM9piPWe2xkRRqrCSDT13gPYqyfkvFtSAtIFKibstgXJ3zucHC&X-Amz-Signature=17ae1415ec1b2c1fa3af6d389ff8ce1cb0fafa1ac47f0210ff3f47188a672ec6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VHPB4KTC%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084128Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJGMEQCIEDqcvrUqPuraS4BfRmz3KhFClTTcmZuI21mvaA298TLAiAyTU3mf2Z8CflQs8NcJqE156J5ReCFfmMkKOSUvFpbXyqIBAjo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8sSU%2BNOtOYACSuqLKtwDG%2BZLn1vDsLHJ51iMcNvkMYH6ztsCZHVCYzmdthWqq1pawBpFsWGhwM26BHtmWKOAZXaSMesc1ULwthivv%2F1Tnuhk3pIKHfskEWQBh15oBheOh5P1oa6QFv3lanGicz2pDUkYci1SKgJkZwX7meNy3%2FSrfY74j1%2FxQbSNeQiZp%2FlAq1ixs3OjSq5xWwB382Wa%2BRHg5Guid3TyLTW1xJcxY2qurnTzTgrNeAIgYH4GKWtxhz4e3OhyAIwfMlQxDMf1hwz8sCpSpOCc8%2F9oJeYP0BwhUDQRTsH1GIZRGeUonLm99i5XTC7l9FGEUZ%2B%2BPRL4zOdU1p%2Fb5ARN0JQKzzbBJxJHyloazgskJ7FtyoVcVOjOYXSaxSSAWBFnR6K2Z2ezjScRpuYSd3%2FKk7fBKL%2F8w4wwWhMNZgnM8Z7Zgtuo1ViiSEnVlZFILw1KOv9yD%2BGCMWCTFZz0WGNsnKebKzGt9AndQk%2FL47C6uKFkXuFA7uTy%2Ba0AdeUXSyfbPhzUsVZUEdC7kP%2FdP3friu4110%2BHlIXqUJZa7xUHUGJ5H9smZd0XFOViapiYHO0Q8AVyjIXEAjINWA6%2B5YpvfIGrjMYemkR5hL%2B8QhE7oZcQ7kjo%2FkMvwaPc5NAOZ2i%2BLHMwgJC7zAY6pgG1G79pqD6JvUtkunYa%2BZLPXAYXsywy6Y21H6ya7it7fsSeOttSjzzGh1ald%2FOhhjbBcjk4N2u4jR8up8tiUomlLH6o9l5ug5h8slHuN9sTyheRm0uFi22oplRS7ics6VAbRmj6z%2BbYewkdtSHvr%2FW4V%2FqD%2BSGVDEAWtznzEFbkjlCM9piPWe2xkRRqrCSDT13gPYqyfkvFtSAtIFKibstgXJ3zucHC&X-Amz-Signature=e461441ae13732d00baea945486601aaf7a2455a0675c9cf364ffb75294b6ba2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEBHG3VG%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIFHWeqS24u7tN1RZRsq%2BhwBALAjJpzMyUSv%2BZU9NIXlwAiEAxYET1TF0KBsDQMbgMgTp%2B%2BMiJsdWcuHVQDF4gX3UUSkqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEodc08jeofIvPWRlSrcAzMvpFvsLSzhGvIbBgp0A%2FZ%2FsnJZ0TKT9La6VehEVi380wGZ4OkUjusClNxNOQbpU%2Bcdi%2BGgFGH3ieDtMqAhzXQUJpuwCrAIAKitAHG0FpLcDKngdnpeCaN%2Flf%2FYfHt3T37x786qso%2F9NKr91vIX5KUFdWpcA%2BsDSZD38YJg0o4SxApOkReforxowGhjUYygrXNMykSyIxywzIC0YBLJ2fyS3toRDHVrxtQfDhTptVO6gN1cXtgiYCnP0ndZfH1PsLDQsN%2BpN%2B5%2FGhBqlji3BBqe3CnTQHPHCnDYUc8FrV0ymqmDqpTLCSDzdE8rAAE%2FqHp5IR8wXoA9hqADlz9cJlcDWOMEqZnFdjyFRUq5ZHnZw9ameeBD9JSbSUj1hJRYOYT%2FBUE9Ep7ks2DOquaXb9GfJgchk0M3v3AzrDabl34uD06e0WyfaRzWhVQufjsixab%2BRjYFO0lAt1IIPdq6tEwM5WX6R3%2BfCrklzC7LTBlRgrD9bPJge%2Fpy28zpzz6rXKT48RYBgCI9emkAo%2FC%2BiTl1k%2Bv%2B6vIeP4UwBctLRCfm1DzbBYAisx%2BgTmiVG40hv%2FLtH%2F5XC%2BdZGLWjQsvlISt4YCnYW1fJHBst%2Fr2WZ%2Fx3wt0%2BvBduo41PnsN4MKSQu8wGOqUBs6PGYkqTV4BsC%2FvdrcD6DBzCROiCY252WN6wOGHV8zrQ5lzYBBg%2FBHcONm8yxl%2F2eNHJSqbjuNZotGKKlkDuNRoewLZUMW72116G%2F4C4W3kxwjVCi4yDTUGXgPjBAe7adNmOgM%2BxSOF0XtwfR8A4E9Xi%2FqVrdgld06CvI1s4u1mfXV2E2wKCNt6PbLSxC5NRo%2Fd5dp0F3MKqNEor%2BRXbvhhoaWYY&X-Amz-Signature=8faa5601704a6f3565d71e38d36e0224eb871ff4ab39e50af6ba242da9ad266a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEBHG3VG%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIFHWeqS24u7tN1RZRsq%2BhwBALAjJpzMyUSv%2BZU9NIXlwAiEAxYET1TF0KBsDQMbgMgTp%2B%2BMiJsdWcuHVQDF4gX3UUSkqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEodc08jeofIvPWRlSrcAzMvpFvsLSzhGvIbBgp0A%2FZ%2FsnJZ0TKT9La6VehEVi380wGZ4OkUjusClNxNOQbpU%2Bcdi%2BGgFGH3ieDtMqAhzXQUJpuwCrAIAKitAHG0FpLcDKngdnpeCaN%2Flf%2FYfHt3T37x786qso%2F9NKr91vIX5KUFdWpcA%2BsDSZD38YJg0o4SxApOkReforxowGhjUYygrXNMykSyIxywzIC0YBLJ2fyS3toRDHVrxtQfDhTptVO6gN1cXtgiYCnP0ndZfH1PsLDQsN%2BpN%2B5%2FGhBqlji3BBqe3CnTQHPHCnDYUc8FrV0ymqmDqpTLCSDzdE8rAAE%2FqHp5IR8wXoA9hqADlz9cJlcDWOMEqZnFdjyFRUq5ZHnZw9ameeBD9JSbSUj1hJRYOYT%2FBUE9Ep7ks2DOquaXb9GfJgchk0M3v3AzrDabl34uD06e0WyfaRzWhVQufjsixab%2BRjYFO0lAt1IIPdq6tEwM5WX6R3%2BfCrklzC7LTBlRgrD9bPJge%2Fpy28zpzz6rXKT48RYBgCI9emkAo%2FC%2BiTl1k%2Bv%2B6vIeP4UwBctLRCfm1DzbBYAisx%2BgTmiVG40hv%2FLtH%2F5XC%2BdZGLWjQsvlISt4YCnYW1fJHBst%2Fr2WZ%2Fx3wt0%2BvBduo41PnsN4MKSQu8wGOqUBs6PGYkqTV4BsC%2FvdrcD6DBzCROiCY252WN6wOGHV8zrQ5lzYBBg%2FBHcONm8yxl%2F2eNHJSqbjuNZotGKKlkDuNRoewLZUMW72116G%2F4C4W3kxwjVCi4yDTUGXgPjBAe7adNmOgM%2BxSOF0XtwfR8A4E9Xi%2FqVrdgld06CvI1s4u1mfXV2E2wKCNt6PbLSxC5NRo%2Fd5dp0F3MKqNEor%2BRXbvhhoaWYY&X-Amz-Signature=0a7db664e8cc555aa230c6a058b2956b8e5a6de86c4aeb420862f2cd086df91b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEBHG3VG%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIFHWeqS24u7tN1RZRsq%2BhwBALAjJpzMyUSv%2BZU9NIXlwAiEAxYET1TF0KBsDQMbgMgTp%2B%2BMiJsdWcuHVQDF4gX3UUSkqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEodc08jeofIvPWRlSrcAzMvpFvsLSzhGvIbBgp0A%2FZ%2FsnJZ0TKT9La6VehEVi380wGZ4OkUjusClNxNOQbpU%2Bcdi%2BGgFGH3ieDtMqAhzXQUJpuwCrAIAKitAHG0FpLcDKngdnpeCaN%2Flf%2FYfHt3T37x786qso%2F9NKr91vIX5KUFdWpcA%2BsDSZD38YJg0o4SxApOkReforxowGhjUYygrXNMykSyIxywzIC0YBLJ2fyS3toRDHVrxtQfDhTptVO6gN1cXtgiYCnP0ndZfH1PsLDQsN%2BpN%2B5%2FGhBqlji3BBqe3CnTQHPHCnDYUc8FrV0ymqmDqpTLCSDzdE8rAAE%2FqHp5IR8wXoA9hqADlz9cJlcDWOMEqZnFdjyFRUq5ZHnZw9ameeBD9JSbSUj1hJRYOYT%2FBUE9Ep7ks2DOquaXb9GfJgchk0M3v3AzrDabl34uD06e0WyfaRzWhVQufjsixab%2BRjYFO0lAt1IIPdq6tEwM5WX6R3%2BfCrklzC7LTBlRgrD9bPJge%2Fpy28zpzz6rXKT48RYBgCI9emkAo%2FC%2BiTl1k%2Bv%2B6vIeP4UwBctLRCfm1DzbBYAisx%2BgTmiVG40hv%2FLtH%2F5XC%2BdZGLWjQsvlISt4YCnYW1fJHBst%2Fr2WZ%2Fx3wt0%2BvBduo41PnsN4MKSQu8wGOqUBs6PGYkqTV4BsC%2FvdrcD6DBzCROiCY252WN6wOGHV8zrQ5lzYBBg%2FBHcONm8yxl%2F2eNHJSqbjuNZotGKKlkDuNRoewLZUMW72116G%2F4C4W3kxwjVCi4yDTUGXgPjBAe7adNmOgM%2BxSOF0XtwfR8A4E9Xi%2FqVrdgld06CvI1s4u1mfXV2E2wKCNt6PbLSxC5NRo%2Fd5dp0F3MKqNEor%2BRXbvhhoaWYY&X-Amz-Signature=220a6c19584cb5b9b80c26e7aa0ac94d9d1d770d1903bffbe992e61eb53ee90a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SEBHG3VG%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084129Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIFHWeqS24u7tN1RZRsq%2BhwBALAjJpzMyUSv%2BZU9NIXlwAiEAxYET1TF0KBsDQMbgMgTp%2B%2BMiJsdWcuHVQDF4gX3UUSkqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEodc08jeofIvPWRlSrcAzMvpFvsLSzhGvIbBgp0A%2FZ%2FsnJZ0TKT9La6VehEVi380wGZ4OkUjusClNxNOQbpU%2Bcdi%2BGgFGH3ieDtMqAhzXQUJpuwCrAIAKitAHG0FpLcDKngdnpeCaN%2Flf%2FYfHt3T37x786qso%2F9NKr91vIX5KUFdWpcA%2BsDSZD38YJg0o4SxApOkReforxowGhjUYygrXNMykSyIxywzIC0YBLJ2fyS3toRDHVrxtQfDhTptVO6gN1cXtgiYCnP0ndZfH1PsLDQsN%2BpN%2B5%2FGhBqlji3BBqe3CnTQHPHCnDYUc8FrV0ymqmDqpTLCSDzdE8rAAE%2FqHp5IR8wXoA9hqADlz9cJlcDWOMEqZnFdjyFRUq5ZHnZw9ameeBD9JSbSUj1hJRYOYT%2FBUE9Ep7ks2DOquaXb9GfJgchk0M3v3AzrDabl34uD06e0WyfaRzWhVQufjsixab%2BRjYFO0lAt1IIPdq6tEwM5WX6R3%2BfCrklzC7LTBlRgrD9bPJge%2Fpy28zpzz6rXKT48RYBgCI9emkAo%2FC%2BiTl1k%2Bv%2B6vIeP4UwBctLRCfm1DzbBYAisx%2BgTmiVG40hv%2FLtH%2F5XC%2BdZGLWjQsvlISt4YCnYW1fJHBst%2Fr2WZ%2Fx3wt0%2BvBduo41PnsN4MKSQu8wGOqUBs6PGYkqTV4BsC%2FvdrcD6DBzCROiCY252WN6wOGHV8zrQ5lzYBBg%2FBHcONm8yxl%2F2eNHJSqbjuNZotGKKlkDuNRoewLZUMW72116G%2F4C4W3kxwjVCi4yDTUGXgPjBAe7adNmOgM%2BxSOF0XtwfR8A4E9Xi%2FqVrdgld06CvI1s4u1mfXV2E2wKCNt6PbLSxC5NRo%2Fd5dp0F3MKqNEor%2BRXbvhhoaWYY&X-Amz-Signature=96c75a4ae8b0dc5c023524d7dbd3dfedc41dad6c9498b5a18c55cc677b3c1248&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X2PAE4CL%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084130Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJGMEQCIEUiGw3PljxiAoZ9Hh8RFqh7%2FlCt%2B3jYh4uWmQ9E1wNkAiAyulxuPMrEZbxMz%2FLCITfMaZ6vI4KF4j8%2B1WbgTKNBziqIBAjo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8Bp5N9lMdGXus%2Bu5KtwDInOY5fZ2z2BmoYmZe%2FBom3GKGE9KqNTf2Zp2Nr7PdP5rQtFKWZDm58YUUTodQMb8KiS79ImYA9l%2FA2u8gh9UTx6KmvmwrqwvbSGr0Xp1%2FsD8vacvbn7fttGxnztlefFZzP9KY7X21S7eWTmY8Aj5nczGy5zwWjqKHVWAeVf%2BN%2BC2tehRUc%2F2Gm7gv0nmBQnQ37E0Cbh%2B7WHnu1DIirJWRnxsUIFE4JiPAOVAQMX1VYfaXcweytSESRm7XuAl%2FzmiYmxzeFakiYzBUNMKaT%2FbdsVp2CPp1JeS775cBtgYoe1lqF2y%2BJjM2%2Bc300GDrvkxOFDwdAXoCRieBl9Dtg18OO4YwkpRRYtqP%2F8Tt7mDAJOBW4f%2BZ7iPd8cS6Nd8jzvRQiQR08jVvkUlThx70Uw%2FLn8SqrCtItvb9cY%2FDqAGxTZWJYk8NsrM2Mey%2FiuCaE64E357Y4R%2F0%2FGgPjAktyOGQ98VF7Kw6a%2FICpcJzEzQNStqOoh9Oq%2BxSYjJ9aFJjlOo8f1%2BG8PGAABoif%2BbXEo%2BaLvZOWsf2sodpBW7R0vY7uN2OJlB7U0iToOAAk3va1kLFb1N8u0dZXmhSIhQx%2FJo0fk8cAbKbV3YZy%2BgVav1ZzfrKnpCGXnVoygHMJcwoZC7zAY6pgGBoi4gBan%2BvgxNqSKZPO2g%2BmRTnl8jHj6yy68PzOXkKrl0lkpTIBaBRGugdovFFLpcjKRkk1sOm2L0yvh0wN8ugLI%2FLBPllSdkFQJof1fyIE0amDaqogamz1JP0nQZyV1d1eqxbuTu1uI%2FH2APylCsuj271ZWD79PleU0dgGCqv59m7F3GOQftpsN57xpccKtETQUvBB66hta9DcfRoVjAEB94w%2Fu6&X-Amz-Signature=245831dc2d198cafccb98a66e2427d7498246f090ba04c387f053a30ab121108&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PWNKKFK%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084131Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJGMEQCIE3LY%2BUulZSZFj8ch2ANaoPoHdDCan9qUTkqD041mryhAiBwnfpTSrULGqx1qSBhkVoMKuN0gGz4Ppx9lJgnPUrLZiqIBAjo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMO4IC4ffkCbhMNo1cKtwD6jExnvO%2FKEYTVj2haY8YywZHSOAxwpcEEkuABUeKJntsWDv3LZRPDctNdNXseEk%2FYvTOpLp22t4M3T%2F%2BHHHIkSIKoYgp8pJJq3yytIiaNbyo9MjFaOOYp2h3frpZH%2BJCWIllQ2Pbf8NXnllJw9niFZmdG158SnRWnvBLtpM5ZF%2BIddTGYWHT%2BT46TUZf4hptMNc2V%2BFQDetTX8E92PLukukHebgDskLlWDxCLZODIucL2R4ud5%2Bqi0WzzX1teN0Sxt7O5WSDOB00T26QRK%2BNWzkg25cxZRIiR%2FYI4JfoKdzMCD%2F089GKH%2Bq5fwX7Jgdt4%2BmWlnpAgFAG95b58zBfaW%2F10vbNp7gd6wd2PPVMWGmqvthl9KjmGR3J2uz4jaW4p7dBKQ5EjbxTYT%2F0OKEzCngmvRRirTqcotahrkCWpll6tG0tn7epB3riduwQ23FRcPAH4QnH2AsDG%2FWYF2fKfVZrSlYM3%2BPcgPH9pEZFLi80leRs5SMyTypyW8uTjAFP3Lp0WZQvyIuObwczzUpH15PRIIbZriYMVAzvvktWsuh5Q481AnKkTQ64wqz6lFL6vBR9mFfwPRLNtXVXY5WMFQxr2jeMHknNfy0UbKWfJMeCA57gJ%2BvsE%2FNR%2BzIwxpC7zAY6pgE5kKYdTVvtOOHBBB6YaJDI5Ba1K1u%2ButeAIL7pUl5U2WSeLIcuzZC%2Bt8EbyUX8TdF4Ht8onsOWFYKgqslWlvzJmXSXYoQ%2FT3K1QikEf9d0qsXfINFq45pKN7P1l0ffpmlPL1Ui%2BLWI2CEGPYbRBD2SCSeoBlZEzTnG7EtIrd56%2FwC1yvXbho4stmJmlRPUFYNg34xwJ76orKZ26Ri%2FZEXP8eGN0dbo&X-Amz-Signature=5e20c5d23a6ccda697d1688a1bddaf63eb25394a847bc156c90ad9f69927262c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667PWNKKFK%2F20260213%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260213T084131Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJGMEQCIE3LY%2BUulZSZFj8ch2ANaoPoHdDCan9qUTkqD041mryhAiBwnfpTSrULGqx1qSBhkVoMKuN0gGz4Ppx9lJgnPUrLZiqIBAjo%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMO4IC4ffkCbhMNo1cKtwD6jExnvO%2FKEYTVj2haY8YywZHSOAxwpcEEkuABUeKJntsWDv3LZRPDctNdNXseEk%2FYvTOpLp22t4M3T%2F%2BHHHIkSIKoYgp8pJJq3yytIiaNbyo9MjFaOOYp2h3frpZH%2BJCWIllQ2Pbf8NXnllJw9niFZmdG158SnRWnvBLtpM5ZF%2BIddTGYWHT%2BT46TUZf4hptMNc2V%2BFQDetTX8E92PLukukHebgDskLlWDxCLZODIucL2R4ud5%2Bqi0WzzX1teN0Sxt7O5WSDOB00T26QRK%2BNWzkg25cxZRIiR%2FYI4JfoKdzMCD%2F089GKH%2Bq5fwX7Jgdt4%2BmWlnpAgFAG95b58zBfaW%2F10vbNp7gd6wd2PPVMWGmqvthl9KjmGR3J2uz4jaW4p7dBKQ5EjbxTYT%2F0OKEzCngmvRRirTqcotahrkCWpll6tG0tn7epB3riduwQ23FRcPAH4QnH2AsDG%2FWYF2fKfVZrSlYM3%2BPcgPH9pEZFLi80leRs5SMyTypyW8uTjAFP3Lp0WZQvyIuObwczzUpH15PRIIbZriYMVAzvvktWsuh5Q481AnKkTQ64wqz6lFL6vBR9mFfwPRLNtXVXY5WMFQxr2jeMHknNfy0UbKWfJMeCA57gJ%2BvsE%2FNR%2BzIwxpC7zAY6pgE5kKYdTVvtOOHBBB6YaJDI5Ba1K1u%2ButeAIL7pUl5U2WSeLIcuzZC%2Bt8EbyUX8TdF4Ht8onsOWFYKgqslWlvzJmXSXYoQ%2FT3K1QikEf9d0qsXfINFq45pKN7P1l0ffpmlPL1Ui%2BLWI2CEGPYbRBD2SCSeoBlZEzTnG7EtIrd56%2FwC1yvXbho4stmJmlRPUFYNg34xwJ76orKZ26Ri%2FZEXP8eGN0dbo&X-Amz-Signature=9d322f1c2502ec3780e0f752e95d0d8eb94e7985e6dd8d687aea4e745aac5bae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
