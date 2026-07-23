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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663L3C3GC4%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102103Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJHMEUCIEzIuCIBqZc7DIiestWUodGzaOqSrtdF564RAQ7Ym3QCAiEAkiJQbfcibtRM%2F38kqJed6U4ziLzmiBF%2BSTai42mFzZMqiAQI6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHS5%2BL7BIPUF%2Fi5avSrcAy%2B8pVsE81YlEAKtayCF0p%2BmFHJbkvUfzRa%2FaNSaP5jZXzXjtMT1h%2F1Oyku4r8S%2Fbbds9xVX9dRZOb40oavGWOtXRU4juIY0OBWdwOdbfI34C0ElJ0LMGpN1pGUK%2Bq1kxHJB3ao9cih0l%2BfrhX03G77QvSRvAZACVNOauW6u%2BlZy5gJbHlFfD%2FU0phV%2Bp2dF9%2FzL7lV2qBYBOjyuQZAWZh7O61RTr2I2bZFKobu%2FGFaz8MiUGDVKA%2F7xokeupc3u1B%2Bt8%2Bogj63FzDItonu9GFMN8wPJpdqqvcTkHFARTvTxwp4qSPfkp%2FJQE6aujrZncHUWWHwyvaxe6VYaY0WPTEhvaYF%2Fhn9hJuycFgjHcbiZumrWagrL4Po09pmLRktoBPHSvotdFN9eVOAz7PrjsJgJkiJVHgCf9y1MzmJ%2FD9OR3IEO%2BMLhz%2FsHztrlxAFSQ5k0K0%2Fr29SOe2Gb0uMac%2BDYK%2FE%2BkpcbERp9p%2BgDeTYkVrsn%2Fc0eL1zWs9WjmENGWyaWQ5KsXEk1Pr1wPbF2xPl0nagGy15nHsOtVHcfp%2FfGh0czzJqUMqyuOMobXrJPXE67%2Bkow0fK%2Bm85snwibzgmrZK8%2FRulUvXL7iy3m2cGlPH7GZjCCci4OzGIyMJLKh9MGOqUBJdMB9Hjth5wvKX%2FVnOQKo7c2rQEkIJPm%2B1uUYFqQ8mEbZTZPHEjCgC7W8AQn8q4VqqjxzDvHPU%2FFbD94K%2Bk6mkmRhq9FPm3TZkWuqZCVFNfu2DtgEwKCqq3FXlvsOs5zi1E4eRiVsg6VpEVr5w3LyM1rEv9kKC4urpcu5U95cwalZUa5I69ARVnSPYnlDmzLJbviq6GrDGMnreV1dX%2Fi%2BCEWMvdv&X-Amz-Signature=7247a4a626f9d7ce333053f0d532dd62e10e10a2004f70290597e4e436567ddb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663L3C3GC4%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102103Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJHMEUCIEzIuCIBqZc7DIiestWUodGzaOqSrtdF564RAQ7Ym3QCAiEAkiJQbfcibtRM%2F38kqJed6U4ziLzmiBF%2BSTai42mFzZMqiAQI6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHS5%2BL7BIPUF%2Fi5avSrcAy%2B8pVsE81YlEAKtayCF0p%2BmFHJbkvUfzRa%2FaNSaP5jZXzXjtMT1h%2F1Oyku4r8S%2Fbbds9xVX9dRZOb40oavGWOtXRU4juIY0OBWdwOdbfI34C0ElJ0LMGpN1pGUK%2Bq1kxHJB3ao9cih0l%2BfrhX03G77QvSRvAZACVNOauW6u%2BlZy5gJbHlFfD%2FU0phV%2Bp2dF9%2FzL7lV2qBYBOjyuQZAWZh7O61RTr2I2bZFKobu%2FGFaz8MiUGDVKA%2F7xokeupc3u1B%2Bt8%2Bogj63FzDItonu9GFMN8wPJpdqqvcTkHFARTvTxwp4qSPfkp%2FJQE6aujrZncHUWWHwyvaxe6VYaY0WPTEhvaYF%2Fhn9hJuycFgjHcbiZumrWagrL4Po09pmLRktoBPHSvotdFN9eVOAz7PrjsJgJkiJVHgCf9y1MzmJ%2FD9OR3IEO%2BMLhz%2FsHztrlxAFSQ5k0K0%2Fr29SOe2Gb0uMac%2BDYK%2FE%2BkpcbERp9p%2BgDeTYkVrsn%2Fc0eL1zWs9WjmENGWyaWQ5KsXEk1Pr1wPbF2xPl0nagGy15nHsOtVHcfp%2FfGh0czzJqUMqyuOMobXrJPXE67%2Bkow0fK%2Bm85snwibzgmrZK8%2FRulUvXL7iy3m2cGlPH7GZjCCci4OzGIyMJLKh9MGOqUBJdMB9Hjth5wvKX%2FVnOQKo7c2rQEkIJPm%2B1uUYFqQ8mEbZTZPHEjCgC7W8AQn8q4VqqjxzDvHPU%2FFbD94K%2Bk6mkmRhq9FPm3TZkWuqZCVFNfu2DtgEwKCqq3FXlvsOs5zi1E4eRiVsg6VpEVr5w3LyM1rEv9kKC4urpcu5U95cwalZUa5I69ARVnSPYnlDmzLJbviq6GrDGMnreV1dX%2Fi%2BCEWMvdv&X-Amz-Signature=66e8fa196335f7405a6fbc049ae365af211849e6f70306349aab73087d134cd7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663L3C3GC4%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102103Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJHMEUCIEzIuCIBqZc7DIiestWUodGzaOqSrtdF564RAQ7Ym3QCAiEAkiJQbfcibtRM%2F38kqJed6U4ziLzmiBF%2BSTai42mFzZMqiAQI6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHS5%2BL7BIPUF%2Fi5avSrcAy%2B8pVsE81YlEAKtayCF0p%2BmFHJbkvUfzRa%2FaNSaP5jZXzXjtMT1h%2F1Oyku4r8S%2Fbbds9xVX9dRZOb40oavGWOtXRU4juIY0OBWdwOdbfI34C0ElJ0LMGpN1pGUK%2Bq1kxHJB3ao9cih0l%2BfrhX03G77QvSRvAZACVNOauW6u%2BlZy5gJbHlFfD%2FU0phV%2Bp2dF9%2FzL7lV2qBYBOjyuQZAWZh7O61RTr2I2bZFKobu%2FGFaz8MiUGDVKA%2F7xokeupc3u1B%2Bt8%2Bogj63FzDItonu9GFMN8wPJpdqqvcTkHFARTvTxwp4qSPfkp%2FJQE6aujrZncHUWWHwyvaxe6VYaY0WPTEhvaYF%2Fhn9hJuycFgjHcbiZumrWagrL4Po09pmLRktoBPHSvotdFN9eVOAz7PrjsJgJkiJVHgCf9y1MzmJ%2FD9OR3IEO%2BMLhz%2FsHztrlxAFSQ5k0K0%2Fr29SOe2Gb0uMac%2BDYK%2FE%2BkpcbERp9p%2BgDeTYkVrsn%2Fc0eL1zWs9WjmENGWyaWQ5KsXEk1Pr1wPbF2xPl0nagGy15nHsOtVHcfp%2FfGh0czzJqUMqyuOMobXrJPXE67%2Bkow0fK%2Bm85snwibzgmrZK8%2FRulUvXL7iy3m2cGlPH7GZjCCci4OzGIyMJLKh9MGOqUBJdMB9Hjth5wvKX%2FVnOQKo7c2rQEkIJPm%2B1uUYFqQ8mEbZTZPHEjCgC7W8AQn8q4VqqjxzDvHPU%2FFbD94K%2Bk6mkmRhq9FPm3TZkWuqZCVFNfu2DtgEwKCqq3FXlvsOs5zi1E4eRiVsg6VpEVr5w3LyM1rEv9kKC4urpcu5U95cwalZUa5I69ARVnSPYnlDmzLJbviq6GrDGMnreV1dX%2Fi%2BCEWMvdv&X-Amz-Signature=2ab6c05d6eeb40cb3e4f5debe81cceff6b7c59e62608dc370093f2f67a257cd9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMWBD6VK%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102104Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJIMEYCIQCWBVqRHJUyd8eyr7bI1mI2FODmZ2hnvyEyznBGCc73TwIhALtEGXLItjgZsGHLqLsqZF4ZKxrDPGvKWHr0jZltma0XKogECOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzA67tYV%2BCz%2BMMU7HMq3AOj9pE8nQZU08i%2F0UrGJYecvMoeTD2twUvVBTUsgDAqn4Vjd42VxPjnBSq13tWW2C9SijlQVVH%2BbIexc0IUI5cUntlkdVy65AnT95GhZ62gMsnxFBEpSo6GZ1zoD6YHVXSc1f8%2F6S2uvnceCYVOvPROKfOPogaZuD%2FZ2YXi0ZL%2B57VLehM6QySSMVy27760nnY8p%2FLMj%2BeupsPM1npT1mtoa%2FqrnH5SpDfM80XI4EQlhQIMVJk%2BUEecGbkJz%2FqBnB6lGUnWdBc9JCNhOPeB8LrPsCFXAnYM61gVwUe47JQKshKUQczNiVZnfw0p2TOzmo27HxqwPYCF019LrFjimJDnYH8ggGTxK9GGt9Qux%2Fq9MhViWKvVz83EpJipBEpQPqlCSDEMEi4RO6DWRZNpyG40MjbAyb5Zhd%2Bw%2B5ypHsOELId2sbr42fpOX3be91bZzwNPktQO4%2FPcldsp73k0MDXxeDlcjQ08nwtJyThtp8Pm0SSgzQQtqH0Lrw2SiKxc0VqeWULsfCQ0diQgz%2F5i9R4eQnizBHJi3cPKVAb8z9jm9%2BltjWHxKcyIzdUmBr%2FltSnjtKfPQZV3TL2dN765d3%2FaEClM9Gdh7tbkQRzlOjhLV4SsMrXc2KTkrfl6azCpyIfTBjqkAVDYVgl4rxXEqWVQZUFUlCQb%2B%2BQonhvlJTZTnd86gO1hKOD2bddAiczczHSaUZ2NqHQAXLTJRGh6xx54nwIysMOOg5b7k2rQI3NnOxxNEeoacEDSfEfnldsdVdmZV82vn%2Bo0VIA6mXZmFcdApzEm0r0vSCOl6NszQF%2FkASq8%2FuAvrc%2FDwhKJQT8AXTrptBuoVEak%2FU1NVWntKbR040G3cpU8F6i4&X-Amz-Signature=e37f76db5055e2691d740bd68c7cee715cfc241fa25c93eba81c988c50116deb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMWBD6VK%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102104Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJIMEYCIQCWBVqRHJUyd8eyr7bI1mI2FODmZ2hnvyEyznBGCc73TwIhALtEGXLItjgZsGHLqLsqZF4ZKxrDPGvKWHr0jZltma0XKogECOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzA67tYV%2BCz%2BMMU7HMq3AOj9pE8nQZU08i%2F0UrGJYecvMoeTD2twUvVBTUsgDAqn4Vjd42VxPjnBSq13tWW2C9SijlQVVH%2BbIexc0IUI5cUntlkdVy65AnT95GhZ62gMsnxFBEpSo6GZ1zoD6YHVXSc1f8%2F6S2uvnceCYVOvPROKfOPogaZuD%2FZ2YXi0ZL%2B57VLehM6QySSMVy27760nnY8p%2FLMj%2BeupsPM1npT1mtoa%2FqrnH5SpDfM80XI4EQlhQIMVJk%2BUEecGbkJz%2FqBnB6lGUnWdBc9JCNhOPeB8LrPsCFXAnYM61gVwUe47JQKshKUQczNiVZnfw0p2TOzmo27HxqwPYCF019LrFjimJDnYH8ggGTxK9GGt9Qux%2Fq9MhViWKvVz83EpJipBEpQPqlCSDEMEi4RO6DWRZNpyG40MjbAyb5Zhd%2Bw%2B5ypHsOELId2sbr42fpOX3be91bZzwNPktQO4%2FPcldsp73k0MDXxeDlcjQ08nwtJyThtp8Pm0SSgzQQtqH0Lrw2SiKxc0VqeWULsfCQ0diQgz%2F5i9R4eQnizBHJi3cPKVAb8z9jm9%2BltjWHxKcyIzdUmBr%2FltSnjtKfPQZV3TL2dN765d3%2FaEClM9Gdh7tbkQRzlOjhLV4SsMrXc2KTkrfl6azCpyIfTBjqkAVDYVgl4rxXEqWVQZUFUlCQb%2B%2BQonhvlJTZTnd86gO1hKOD2bddAiczczHSaUZ2NqHQAXLTJRGh6xx54nwIysMOOg5b7k2rQI3NnOxxNEeoacEDSfEfnldsdVdmZV82vn%2Bo0VIA6mXZmFcdApzEm0r0vSCOl6NszQF%2FkASq8%2FuAvrc%2FDwhKJQT8AXTrptBuoVEak%2FU1NVWntKbR040G3cpU8F6i4&X-Amz-Signature=0a545ec498910c5635fc17f3c516339e8b8249dcaf34a5d5ad859d2a13777d94&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMWBD6VK%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102104Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJIMEYCIQCWBVqRHJUyd8eyr7bI1mI2FODmZ2hnvyEyznBGCc73TwIhALtEGXLItjgZsGHLqLsqZF4ZKxrDPGvKWHr0jZltma0XKogECOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzA67tYV%2BCz%2BMMU7HMq3AOj9pE8nQZU08i%2F0UrGJYecvMoeTD2twUvVBTUsgDAqn4Vjd42VxPjnBSq13tWW2C9SijlQVVH%2BbIexc0IUI5cUntlkdVy65AnT95GhZ62gMsnxFBEpSo6GZ1zoD6YHVXSc1f8%2F6S2uvnceCYVOvPROKfOPogaZuD%2FZ2YXi0ZL%2B57VLehM6QySSMVy27760nnY8p%2FLMj%2BeupsPM1npT1mtoa%2FqrnH5SpDfM80XI4EQlhQIMVJk%2BUEecGbkJz%2FqBnB6lGUnWdBc9JCNhOPeB8LrPsCFXAnYM61gVwUe47JQKshKUQczNiVZnfw0p2TOzmo27HxqwPYCF019LrFjimJDnYH8ggGTxK9GGt9Qux%2Fq9MhViWKvVz83EpJipBEpQPqlCSDEMEi4RO6DWRZNpyG40MjbAyb5Zhd%2Bw%2B5ypHsOELId2sbr42fpOX3be91bZzwNPktQO4%2FPcldsp73k0MDXxeDlcjQ08nwtJyThtp8Pm0SSgzQQtqH0Lrw2SiKxc0VqeWULsfCQ0diQgz%2F5i9R4eQnizBHJi3cPKVAb8z9jm9%2BltjWHxKcyIzdUmBr%2FltSnjtKfPQZV3TL2dN765d3%2FaEClM9Gdh7tbkQRzlOjhLV4SsMrXc2KTkrfl6azCpyIfTBjqkAVDYVgl4rxXEqWVQZUFUlCQb%2B%2BQonhvlJTZTnd86gO1hKOD2bddAiczczHSaUZ2NqHQAXLTJRGh6xx54nwIysMOOg5b7k2rQI3NnOxxNEeoacEDSfEfnldsdVdmZV82vn%2Bo0VIA6mXZmFcdApzEm0r0vSCOl6NszQF%2FkASq8%2FuAvrc%2FDwhKJQT8AXTrptBuoVEak%2FU1NVWntKbR040G3cpU8F6i4&X-Amz-Signature=5ee4c013627f92445852d570e6baa78b6182b36139e384b4e35e5578a15b7cd4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZMWBD6VK%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102104Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJIMEYCIQCWBVqRHJUyd8eyr7bI1mI2FODmZ2hnvyEyznBGCc73TwIhALtEGXLItjgZsGHLqLsqZF4ZKxrDPGvKWHr0jZltma0XKogECOv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzA67tYV%2BCz%2BMMU7HMq3AOj9pE8nQZU08i%2F0UrGJYecvMoeTD2twUvVBTUsgDAqn4Vjd42VxPjnBSq13tWW2C9SijlQVVH%2BbIexc0IUI5cUntlkdVy65AnT95GhZ62gMsnxFBEpSo6GZ1zoD6YHVXSc1f8%2F6S2uvnceCYVOvPROKfOPogaZuD%2FZ2YXi0ZL%2B57VLehM6QySSMVy27760nnY8p%2FLMj%2BeupsPM1npT1mtoa%2FqrnH5SpDfM80XI4EQlhQIMVJk%2BUEecGbkJz%2FqBnB6lGUnWdBc9JCNhOPeB8LrPsCFXAnYM61gVwUe47JQKshKUQczNiVZnfw0p2TOzmo27HxqwPYCF019LrFjimJDnYH8ggGTxK9GGt9Qux%2Fq9MhViWKvVz83EpJipBEpQPqlCSDEMEi4RO6DWRZNpyG40MjbAyb5Zhd%2Bw%2B5ypHsOELId2sbr42fpOX3be91bZzwNPktQO4%2FPcldsp73k0MDXxeDlcjQ08nwtJyThtp8Pm0SSgzQQtqH0Lrw2SiKxc0VqeWULsfCQ0diQgz%2F5i9R4eQnizBHJi3cPKVAb8z9jm9%2BltjWHxKcyIzdUmBr%2FltSnjtKfPQZV3TL2dN765d3%2FaEClM9Gdh7tbkQRzlOjhLV4SsMrXc2KTkrfl6azCpyIfTBjqkAVDYVgl4rxXEqWVQZUFUlCQb%2B%2BQonhvlJTZTnd86gO1hKOD2bddAiczczHSaUZ2NqHQAXLTJRGh6xx54nwIysMOOg5b7k2rQI3NnOxxNEeoacEDSfEfnldsdVdmZV82vn%2Bo0VIA6mXZmFcdApzEm0r0vSCOl6NszQF%2FkASq8%2FuAvrc%2FDwhKJQT8AXTrptBuoVEak%2FU1NVWntKbR040G3cpU8F6i4&X-Amz-Signature=b0d5acc8e5fe27160628449a484b393b93697cb7ebc647be5de897aa1807cca0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QBPTMY3U%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102104Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJHMEUCIQD65AsEx5GSofb4YSGb6GTrqanTycsx9VPcD1Wo9KJaMAIgQN%2BhrkYOkbXrc8r7GUIymxZswGBDrkLRy%2Fwd%2FoY%2Boj4qiAQI6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAm8aOT0mGnLl7N8qircA6D1Khz4yl2XXhi1FJ4JxWcmSe%2BPvkj2tqUM9QKNwqQIob8VdrtAXNOBhaNPG2%2BfK98i1N%2F%2F0OjPNKks9bZNhNEsoNxY8uByRUz0sstXcEUHEAtaFN47dTgMn%2FGEi7avQFA1rxa4y%2FEW1BFomNizTUMMq5RkitvaBGgKGPdapV%2BeUA2GhaVX37zmv%2B0phY2tGV4zmm2yqJmtR1xIvsSmpgXRviR4Z3%2FDBgx07V%2BZRP5C3UILqQ7s1UDBx%2Ffu2AhZj%2FdTvO2iMDIq0BAm6b4w3qY6PHjSw%2F1kMuAoMuK9re%2BqO3qPwB0D6OGEBi8QA1vCr9n2LpjcY3pnNmALgDb8%2F3IEIZovHeAAf3uALQuYPEU6q3Ok0FNEgKvuhyL8ztNuYwDmodexKxCO%2BE5i3YcxwtmFhHnqLcHbTfkTM%2FOlQQpU27gHxRvt2adVA8uAEFD3zJHBJgPzcZ2bFce6jl1T9XaaMAxynaj7iA%2F71Ki98nsBSExTi1EEAJur4%2FkDT%2BRne%2Fzg8VYTvUx%2BEs0%2BSojdpZShpc5Cek5kw%2FK0Bx2nnJvd6kFH4BhIAkW%2BdUWMD4yHEJfXWebDeRCyXenSD4e0E9gbx6kjjzfO5JwetjXyaKdp3N501qOO5wv9CMd0MMTIh9MGOqUBM6gI9g2YiYhHkVegSMll%2FJoZf1I09k%2BmdwP05%2F4Qxj91FuOrjdK7wz5Ms%2Fp8t8k%2BIZoFue3I3fqaf1NRETR3E15WerUQZCPB33sZYpUOLq3zVWX5CrvG1pdtEPssfaKPLKjBecc358pSNrzn8BXhZ6Uzp3aHuLvf2XnyKWYHci%2FVynfJQIIeSqcdzrxmH2OyTGRvCkgyMCEwyENWvdCG95edowqQ&X-Amz-Signature=cbb453f95a90cc41e101e9389f755a7c96f343c7e665d510a4d71ee33d056625&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VJNWE3N%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102105Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJHMEUCIDj4wSHXeNkteKbUo7z0YmyH0xART1pnN43KyOCWyA7iAiEAlApjn%2BNQMU%2BFuCZ%2BvOPvybVytczrEMSYiXaOiiXZe%2BYqiAQI6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAjfMxx0BoK%2FL6Q9dCrcA%2BaZaDyrCmRPhCXfGbWrU0JaviQLWIpInQD%2B2cD%2BGFYF8sIOO48x%2BBibTVoijJbUKhPcX2pYFcs6CeBukHnQH%2FS7wJebIjYcAIudwH2dUR2136rYzqbl%2Bxki%2B8y4FWL5JUBWDaUNonl4UXR8AJrjk6CZ9rvBOtxb9TINzZryDZx%2B9pOeE%2F9UAHuOgWhvs2UxUsYuT8Q%2F%2FfOzhLZzOj4Y5ejcCBwk7Tvn%2Fq05KPtYYco4JWUxeQ25Ch7dsdpNPEYjYQyhcmljK8bAgQRYK4h7uU4EXB6%2BIMTNOuB11N%2FDVXTDre9WWxvf7nfHh3Cmu8beS1HWgJlFiy3bqsmI5SNo7EoZXmfEoBV9oX%2F9NVp4i82IWzyfjseg5KzN81Srpw4MzVeAPirkDbc1%2F3QMYYCbB4%2B9apoJk%2FzoEUwpQH54665DYcFUIGDj%2BCahGItVkwXCL5bbvX2guPTYSNaLPmxjY9HFFpxWB%2FCf9YpngoEAHSSxmLB%2Fw0v3lujLU1Ph4cNdvp4TBaPmVCho%2BsLm5Mp0yslSHI6pLqRTCWNjqMhhNPxpIp1weRwYjFoOxpTmVkNRXYQ48bOMR8y4o2SLf31drkHO3TpijgWccgD9iAUQTjOWipKHqnyF%2FEXXUjg9ML%2FIh9MGOqUBzo8H4bjeZMWCo0769aWQLjREn5ZU7GArFZCPMAOBAlrHoBe2rqHLKp9H2DpW%2Fs3%2Bpuir%2BeEh0vMLo%2BSyf1Q0tZnUgamaMj8ijt0BRlsc%2Bjb%2BM%2FLLg1%2BKLYotLTJhJBg8C5WFPXyapRUrcm%2BExU1NFMZ%2BF%2FEUoCzCXWS8p2ODuV2Vo94bJknoWBvfWyN6LYary8tr0RbAUEC28jTAkdNE8btLsV%2Br&X-Amz-Signature=ab103941aea38fca58518e08142bec0376da0c039cab3a767e29abc844197a10&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667VJNWE3N%2F20260723%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260723T102105Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECIaCXVzLXdlc3QtMiJHMEUCIDj4wSHXeNkteKbUo7z0YmyH0xART1pnN43KyOCWyA7iAiEAlApjn%2BNQMU%2BFuCZ%2BvOPvybVytczrEMSYiXaOiiXZe%2BYqiAQI6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAjfMxx0BoK%2FL6Q9dCrcA%2BaZaDyrCmRPhCXfGbWrU0JaviQLWIpInQD%2B2cD%2BGFYF8sIOO48x%2BBibTVoijJbUKhPcX2pYFcs6CeBukHnQH%2FS7wJebIjYcAIudwH2dUR2136rYzqbl%2Bxki%2B8y4FWL5JUBWDaUNonl4UXR8AJrjk6CZ9rvBOtxb9TINzZryDZx%2B9pOeE%2F9UAHuOgWhvs2UxUsYuT8Q%2F%2FfOzhLZzOj4Y5ejcCBwk7Tvn%2Fq05KPtYYco4JWUxeQ25Ch7dsdpNPEYjYQyhcmljK8bAgQRYK4h7uU4EXB6%2BIMTNOuB11N%2FDVXTDre9WWxvf7nfHh3Cmu8beS1HWgJlFiy3bqsmI5SNo7EoZXmfEoBV9oX%2F9NVp4i82IWzyfjseg5KzN81Srpw4MzVeAPirkDbc1%2F3QMYYCbB4%2B9apoJk%2FzoEUwpQH54665DYcFUIGDj%2BCahGItVkwXCL5bbvX2guPTYSNaLPmxjY9HFFpxWB%2FCf9YpngoEAHSSxmLB%2Fw0v3lujLU1Ph4cNdvp4TBaPmVCho%2BsLm5Mp0yslSHI6pLqRTCWNjqMhhNPxpIp1weRwYjFoOxpTmVkNRXYQ48bOMR8y4o2SLf31drkHO3TpijgWccgD9iAUQTjOWipKHqnyF%2FEXXUjg9ML%2FIh9MGOqUBzo8H4bjeZMWCo0769aWQLjREn5ZU7GArFZCPMAOBAlrHoBe2rqHLKp9H2DpW%2Fs3%2Bpuir%2BeEh0vMLo%2BSyf1Q0tZnUgamaMj8ijt0BRlsc%2Bjb%2BM%2FLLg1%2BKLYotLTJhJBg8C5WFPXyapRUrcm%2BExU1NFMZ%2BF%2FEUoCzCXWS8p2ODuV2Vo94bJknoWBvfWyN6LYary8tr0RbAUEC28jTAkdNE8btLsV%2Br&X-Amz-Signature=6383ccdc2da5f24ddc6654d440b064065611291ab14ec591278d75158b139068&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
