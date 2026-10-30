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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VE3MULZN%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCKGscIhdoMcUv4PvYb7H2gvinOSWyHamZ29mJIg02ffAIhAKazOR9vQpENTBQGpQSI9%2BLdNP3whnpJrDDF1EQGpGxdKv8DCDYQABoMNjM3NDIzMTgzODA1IgwkpH5HqtKSl9cXKwgq3ANQ%2BK9m%2BQ2tc9niIddwZ6beHsJ0GY7n9OI7Vck%2FGAEf7INcRPYL7JTu8WATzTlc1OATC%2BIxcHcu%2BXLjnAvfoUoiH%2F8z5m5Pl37Ln41M1hqaEB18PR4w8mlNIT2TvRD2Pm0ySD0kAv1wD0gVP3B2YSGVNVFErFN1q7mOojp0aYusXzIYIaVmoykdsmu45wrqbl54q49R%2B7ogXd6%2B%2FGVtFi1D%2BZeBq%2F7p8BROFD4J1aSTxwrPDwiop3mmwyVmAw6t6l%2BCZM5BatHs5xBxjybUc0q%2BVi%2F3q3RDhKnGJQy5y9najOn1fn5k54qAeU4QoktkYSy2n6P%2FTaFjwLjuM503WJM%2FkcpZkUOjXusWoXiqCMpl1nLVamsY07HPq0tqsnQlr4c%2Ff8HxMjylSoykxtVM58G853AJSv2s8veqGShY%2FC8%2Faw4yFgxKOu%2F43nSZj0bdRdPjsHVjxFZzwR2W8moBroN%2B%2B086%2FREzLteuuHqJnT2VNYm9Tss1zimAZqe9VUr07vyOIKXKfrz%2F2P0NfRl7ZU7NddfeaQQ1v03gHJBpVxj3FL5g9%2FVRJV8WJT1%2BLUugN%2FOKEl1Wz1BD9cHTxcZSB8s3p9v2efyLfBdFTVrzGZ3Py%2FxmZtr7Nyurml9hWjCiyZLXBjqkAYV%2FI2rN5%2BUdHktQnEr8HWIhITR2AvY0caQcmXm%2FL2ttOUAOtcVWst9re7xvWWjLrfyBUneKQOMGkqvbWAgQRdMoHftzGwkUNQprm6ENUeLC4XjFjEjCl0u6lH5qfTY1OXUIbLiqbpOK9JC4W6xy%2FUc79U09N7GboIGXgxMA9IHC7lzaAP01xOQnvkxcQgwTVwV1Cvvh35%2F82rm6MY%2BNyJVOsBIO&X-Amz-Signature=ac7f47e42c5b7e0030cb4bcfebef85b970c364f50d2b6e4ec82ee84aa0c3aaf7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VE3MULZN%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCKGscIhdoMcUv4PvYb7H2gvinOSWyHamZ29mJIg02ffAIhAKazOR9vQpENTBQGpQSI9%2BLdNP3whnpJrDDF1EQGpGxdKv8DCDYQABoMNjM3NDIzMTgzODA1IgwkpH5HqtKSl9cXKwgq3ANQ%2BK9m%2BQ2tc9niIddwZ6beHsJ0GY7n9OI7Vck%2FGAEf7INcRPYL7JTu8WATzTlc1OATC%2BIxcHcu%2BXLjnAvfoUoiH%2F8z5m5Pl37Ln41M1hqaEB18PR4w8mlNIT2TvRD2Pm0ySD0kAv1wD0gVP3B2YSGVNVFErFN1q7mOojp0aYusXzIYIaVmoykdsmu45wrqbl54q49R%2B7ogXd6%2B%2FGVtFi1D%2BZeBq%2F7p8BROFD4J1aSTxwrPDwiop3mmwyVmAw6t6l%2BCZM5BatHs5xBxjybUc0q%2BVi%2F3q3RDhKnGJQy5y9najOn1fn5k54qAeU4QoktkYSy2n6P%2FTaFjwLjuM503WJM%2FkcpZkUOjXusWoXiqCMpl1nLVamsY07HPq0tqsnQlr4c%2Ff8HxMjylSoykxtVM58G853AJSv2s8veqGShY%2FC8%2Faw4yFgxKOu%2F43nSZj0bdRdPjsHVjxFZzwR2W8moBroN%2B%2B086%2FREzLteuuHqJnT2VNYm9Tss1zimAZqe9VUr07vyOIKXKfrz%2F2P0NfRl7ZU7NddfeaQQ1v03gHJBpVxj3FL5g9%2FVRJV8WJT1%2BLUugN%2FOKEl1Wz1BD9cHTxcZSB8s3p9v2efyLfBdFTVrzGZ3Py%2FxmZtr7Nyurml9hWjCiyZLXBjqkAYV%2FI2rN5%2BUdHktQnEr8HWIhITR2AvY0caQcmXm%2FL2ttOUAOtcVWst9re7xvWWjLrfyBUneKQOMGkqvbWAgQRdMoHftzGwkUNQprm6ENUeLC4XjFjEjCl0u6lH5qfTY1OXUIbLiqbpOK9JC4W6xy%2FUc79U09N7GboIGXgxMA9IHC7lzaAP01xOQnvkxcQgwTVwV1Cvvh35%2F82rm6MY%2BNyJVOsBIO&X-Amz-Signature=00f5189a9281f0a6a7e41985c875c74eaac35a68d6e219528635fbaeb32d912a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VE3MULZN%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCKGscIhdoMcUv4PvYb7H2gvinOSWyHamZ29mJIg02ffAIhAKazOR9vQpENTBQGpQSI9%2BLdNP3whnpJrDDF1EQGpGxdKv8DCDYQABoMNjM3NDIzMTgzODA1IgwkpH5HqtKSl9cXKwgq3ANQ%2BK9m%2BQ2tc9niIddwZ6beHsJ0GY7n9OI7Vck%2FGAEf7INcRPYL7JTu8WATzTlc1OATC%2BIxcHcu%2BXLjnAvfoUoiH%2F8z5m5Pl37Ln41M1hqaEB18PR4w8mlNIT2TvRD2Pm0ySD0kAv1wD0gVP3B2YSGVNVFErFN1q7mOojp0aYusXzIYIaVmoykdsmu45wrqbl54q49R%2B7ogXd6%2B%2FGVtFi1D%2BZeBq%2F7p8BROFD4J1aSTxwrPDwiop3mmwyVmAw6t6l%2BCZM5BatHs5xBxjybUc0q%2BVi%2F3q3RDhKnGJQy5y9najOn1fn5k54qAeU4QoktkYSy2n6P%2FTaFjwLjuM503WJM%2FkcpZkUOjXusWoXiqCMpl1nLVamsY07HPq0tqsnQlr4c%2Ff8HxMjylSoykxtVM58G853AJSv2s8veqGShY%2FC8%2Faw4yFgxKOu%2F43nSZj0bdRdPjsHVjxFZzwR2W8moBroN%2B%2B086%2FREzLteuuHqJnT2VNYm9Tss1zimAZqe9VUr07vyOIKXKfrz%2F2P0NfRl7ZU7NddfeaQQ1v03gHJBpVxj3FL5g9%2FVRJV8WJT1%2BLUugN%2FOKEl1Wz1BD9cHTxcZSB8s3p9v2efyLfBdFTVrzGZ3Py%2FxmZtr7Nyurml9hWjCiyZLXBjqkAYV%2FI2rN5%2BUdHktQnEr8HWIhITR2AvY0caQcmXm%2FL2ttOUAOtcVWst9re7xvWWjLrfyBUneKQOMGkqvbWAgQRdMoHftzGwkUNQprm6ENUeLC4XjFjEjCl0u6lH5qfTY1OXUIbLiqbpOK9JC4W6xy%2FUc79U09N7GboIGXgxMA9IHC7lzaAP01xOQnvkxcQgwTVwV1Cvvh35%2F82rm6MY%2BNyJVOsBIO&X-Amz-Signature=0c6671a4833af3adc7a32ec38a698a9845f44cff73a4044d308ded2f19c4c5f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGDPIYP6%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCY3kDvphED4MB%2BzYw%2B0XLbU6JO9oI4J46Q%2FKK9qu233wIhAPXZ15jUsbnC3HLOwiR22vUIwgxgljPhUBmlmLB5%2BRXBKv8DCDYQABoMNjM3NDIzMTgzODA1IgyaZD76%2Brgqtx0udHsq3AMeINAN42BMXpPNas8C1D0%2BPhznrRoPHMCkD0MrF0%2BIoq6JnDe6BJPAI4q9li09ETWsjzPVNqlUwT5AKasxtMIchdu3bXaIx%2BPGzkpBC9yrET30qlNKnXXU%2BkkKuM%2FXt%2FolSD1uQU8eJu8k2oVgSnA4MpesgW4yqYntyewJF738kRXzSvMtfArbYCpKpL5Ngvjm%2BfBRbtddnhrScxsPweWfGA9hP03c9yXuzIxgGq9A%2FqeOtwfkEpkmMwvgMRcGK09xDCdaA9874Cd255TL5nFcznVs2rc5LCsYQB%2Bpv8MVLuuRMX8STlGeA2lUiKMnzwNiO5ueQ4%2B16wzIKIBDWZU4gBhjrQDySzp31wvJNhDQGip%2FHHBh9BRhI9j3KJAuay2ZmUaeTqznC65T2raAXqzlphZKRIhwBarDdxDGJXbms6k9qEj7y%2B60mobdiNtb%2BOSbcDLsZtPoPS3nY%2FARqa9FDvfY248rSgstf%2FU6Iw7s6rSt%2B2Z92%2FXmxsW8LbzRW18%2BPNldR%2FbHFUNDyVJmGNIKN1CYtZOM9aFx8b3%2Ff8iNBlIubgdqIxIvGwrlhomkXKa4xJrR8Z3pl66wo%2Bg19TAyOMoyhjsZ99yRaF2Dp%2F8uB60bNH1yS%2FSLs2J0ZDDzyJLXBjqkARyOmJjUw3uqybq4MnBh%2BU4FDxW8321x1iAUeZyXz%2FBijGfXvtDVokA6TfSGmmSEgLpUCsI5JxbeMQh2ge59FZXp%2Byuju%2FjeTkxYSnZyokFq8frcWzDfA%2Bgw4%2B0%2BaPlsghBUP3f%2BfsAp1hyIOFnz%2FJHNoVa5G3lSAI9qr31WQr8pa%2F2ioKK0gR3N%2FndEmWMQhpkDVDzBQ%2FnWuEcRm%2BXL0CsInLfn&X-Amz-Signature=8b4b660950e84055eda104eb3095a6494ddf8749a7581946f00f19f852f8c56c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGDPIYP6%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCY3kDvphED4MB%2BzYw%2B0XLbU6JO9oI4J46Q%2FKK9qu233wIhAPXZ15jUsbnC3HLOwiR22vUIwgxgljPhUBmlmLB5%2BRXBKv8DCDYQABoMNjM3NDIzMTgzODA1IgyaZD76%2Brgqtx0udHsq3AMeINAN42BMXpPNas8C1D0%2BPhznrRoPHMCkD0MrF0%2BIoq6JnDe6BJPAI4q9li09ETWsjzPVNqlUwT5AKasxtMIchdu3bXaIx%2BPGzkpBC9yrET30qlNKnXXU%2BkkKuM%2FXt%2FolSD1uQU8eJu8k2oVgSnA4MpesgW4yqYntyewJF738kRXzSvMtfArbYCpKpL5Ngvjm%2BfBRbtddnhrScxsPweWfGA9hP03c9yXuzIxgGq9A%2FqeOtwfkEpkmMwvgMRcGK09xDCdaA9874Cd255TL5nFcznVs2rc5LCsYQB%2Bpv8MVLuuRMX8STlGeA2lUiKMnzwNiO5ueQ4%2B16wzIKIBDWZU4gBhjrQDySzp31wvJNhDQGip%2FHHBh9BRhI9j3KJAuay2ZmUaeTqznC65T2raAXqzlphZKRIhwBarDdxDGJXbms6k9qEj7y%2B60mobdiNtb%2BOSbcDLsZtPoPS3nY%2FARqa9FDvfY248rSgstf%2FU6Iw7s6rSt%2B2Z92%2FXmxsW8LbzRW18%2BPNldR%2FbHFUNDyVJmGNIKN1CYtZOM9aFx8b3%2Ff8iNBlIubgdqIxIvGwrlhomkXKa4xJrR8Z3pl66wo%2Bg19TAyOMoyhjsZ99yRaF2Dp%2F8uB60bNH1yS%2FSLs2J0ZDDzyJLXBjqkARyOmJjUw3uqybq4MnBh%2BU4FDxW8321x1iAUeZyXz%2FBijGfXvtDVokA6TfSGmmSEgLpUCsI5JxbeMQh2ge59FZXp%2Byuju%2FjeTkxYSnZyokFq8frcWzDfA%2Bgw4%2B0%2BaPlsghBUP3f%2BfsAp1hyIOFnz%2FJHNoVa5G3lSAI9qr31WQr8pa%2F2ioKK0gR3N%2FndEmWMQhpkDVDzBQ%2FnWuEcRm%2BXL0CsInLfn&X-Amz-Signature=8c89f90f2f9bbfb92a36f1b3d3e97d0827185f8dbb4cd8af341a0136d5bdb6de&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGDPIYP6%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCY3kDvphED4MB%2BzYw%2B0XLbU6JO9oI4J46Q%2FKK9qu233wIhAPXZ15jUsbnC3HLOwiR22vUIwgxgljPhUBmlmLB5%2BRXBKv8DCDYQABoMNjM3NDIzMTgzODA1IgyaZD76%2Brgqtx0udHsq3AMeINAN42BMXpPNas8C1D0%2BPhznrRoPHMCkD0MrF0%2BIoq6JnDe6BJPAI4q9li09ETWsjzPVNqlUwT5AKasxtMIchdu3bXaIx%2BPGzkpBC9yrET30qlNKnXXU%2BkkKuM%2FXt%2FolSD1uQU8eJu8k2oVgSnA4MpesgW4yqYntyewJF738kRXzSvMtfArbYCpKpL5Ngvjm%2BfBRbtddnhrScxsPweWfGA9hP03c9yXuzIxgGq9A%2FqeOtwfkEpkmMwvgMRcGK09xDCdaA9874Cd255TL5nFcznVs2rc5LCsYQB%2Bpv8MVLuuRMX8STlGeA2lUiKMnzwNiO5ueQ4%2B16wzIKIBDWZU4gBhjrQDySzp31wvJNhDQGip%2FHHBh9BRhI9j3KJAuay2ZmUaeTqznC65T2raAXqzlphZKRIhwBarDdxDGJXbms6k9qEj7y%2B60mobdiNtb%2BOSbcDLsZtPoPS3nY%2FARqa9FDvfY248rSgstf%2FU6Iw7s6rSt%2B2Z92%2FXmxsW8LbzRW18%2BPNldR%2FbHFUNDyVJmGNIKN1CYtZOM9aFx8b3%2Ff8iNBlIubgdqIxIvGwrlhomkXKa4xJrR8Z3pl66wo%2Bg19TAyOMoyhjsZ99yRaF2Dp%2F8uB60bNH1yS%2FSLs2J0ZDDzyJLXBjqkARyOmJjUw3uqybq4MnBh%2BU4FDxW8321x1iAUeZyXz%2FBijGfXvtDVokA6TfSGmmSEgLpUCsI5JxbeMQh2ge59FZXp%2Byuju%2FjeTkxYSnZyokFq8frcWzDfA%2Bgw4%2B0%2BaPlsghBUP3f%2BfsAp1hyIOFnz%2FJHNoVa5G3lSAI9qr31WQr8pa%2F2ioKK0gR3N%2FndEmWMQhpkDVDzBQ%2FnWuEcRm%2BXL0CsInLfn&X-Amz-Signature=43fa4cfad9ff9be87a19404ae6f96249d027f8827487a1a2f3d69d2040e5b554&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YGDPIYP6%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145015Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCY3kDvphED4MB%2BzYw%2B0XLbU6JO9oI4J46Q%2FKK9qu233wIhAPXZ15jUsbnC3HLOwiR22vUIwgxgljPhUBmlmLB5%2BRXBKv8DCDYQABoMNjM3NDIzMTgzODA1IgyaZD76%2Brgqtx0udHsq3AMeINAN42BMXpPNas8C1D0%2BPhznrRoPHMCkD0MrF0%2BIoq6JnDe6BJPAI4q9li09ETWsjzPVNqlUwT5AKasxtMIchdu3bXaIx%2BPGzkpBC9yrET30qlNKnXXU%2BkkKuM%2FXt%2FolSD1uQU8eJu8k2oVgSnA4MpesgW4yqYntyewJF738kRXzSvMtfArbYCpKpL5Ngvjm%2BfBRbtddnhrScxsPweWfGA9hP03c9yXuzIxgGq9A%2FqeOtwfkEpkmMwvgMRcGK09xDCdaA9874Cd255TL5nFcznVs2rc5LCsYQB%2Bpv8MVLuuRMX8STlGeA2lUiKMnzwNiO5ueQ4%2B16wzIKIBDWZU4gBhjrQDySzp31wvJNhDQGip%2FHHBh9BRhI9j3KJAuay2ZmUaeTqznC65T2raAXqzlphZKRIhwBarDdxDGJXbms6k9qEj7y%2B60mobdiNtb%2BOSbcDLsZtPoPS3nY%2FARqa9FDvfY248rSgstf%2FU6Iw7s6rSt%2B2Z92%2FXmxsW8LbzRW18%2BPNldR%2FbHFUNDyVJmGNIKN1CYtZOM9aFx8b3%2Ff8iNBlIubgdqIxIvGwrlhomkXKa4xJrR8Z3pl66wo%2Bg19TAyOMoyhjsZ99yRaF2Dp%2F8uB60bNH1yS%2FSLs2J0ZDDzyJLXBjqkARyOmJjUw3uqybq4MnBh%2BU4FDxW8321x1iAUeZyXz%2FBijGfXvtDVokA6TfSGmmSEgLpUCsI5JxbeMQh2ge59FZXp%2Byuju%2FjeTkxYSnZyokFq8frcWzDfA%2Bgw4%2B0%2BaPlsghBUP3f%2BfsAp1hyIOFnz%2FJHNoVa5G3lSAI9qr31WQr8pa%2F2ioKK0gR3N%2FndEmWMQhpkDVDzBQ%2FnWuEcRm%2BXL0CsInLfn&X-Amz-Signature=1297819777965672041f3cedab7efe7e48906d7dd28e1c55fa901f585c2b18e8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZJXZKRCA%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145016Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJHMEUCICqKFqzK067omK66lq2c%2BJPr1fHILS6frKjswFjb7SxXAiEAw1TwTXubJkGlAIZe2XHb4V8x4ZxKYzI7DhmOh4sbDm4q%2FwMINxAAGgw2Mzc0MjMxODM4MDUiDIwIDS%2FW40nSmrgrACrcAwq8%2Bq9L6sQukjUKcWQH3yPa%2Bqt%2FLoQOKq2BEKRcvciilCasN65xY8rcgeclpQxIyinM4gjNlZXsBLxgVPIAdTqQjd1VpZgWU7fNFfoN8xp%2FSKnc42laMZUIYB9evltXWNm9xShBlvWgWTJC83zmW3Y88HfBPalb0wFP%2Bs2rZpY%2FiJtIFeRWSD9k00m3hOBR%2FdfzlpUYao3tsIUtNkay%2Byyh7Y71e8w%2F1pxPmlfD0QS%2FSEMmNDne%2BbCiKStl4WDvugzz4D2L88qCYccV%2B7xdxv5nEdBVzzhrx5RomkkksmRNXRtBurI6QZ3dI7jBqld8n5ITwcuneFN9BH3%2BaJmsghPme3W%2FtBf2IujFOvI%2BbwtfY7cHynwUsrtNRc8puLGkLyQOgO%2F6kvd%2Fz%2F0Cgr6RdTEJ8JK5qxk4tetjpNVYkYa5%2FbJTQz3fI6qBuAT8bgx8ujGlcZWRkQ9ERhlYfVeDWEEN4Fy48%2BixcgHrEN9VKt%2FyQaPR3HMvO3vU1LAiqJvU3voZKAzo26hCOQpBW8rV17PEc9Y0%2BI5b1m%2F894xKv1wus%2BUqAktDmCbYnUapoaAzcTuMJk25XM5Zfd%2FaNm5a5WEWpsSF2pd9JIjx4gN%2BEq7JBATFPtyrq7RaGui8MKLJktcGOqUBiLIijP3wUqlruPoOfu3yqAntCxCp794XtI6dqhFNNT8KmvpbxEfl9V6QAzAWgVV2cBL1jOp%2F4kkHv%2BIpBHsy5KraZGuXcj779V%2FEWE7q0%2F8Z52hat%2Fpg5Cl3JyiNxV7xPkIRMJxrce7d2CNswkeI0Q4uj5mS%2Be%2BOD%2B2xcLX9rRTCZKO98DqLOLU15urGYo5D1MtOnZ1DukUZfNFwTggSIMAJUCck&X-Amz-Signature=0452f83d6db06a20ba6db5fad2d3090c9fc518e4e62ad96af0f8afea0e741063&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665KBAFOXR%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145016Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCUh3p92fFs1e2EntgXus62%2BUCldXXHaJB1%2BvFfpwV3IgIhAKnN8nhinK4RyVbfKXTdfM4qg1sb6Pmu7M60CeMlwDaFKv8DCDYQABoMNjM3NDIzMTgzODA1Igz5ZKe0f4%2FfNmv59joq3APvIplOfPmiOhWn2KMuEj8VU7O%2F5rJGtn8nbCpESuDzx8pe8cG4n2U0WSBLTCHz79Op%2BO8Mv8qHbzOO3UDSh7xtpVFM4IrV28WI9TbnLV46bvIqXooJ1Z0CVCLKGtSvXJZXB44ZZXtFWRcEzjEms9nK%2BWDiOqtdOiuvQszTGtb1Id0m6xKI2ByWeX3i0BvoZl9JbLZquPaleGa%2FrTzjRxPNSK5oY%2BAzZm6Vf%2BUgbWyK4frHCyBDtwlXbeAi6i1dzAvH9Y%2BYsFV%2F2dSNhYIYWJLeAKmQjcvamjOzJ3JgWnw1mb7NJCiLj8BQt2ez285ITyEAU2maJIYtw0vqDgDy3RT8r5magTLWCZzFv63psluWLwrjMTyIW8tVTRxAIJf83nSz7nFvBoxQKT%2FnBMVbWx2zUuCq94x8eeTEnI1HO6hB2vFtq64JewxTuQ9AFv%2B7OfRzK3ryY2XaioOSeWiacco3loG4krDSWRbKoHFjKu%2BkxAPq%2B5s%2F4MOLwu%2F5xoAAjUlqaVFBdDj%2BMU7tr1JqWfieOsmxizVPumpGDzsNhTf8dgZ842mjjd%2FdN%2FcU7bvhxQ5NdDAeTYIEvhUo18LHotjEuXe%2BpUjXCMBN%2FHJ1HLXhRmKVYrScPbvBfc9s6jCyyZLXBjqkAfuOLte8JhWI8oJmyWL3c%2Fb1dntM1S%2FfQkHjEy41nAmsifJ%2BiPQVQb5yFZE0tvhINIPNYlchiy7OZkhPHMK2tTRQQ2AyQWF5v9mv5OhqyQIuEj05VJ%2BNVjNQ6G9zUa5JObF%2BknOuBZTwgbIJ9g3vfcJhuFQ5JQ%2FPOTAjMEyVdX3ncXna%2BSb0YGwm0eSk6sSHM8xQO9whYO666Ox8H5BLlaTiwSOH&X-Amz-Signature=9c3c775ca1ecf5b4334de5f497c6b9eaca4c3c5f87474d2d91c9abb317961a53&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665KBAFOXR%2F20261030%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261030T145016Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEG4aCXVzLXdlc3QtMiJIMEYCIQCUh3p92fFs1e2EntgXus62%2BUCldXXHaJB1%2BvFfpwV3IgIhAKnN8nhinK4RyVbfKXTdfM4qg1sb6Pmu7M60CeMlwDaFKv8DCDYQABoMNjM3NDIzMTgzODA1Igz5ZKe0f4%2FfNmv59joq3APvIplOfPmiOhWn2KMuEj8VU7O%2F5rJGtn8nbCpESuDzx8pe8cG4n2U0WSBLTCHz79Op%2BO8Mv8qHbzOO3UDSh7xtpVFM4IrV28WI9TbnLV46bvIqXooJ1Z0CVCLKGtSvXJZXB44ZZXtFWRcEzjEms9nK%2BWDiOqtdOiuvQszTGtb1Id0m6xKI2ByWeX3i0BvoZl9JbLZquPaleGa%2FrTzjRxPNSK5oY%2BAzZm6Vf%2BUgbWyK4frHCyBDtwlXbeAi6i1dzAvH9Y%2BYsFV%2F2dSNhYIYWJLeAKmQjcvamjOzJ3JgWnw1mb7NJCiLj8BQt2ez285ITyEAU2maJIYtw0vqDgDy3RT8r5magTLWCZzFv63psluWLwrjMTyIW8tVTRxAIJf83nSz7nFvBoxQKT%2FnBMVbWx2zUuCq94x8eeTEnI1HO6hB2vFtq64JewxTuQ9AFv%2B7OfRzK3ryY2XaioOSeWiacco3loG4krDSWRbKoHFjKu%2BkxAPq%2B5s%2F4MOLwu%2F5xoAAjUlqaVFBdDj%2BMU7tr1JqWfieOsmxizVPumpGDzsNhTf8dgZ842mjjd%2FdN%2FcU7bvhxQ5NdDAeTYIEvhUo18LHotjEuXe%2BpUjXCMBN%2FHJ1HLXhRmKVYrScPbvBfc9s6jCyyZLXBjqkAfuOLte8JhWI8oJmyWL3c%2Fb1dntM1S%2FfQkHjEy41nAmsifJ%2BiPQVQb5yFZE0tvhINIPNYlchiy7OZkhPHMK2tTRQQ2AyQWF5v9mv5OhqyQIuEj05VJ%2BNVjNQ6G9zUa5JObF%2BknOuBZTwgbIJ9g3vfcJhuFQ5JQ%2FPOTAjMEyVdX3ncXna%2BSb0YGwm0eSk6sSHM8xQO9whYO666Ox8H5BLlaTiwSOH&X-Amz-Signature=aa64031ebe68f9d2281020bf162f68b00819f334af49927f21046c76c395c255&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
