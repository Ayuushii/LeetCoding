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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKQX7F2W%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQCa0%2FDjjKJeApQ8z7m6HB9GvyC1lb15LGdB6PrXTvb6bQIhANUW95%2BLQILIw1fEOWOpuNxTOljV8nKVoOP7%2BCJsqxbXKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwXY2ulPOXst1XNV2Iq3AMAvTfPZzWg7LWtis0nAFJ%2FjquN8WVlIdMJ14zlX8xQ4r18WvnoZVmLkNsosdWjjoV1umr7sir%2Br9DvF2U3O1AYJ9i18lvTvtHDNgkFSNnrG0gxvwnSXpmnB66wQ5hXAu6Q%2FxEPVybwuyZSCiEwhYhyAh9lmpo8%2FEOEmCijd2zWBsp%2FHlZMJ5bZsu8N6VPq9n9nGjxVbdeRWrn4UGb1H2JoQ9CvIGGZ6ShaAh6P1IruKynEBF3npz0nNcJDFBW%2FLYfBpkNJFa4ZaNJOaW57zdhq76XcZeBSb7W40J8JcSPp2bUqsPvOD%2Biy6rAsfKE2FLMd%2BZLqF2OgX1XwJYOSP%2FuOIoARZORmYmSrkTN3PLjkuYk24m4q8wSgql50keyQ7gye%2Fehff%2FxMHzImdHUPH9a2KDLpsZgsepBUcXyD185KlgOsDI2aDN1tlJunB9Pzk0mzhk9AhIj1pTfhSw0Gm8bThVaVCAY9m6WAmBMRVj4uAVeH9gdqE%2FeA3KkSuKiEvO9mN2Sm2Uhs45Ux0syuB57mv%2BT5QFzMjGKNajJl0ALgIIiCpwc2cLdBHzjAStPF1jQVTL8e8iwTyZvo2mRl31m%2Bg3b3mTf%2F79PgpQWtj1FjHXFjJQv0g7MH6dhO6DCkgMjSBjqkAcO75bEU7kB5IWCBwSyMjtSI60o9oY5CUkgEmceLOqUlPAM3OBtRi9kx2txv%2B3kx8UlCXSMqcJill5nQaMf7eZqR2TYrhGCcbt7%2BNY1JkE1zewcv4UX4el1vsb%2FQL9J3sVl3R4r8LiQeLR2pOaPHcMUVJjeGu3iIvQdLTLgisx0jsDUvuLypttVl3%2Fa2LOLL3xkbjyxzDr0neF6L7z7bDWHAFQY4&X-Amz-Signature=590d2e8d703ac7024e0963c3d111f33f87c0e2152fb466d2396f1c0356c17df6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKQX7F2W%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQCa0%2FDjjKJeApQ8z7m6HB9GvyC1lb15LGdB6PrXTvb6bQIhANUW95%2BLQILIw1fEOWOpuNxTOljV8nKVoOP7%2BCJsqxbXKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwXY2ulPOXst1XNV2Iq3AMAvTfPZzWg7LWtis0nAFJ%2FjquN8WVlIdMJ14zlX8xQ4r18WvnoZVmLkNsosdWjjoV1umr7sir%2Br9DvF2U3O1AYJ9i18lvTvtHDNgkFSNnrG0gxvwnSXpmnB66wQ5hXAu6Q%2FxEPVybwuyZSCiEwhYhyAh9lmpo8%2FEOEmCijd2zWBsp%2FHlZMJ5bZsu8N6VPq9n9nGjxVbdeRWrn4UGb1H2JoQ9CvIGGZ6ShaAh6P1IruKynEBF3npz0nNcJDFBW%2FLYfBpkNJFa4ZaNJOaW57zdhq76XcZeBSb7W40J8JcSPp2bUqsPvOD%2Biy6rAsfKE2FLMd%2BZLqF2OgX1XwJYOSP%2FuOIoARZORmYmSrkTN3PLjkuYk24m4q8wSgql50keyQ7gye%2Fehff%2FxMHzImdHUPH9a2KDLpsZgsepBUcXyD185KlgOsDI2aDN1tlJunB9Pzk0mzhk9AhIj1pTfhSw0Gm8bThVaVCAY9m6WAmBMRVj4uAVeH9gdqE%2FeA3KkSuKiEvO9mN2Sm2Uhs45Ux0syuB57mv%2BT5QFzMjGKNajJl0ALgIIiCpwc2cLdBHzjAStPF1jQVTL8e8iwTyZvo2mRl31m%2Bg3b3mTf%2F79PgpQWtj1FjHXFjJQv0g7MH6dhO6DCkgMjSBjqkAcO75bEU7kB5IWCBwSyMjtSI60o9oY5CUkgEmceLOqUlPAM3OBtRi9kx2txv%2B3kx8UlCXSMqcJill5nQaMf7eZqR2TYrhGCcbt7%2BNY1JkE1zewcv4UX4el1vsb%2FQL9J3sVl3R4r8LiQeLR2pOaPHcMUVJjeGu3iIvQdLTLgisx0jsDUvuLypttVl3%2Fa2LOLL3xkbjyxzDr0neF6L7z7bDWHAFQY4&X-Amz-Signature=a180e61a006c72b483a65cb48436a62a4a956feb49267379983b5a3685f10819&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKQX7F2W%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQCa0%2FDjjKJeApQ8z7m6HB9GvyC1lb15LGdB6PrXTvb6bQIhANUW95%2BLQILIw1fEOWOpuNxTOljV8nKVoOP7%2BCJsqxbXKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwXY2ulPOXst1XNV2Iq3AMAvTfPZzWg7LWtis0nAFJ%2FjquN8WVlIdMJ14zlX8xQ4r18WvnoZVmLkNsosdWjjoV1umr7sir%2Br9DvF2U3O1AYJ9i18lvTvtHDNgkFSNnrG0gxvwnSXpmnB66wQ5hXAu6Q%2FxEPVybwuyZSCiEwhYhyAh9lmpo8%2FEOEmCijd2zWBsp%2FHlZMJ5bZsu8N6VPq9n9nGjxVbdeRWrn4UGb1H2JoQ9CvIGGZ6ShaAh6P1IruKynEBF3npz0nNcJDFBW%2FLYfBpkNJFa4ZaNJOaW57zdhq76XcZeBSb7W40J8JcSPp2bUqsPvOD%2Biy6rAsfKE2FLMd%2BZLqF2OgX1XwJYOSP%2FuOIoARZORmYmSrkTN3PLjkuYk24m4q8wSgql50keyQ7gye%2Fehff%2FxMHzImdHUPH9a2KDLpsZgsepBUcXyD185KlgOsDI2aDN1tlJunB9Pzk0mzhk9AhIj1pTfhSw0Gm8bThVaVCAY9m6WAmBMRVj4uAVeH9gdqE%2FeA3KkSuKiEvO9mN2Sm2Uhs45Ux0syuB57mv%2BT5QFzMjGKNajJl0ALgIIiCpwc2cLdBHzjAStPF1jQVTL8e8iwTyZvo2mRl31m%2Bg3b3mTf%2F79PgpQWtj1FjHXFjJQv0g7MH6dhO6DCkgMjSBjqkAcO75bEU7kB5IWCBwSyMjtSI60o9oY5CUkgEmceLOqUlPAM3OBtRi9kx2txv%2B3kx8UlCXSMqcJill5nQaMf7eZqR2TYrhGCcbt7%2BNY1JkE1zewcv4UX4el1vsb%2FQL9J3sVl3R4r8LiQeLR2pOaPHcMUVJjeGu3iIvQdLTLgisx0jsDUvuLypttVl3%2Fa2LOLL3xkbjyxzDr0neF6L7z7bDWHAFQY4&X-Amz-Signature=0aee9ca41b4eb47157829dd13298de1b82312c2ee58445043ca24154ba47c6c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UQD4AQGL%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIClHIP2F%2B1R2RQqd4bzQlf2rR8xnpyMhQV7Lmo4VF1i5AiEA%2BzBekHsO9ykXN1PRFF6fH6DBsVqQ2U6n%2F7qdUViqus8qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb0icIyqZG4bh5BIyrcA03rbNeHnfTSV0BUtSmQv0nb2a6mdegmLVtjIjXW6%2BytjMbm3urJ5xLSJ1yAf3LTbSUnrhkHQZ2guYvJ5r6legGIfmY0aV51lqc6huoSONlLPx9YesZ97nlVRyB3j8HVj8hPoSP%2F4ipQ6705G%2FkpAwsaTedplWdkAspppJCLawZh2g8hersqRk%2B5CvAnY0sl1ZY8bYRAFhAK62fZlm%2F5C7UXgZ05txaonLXQNIYMaQn2%2FPld54JWbNzqwo0Kcky7%2B4HEN8YecjvRLZtohHgGN5Qr3H%2BmCMmDL9T2QCzU8aFRT%2FnypR1396CDdcV7QTtVbwS1hdDI4qKqKNun10RC85%2FbiQ5PFH%2FhZFewrNulkGbg%2FrS2D9Ki4ZxyPADWo8IrBrEqW4h9DDKOANmzJSsXIkQ8o1FRXQDZL4Nae%2FtNsJBQbUFSRjBgMYH7ZCte4CE9k516OaR8FejVuRyCZ9KhF7%2B865QVXi7g0JDmbkf5AIww1cSg9KfJ2pjbdcHqoDEDJQA0wSVZRiWwhA%2FQVVpmJSkKJCdTtgnQxWkECCgHLKZOnKnzvytwvDLNrHmUcO5yCOvmqAOzkVYlF%2F2psQGBg1RrN%2B52i4hE%2FHScYQl6ETuGCNittCb%2BkFo2K78SMLmAyNIGOqUB9f5%2Bsrkc%2BZ2wMFsjNTdOtNzpPUtUR1nDrRIDWrYvrQw7wc0hsLrc7eAUR2sWZxYIVcJfQ%2FJtJlld4XM1Eq1POOCVRle4ewOf1FAzFt%2F%2FYSzFqhvWSapnAl%2FUKMFuJCF6l%2BbWTtx2XeoTGMJul3ZJS%2FzD9MOR5cHE8KNrASdAPZZ7Qn4xZlIYNpV9pkYmSgPJHTgrkUCqDC0Oy7oP6%2FmZ01sSm5Nv&X-Amz-Signature=0ee6b61c68bceb4aff9d710d63ce99b945c19b36b22542bb7d8d384a7487141a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UQD4AQGL%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIClHIP2F%2B1R2RQqd4bzQlf2rR8xnpyMhQV7Lmo4VF1i5AiEA%2BzBekHsO9ykXN1PRFF6fH6DBsVqQ2U6n%2F7qdUViqus8qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb0icIyqZG4bh5BIyrcA03rbNeHnfTSV0BUtSmQv0nb2a6mdegmLVtjIjXW6%2BytjMbm3urJ5xLSJ1yAf3LTbSUnrhkHQZ2guYvJ5r6legGIfmY0aV51lqc6huoSONlLPx9YesZ97nlVRyB3j8HVj8hPoSP%2F4ipQ6705G%2FkpAwsaTedplWdkAspppJCLawZh2g8hersqRk%2B5CvAnY0sl1ZY8bYRAFhAK62fZlm%2F5C7UXgZ05txaonLXQNIYMaQn2%2FPld54JWbNzqwo0Kcky7%2B4HEN8YecjvRLZtohHgGN5Qr3H%2BmCMmDL9T2QCzU8aFRT%2FnypR1396CDdcV7QTtVbwS1hdDI4qKqKNun10RC85%2FbiQ5PFH%2FhZFewrNulkGbg%2FrS2D9Ki4ZxyPADWo8IrBrEqW4h9DDKOANmzJSsXIkQ8o1FRXQDZL4Nae%2FtNsJBQbUFSRjBgMYH7ZCte4CE9k516OaR8FejVuRyCZ9KhF7%2B865QVXi7g0JDmbkf5AIww1cSg9KfJ2pjbdcHqoDEDJQA0wSVZRiWwhA%2FQVVpmJSkKJCdTtgnQxWkECCgHLKZOnKnzvytwvDLNrHmUcO5yCOvmqAOzkVYlF%2F2psQGBg1RrN%2B52i4hE%2FHScYQl6ETuGCNittCb%2BkFo2K78SMLmAyNIGOqUB9f5%2Bsrkc%2BZ2wMFsjNTdOtNzpPUtUR1nDrRIDWrYvrQw7wc0hsLrc7eAUR2sWZxYIVcJfQ%2FJtJlld4XM1Eq1POOCVRle4ewOf1FAzFt%2F%2FYSzFqhvWSapnAl%2FUKMFuJCF6l%2BbWTtx2XeoTGMJul3ZJS%2FzD9MOR5cHE8KNrASdAPZZ7Qn4xZlIYNpV9pkYmSgPJHTgrkUCqDC0Oy7oP6%2FmZ01sSm5Nv&X-Amz-Signature=d471b66529ad350b4151efc9a343bed1fdd959dc04ffc5473c02d2cd030ec40b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UQD4AQGL%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIClHIP2F%2B1R2RQqd4bzQlf2rR8xnpyMhQV7Lmo4VF1i5AiEA%2BzBekHsO9ykXN1PRFF6fH6DBsVqQ2U6n%2F7qdUViqus8qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb0icIyqZG4bh5BIyrcA03rbNeHnfTSV0BUtSmQv0nb2a6mdegmLVtjIjXW6%2BytjMbm3urJ5xLSJ1yAf3LTbSUnrhkHQZ2guYvJ5r6legGIfmY0aV51lqc6huoSONlLPx9YesZ97nlVRyB3j8HVj8hPoSP%2F4ipQ6705G%2FkpAwsaTedplWdkAspppJCLawZh2g8hersqRk%2B5CvAnY0sl1ZY8bYRAFhAK62fZlm%2F5C7UXgZ05txaonLXQNIYMaQn2%2FPld54JWbNzqwo0Kcky7%2B4HEN8YecjvRLZtohHgGN5Qr3H%2BmCMmDL9T2QCzU8aFRT%2FnypR1396CDdcV7QTtVbwS1hdDI4qKqKNun10RC85%2FbiQ5PFH%2FhZFewrNulkGbg%2FrS2D9Ki4ZxyPADWo8IrBrEqW4h9DDKOANmzJSsXIkQ8o1FRXQDZL4Nae%2FtNsJBQbUFSRjBgMYH7ZCte4CE9k516OaR8FejVuRyCZ9KhF7%2B865QVXi7g0JDmbkf5AIww1cSg9KfJ2pjbdcHqoDEDJQA0wSVZRiWwhA%2FQVVpmJSkKJCdTtgnQxWkECCgHLKZOnKnzvytwvDLNrHmUcO5yCOvmqAOzkVYlF%2F2psQGBg1RrN%2B52i4hE%2FHScYQl6ETuGCNittCb%2BkFo2K78SMLmAyNIGOqUB9f5%2Bsrkc%2BZ2wMFsjNTdOtNzpPUtUR1nDrRIDWrYvrQw7wc0hsLrc7eAUR2sWZxYIVcJfQ%2FJtJlld4XM1Eq1POOCVRle4ewOf1FAzFt%2F%2FYSzFqhvWSapnAl%2FUKMFuJCF6l%2BbWTtx2XeoTGMJul3ZJS%2FzD9MOR5cHE8KNrASdAPZZ7Qn4xZlIYNpV9pkYmSgPJHTgrkUCqDC0Oy7oP6%2FmZ01sSm5Nv&X-Amz-Signature=842ce13076469ccfb2e0f6eaf9827bbe92ac098708ad5f6a378c17c330aeebea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UQD4AQGL%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092748Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIClHIP2F%2B1R2RQqd4bzQlf2rR8xnpyMhQV7Lmo4VF1i5AiEA%2BzBekHsO9ykXN1PRFF6fH6DBsVqQ2U6n%2F7qdUViqus8qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMb0icIyqZG4bh5BIyrcA03rbNeHnfTSV0BUtSmQv0nb2a6mdegmLVtjIjXW6%2BytjMbm3urJ5xLSJ1yAf3LTbSUnrhkHQZ2guYvJ5r6legGIfmY0aV51lqc6huoSONlLPx9YesZ97nlVRyB3j8HVj8hPoSP%2F4ipQ6705G%2FkpAwsaTedplWdkAspppJCLawZh2g8hersqRk%2B5CvAnY0sl1ZY8bYRAFhAK62fZlm%2F5C7UXgZ05txaonLXQNIYMaQn2%2FPld54JWbNzqwo0Kcky7%2B4HEN8YecjvRLZtohHgGN5Qr3H%2BmCMmDL9T2QCzU8aFRT%2FnypR1396CDdcV7QTtVbwS1hdDI4qKqKNun10RC85%2FbiQ5PFH%2FhZFewrNulkGbg%2FrS2D9Ki4ZxyPADWo8IrBrEqW4h9DDKOANmzJSsXIkQ8o1FRXQDZL4Nae%2FtNsJBQbUFSRjBgMYH7ZCte4CE9k516OaR8FejVuRyCZ9KhF7%2B865QVXi7g0JDmbkf5AIww1cSg9KfJ2pjbdcHqoDEDJQA0wSVZRiWwhA%2FQVVpmJSkKJCdTtgnQxWkECCgHLKZOnKnzvytwvDLNrHmUcO5yCOvmqAOzkVYlF%2F2psQGBg1RrN%2B52i4hE%2FHScYQl6ETuGCNittCb%2BkFo2K78SMLmAyNIGOqUB9f5%2Bsrkc%2BZ2wMFsjNTdOtNzpPUtUR1nDrRIDWrYvrQw7wc0hsLrc7eAUR2sWZxYIVcJfQ%2FJtJlld4XM1Eq1POOCVRle4ewOf1FAzFt%2F%2FYSzFqhvWSapnAl%2FUKMFuJCF6l%2BbWTtx2XeoTGMJul3ZJS%2FzD9MOR5cHE8KNrASdAPZZ7Qn4xZlIYNpV9pkYmSgPJHTgrkUCqDC0Oy7oP6%2FmZ01sSm5Nv&X-Amz-Signature=0550e356f9b3ebfd48cc0dd9335710e9dac4480868acb57bcf9217958e5b6179&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAHWNNQR%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092749Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIQC1RcCs9ASkjsF1HxqFj1qrJMirZzVE4v0iaHAmobj8%2BwIgSW8ug2W%2FCuiDfrKFxFSGqqjWYtEXFvGDGx%2FfqNB4N4EqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIJ0u9Hc9cCrcj5aIyrcA01N%2BVMTKUBbIQbqGB8JimnOJzA7z1UV4P3TmfMIA2qXfjgWLJqvefmtZQbm8KFT7SVt9xl40Gy12D93t2Eb0bOLt7AHRcmAEBxDS3A3u7j8nevJkQmOhqKbVi8qT1tL7%2Bsi%2BW8lli2vFHWJ8FgyW27ypYgGRVhFOdOdvxwpsj7O56WQLEywDiyGWG05zj1AnPltC%2BWfsHs29dUU5HW7dLS1mqxZQLINvs1hsxVY8mvRNIIvVVlQl4XjishD5Y3ByzURqZfBG2%2BotvIDQ4RT0FZ9xNEbtfqBnucrpZfDCGRUda%2FqV%2B3dsXCmT%2BQl0mes8vkkGgKvFsuHvos9b5H48x98frKtVEG9BEYBULHLxh86BPeeeBrKV%2BuSusDBR3RlR%2BolnP2VGyCbhZfUU8iZpPmdkvihSr9%2B%2BPPNQ2bqQIqGik3p9v4Alwd%2Bfp0WiT2LrXiw6hsZ8%2FmM5dehpru%2FgAohHd4iXHm%2B2gXWlRU6ZT6Q%2FrHm%2B6MUXMIjlHc3ObP2LCWOPcZ%2BilIl1G0l0xt7tdG1wcrI0FUHvhBoxPxiTKXcaW%2FYIpjpRaC3HTxT9DTshIhSrad38pJmNtfeDxElSiY%2BYZHIvD6RFrf1%2BTcnwsC7URMv2CTiYAk%2BHPsZMLuAyNIGOqUB0eOdTlQCONkOtDpS59scs5ZDz0IYbassOsVDGPOwys9uenacZVLntO%2BFZKNAhTZcCeIFFlyo9SSXfmY6p5lRiifx9z808Ik8ADlxxaaEea%2F5p%2FQxRmBcIaVE%2BTid%2FjjeiZ%2FdBqIvzoQynViRrVwkpVQwRxL%2F9VBrmkPGZyLbk0Iw5iH7nnczbMTu5Msi5GoN7hTm4aHmUsRvrniNHThfh8jsrCCw&X-Amz-Signature=de5007ba29b99ba0709b2b18f98e4436010b0494355c311f7c9458dbbccfbc8c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662IJFECLS%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092749Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQDlqkeIgapK4WnRsp8IfKgcVMk0wUSQemszujyya%2B5iYgIhAMFX%2Bchx3LEDVRbaz%2Bu%2F%2BFT02jyP17kYgQvktOM5rZT9KogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyiOs%2FFAOdf2LhlqOQq3AM1XR%2BxjT9PGra3Ut%2BabVp0nKTkEHBHjOQcmDSjxkuRc5IUpS6boIUCgSLW8dxjxBi8ZchAVTUmsIdM0Y1LVqdmMJPXcNDHazlApH7AOxXW9tZcbMl96xxy01KZS7Xp2M49XOMwYj3p2W%2Burkr7udq1elw%2BmNiqhNFUsusxOjh8VNlmIlDBAUqVO22HYBZdmmst1Qy6jLyIninx8jDHjDZut1QfLEmoWjPWpqrKQme8dTBkcARjqt9hsY1AOuAR3pKz%2FaPvbJ9XePqWll00Ca8exhC9Bg%2Bj8wWgfOq1xWjJpC02jPkwpWz8EoPRXr61OKivGmAM6iSIqxvRXBXqm5%2BSa5c1CzzwTBx9QInnmjX4hNa8IGU3MzWcRMYyHG3X7Lk8vyRO%2FBnuoX4oj4HmhOFD40uDuW0GXX5xqiMfJOiLl9GP5XzMg1ELt0Wh7Py40tuMfcTVCSTQ93JcEVF9cpN61TImPlGJ28c3ZgIdDCmxnRdG4CbdIgXrRxb5DyJrktQGaS95O1i%2Bw%2BawcvrZ9bd7880qKQZBOYqOLi%2BNkMVDVCACwe57eCh9oOWuk70VNtnZLRx6brmEavl3c4SVq4O%2FVfxaaki8Csesjm9i%2FSDKL5xSFJx8krKKyuqVzjCk%2FcfSBjqkAVKpm5Y%2FMuulIMzpk4LaNqjlt%2FBXn5ibQXg3W33%2BVMUTs2qs%2FIJdca3l5HcIB7lREyJn7akf3ALGdZHtZyiKg6g3FGIVrEAMOmoM2pbJEL99rZARGYxoF4dW3GRi0QzZRgsj4wlH1kJg0gAkbEQt1RGFCxMZiokj%2FQI%2F23TjHEQIasPXNMOBPNT8j2EW4rifk4pwF54kUKR53n9AmcAnusMdriXD&X-Amz-Signature=114ae2ee978c721448fbd74e61d18b39b4e72068564d0cae0b8426e8e61c3220&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662IJFECLS%2F20260711%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260711T092749Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQDlqkeIgapK4WnRsp8IfKgcVMk0wUSQemszujyya%2B5iYgIhAMFX%2Bchx3LEDVRbaz%2Bu%2F%2BFT02jyP17kYgQvktOM5rZT9KogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyiOs%2FFAOdf2LhlqOQq3AM1XR%2BxjT9PGra3Ut%2BabVp0nKTkEHBHjOQcmDSjxkuRc5IUpS6boIUCgSLW8dxjxBi8ZchAVTUmsIdM0Y1LVqdmMJPXcNDHazlApH7AOxXW9tZcbMl96xxy01KZS7Xp2M49XOMwYj3p2W%2Burkr7udq1elw%2BmNiqhNFUsusxOjh8VNlmIlDBAUqVO22HYBZdmmst1Qy6jLyIninx8jDHjDZut1QfLEmoWjPWpqrKQme8dTBkcARjqt9hsY1AOuAR3pKz%2FaPvbJ9XePqWll00Ca8exhC9Bg%2Bj8wWgfOq1xWjJpC02jPkwpWz8EoPRXr61OKivGmAM6iSIqxvRXBXqm5%2BSa5c1CzzwTBx9QInnmjX4hNa8IGU3MzWcRMYyHG3X7Lk8vyRO%2FBnuoX4oj4HmhOFD40uDuW0GXX5xqiMfJOiLl9GP5XzMg1ELt0Wh7Py40tuMfcTVCSTQ93JcEVF9cpN61TImPlGJ28c3ZgIdDCmxnRdG4CbdIgXrRxb5DyJrktQGaS95O1i%2Bw%2BawcvrZ9bd7880qKQZBOYqOLi%2BNkMVDVCACwe57eCh9oOWuk70VNtnZLRx6brmEavl3c4SVq4O%2FVfxaaki8Csesjm9i%2FSDKL5xSFJx8krKKyuqVzjCk%2FcfSBjqkAVKpm5Y%2FMuulIMzpk4LaNqjlt%2FBXn5ibQXg3W33%2BVMUTs2qs%2FIJdca3l5HcIB7lREyJn7akf3ALGdZHtZyiKg6g3FGIVrEAMOmoM2pbJEL99rZARGYxoF4dW3GRi0QzZRgsj4wlH1kJg0gAkbEQt1RGFCxMZiokj%2FQI%2F23TjHEQIasPXNMOBPNT8j2EW4rifk4pwF54kUKR53n9AmcAnusMdriXD&X-Amz-Signature=8ce42162ad6726661f1cdf64b937e82b7b1ba3fc981165aa31a9e3fa48122b74&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
