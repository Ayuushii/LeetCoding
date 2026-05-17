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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UZ3PYYWF%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDonwirk86se3MMdg7%2F%2BIAM3zeRaTZCG2IKWeSkUb3JSAIgAqJRAKALS7v2MaxU1J6mQO1LI3aVLENmfv6KoSLYKKoqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMLmRduU3aTarN5siSrcA%2Fx%2BAydDW2WXGeFrFKwP1yguoRZl7qHkBIWCg6BE218hYqtV43N3TnA4bYVDSMFl5A8CaV94s1mKdE0%2FqAAQqpt2%2Byvwea926IRj%2FUuzPRzzqALSUbaBWwLGC5aJj3VnpThPQWe0mQqQ9eMu%2FPLXHyF5srTfi8ckyM5vX91Koh%2BljXP06RFsXkdfYmoQxRZZhcefFAFa5izdBUrcETjtxWe%2FH6cg8djNt1MbvtKSnc3IwTO4pKAcN635Ce5GgsDXGHBhhgyS560WuCr%2Bz1u8NQB9YiEMy8%2BJ1qPZdOYqb4OcKzfpX5OzxqtsDWyRSQWWgA2qRwXjZtvzbgC752snq7oDrCHIGOMEKILCnopJXRakaHkuTrKnfjwXHxFWMc0CFKvh9kb9s21R6ypKgDpdaFRbO5HjsnAcYsg9awU7bK2Ahfv49HQTY7KQG810oU3BjLSc1XJeMCbrRfAZw8DLScoobE9%2FImXrZGClVVDXl0htFcFC%2FMykW9QujbPr%2Fe6h9Lh2vqE%2BsMB6eH8bjweWBfZuCC9ZZOyXOouWTpUs0A8pcOb5%2FOXNNTej2JDCgZZLBlHqorFVfo%2F86%2FqXNBZV75Kez04fUChgOzNsv%2Fl%2Bb%2FQ9n6RYH13gqOeySKb3MODgpdAGOqUB2EGmUOEB5w1cuvLV22J4EBFKZtMmNUjjnEoyLzmr9iU9jcl9hIOag27EDbQOy9EM6a9ZxgK5HidCtMtBjc%2Bvxo1pHkjRVXoI24V146KidGhfGpm2UgE2qFlbFr0fQSs6VT0AuMCDomAA7T4SPoKd1eOGYmYSEXvvVbVUyhw7%2F3k%2FMlCpLRosurppfjO6xg2bxjzLS%2BC%2BqZhXptkI2mQw5cjTbXyo&X-Amz-Signature=9d2a610ba95a8f8a0c6226f5da561eb4e031355c3e4b6abac08dcf8ca11334e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UZ3PYYWF%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDonwirk86se3MMdg7%2F%2BIAM3zeRaTZCG2IKWeSkUb3JSAIgAqJRAKALS7v2MaxU1J6mQO1LI3aVLENmfv6KoSLYKKoqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMLmRduU3aTarN5siSrcA%2Fx%2BAydDW2WXGeFrFKwP1yguoRZl7qHkBIWCg6BE218hYqtV43N3TnA4bYVDSMFl5A8CaV94s1mKdE0%2FqAAQqpt2%2Byvwea926IRj%2FUuzPRzzqALSUbaBWwLGC5aJj3VnpThPQWe0mQqQ9eMu%2FPLXHyF5srTfi8ckyM5vX91Koh%2BljXP06RFsXkdfYmoQxRZZhcefFAFa5izdBUrcETjtxWe%2FH6cg8djNt1MbvtKSnc3IwTO4pKAcN635Ce5GgsDXGHBhhgyS560WuCr%2Bz1u8NQB9YiEMy8%2BJ1qPZdOYqb4OcKzfpX5OzxqtsDWyRSQWWgA2qRwXjZtvzbgC752snq7oDrCHIGOMEKILCnopJXRakaHkuTrKnfjwXHxFWMc0CFKvh9kb9s21R6ypKgDpdaFRbO5HjsnAcYsg9awU7bK2Ahfv49HQTY7KQG810oU3BjLSc1XJeMCbrRfAZw8DLScoobE9%2FImXrZGClVVDXl0htFcFC%2FMykW9QujbPr%2Fe6h9Lh2vqE%2BsMB6eH8bjweWBfZuCC9ZZOyXOouWTpUs0A8pcOb5%2FOXNNTej2JDCgZZLBlHqorFVfo%2F86%2FqXNBZV75Kez04fUChgOzNsv%2Fl%2Bb%2FQ9n6RYH13gqOeySKb3MODgpdAGOqUB2EGmUOEB5w1cuvLV22J4EBFKZtMmNUjjnEoyLzmr9iU9jcl9hIOag27EDbQOy9EM6a9ZxgK5HidCtMtBjc%2Bvxo1pHkjRVXoI24V146KidGhfGpm2UgE2qFlbFr0fQSs6VT0AuMCDomAA7T4SPoKd1eOGYmYSEXvvVbVUyhw7%2F3k%2FMlCpLRosurppfjO6xg2bxjzLS%2BC%2BqZhXptkI2mQw5cjTbXyo&X-Amz-Signature=63e1275766ad639c0ffdeb468836c9d6a130633c9cb7e4e17f2504b794dcc377&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UZ3PYYWF%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDonwirk86se3MMdg7%2F%2BIAM3zeRaTZCG2IKWeSkUb3JSAIgAqJRAKALS7v2MaxU1J6mQO1LI3aVLENmfv6KoSLYKKoqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMLmRduU3aTarN5siSrcA%2Fx%2BAydDW2WXGeFrFKwP1yguoRZl7qHkBIWCg6BE218hYqtV43N3TnA4bYVDSMFl5A8CaV94s1mKdE0%2FqAAQqpt2%2Byvwea926IRj%2FUuzPRzzqALSUbaBWwLGC5aJj3VnpThPQWe0mQqQ9eMu%2FPLXHyF5srTfi8ckyM5vX91Koh%2BljXP06RFsXkdfYmoQxRZZhcefFAFa5izdBUrcETjtxWe%2FH6cg8djNt1MbvtKSnc3IwTO4pKAcN635Ce5GgsDXGHBhhgyS560WuCr%2Bz1u8NQB9YiEMy8%2BJ1qPZdOYqb4OcKzfpX5OzxqtsDWyRSQWWgA2qRwXjZtvzbgC752snq7oDrCHIGOMEKILCnopJXRakaHkuTrKnfjwXHxFWMc0CFKvh9kb9s21R6ypKgDpdaFRbO5HjsnAcYsg9awU7bK2Ahfv49HQTY7KQG810oU3BjLSc1XJeMCbrRfAZw8DLScoobE9%2FImXrZGClVVDXl0htFcFC%2FMykW9QujbPr%2Fe6h9Lh2vqE%2BsMB6eH8bjweWBfZuCC9ZZOyXOouWTpUs0A8pcOb5%2FOXNNTej2JDCgZZLBlHqorFVfo%2F86%2FqXNBZV75Kez04fUChgOzNsv%2Fl%2Bb%2FQ9n6RYH13gqOeySKb3MODgpdAGOqUB2EGmUOEB5w1cuvLV22J4EBFKZtMmNUjjnEoyLzmr9iU9jcl9hIOag27EDbQOy9EM6a9ZxgK5HidCtMtBjc%2Bvxo1pHkjRVXoI24V146KidGhfGpm2UgE2qFlbFr0fQSs6VT0AuMCDomAA7T4SPoKd1eOGYmYSEXvvVbVUyhw7%2F3k%2FMlCpLRosurppfjO6xg2bxjzLS%2BC%2BqZhXptkI2mQw5cjTbXyo&X-Amz-Signature=845b299ce1a3a83e64e272d4193d957f2b4ca09927e855ce06c900391400ecac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SWII4D6%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnQTDX3WG9gWKorLFhU81g2eZvbi5ZS7KBpNOsFmw05AIgNbMZLedrfFTWKlca5cxEB5lJSEOo%2BIBCPy%2FhV3FDyE4qiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJO3jfWl52TWNU2fnCrcA4tQDeKHnK%2Bnxfw6m5WoX9iA%2BYFWduMD%2FozG63aNvIOKfWnPGtzy%2B%2FtHXoeGuCn9Bg59%2BSw5JF4MxO8MfLzzpKy%2B7FytV4Sw1h2eU4V5z5c%2FD2JFxG23bZ1U5CtH%2FBmuRCWL6u57PBfAkdNpiSaFGIHW2cRgrADABDk3%2ByharW4gWzzFwoAw8XtLucS8wJYcTHKXj9lcwM3qXaqiIYO3JoA7RIDlKtRU54eInG08rxAiEsYDvIqZ3NruoXWZVBAVkOBYCJ8Dyef97FP1HNfUa7sMFo6DeIb8vv%2FdZ2ghbL0FMwJrMUElucK%2B2w52FzKonQ4X44uupuuaX2WeOVLkLTxJiC2RmNdM7CYTONI3PPq6ZRLlncCl%2BB7z5xj0Bt81fidJKSOCGAE7aaJp2tXhNrkxKwNZsUcJuZP9JbCGI3rrVhA5%2FydWODAMrLni2LkCUPT3htnULlDcz5p278pVT8pHIA8wM915z%2FzbyxbD8WtfLc7UdNh363E69ubO2WpJWdjitUN1RFEufKAoDilfrrQfWJ2l4eMjR17hJPnt4DPXwiJh%2BSDFQbrAhCbCl1qRfJyN0NBiTq4MiSp5ReWUc6EsJcRKa%2FH6iAJM4gET8DXGsmDevB%2BOglBCrwxnMKPhpdAGOqUBjoyqCN%2BzeHk0k8FTcAw%2B9osO%2FiGbgMRK672wUCAfagz89CfndXc99QfTrb91IISy%2Bk5UJc74nOH%2B%2BtNoOABUiycBYtSKSaEduG%2FJFnMjUF2mpQD2cuFVYOaedi6oiMcxIewZWpFj3jVL0UF2U3basTn4FliICsuRtSydW8%2FP0ogLXU9ZO0ZQpEZbugjore6LtSuPa15B8rHsGDWy8vt2ZTNM%2F%2Bq%2F&X-Amz-Signature=fc0ada20388daee28df33e3f8fe86d9396a5c7b09949eddc2cab7378c464f070&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SWII4D6%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnQTDX3WG9gWKorLFhU81g2eZvbi5ZS7KBpNOsFmw05AIgNbMZLedrfFTWKlca5cxEB5lJSEOo%2BIBCPy%2FhV3FDyE4qiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJO3jfWl52TWNU2fnCrcA4tQDeKHnK%2Bnxfw6m5WoX9iA%2BYFWduMD%2FozG63aNvIOKfWnPGtzy%2B%2FtHXoeGuCn9Bg59%2BSw5JF4MxO8MfLzzpKy%2B7FytV4Sw1h2eU4V5z5c%2FD2JFxG23bZ1U5CtH%2FBmuRCWL6u57PBfAkdNpiSaFGIHW2cRgrADABDk3%2ByharW4gWzzFwoAw8XtLucS8wJYcTHKXj9lcwM3qXaqiIYO3JoA7RIDlKtRU54eInG08rxAiEsYDvIqZ3NruoXWZVBAVkOBYCJ8Dyef97FP1HNfUa7sMFo6DeIb8vv%2FdZ2ghbL0FMwJrMUElucK%2B2w52FzKonQ4X44uupuuaX2WeOVLkLTxJiC2RmNdM7CYTONI3PPq6ZRLlncCl%2BB7z5xj0Bt81fidJKSOCGAE7aaJp2tXhNrkxKwNZsUcJuZP9JbCGI3rrVhA5%2FydWODAMrLni2LkCUPT3htnULlDcz5p278pVT8pHIA8wM915z%2FzbyxbD8WtfLc7UdNh363E69ubO2WpJWdjitUN1RFEufKAoDilfrrQfWJ2l4eMjR17hJPnt4DPXwiJh%2BSDFQbrAhCbCl1qRfJyN0NBiTq4MiSp5ReWUc6EsJcRKa%2FH6iAJM4gET8DXGsmDevB%2BOglBCrwxnMKPhpdAGOqUBjoyqCN%2BzeHk0k8FTcAw%2B9osO%2FiGbgMRK672wUCAfagz89CfndXc99QfTrb91IISy%2Bk5UJc74nOH%2B%2BtNoOABUiycBYtSKSaEduG%2FJFnMjUF2mpQD2cuFVYOaedi6oiMcxIewZWpFj3jVL0UF2U3basTn4FliICsuRtSydW8%2FP0ogLXU9ZO0ZQpEZbugjore6LtSuPa15B8rHsGDWy8vt2ZTNM%2F%2Bq%2F&X-Amz-Signature=61cae69e728f636453a06406c30de4754882de3a02ee99470d40f71e1f8339b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SWII4D6%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnQTDX3WG9gWKorLFhU81g2eZvbi5ZS7KBpNOsFmw05AIgNbMZLedrfFTWKlca5cxEB5lJSEOo%2BIBCPy%2FhV3FDyE4qiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJO3jfWl52TWNU2fnCrcA4tQDeKHnK%2Bnxfw6m5WoX9iA%2BYFWduMD%2FozG63aNvIOKfWnPGtzy%2B%2FtHXoeGuCn9Bg59%2BSw5JF4MxO8MfLzzpKy%2B7FytV4Sw1h2eU4V5z5c%2FD2JFxG23bZ1U5CtH%2FBmuRCWL6u57PBfAkdNpiSaFGIHW2cRgrADABDk3%2ByharW4gWzzFwoAw8XtLucS8wJYcTHKXj9lcwM3qXaqiIYO3JoA7RIDlKtRU54eInG08rxAiEsYDvIqZ3NruoXWZVBAVkOBYCJ8Dyef97FP1HNfUa7sMFo6DeIb8vv%2FdZ2ghbL0FMwJrMUElucK%2B2w52FzKonQ4X44uupuuaX2WeOVLkLTxJiC2RmNdM7CYTONI3PPq6ZRLlncCl%2BB7z5xj0Bt81fidJKSOCGAE7aaJp2tXhNrkxKwNZsUcJuZP9JbCGI3rrVhA5%2FydWODAMrLni2LkCUPT3htnULlDcz5p278pVT8pHIA8wM915z%2FzbyxbD8WtfLc7UdNh363E69ubO2WpJWdjitUN1RFEufKAoDilfrrQfWJ2l4eMjR17hJPnt4DPXwiJh%2BSDFQbrAhCbCl1qRfJyN0NBiTq4MiSp5ReWUc6EsJcRKa%2FH6iAJM4gET8DXGsmDevB%2BOglBCrwxnMKPhpdAGOqUBjoyqCN%2BzeHk0k8FTcAw%2B9osO%2FiGbgMRK672wUCAfagz89CfndXc99QfTrb91IISy%2Bk5UJc74nOH%2B%2BtNoOABUiycBYtSKSaEduG%2FJFnMjUF2mpQD2cuFVYOaedi6oiMcxIewZWpFj3jVL0UF2U3basTn4FliICsuRtSydW8%2FP0ogLXU9ZO0ZQpEZbugjore6LtSuPa15B8rHsGDWy8vt2ZTNM%2F%2Bq%2F&X-Amz-Signature=dbcc307615426be2396731d2207d06ad41ceff4a9ee2c30630ed243d3bb01acf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667SWII4D6%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094558Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDnQTDX3WG9gWKorLFhU81g2eZvbi5ZS7KBpNOsFmw05AIgNbMZLedrfFTWKlca5cxEB5lJSEOo%2BIBCPy%2FhV3FDyE4qiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJO3jfWl52TWNU2fnCrcA4tQDeKHnK%2Bnxfw6m5WoX9iA%2BYFWduMD%2FozG63aNvIOKfWnPGtzy%2B%2FtHXoeGuCn9Bg59%2BSw5JF4MxO8MfLzzpKy%2B7FytV4Sw1h2eU4V5z5c%2FD2JFxG23bZ1U5CtH%2FBmuRCWL6u57PBfAkdNpiSaFGIHW2cRgrADABDk3%2ByharW4gWzzFwoAw8XtLucS8wJYcTHKXj9lcwM3qXaqiIYO3JoA7RIDlKtRU54eInG08rxAiEsYDvIqZ3NruoXWZVBAVkOBYCJ8Dyef97FP1HNfUa7sMFo6DeIb8vv%2FdZ2ghbL0FMwJrMUElucK%2B2w52FzKonQ4X44uupuuaX2WeOVLkLTxJiC2RmNdM7CYTONI3PPq6ZRLlncCl%2BB7z5xj0Bt81fidJKSOCGAE7aaJp2tXhNrkxKwNZsUcJuZP9JbCGI3rrVhA5%2FydWODAMrLni2LkCUPT3htnULlDcz5p278pVT8pHIA8wM915z%2FzbyxbD8WtfLc7UdNh363E69ubO2WpJWdjitUN1RFEufKAoDilfrrQfWJ2l4eMjR17hJPnt4DPXwiJh%2BSDFQbrAhCbCl1qRfJyN0NBiTq4MiSp5ReWUc6EsJcRKa%2FH6iAJM4gET8DXGsmDevB%2BOglBCrwxnMKPhpdAGOqUBjoyqCN%2BzeHk0k8FTcAw%2B9osO%2FiGbgMRK672wUCAfagz89CfndXc99QfTrb91IISy%2Bk5UJc74nOH%2B%2BtNoOABUiycBYtSKSaEduG%2FJFnMjUF2mpQD2cuFVYOaedi6oiMcxIewZWpFj3jVL0UF2U3basTn4FliICsuRtSydW8%2FP0ogLXU9ZO0ZQpEZbugjore6LtSuPa15B8rHsGDWy8vt2ZTNM%2F%2Bq%2F&X-Amz-Signature=ef512deb9a192214ad879bab6dbc9a097f925150ce45954001a0c42afbf8c399&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2QLL3D2%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEs5SIqHv9sJmwYiewOshGfuAlODQfzcWtVFx2G%2FT3QgAiAEOdfc%2FQfg5WDMnYWSHUVSRGQNhYPWsnQEz4wo2WpcDiqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMeUfGO00ssS5bY425KtwD1KLr2cY7J3Zy2gLk%2BLnac%2Fgp2MQc%2FdKdSfUwVZlN03HmtuT9P7MS0q9%2F57Rf9BIGQjCw2i4uqMISuGHq5nkmqntpRFb8KFSAb%2FrPTaUwCNRbnPkE9VRvAFRoNe7X7zJJJmHjbyfd2xCUMzX5jNYV6PhJf5x%2FCVQEMtLB0CCYCXz8HF4qjzLwrUd6YCJdLli0xIJhdVS1Q7yaistvUL3LHU%2BHmxRgOtLM9hIrFSDcg1hX%2FavHx5Dju1RSomayb0OAaekQ7tIWR0XpQnchefkoa1NHzzHvK7QzfF5R1qgjfQxEzN3u3G%2B%2FHvZ%2BAFCqW72DCKJgffycExeDSVugMDsWz9r5zPnDnT727UeCH9ADddIKDps3VWsgfWi3LfXz7YKX0Pb3MX7n2NLlOyNCysqre9aSBpzEcyYmFdgX42psYtY5KvxH4kgEdd9R7NYitCSVQTu0T0k%2BYLRVy%2FPBnN8J4%2BU8FTzjdkhGCi5vTYMdCiU28YQmOrfvsR1jOZUAvjXwz69mLXBNTbmqOX4lkLbmeyK5Fiv8PacFUC64tbTsMqZEx5nSFTIozt7TkVVgL33Nm329%2BGtmcpsKT7VMi01irxqV2eF0ahZBCQPyVMK0WE%2Fa0ubbn6otNPayJKUwgN%2Bl0AY6pgEDRFt3Fa02T9gf9lMnznB%2FB6CBp3ti1l015Q44Rr0JC8O1792ZR1x1Ec%2Fz1lzAVcTFaA2mzFmaV0IolCtpR0rKWo71VyxTyY44aLtAjMb7uqO%2BFOkxAav4bZJFaYBzLWTObXilynwlRdNuhbpdpbDmM7xneUmoDkU1fo12kqyq2ulenp71Q3RxJ1%2B%2Bgn8oDX5YzF2aAN%2BogicvboGQfh0bggTCdPli&X-Amz-Signature=3bd633a2107988f0e3171d11682c44fbbddffaf10a5087440927ef8c20df8ec7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666X2F7S5X%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHgcMzPzgeZlxjvvmZxl0XHay4JpZvpWZvr98PSAf5SWAiBQo6U1%2BVuR5G3elTOD9S0c9%2Fb%2B50Qr6wPl7Q6OQsJ6WiqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDvWmoXhvaLDCBJA%2BKtwDGgJUjtITCdQHuclknZxI%2BXXohLtFhvE5uLpp5KOSl45iv9etYJEL17hQs3ovtPb7XehSpKCCxQj9c7DpnDkgHRcp9diM92DKObZlYUBtansGKI8FeFj%2B5ElFRYW3hUELDFAo50k5m1ldgaWrHmIduFFzIKnX5kckOGlZscSA9rR0ExCKo1lFaZJDmX3lAIO39YM6%2B78BFRbz%2BrbcQSqqsIy50hxyAgeFqV1z7gVfxd2myTjEq%2FFd3Yk%2Bfgc4EQnv5Qy18aCIYfyg2vkoQMS4jFClHiEjNJCXK99QxYXAxCitDnP5VlfmlhVI35SQAOfLYO%2BqM8MAsxoB7MX%2Bruz%2BC66OXtI3xPdX2l%2B8t%2BrPT0Jga8vEbgiyAqf3nnvimHpqfeIYUlzjDTpxGLiXtSthfeog1qwDjAOH1k4n2JPVP4KZM4zaEb9d8KVb5lAiVcC%2FKtYJ1S4A76TnSTW0oyYLEeb3pxM4iS4pRbq2%2BrxBXwUe2GHJGG3Lk0LRgLJj1N1bgv0Tx47KVYq%2FOylahOLw%2BvH0YTBMW2fjMrv%2BkmC4V%2BLZVN0rEZmP3D4Cn0QhviyjjDeFMUpi1H3mfz1VARJau3Zh7VoldxnlVJUdTogGoAefXG0o1tBuy0HuzMowxt6l0AY6pgFilDJsM4yBFks5BYx%2BaPfz0qD%2F0f2WqF9bCV2RMUHuhJXyyttGYaiP4Q1unlb36%2FRLt6F%2BWPI1APP51xvFX5IavaIGvagJKTVX8lbd85b2o0NIbgff0RKznkTNwqliSAvHr4U2HCST0H3S9d20%2FRgSTXl3YIbzTCYdtWnl7wA08PfUDkHof1347gYwt6uoKKJWfpWcRxDKPHg5BOmASMWBWWIaroEn&X-Amz-Signature=6917b6cbbea93b649780be795f74759c8c95731cfb400cbe39d305bbe4596c9b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666X2F7S5X%2F20260517%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260517T094559Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHgcMzPzgeZlxjvvmZxl0XHay4JpZvpWZvr98PSAf5SWAiBQo6U1%2BVuR5G3elTOD9S0c9%2Fb%2B50Qr6wPl7Q6OQsJ6WiqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMDvWmoXhvaLDCBJA%2BKtwDGgJUjtITCdQHuclknZxI%2BXXohLtFhvE5uLpp5KOSl45iv9etYJEL17hQs3ovtPb7XehSpKCCxQj9c7DpnDkgHRcp9diM92DKObZlYUBtansGKI8FeFj%2B5ElFRYW3hUELDFAo50k5m1ldgaWrHmIduFFzIKnX5kckOGlZscSA9rR0ExCKo1lFaZJDmX3lAIO39YM6%2B78BFRbz%2BrbcQSqqsIy50hxyAgeFqV1z7gVfxd2myTjEq%2FFd3Yk%2Bfgc4EQnv5Qy18aCIYfyg2vkoQMS4jFClHiEjNJCXK99QxYXAxCitDnP5VlfmlhVI35SQAOfLYO%2BqM8MAsxoB7MX%2Bruz%2BC66OXtI3xPdX2l%2B8t%2BrPT0Jga8vEbgiyAqf3nnvimHpqfeIYUlzjDTpxGLiXtSthfeog1qwDjAOH1k4n2JPVP4KZM4zaEb9d8KVb5lAiVcC%2FKtYJ1S4A76TnSTW0oyYLEeb3pxM4iS4pRbq2%2BrxBXwUe2GHJGG3Lk0LRgLJj1N1bgv0Tx47KVYq%2FOylahOLw%2BvH0YTBMW2fjMrv%2BkmC4V%2BLZVN0rEZmP3D4Cn0QhviyjjDeFMUpi1H3mfz1VARJau3Zh7VoldxnlVJUdTogGoAefXG0o1tBuy0HuzMowxt6l0AY6pgFilDJsM4yBFks5BYx%2BaPfz0qD%2F0f2WqF9bCV2RMUHuhJXyyttGYaiP4Q1unlb36%2FRLt6F%2BWPI1APP51xvFX5IavaIGvagJKTVX8lbd85b2o0NIbgff0RKznkTNwqliSAvHr4U2HCST0H3S9d20%2FRgSTXl3YIbzTCYdtWnl7wA08PfUDkHof1347gYwt6uoKKJWfpWcRxDKPHg5BOmASMWBWWIaroEn&X-Amz-Signature=de1662705dc17482c0345360c78f5cb19285161221ac56b7ddf304d6e9e9a085&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
