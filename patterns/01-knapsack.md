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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQGS5Z33%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJGMEQCIHWPfG1SHbwOrYlGDXWJRV7F5rc6pin8m1HMBlAbESWGAiBz%2F6X48oSJSWhu86sKMOSa367V9Ejyxdphl2JZaUf1jiqIBAjR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMiLpDNOeLJOa1FVXSKtwDNj5RfvVejYE5grLEkpg%2BFJviTozwEdvGyUL87QmiBNF%2FO1So6PkPRQWFTvRCppMHBan%2BdDssFzMN0E3nZvqJ3z3S0zPGTmi7fGoPkBr7zSLX7iKEmWKPh6sNqZADvREmK4muXEt%2B1vvi4bevqf6YXkpnl1CpZt%2Fme3YxJ31KGyeFhaA8RavNXP%2F4vZuKOQ2XsbxgmRF0yNUwAtbTiDcRkj5bURbsJpZiHxk0QC6LYWmIh9z3ZZ%2FlMdM%2B1pLZjEn9M9i3nVkF2pRbkQOhpSfNxcdr0sMDiZtAkGt3kep9CemQ2qYkfVwc7IaWkeCoXh6ukWVnQrg5UDr67hZfceM6%2FVKvuvT6uRkoAQom3UzSIljRgYZdX15mG7Z9pERIkPiSWsOFXT0yF9RgAPKSjvmEZILXpNRBBIGbAzethxGdD9YJNCOEIsLPMCdZsEQJTxMzoejOjmuemKBWDX335U%2BZJufGp4er2rSizuPJyaghx5%2FoiopNK%2FqwkpgI3Wa79brGpvvMZZkU1wXh7Zlfyae8IWdy9kyTV8WmOxrm%2BfRo79lX9Brv8xDeYnaMAwsWUIaSanK5HRn3z1hU7lv5mPLAeeW1x1EUYe8YEWKwUV5AE0D2hpKH4oHgjH5ZB%2FUwtIe2zAY6pgFbOqzxVFy2DoBT72CyWn4Gnay5e8xPsv7eeopurG4ljs07aT8tzILffSDeErwNOh1OnfWpLZ6wB6x6apfeCCyl0Is1xyDk%2FzYZwEf9g20B6VzQKf6YlyGoFEQX4uP0ENHmnHniQrDIVtw%2B%2BH3luKGMECE3nnDRWKz9mu8mvZ7MfTUFuu8yHQy3BrhNJxAuzekoujCyIHjr08m8drTtXhknSYCwTBHV&X-Amz-Signature=70d2ac574c7928f21286ae54f6b1406a9cb600f5759903e6bb5af6db7e1cff4e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQGS5Z33%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJGMEQCIHWPfG1SHbwOrYlGDXWJRV7F5rc6pin8m1HMBlAbESWGAiBz%2F6X48oSJSWhu86sKMOSa367V9Ejyxdphl2JZaUf1jiqIBAjR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMiLpDNOeLJOa1FVXSKtwDNj5RfvVejYE5grLEkpg%2BFJviTozwEdvGyUL87QmiBNF%2FO1So6PkPRQWFTvRCppMHBan%2BdDssFzMN0E3nZvqJ3z3S0zPGTmi7fGoPkBr7zSLX7iKEmWKPh6sNqZADvREmK4muXEt%2B1vvi4bevqf6YXkpnl1CpZt%2Fme3YxJ31KGyeFhaA8RavNXP%2F4vZuKOQ2XsbxgmRF0yNUwAtbTiDcRkj5bURbsJpZiHxk0QC6LYWmIh9z3ZZ%2FlMdM%2B1pLZjEn9M9i3nVkF2pRbkQOhpSfNxcdr0sMDiZtAkGt3kep9CemQ2qYkfVwc7IaWkeCoXh6ukWVnQrg5UDr67hZfceM6%2FVKvuvT6uRkoAQom3UzSIljRgYZdX15mG7Z9pERIkPiSWsOFXT0yF9RgAPKSjvmEZILXpNRBBIGbAzethxGdD9YJNCOEIsLPMCdZsEQJTxMzoejOjmuemKBWDX335U%2BZJufGp4er2rSizuPJyaghx5%2FoiopNK%2FqwkpgI3Wa79brGpvvMZZkU1wXh7Zlfyae8IWdy9kyTV8WmOxrm%2BfRo79lX9Brv8xDeYnaMAwsWUIaSanK5HRn3z1hU7lv5mPLAeeW1x1EUYe8YEWKwUV5AE0D2hpKH4oHgjH5ZB%2FUwtIe2zAY6pgFbOqzxVFy2DoBT72CyWn4Gnay5e8xPsv7eeopurG4ljs07aT8tzILffSDeErwNOh1OnfWpLZ6wB6x6apfeCCyl0Is1xyDk%2FzYZwEf9g20B6VzQKf6YlyGoFEQX4uP0ENHmnHniQrDIVtw%2B%2BH3luKGMECE3nnDRWKz9mu8mvZ7MfTUFuu8yHQy3BrhNJxAuzekoujCyIHjr08m8drTtXhknSYCwTBHV&X-Amz-Signature=14065d6a3a0f447d26e8355ff1b8eb78226114808a4ed2ba15fd38b4343e491b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQGS5Z33%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJGMEQCIHWPfG1SHbwOrYlGDXWJRV7F5rc6pin8m1HMBlAbESWGAiBz%2F6X48oSJSWhu86sKMOSa367V9Ejyxdphl2JZaUf1jiqIBAjR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMiLpDNOeLJOa1FVXSKtwDNj5RfvVejYE5grLEkpg%2BFJviTozwEdvGyUL87QmiBNF%2FO1So6PkPRQWFTvRCppMHBan%2BdDssFzMN0E3nZvqJ3z3S0zPGTmi7fGoPkBr7zSLX7iKEmWKPh6sNqZADvREmK4muXEt%2B1vvi4bevqf6YXkpnl1CpZt%2Fme3YxJ31KGyeFhaA8RavNXP%2F4vZuKOQ2XsbxgmRF0yNUwAtbTiDcRkj5bURbsJpZiHxk0QC6LYWmIh9z3ZZ%2FlMdM%2B1pLZjEn9M9i3nVkF2pRbkQOhpSfNxcdr0sMDiZtAkGt3kep9CemQ2qYkfVwc7IaWkeCoXh6ukWVnQrg5UDr67hZfceM6%2FVKvuvT6uRkoAQom3UzSIljRgYZdX15mG7Z9pERIkPiSWsOFXT0yF9RgAPKSjvmEZILXpNRBBIGbAzethxGdD9YJNCOEIsLPMCdZsEQJTxMzoejOjmuemKBWDX335U%2BZJufGp4er2rSizuPJyaghx5%2FoiopNK%2FqwkpgI3Wa79brGpvvMZZkU1wXh7Zlfyae8IWdy9kyTV8WmOxrm%2BfRo79lX9Brv8xDeYnaMAwsWUIaSanK5HRn3z1hU7lv5mPLAeeW1x1EUYe8YEWKwUV5AE0D2hpKH4oHgjH5ZB%2FUwtIe2zAY6pgFbOqzxVFy2DoBT72CyWn4Gnay5e8xPsv7eeopurG4ljs07aT8tzILffSDeErwNOh1OnfWpLZ6wB6x6apfeCCyl0Is1xyDk%2FzYZwEf9g20B6VzQKf6YlyGoFEQX4uP0ENHmnHniQrDIVtw%2B%2BH3luKGMECE3nnDRWKz9mu8mvZ7MfTUFuu8yHQy3BrhNJxAuzekoujCyIHjr08m8drTtXhknSYCwTBHV&X-Amz-Signature=2c8d444a1ee00b33ca918e257aea0a7e5871bed4da9f0af8c8f06bfc01436ce5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664YS2WKVG%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJHMEUCIQCskrPiJ58rEv7vqeSoPnyo%2F60XSwFOiLlXqic5xCNvrwIgQp76LM5PqHs5zDskgQP%2Bo7ywjCX1r6qFnWq7kULli0QqiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJUNBpVImOxsbYyICircA6GrYmmOLF8lh%2FhLawuA9cWSspknGXBi1%2FnIX2TnrNS7qxLSfYnNWx%2Fr%2B%2BRDAN71z3hnTKVzYK39lOpAhQf%2BcbSmi8RChNieQGVJjalGmRR%2FGcyUQC85SRsznEcSXVRbnjVVxKF1sD5HWwzSsolTxvrRPQhSGQLaZ6yOJvwR0uEFO4X53%2FuKmEDzLZCuCMhN2ZS8R%2FdIYejLlL%2FGUuUobyEcYLFUgZEEo9QEeKjEMxNWzNxLf%2F6uQeI0fcAPeqPLMNeTBP%2FOWgPd%2BexbCzLDsRrA2aqs8ecwPO56I4cCXnVVlTrEV9VmNPO3h8lXosGU0TlyL1eVfTPKmcBpOLBUc2YEK%2FSrJsTJ1xp5r7ay0NVSkXy%2BipIeIemPRM47eeljjwXCXyGAiFUE1PhYs6mRb7xt17LPYySTbEmnp%2F2MCKlvW5Z8iZX60PJaehGR8C%2BOQ8pNuR5Qc584VXi1GBMqlS1VvTR9NeilmveIAgt5M7Qh%2B8ggGXn%2F9oKyb0Tf%2FRt56z4usdTOpVngQwBnd1tWROWHQ3gud1LTGAeN6oG2imJ2pl%2BfJNHSiSePysGJSr3s2IhO6UqhRU71BIu5h534IRiVjsp0so79hh0vthaZABodXnh%2B8DRGPh1xM5eFMJmItswGOqUBh9IxfdfyEYlnUEVa%2FfS%2FG21w7ZvyO2nJ%2BCXrfx7LMUB7jMcStTxHGuO%2F99VpYXpJVMy4klHv1kHXFJgF4XNG1rGqpTlp4lDdqm3DyXJTHOY7HjarUl%2FDUetchokE6yDZyGFPGDc15RJH1LKbKxn01%2B9lHsS08ZRJC19sjMpdCOaveD3770bcs%2FsBSS5npWin6JWQZuRMN2%2FUd2U6OnLKz8k76xHE&X-Amz-Signature=31a95f50ae9b3eaae797eb11eab0dd669afe96340a0aadfcca5d7e2503bb0ac4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664YS2WKVG%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJHMEUCIQCskrPiJ58rEv7vqeSoPnyo%2F60XSwFOiLlXqic5xCNvrwIgQp76LM5PqHs5zDskgQP%2Bo7ywjCX1r6qFnWq7kULli0QqiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJUNBpVImOxsbYyICircA6GrYmmOLF8lh%2FhLawuA9cWSspknGXBi1%2FnIX2TnrNS7qxLSfYnNWx%2Fr%2B%2BRDAN71z3hnTKVzYK39lOpAhQf%2BcbSmi8RChNieQGVJjalGmRR%2FGcyUQC85SRsznEcSXVRbnjVVxKF1sD5HWwzSsolTxvrRPQhSGQLaZ6yOJvwR0uEFO4X53%2FuKmEDzLZCuCMhN2ZS8R%2FdIYejLlL%2FGUuUobyEcYLFUgZEEo9QEeKjEMxNWzNxLf%2F6uQeI0fcAPeqPLMNeTBP%2FOWgPd%2BexbCzLDsRrA2aqs8ecwPO56I4cCXnVVlTrEV9VmNPO3h8lXosGU0TlyL1eVfTPKmcBpOLBUc2YEK%2FSrJsTJ1xp5r7ay0NVSkXy%2BipIeIemPRM47eeljjwXCXyGAiFUE1PhYs6mRb7xt17LPYySTbEmnp%2F2MCKlvW5Z8iZX60PJaehGR8C%2BOQ8pNuR5Qc584VXi1GBMqlS1VvTR9NeilmveIAgt5M7Qh%2B8ggGXn%2F9oKyb0Tf%2FRt56z4usdTOpVngQwBnd1tWROWHQ3gud1LTGAeN6oG2imJ2pl%2BfJNHSiSePysGJSr3s2IhO6UqhRU71BIu5h534IRiVjsp0so79hh0vthaZABodXnh%2B8DRGPh1xM5eFMJmItswGOqUBh9IxfdfyEYlnUEVa%2FfS%2FG21w7ZvyO2nJ%2BCXrfx7LMUB7jMcStTxHGuO%2F99VpYXpJVMy4klHv1kHXFJgF4XNG1rGqpTlp4lDdqm3DyXJTHOY7HjarUl%2FDUetchokE6yDZyGFPGDc15RJH1LKbKxn01%2B9lHsS08ZRJC19sjMpdCOaveD3770bcs%2FsBSS5npWin6JWQZuRMN2%2FUd2U6OnLKz8k76xHE&X-Amz-Signature=ad07a45be93868430d17cb0d2d2ffc5dd5d209058d37882635e1dd5d322bdf8b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664YS2WKVG%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJHMEUCIQCskrPiJ58rEv7vqeSoPnyo%2F60XSwFOiLlXqic5xCNvrwIgQp76LM5PqHs5zDskgQP%2Bo7ywjCX1r6qFnWq7kULli0QqiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJUNBpVImOxsbYyICircA6GrYmmOLF8lh%2FhLawuA9cWSspknGXBi1%2FnIX2TnrNS7qxLSfYnNWx%2Fr%2B%2BRDAN71z3hnTKVzYK39lOpAhQf%2BcbSmi8RChNieQGVJjalGmRR%2FGcyUQC85SRsznEcSXVRbnjVVxKF1sD5HWwzSsolTxvrRPQhSGQLaZ6yOJvwR0uEFO4X53%2FuKmEDzLZCuCMhN2ZS8R%2FdIYejLlL%2FGUuUobyEcYLFUgZEEo9QEeKjEMxNWzNxLf%2F6uQeI0fcAPeqPLMNeTBP%2FOWgPd%2BexbCzLDsRrA2aqs8ecwPO56I4cCXnVVlTrEV9VmNPO3h8lXosGU0TlyL1eVfTPKmcBpOLBUc2YEK%2FSrJsTJ1xp5r7ay0NVSkXy%2BipIeIemPRM47eeljjwXCXyGAiFUE1PhYs6mRb7xt17LPYySTbEmnp%2F2MCKlvW5Z8iZX60PJaehGR8C%2BOQ8pNuR5Qc584VXi1GBMqlS1VvTR9NeilmveIAgt5M7Qh%2B8ggGXn%2F9oKyb0Tf%2FRt56z4usdTOpVngQwBnd1tWROWHQ3gud1LTGAeN6oG2imJ2pl%2BfJNHSiSePysGJSr3s2IhO6UqhRU71BIu5h534IRiVjsp0so79hh0vthaZABodXnh%2B8DRGPh1xM5eFMJmItswGOqUBh9IxfdfyEYlnUEVa%2FfS%2FG21w7ZvyO2nJ%2BCXrfx7LMUB7jMcStTxHGuO%2F99VpYXpJVMy4klHv1kHXFJgF4XNG1rGqpTlp4lDdqm3DyXJTHOY7HjarUl%2FDUetchokE6yDZyGFPGDc15RJH1LKbKxn01%2B9lHsS08ZRJC19sjMpdCOaveD3770bcs%2FsBSS5npWin6JWQZuRMN2%2FUd2U6OnLKz8k76xHE&X-Amz-Signature=c5c026d6c0cf78076daf44b112058fccc9907d3416bcdff5f09285d8c25bebf7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664YS2WKVG%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084551Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJHMEUCIQCskrPiJ58rEv7vqeSoPnyo%2F60XSwFOiLlXqic5xCNvrwIgQp76LM5PqHs5zDskgQP%2Bo7ywjCX1r6qFnWq7kULli0QqiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJUNBpVImOxsbYyICircA6GrYmmOLF8lh%2FhLawuA9cWSspknGXBi1%2FnIX2TnrNS7qxLSfYnNWx%2Fr%2B%2BRDAN71z3hnTKVzYK39lOpAhQf%2BcbSmi8RChNieQGVJjalGmRR%2FGcyUQC85SRsznEcSXVRbnjVVxKF1sD5HWwzSsolTxvrRPQhSGQLaZ6yOJvwR0uEFO4X53%2FuKmEDzLZCuCMhN2ZS8R%2FdIYejLlL%2FGUuUobyEcYLFUgZEEo9QEeKjEMxNWzNxLf%2F6uQeI0fcAPeqPLMNeTBP%2FOWgPd%2BexbCzLDsRrA2aqs8ecwPO56I4cCXnVVlTrEV9VmNPO3h8lXosGU0TlyL1eVfTPKmcBpOLBUc2YEK%2FSrJsTJ1xp5r7ay0NVSkXy%2BipIeIemPRM47eeljjwXCXyGAiFUE1PhYs6mRb7xt17LPYySTbEmnp%2F2MCKlvW5Z8iZX60PJaehGR8C%2BOQ8pNuR5Qc584VXi1GBMqlS1VvTR9NeilmveIAgt5M7Qh%2B8ggGXn%2F9oKyb0Tf%2FRt56z4usdTOpVngQwBnd1tWROWHQ3gud1LTGAeN6oG2imJ2pl%2BfJNHSiSePysGJSr3s2IhO6UqhRU71BIu5h534IRiVjsp0so79hh0vthaZABodXnh%2B8DRGPh1xM5eFMJmItswGOqUBh9IxfdfyEYlnUEVa%2FfS%2FG21w7ZvyO2nJ%2BCXrfx7LMUB7jMcStTxHGuO%2F99VpYXpJVMy4klHv1kHXFJgF4XNG1rGqpTlp4lDdqm3DyXJTHOY7HjarUl%2FDUetchokE6yDZyGFPGDc15RJH1LKbKxn01%2B9lHsS08ZRJC19sjMpdCOaveD3770bcs%2FsBSS5npWin6JWQZuRMN2%2FUd2U6OnLKz8k76xHE&X-Amz-Signature=57e70cb9754bf2982e725ef35c44ae24e1f083491160686b5ec566edbd251003&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RRRX4LLI%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084552Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJHMEUCIQD7tItnzHtzC%2FdFygiiTWXUqy9dBKldqSc3qjfipBDg5AIgde89D8f%2FzdGcmq9RnCRcnqW3GxhzwK5BUWWC5JnJXCYqiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDO8nvLasO4g0uVAx0yrcA9SObMqev%2BZflFuOVO0A8SsxycV7Yt8xDpoFIvXRQtm49DKKVR0FSZYREOXU%2BUJCqJ5bYgKtVzWx3i3oibabrXGZbAdlpvLsfrcLQctEDR1Szg8gIxvZfQ2xOwhAlgWeQwdnA0Z0eQN%2ByX%2F71dQXIjJRGEsCWY22YfD1mvvKjQC7MB%2BPMaA20cezLhusaGBmh1IwJdsTAvzGBfsRU%2FRVjDiVDZzi2sj6KS9qWkV8ybbxQPL%2FSrXJo51oqouBdppyr%2FObd2C43oHBGIV2xAIswuKBJx5Esg3BztQbNuaO00TkZfZ46HtKaCZ5oYsh8s7Zi%2FXijEGLs3cRUBr6UxTJjbBEKyos0qo2yYwW%2FHsxduGeYacOzxq921HWGyAl2HQU%2F5PiXlqUSmBl7CJAx0SC7dinCrpCMVtbkCvMKN2LFaAJk9Xg0Op8rZjPsRsf3TEvigC7m4jxRE6d0x9dY%2ByCPW7ipqvkX5FtoX9gcFkwE4gFYRgvv7iRaetCmNwYppMiAnYZvCh8VeO7ewo0fsceZa9iPrA5EmfpjFilEjqSQv21BKf06VrKTp1CzFVP4IToIGb2yKb4AEjuXQGqUfcTuSHKRyGsHZjOltp51v4tDRzVOywG%2Fbys6dHiEwQzMPaGtswGOqUBRNvGhcYu8MpT2TdZqfGNlJCQo15iHW1bg9beRqbLCEJyeA%2FsGQflNXJ7EMa%2FSckrRc2YqciWHZ3vYmIbaQ1%2BEHf%2FPrfS6qzQF1xzKyaR0VW85PdnIO4SP4mFwHDBEbSWmJmgDI7ps%2Bh8VI8Bta89z5VmFlAd57ch3MrVfkf%2FcS4bBVLYe3xpp1O7pdFCplsHfrVWysADs2T6dfeWfcs5fRpUKES%2B&X-Amz-Signature=5245cfc4be0bdb79313acfe67f9e6d78adabd13393d6801351e5e6cb615d3840&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RDLYG42Y%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084552Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJGMEQCIHSSKk0SjBDq04pOCvb9RFQFy5H0f7VUE05jJlvqaseeAiAN25%2B6wk5qr7WP52ZiHy05cVRSHP2AfV90%2FaQzBRO5QSqIBAjR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMNychGqZ71131zeK2KtwDgub%2FdZFAH2%2BlCiXD5HzhQIQb5Q8sf06k5yGOgKiEQh7Oh07YV2aOC2VVLqopoqbxaLM%2BekqB6CxcZaSTLBCWKP6smCfGVKh1ZXI0IbrihpxDWac9XlsBI%2B8CKlHrh9%2F2rdDOLCeBfih3Sm%2FiOLxE%2FZNJs%2BenisBPLZokjnabVB%2BDbUMkIK3oE2W7ZEj%2FkWZbHiB47WTBDrSfJztFzH5Smw1NzwUvpOxZNBp5n89owd7BWfn4d3Hipx8FOE4eL9%2F%2Bb9CT0Mx9WlEfiGhU4EOTfeG%2FEyyeJ33qHLhhaDsVeejax%2BR%2FXHev423Rcozb%2Btyj5o7Bexamb3lScwGHu74uDfH9eeibgksExl%2BlJ32Znp%2FtvYlD%2FeOBE%2Bm0rFjxyhUpaiYUcKo9VPho%2FPFoyWEfTym%2FYVdmZ8vwbHprOKJVA09%2BEI3pvU5hZJzkqIXMoil00ayGSBWRSPCHp3j1NbuUCpX%2BPrhnD%2BWVFNttUwdYrv5QVcds09yorZ%2BbzY8HcwXpjhjJDkFc0K183WvWgMLLrS9GxAb9DzoJyehjYYzhOr6mQTgv4Y9oIi1Yhtlpa5tXKKgMnO0rPq6yRAoRBMrMLmLWI3t54A9TjGLnIFqba04%2FjyEIcBGALpYQRfcw74a2zAY6pgFpgG6kwgUIYuW%2FjQtvy61QD4VWxWlID7EkJLrC0vJ5MkSRcy1RCjvVmhkSxIEnZsMaHDCT%2BR3A4hYXT1pGSMMSqggKjBDx88Pw%2Bw7larLsBSudnonBu4IYQbt6HKICPHn%2Fc1gZqY9lK9sspI%2FOaEWDRR%2BiK25ITf52A18J6iW%2BOPecxB6y6V5pkRwKmf2oBB7u%2BRYw%2FoNRe5hfoAKdrhGkF8vsWiQP&X-Amz-Signature=5a88fd92600e10468dc873587145aef00d19142a49c3e0a57404b2fd9a54c0f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RDLYG42Y%2F20260212%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260212T084552Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJGMEQCIHSSKk0SjBDq04pOCvb9RFQFy5H0f7VUE05jJlvqaseeAiAN25%2B6wk5qr7WP52ZiHy05cVRSHP2AfV90%2FaQzBRO5QSqIBAjR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMNychGqZ71131zeK2KtwDgub%2FdZFAH2%2BlCiXD5HzhQIQb5Q8sf06k5yGOgKiEQh7Oh07YV2aOC2VVLqopoqbxaLM%2BekqB6CxcZaSTLBCWKP6smCfGVKh1ZXI0IbrihpxDWac9XlsBI%2B8CKlHrh9%2F2rdDOLCeBfih3Sm%2FiOLxE%2FZNJs%2BenisBPLZokjnabVB%2BDbUMkIK3oE2W7ZEj%2FkWZbHiB47WTBDrSfJztFzH5Smw1NzwUvpOxZNBp5n89owd7BWfn4d3Hipx8FOE4eL9%2F%2Bb9CT0Mx9WlEfiGhU4EOTfeG%2FEyyeJ33qHLhhaDsVeejax%2BR%2FXHev423Rcozb%2Btyj5o7Bexamb3lScwGHu74uDfH9eeibgksExl%2BlJ32Znp%2FtvYlD%2FeOBE%2Bm0rFjxyhUpaiYUcKo9VPho%2FPFoyWEfTym%2FYVdmZ8vwbHprOKJVA09%2BEI3pvU5hZJzkqIXMoil00ayGSBWRSPCHp3j1NbuUCpX%2BPrhnD%2BWVFNttUwdYrv5QVcds09yorZ%2BbzY8HcwXpjhjJDkFc0K183WvWgMLLrS9GxAb9DzoJyehjYYzhOr6mQTgv4Y9oIi1Yhtlpa5tXKKgMnO0rPq6yRAoRBMrMLmLWI3t54A9TjGLnIFqba04%2FjyEIcBGALpYQRfcw74a2zAY6pgFpgG6kwgUIYuW%2FjQtvy61QD4VWxWlID7EkJLrC0vJ5MkSRcy1RCjvVmhkSxIEnZsMaHDCT%2BR3A4hYXT1pGSMMSqggKjBDx88Pw%2Bw7larLsBSudnonBu4IYQbt6HKICPHn%2Fc1gZqY9lK9sspI%2FOaEWDRR%2BiK25ITf52A18J6iW%2BOPecxB6y6V5pkRwKmf2oBB7u%2BRYw%2FoNRe5hfoAKdrhGkF8vsWiQP&X-Amz-Signature=f139b76efc16b048794eae6967f40e3c0f27eb2626ed754e4b8986a43aaa2606&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
