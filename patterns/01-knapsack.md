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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XUGJZ3X%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCm2prtGahM%2FPzYN8kIEV9p%2FoQo6M7Egv67dBp9SMy%2BbwIhANA2yHqhuY9DJw387VHRGERNUk9oeEYS91uIou8s5gAYKogECNL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgydRmpJv%2FN1t2EQbXAq3APDBcSCtPhIMB2o7Dkl7px%2F2CydxkVKAoezE7vB0q7GXWrQ3P1Srlyk9wVa467oIplay3uBCHBb1773DhtKbIsphZE8MgR9QG0WyThqAkGENA9y7sSzCQvTsWM6APUSDvbBOL1%2FBiuSmhqrLj9gbwcH9ckr%2BrzcNXiJJHTU64WgUH7Qkq%2FYFrAbNkEMu6jQdGaBUXjiCl89P4gN6gUBeBQKgt3wzwm%2Fs37b57kqRE7gOsvPTEPV8h2mqLFoqtdYkgcWwFFZsPNTFuD%2BLa75S3hbxWQmO9srZTrj%2FwlfvqdxmZ6%2FXkku1WSLmzYG9JyaJuORRcAHKy8ABslBs2yPAlhdn9LgXlVSCSO2GorMXfUr8CNkW14Rzimr5rdxs4hasOne2mEBZweEJ7uhth7RUQa4ytBD1IFYROsT%2BPEKtj07eLHEdkUwV2v9213sLyW5%2BHkOTxprJ385mn0GO0UqdYORnY9Bcvg9WHGemzSirFSpMy5Rhsllwc35G4ln%2F%2F4Z3qWHsccXu10irg%2F4hM6WkCNo16JsUY%2Fmeg9SUZmNyu8WBK6HuZJR8Unjp7slS3NSwBpYDVU70tCY4BcsDPmbDDzAGBOm8Sepmv%2BQCphF1zhKkpxVJlyI8D%2BLQNzSFzCd74fPBjqkAYaUTeARnyNmpTIQViyGPgWVT4lWsxD%2F3Op0WlGsjbyXDQIGEVySu%2Bh7%2F3fdIBcEhZ5gLsTKOi%2Fc6%2BiwhjUIvAB8URCPcDaI8tDUWuH3FAnzBmMZxYZmkUnG6tGL4Z9U3LezDNpLq6R1UZrOX05%2F15Yum4rrDRwSGRPlSG9%2BOcXuTJL%2B7x1ovnM%2BfUlZbtqI1wYFR06ZCbVwt6aDDYziDx67t9mN&X-Amz-Signature=700046275fe4d7edcff40b8ca8f1803d6933fd1006e62340cbfc49e9cee9c47f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XUGJZ3X%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCm2prtGahM%2FPzYN8kIEV9p%2FoQo6M7Egv67dBp9SMy%2BbwIhANA2yHqhuY9DJw387VHRGERNUk9oeEYS91uIou8s5gAYKogECNL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgydRmpJv%2FN1t2EQbXAq3APDBcSCtPhIMB2o7Dkl7px%2F2CydxkVKAoezE7vB0q7GXWrQ3P1Srlyk9wVa467oIplay3uBCHBb1773DhtKbIsphZE8MgR9QG0WyThqAkGENA9y7sSzCQvTsWM6APUSDvbBOL1%2FBiuSmhqrLj9gbwcH9ckr%2BrzcNXiJJHTU64WgUH7Qkq%2FYFrAbNkEMu6jQdGaBUXjiCl89P4gN6gUBeBQKgt3wzwm%2Fs37b57kqRE7gOsvPTEPV8h2mqLFoqtdYkgcWwFFZsPNTFuD%2BLa75S3hbxWQmO9srZTrj%2FwlfvqdxmZ6%2FXkku1WSLmzYG9JyaJuORRcAHKy8ABslBs2yPAlhdn9LgXlVSCSO2GorMXfUr8CNkW14Rzimr5rdxs4hasOne2mEBZweEJ7uhth7RUQa4ytBD1IFYROsT%2BPEKtj07eLHEdkUwV2v9213sLyW5%2BHkOTxprJ385mn0GO0UqdYORnY9Bcvg9WHGemzSirFSpMy5Rhsllwc35G4ln%2F%2F4Z3qWHsccXu10irg%2F4hM6WkCNo16JsUY%2Fmeg9SUZmNyu8WBK6HuZJR8Unjp7slS3NSwBpYDVU70tCY4BcsDPmbDDzAGBOm8Sepmv%2BQCphF1zhKkpxVJlyI8D%2BLQNzSFzCd74fPBjqkAYaUTeARnyNmpTIQViyGPgWVT4lWsxD%2F3Op0WlGsjbyXDQIGEVySu%2Bh7%2F3fdIBcEhZ5gLsTKOi%2Fc6%2BiwhjUIvAB8URCPcDaI8tDUWuH3FAnzBmMZxYZmkUnG6tGL4Z9U3LezDNpLq6R1UZrOX05%2F15Yum4rrDRwSGRPlSG9%2BOcXuTJL%2B7x1ovnM%2BfUlZbtqI1wYFR06ZCbVwt6aDDYziDx67t9mN&X-Amz-Signature=1cef3c30d756bd64dee5acc7e1969d0affc3d772a3da790a6237f61de3e5989e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XUGJZ3X%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091700Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCm2prtGahM%2FPzYN8kIEV9p%2FoQo6M7Egv67dBp9SMy%2BbwIhANA2yHqhuY9DJw387VHRGERNUk9oeEYS91uIou8s5gAYKogECNL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgydRmpJv%2FN1t2EQbXAq3APDBcSCtPhIMB2o7Dkl7px%2F2CydxkVKAoezE7vB0q7GXWrQ3P1Srlyk9wVa467oIplay3uBCHBb1773DhtKbIsphZE8MgR9QG0WyThqAkGENA9y7sSzCQvTsWM6APUSDvbBOL1%2FBiuSmhqrLj9gbwcH9ckr%2BrzcNXiJJHTU64WgUH7Qkq%2FYFrAbNkEMu6jQdGaBUXjiCl89P4gN6gUBeBQKgt3wzwm%2Fs37b57kqRE7gOsvPTEPV8h2mqLFoqtdYkgcWwFFZsPNTFuD%2BLa75S3hbxWQmO9srZTrj%2FwlfvqdxmZ6%2FXkku1WSLmzYG9JyaJuORRcAHKy8ABslBs2yPAlhdn9LgXlVSCSO2GorMXfUr8CNkW14Rzimr5rdxs4hasOne2mEBZweEJ7uhth7RUQa4ytBD1IFYROsT%2BPEKtj07eLHEdkUwV2v9213sLyW5%2BHkOTxprJ385mn0GO0UqdYORnY9Bcvg9WHGemzSirFSpMy5Rhsllwc35G4ln%2F%2F4Z3qWHsccXu10irg%2F4hM6WkCNo16JsUY%2Fmeg9SUZmNyu8WBK6HuZJR8Unjp7slS3NSwBpYDVU70tCY4BcsDPmbDDzAGBOm8Sepmv%2BQCphF1zhKkpxVJlyI8D%2BLQNzSFzCd74fPBjqkAYaUTeARnyNmpTIQViyGPgWVT4lWsxD%2F3Op0WlGsjbyXDQIGEVySu%2Bh7%2F3fdIBcEhZ5gLsTKOi%2Fc6%2BiwhjUIvAB8URCPcDaI8tDUWuH3FAnzBmMZxYZmkUnG6tGL4Z9U3LezDNpLq6R1UZrOX05%2F15Yum4rrDRwSGRPlSG9%2BOcXuTJL%2B7x1ovnM%2BfUlZbtqI1wYFR06ZCbVwt6aDDYziDx67t9mN&X-Amz-Signature=aa7ba4611dbcfd3d91e4ce89cc1a4239f8b5c23df04e3139f204ca8d5100050b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664LQSDKFB%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIBOqxE5Hl6jtVsZsdaimFNxehsaancIgrwzj5kRuQqH%2FAiEAx%2BqUjLZiuqtykc00CUc%2BbSYa5RZcbGZF18kZ3ShYUgwqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDu0Uh2nq1rROhEbmSrcA0XU72czHB0Iw1BjeQMAEE7j5GLmnsxAl5QnvR7%2FrM5QRfDZ6nHaA%2Bqs3MB6OXeE54%2FKY9FbRukcaz2Y0X%2BEzozF%2BgPSjOtMfejexoPQas09y1whDymTs6%2FdFMFStzZc1DVLlTjbJ82YAs4QkKnOvha9xfX78%2Bz7nfIyrSoOcok90MnqG1OjWnyf8xqDvJPJhhYZ%2FF46FN76EGttQZ8xbHZ74oXiGnX0mKme5U70iEO8HfX7YrXsHQkth4vrqJcrsShXK5bTOyoDIHjV0q7Mq5TAq2u3Ya0u0UX1lO%2BsaEa8Y96RTF73A2nKALS01IC3C76WV1Fh86O8yddfDGfJ8WlmlPT1gGErnsaFlJ9ikSgh6WAMlYNyJeV27lx83VfQMp%2FPIOlnvQubPRVSn0B0n67TAC%2B4JvYrkeSPXThZFkAhORWpdDRyxDakjD%2BFFQx%2FvpCOeHeA8sA%2FdtVPiovaXj6onvaejSSp3X1TaSuAK2e%2FjJ3A2gv%2B7GCmenSAg2%2B%2F991qdBN4xW3lt1xkG3ZdycWWcep%2B1AwdFXzCekM2EbVgKDH4zCrzy1IjLwt0xMsSa00d5IsmmzCsfoyrbRSQPP7%2B9qg5LAZt6oFCFoSL0%2FPVWrfGJMqlcpxUc3ccMIHsh88GOqUBOikl5dF9oUrYiFX0XQJ2Q%2Fqk4eJmxfC3syXk%2BoAi7sFY%2BL335xaB8FYNA32tq8WnUr5FrRh34hLc5gZiiytbFkXNO7V0Wp4UnHGM9BG9E9UER7crs0Edw5t3J0nujocYRT%2FJ%2B%2Fv0p3uYK1p5VXLMqpTFDgoTj6i2%2FI8j81%2BBridDBhu9dsOA63DnNfYW%2B%2Forz1NcnHCBIQBiBMejixYFGS4DXkKS&X-Amz-Signature=08ebb3a8ebf3a387fa9f0d8222a5f07f316d8a5664aa8078af027c190e1c7200&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664LQSDKFB%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIBOqxE5Hl6jtVsZsdaimFNxehsaancIgrwzj5kRuQqH%2FAiEAx%2BqUjLZiuqtykc00CUc%2BbSYa5RZcbGZF18kZ3ShYUgwqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDu0Uh2nq1rROhEbmSrcA0XU72czHB0Iw1BjeQMAEE7j5GLmnsxAl5QnvR7%2FrM5QRfDZ6nHaA%2Bqs3MB6OXeE54%2FKY9FbRukcaz2Y0X%2BEzozF%2BgPSjOtMfejexoPQas09y1whDymTs6%2FdFMFStzZc1DVLlTjbJ82YAs4QkKnOvha9xfX78%2Bz7nfIyrSoOcok90MnqG1OjWnyf8xqDvJPJhhYZ%2FF46FN76EGttQZ8xbHZ74oXiGnX0mKme5U70iEO8HfX7YrXsHQkth4vrqJcrsShXK5bTOyoDIHjV0q7Mq5TAq2u3Ya0u0UX1lO%2BsaEa8Y96RTF73A2nKALS01IC3C76WV1Fh86O8yddfDGfJ8WlmlPT1gGErnsaFlJ9ikSgh6WAMlYNyJeV27lx83VfQMp%2FPIOlnvQubPRVSn0B0n67TAC%2B4JvYrkeSPXThZFkAhORWpdDRyxDakjD%2BFFQx%2FvpCOeHeA8sA%2FdtVPiovaXj6onvaejSSp3X1TaSuAK2e%2FjJ3A2gv%2B7GCmenSAg2%2B%2F991qdBN4xW3lt1xkG3ZdycWWcep%2B1AwdFXzCekM2EbVgKDH4zCrzy1IjLwt0xMsSa00d5IsmmzCsfoyrbRSQPP7%2B9qg5LAZt6oFCFoSL0%2FPVWrfGJMqlcpxUc3ccMIHsh88GOqUBOikl5dF9oUrYiFX0XQJ2Q%2Fqk4eJmxfC3syXk%2BoAi7sFY%2BL335xaB8FYNA32tq8WnUr5FrRh34hLc5gZiiytbFkXNO7V0Wp4UnHGM9BG9E9UER7crs0Edw5t3J0nujocYRT%2FJ%2B%2Fv0p3uYK1p5VXLMqpTFDgoTj6i2%2FI8j81%2BBridDBhu9dsOA63DnNfYW%2B%2Forz1NcnHCBIQBiBMejixYFGS4DXkKS&X-Amz-Signature=0f8250f7e535ccad0d704cc221a6b6bf89cef3a130eb102b907d9de3f0196576&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664LQSDKFB%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIBOqxE5Hl6jtVsZsdaimFNxehsaancIgrwzj5kRuQqH%2FAiEAx%2BqUjLZiuqtykc00CUc%2BbSYa5RZcbGZF18kZ3ShYUgwqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDu0Uh2nq1rROhEbmSrcA0XU72czHB0Iw1BjeQMAEE7j5GLmnsxAl5QnvR7%2FrM5QRfDZ6nHaA%2Bqs3MB6OXeE54%2FKY9FbRukcaz2Y0X%2BEzozF%2BgPSjOtMfejexoPQas09y1whDymTs6%2FdFMFStzZc1DVLlTjbJ82YAs4QkKnOvha9xfX78%2Bz7nfIyrSoOcok90MnqG1OjWnyf8xqDvJPJhhYZ%2FF46FN76EGttQZ8xbHZ74oXiGnX0mKme5U70iEO8HfX7YrXsHQkth4vrqJcrsShXK5bTOyoDIHjV0q7Mq5TAq2u3Ya0u0UX1lO%2BsaEa8Y96RTF73A2nKALS01IC3C76WV1Fh86O8yddfDGfJ8WlmlPT1gGErnsaFlJ9ikSgh6WAMlYNyJeV27lx83VfQMp%2FPIOlnvQubPRVSn0B0n67TAC%2B4JvYrkeSPXThZFkAhORWpdDRyxDakjD%2BFFQx%2FvpCOeHeA8sA%2FdtVPiovaXj6onvaejSSp3X1TaSuAK2e%2FjJ3A2gv%2B7GCmenSAg2%2B%2F991qdBN4xW3lt1xkG3ZdycWWcep%2B1AwdFXzCekM2EbVgKDH4zCrzy1IjLwt0xMsSa00d5IsmmzCsfoyrbRSQPP7%2B9qg5LAZt6oFCFoSL0%2FPVWrfGJMqlcpxUc3ccMIHsh88GOqUBOikl5dF9oUrYiFX0XQJ2Q%2Fqk4eJmxfC3syXk%2BoAi7sFY%2BL335xaB8FYNA32tq8WnUr5FrRh34hLc5gZiiytbFkXNO7V0Wp4UnHGM9BG9E9UER7crs0Edw5t3J0nujocYRT%2FJ%2B%2Fv0p3uYK1p5VXLMqpTFDgoTj6i2%2FI8j81%2BBridDBhu9dsOA63DnNfYW%2B%2Forz1NcnHCBIQBiBMejixYFGS4DXkKS&X-Amz-Signature=2e7d30a534b232ed35c9ea36f610cbfba39bf34eaf29abe12bbdccefe1aab892&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664LQSDKFB%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091704Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIBOqxE5Hl6jtVsZsdaimFNxehsaancIgrwzj5kRuQqH%2FAiEAx%2BqUjLZiuqtykc00CUc%2BbSYa5RZcbGZF18kZ3ShYUgwqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDu0Uh2nq1rROhEbmSrcA0XU72czHB0Iw1BjeQMAEE7j5GLmnsxAl5QnvR7%2FrM5QRfDZ6nHaA%2Bqs3MB6OXeE54%2FKY9FbRukcaz2Y0X%2BEzozF%2BgPSjOtMfejexoPQas09y1whDymTs6%2FdFMFStzZc1DVLlTjbJ82YAs4QkKnOvha9xfX78%2Bz7nfIyrSoOcok90MnqG1OjWnyf8xqDvJPJhhYZ%2FF46FN76EGttQZ8xbHZ74oXiGnX0mKme5U70iEO8HfX7YrXsHQkth4vrqJcrsShXK5bTOyoDIHjV0q7Mq5TAq2u3Ya0u0UX1lO%2BsaEa8Y96RTF73A2nKALS01IC3C76WV1Fh86O8yddfDGfJ8WlmlPT1gGErnsaFlJ9ikSgh6WAMlYNyJeV27lx83VfQMp%2FPIOlnvQubPRVSn0B0n67TAC%2B4JvYrkeSPXThZFkAhORWpdDRyxDakjD%2BFFQx%2FvpCOeHeA8sA%2FdtVPiovaXj6onvaejSSp3X1TaSuAK2e%2FjJ3A2gv%2B7GCmenSAg2%2B%2F991qdBN4xW3lt1xkG3ZdycWWcep%2B1AwdFXzCekM2EbVgKDH4zCrzy1IjLwt0xMsSa00d5IsmmzCsfoyrbRSQPP7%2B9qg5LAZt6oFCFoSL0%2FPVWrfGJMqlcpxUc3ccMIHsh88GOqUBOikl5dF9oUrYiFX0XQJ2Q%2Fqk4eJmxfC3syXk%2BoAi7sFY%2BL335xaB8FYNA32tq8WnUr5FrRh34hLc5gZiiytbFkXNO7V0Wp4UnHGM9BG9E9UER7crs0Edw5t3J0nujocYRT%2FJ%2B%2Fv0p3uYK1p5VXLMqpTFDgoTj6i2%2FI8j81%2BBridDBhu9dsOA63DnNfYW%2B%2Forz1NcnHCBIQBiBMejixYFGS4DXkKS&X-Amz-Signature=0edffd73fd4b949d5d340d7bb086a08accf3c380cfac656a8bee66270d8537a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YIKHZIVJ%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091705Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJGMEQCIGSvWGE3dXFvd%2FT2IrbsP9IkS2ng8gRjynLVPIYqxHC1AiAZ22nQnkcuxHDSMj6gP8vqCPksk3VHhDYhIiiBAz6jaSqIBAjS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvjZCUxAajvXpAj9fKtwDh44CPsX7X1dVJTc%2BHyyw5%2Fhj39dXeTQQoKaJ88BD1onkA1rFezGtd9wJaLUWUL168GHZbk8u1cdtsYIX9lpH3yHi49BZQnZLyXvjSvmsFiFjAFixbAc2W2VAlNYd0OINI%2ByPaj3mEddwY1tcvD1MtIsFYlyqri%2BUYydgz%2BL0VOQ7aUcvI7QZ45uW5AkU8Q0uCRBbvyfXHsa3NMQHktmIFfvmqJMEkzYbl3%2BCW4%2BqjuGHJSh5nw5zI3cFB3kjKsew9PCpjCzLKlXehVOBMlOvQMKlwjwj1hV6H3Y0pF%2BGkF%2B5pJsEb8CRFL2S%2BIenWALASWB%2Bahxqj78rIM1OI0dJC2aTpABwQoKdAmSVeX6lV%2FIH2o9zH1L6a1wXVAp3QGtYyFrHwpOCuIiKFHg0V4U0b3q5VMoedUVle5zG1EBb81MPVly%2B%2FU4Q10tNKpysBTTGVkPISlLfvNJW6wpXsiYKDfXJRiiDWKT3Y8NXr%2Fk2pVw5gmQQnTfwp0ibCMY1ENKM1vuKZU7UuK0gEf%2F0rNvdCIcYaelYJcOW9ejqN7MkxBuDkt3cjpygA17kloLiiVO87DPjMQmYKZjHzs%2FEFU5oZrBqmkDPoZr2Z7viqQ81jk%2FGnj9s9fVzjwdQMr8wr%2ByHzwY6pgE%2BqzyIZk%2B4b7cgimI85xpnbWxKl31WlUf5TapHmR0oduRMxY3XnkD58eIg%2BYLtYheoBkrKkZ336hvnkq8ZtppaBNJ8LySGqaa%2BqEsZX818mHFI1TaWQDrcFs0p4Zu5DWzVVDW7p%2BJRIz%2B7dNVJdRguWsSXAkkPscKkvRG8NZNuFyFQYRmCbDBRQAZd6cHvVOQ5fmSnoxaIpL9ZvZEhLiTHiwaeClUR&X-Amz-Signature=c10a94bc1506958cfc68dfb854594007995cd51e39d60c0b2f6ed4f6ef064cb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WTSRIR4F%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091705Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCYo944s1YsuBvDrkJATK5eziDs1rvWqS5kaSIaNDfyWgIgElx6cAh%2FkPWXarxp8QvUf1siWMhZjBx9jXy%2BzHZrQr0qiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBGWGCkScUxpXQPh1ircA8PO1H5XCMQvU%2FqaGya3%2B1u%2FzFj2D3G9FCkrRuKGbih2Remn42rgB%2B6kGq99%2FAQpa6OaNqj3sYqQDMSOjd5uGxhLhcWlV03DgwWjCfZf7gR3X1CDVk5IADC8uM8zqXKpruTsTFQpvv4GA1FQynixu0oF733UNcVLa3hqs58%2F6TZUeZfP0fwLxiOFL4k3YRduBBj4auMAuo7bIsXx0Xi%2BOB7jZqkq75dKoxl0EEdx3O3lsWmEpQnXF%2F0NTG64Z7wc1sJUH7lkWdGWNjo5hfCtU5V4r30KOgcffEydYzlVYeeTJ%2FoNGpt0WRaE2WureUdR%2FQQ%2FzWC2r53YBZkWO65ratk64nabJsnmuHoqRU6w12fSdWqgPcqsnljpzYELs1QchQnTTq9qje5IicwlAY76txLWiulOMA10sycLRjFSwBmq2%2BGN9Y8dCnATAxM0rEy6Ce89ct1c%2Flz0xKQ%2FQ4TT3Whowp33MArwlc6TDXtQs91XLqf9DRit84H4pvaC99MoQ0HGM%2BNmqr4xUcGPgDN1u0S5xOiej4ZOU9IhOiEhoIOfZsLf6M5EwWMNeVCMoKr%2BX51OERmdiTQcztzKGU%2BT4GOYOzi0LSUKXDoAotFb2B7ynlIr96bUCSjEsba0MNfth88GOqUBMt0y%2BSLH1sZN3XKd5%2FbwmF82iFSgyi61HXG2mbM2SF59F%2BJf8RVoi5MNfW%2BAfO4dQ%2BY3ou9D2uPteLgC2HKD9VIEUkSUNz3oL94Ud7EyGeknC86mrivBeSbVrU3Ej%2F0KG8nYUMgs2qTtDA%2BVPcTTR5cYlrDraK4y2AgpeXMPiE6aIZBKcppG9IFwfDsj5mOXzWi1u6j91TfD3uyOIgyfVtPOVc5x&X-Amz-Signature=058d67e2c725db2b069ec1c6df15bfbe893c70f56e8e655dc55750d7d96b8f4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WTSRIR4F%2F20260417%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260417T091705Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCYo944s1YsuBvDrkJATK5eziDs1rvWqS5kaSIaNDfyWgIgElx6cAh%2FkPWXarxp8QvUf1siWMhZjBx9jXy%2BzHZrQr0qiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBGWGCkScUxpXQPh1ircA8PO1H5XCMQvU%2FqaGya3%2B1u%2FzFj2D3G9FCkrRuKGbih2Remn42rgB%2B6kGq99%2FAQpa6OaNqj3sYqQDMSOjd5uGxhLhcWlV03DgwWjCfZf7gR3X1CDVk5IADC8uM8zqXKpruTsTFQpvv4GA1FQynixu0oF733UNcVLa3hqs58%2F6TZUeZfP0fwLxiOFL4k3YRduBBj4auMAuo7bIsXx0Xi%2BOB7jZqkq75dKoxl0EEdx3O3lsWmEpQnXF%2F0NTG64Z7wc1sJUH7lkWdGWNjo5hfCtU5V4r30KOgcffEydYzlVYeeTJ%2FoNGpt0WRaE2WureUdR%2FQQ%2FzWC2r53YBZkWO65ratk64nabJsnmuHoqRU6w12fSdWqgPcqsnljpzYELs1QchQnTTq9qje5IicwlAY76txLWiulOMA10sycLRjFSwBmq2%2BGN9Y8dCnATAxM0rEy6Ce89ct1c%2Flz0xKQ%2FQ4TT3Whowp33MArwlc6TDXtQs91XLqf9DRit84H4pvaC99MoQ0HGM%2BNmqr4xUcGPgDN1u0S5xOiej4ZOU9IhOiEhoIOfZsLf6M5EwWMNeVCMoKr%2BX51OERmdiTQcztzKGU%2BT4GOYOzi0LSUKXDoAotFb2B7ynlIr96bUCSjEsba0MNfth88GOqUBMt0y%2BSLH1sZN3XKd5%2FbwmF82iFSgyi61HXG2mbM2SF59F%2BJf8RVoi5MNfW%2BAfO4dQ%2BY3ou9D2uPteLgC2HKD9VIEUkSUNz3oL94Ud7EyGeknC86mrivBeSbVrU3Ej%2F0KG8nYUMgs2qTtDA%2BVPcTTR5cYlrDraK4y2AgpeXMPiE6aIZBKcppG9IFwfDsj5mOXzWi1u6j91TfD3uyOIgyfVtPOVc5x&X-Amz-Signature=550f811f951a07185d5a2d269c46e26f28e49977b8273869d10947563d7647b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
