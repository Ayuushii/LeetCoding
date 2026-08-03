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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WB7NLF2T%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDn5Q3srkP746uLA0IMusC3cs4jYte4ItnfAgTaTYt9GwIhAIk00wFsWxyDmouMYp%2FRNo52Lu7bnWiIaIVP68k17tKRKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFQUFr%2FLk2MVH7gRoq3APyVf0Lq0cKSbWxroGwg7jUrpQITb%2Bp13Uxkf1wg7FrfoR1JBrIuVKE1m0w0tiA6YiPzoRIIbLM3ijKjN5xEERZmwfcPUw6F5NoTNXPwpe5qlY080BCgCEHEqjadfF%2BFVSXGQFh4zLM4IPPBd%2BooqbmbK0H78g7Tw3E7U0YLpEXrO2S6K4pv%2BfIaFuIgm%2FMZSa0z51mCs34tZWN31KTe556wsKQtjLIbvNJTSdZFWZ9J3iCz4YN2CpVG8TeEeArPU9R7lieP8jhxGDADhXu6%2F%2FmkRsRQrqoNvasP1u9tg%2F3iZkhDgHWfttG99%2BQWAjb3QYCaHwnEBRCFhA1jPYZKEytZMzCwAn%2BBGbQaSeeRipIZ20qkdn0GoF9Bu7y%2FCB4zckEStG%2BaqVjFuHb95v5qbfFxXvbcOMZGQ7%2B2eMhXgZ4eHQmzxQYUeL3o6aEe3pLRAYllnC2JPa9px7bg2d3BNFrl5MbWjTumzRgwctUWKDTxZiNb3BrZbSU3ju4uGjB%2BpK4snP5MXk1XT65xkxWMugeSwDH5EFAD99B1TQd7%2FAvmKIMnqXiEQsFUoODeLmToy6cLc9Py8xAhZ2Cnxndz6wKSnhYIKGt9ceyY8YGzWTmVKT62ZGPEGeLlPEjvTC3iMHTBjqkAXZCMf6qt%2B4lhbr225R5LHiueJ37rQqAlXIdEMKn8%2BvXAdVMnlJ0Dnx%2BJ915CWXgFPp0y0C0w%2F9STqyRxb6pFuS3kcRz%2BjiGVQpbK2NoX13ncFIBC1%2BC%2B%2FIII5g75n2sYCg8s1Ba%2BF02c52G0zdT%2FXGaFb24xpJ%2BXk8MiDz6YtYHJAAelC9hPZ7G0HN963DHrjP75lOfOCy9osLVmsfbjTTiLvD4&X-Amz-Signature=b0e04a17c900f7226de5cd25eb22ed039a7d318aa2d942f970d9044e1b63b63b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WB7NLF2T%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDn5Q3srkP746uLA0IMusC3cs4jYte4ItnfAgTaTYt9GwIhAIk00wFsWxyDmouMYp%2FRNo52Lu7bnWiIaIVP68k17tKRKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFQUFr%2FLk2MVH7gRoq3APyVf0Lq0cKSbWxroGwg7jUrpQITb%2Bp13Uxkf1wg7FrfoR1JBrIuVKE1m0w0tiA6YiPzoRIIbLM3ijKjN5xEERZmwfcPUw6F5NoTNXPwpe5qlY080BCgCEHEqjadfF%2BFVSXGQFh4zLM4IPPBd%2BooqbmbK0H78g7Tw3E7U0YLpEXrO2S6K4pv%2BfIaFuIgm%2FMZSa0z51mCs34tZWN31KTe556wsKQtjLIbvNJTSdZFWZ9J3iCz4YN2CpVG8TeEeArPU9R7lieP8jhxGDADhXu6%2F%2FmkRsRQrqoNvasP1u9tg%2F3iZkhDgHWfttG99%2BQWAjb3QYCaHwnEBRCFhA1jPYZKEytZMzCwAn%2BBGbQaSeeRipIZ20qkdn0GoF9Bu7y%2FCB4zckEStG%2BaqVjFuHb95v5qbfFxXvbcOMZGQ7%2B2eMhXgZ4eHQmzxQYUeL3o6aEe3pLRAYllnC2JPa9px7bg2d3BNFrl5MbWjTumzRgwctUWKDTxZiNb3BrZbSU3ju4uGjB%2BpK4snP5MXk1XT65xkxWMugeSwDH5EFAD99B1TQd7%2FAvmKIMnqXiEQsFUoODeLmToy6cLc9Py8xAhZ2Cnxndz6wKSnhYIKGt9ceyY8YGzWTmVKT62ZGPEGeLlPEjvTC3iMHTBjqkAXZCMf6qt%2B4lhbr225R5LHiueJ37rQqAlXIdEMKn8%2BvXAdVMnlJ0Dnx%2BJ915CWXgFPp0y0C0w%2F9STqyRxb6pFuS3kcRz%2BjiGVQpbK2NoX13ncFIBC1%2BC%2B%2FIII5g75n2sYCg8s1Ba%2BF02c52G0zdT%2FXGaFb24xpJ%2BXk8MiDz6YtYHJAAelC9hPZ7G0HN963DHrjP75lOfOCy9osLVmsfbjTTiLvD4&X-Amz-Signature=e97e9079a5507f2e15ff88a824ea1e7001b4711119f7d4fa8cc5c78d38513ad8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WB7NLF2T%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDn5Q3srkP746uLA0IMusC3cs4jYte4ItnfAgTaTYt9GwIhAIk00wFsWxyDmouMYp%2FRNo52Lu7bnWiIaIVP68k17tKRKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFQUFr%2FLk2MVH7gRoq3APyVf0Lq0cKSbWxroGwg7jUrpQITb%2Bp13Uxkf1wg7FrfoR1JBrIuVKE1m0w0tiA6YiPzoRIIbLM3ijKjN5xEERZmwfcPUw6F5NoTNXPwpe5qlY080BCgCEHEqjadfF%2BFVSXGQFh4zLM4IPPBd%2BooqbmbK0H78g7Tw3E7U0YLpEXrO2S6K4pv%2BfIaFuIgm%2FMZSa0z51mCs34tZWN31KTe556wsKQtjLIbvNJTSdZFWZ9J3iCz4YN2CpVG8TeEeArPU9R7lieP8jhxGDADhXu6%2F%2FmkRsRQrqoNvasP1u9tg%2F3iZkhDgHWfttG99%2BQWAjb3QYCaHwnEBRCFhA1jPYZKEytZMzCwAn%2BBGbQaSeeRipIZ20qkdn0GoF9Bu7y%2FCB4zckEStG%2BaqVjFuHb95v5qbfFxXvbcOMZGQ7%2B2eMhXgZ4eHQmzxQYUeL3o6aEe3pLRAYllnC2JPa9px7bg2d3BNFrl5MbWjTumzRgwctUWKDTxZiNb3BrZbSU3ju4uGjB%2BpK4snP5MXk1XT65xkxWMugeSwDH5EFAD99B1TQd7%2FAvmKIMnqXiEQsFUoODeLmToy6cLc9Py8xAhZ2Cnxndz6wKSnhYIKGt9ceyY8YGzWTmVKT62ZGPEGeLlPEjvTC3iMHTBjqkAXZCMf6qt%2B4lhbr225R5LHiueJ37rQqAlXIdEMKn8%2BvXAdVMnlJ0Dnx%2BJ915CWXgFPp0y0C0w%2F9STqyRxb6pFuS3kcRz%2BjiGVQpbK2NoX13ncFIBC1%2BC%2B%2FIII5g75n2sYCg8s1Ba%2BF02c52G0zdT%2FXGaFb24xpJ%2BXk8MiDz6YtYHJAAelC9hPZ7G0HN963DHrjP75lOfOCy9osLVmsfbjTTiLvD4&X-Amz-Signature=2754e8d8744ad5d33d23aa65459585da3794127f7dabbc3cdb5c6b2016f1a062&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYUU575E%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIQDoIiyQKUISxo6%2FJDGJW%2FZP05Jfu9SS4wVy8b01ARMywAIgZwYZaItpcm7%2Bafa96XVnGjcLSJ0ebUSZ0gZhU0BptscqiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRkIHLYKr9pyg83xSrcA7yltDvdojHsiEYPPP4X71Viy3L%2F9KKVWjMj14LZRSQFBgdJN0BU%2FaX186iGysTnM0gtxfogO%2B7CqVTd1SyomMdCGuk9dMIeBWZ%2FdkEJF%2BFGE8qAlQhfpb5b9Zn9itiMkaG41uqMTCjxd6e1jG%2BOEn4ZOSFJoo5OcXspYy6eI0OqlHqsBOcQwiShyQ4d2Qz30TNsqNeXsam%2Bm0AV%2B30U1E77APs%2BIMyEozw196FvVlOzTpIknX%2FtofvWBO1XFp4OdzaDrbJFTZZlKImn1hB8CWHfltz8QLvRZQeo36E40%2FzwtERTDlO%2B675vBiyYeH%2FptwFTIG%2BP4qh%2Be33b5qPfI0b6qMCi9nFR93bA0fbP%2FFykmrZVe5anwDxHk88vjoLSx7kntjDdppev%2F1sprgpGTQDsdsiBS9xSDj059OfEsnckvROBkN%2FDFMLzz3wUe%2BFDUm4ZMbNl0AaSQPW1CmpaE92T1DxN6U4NFGkuHaevC0lQ5So0z9wKZNdsyXj3lWz1N6pJAzoQ3YTh373mCtdOSTZRO93RzDifFMGlB%2BGxPq2dtNQRk89%2FWOWpBc72w%2FniTAY3HOIuZJRuUsrTBrp9za32g1oKuPUeIQcoGopbdmGDPoJ6QTdIaFk6Z13zMKeLwdMGOqUB83lRlycL2OE%2FwLjJlBPKW4Gl4wEvDHinEZ62pld9L9FHlsKLiju4s8IE8CwIqg2f6M5ai4r10zWTJCEfw7NnMy4oQZWubqTuzJshe%2Fl%2FZSLhl8%2BGJ8Nc26dy%2B%2BDAPNBgZx9a7MP0yl%2FhTgrnn7q6HE9phIWlWp9CjgS5OB44mSAzImZgVUurbfFYXtJUg6sCJzNwjScVVXn2Hw7McwzQnVkA4DI8&X-Amz-Signature=897e73dd8ccd5e06e7c45b020ec5761dbfac192a95b6d5397ec963d7740d4ca1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYUU575E%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIQDoIiyQKUISxo6%2FJDGJW%2FZP05Jfu9SS4wVy8b01ARMywAIgZwYZaItpcm7%2Bafa96XVnGjcLSJ0ebUSZ0gZhU0BptscqiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRkIHLYKr9pyg83xSrcA7yltDvdojHsiEYPPP4X71Viy3L%2F9KKVWjMj14LZRSQFBgdJN0BU%2FaX186iGysTnM0gtxfogO%2B7CqVTd1SyomMdCGuk9dMIeBWZ%2FdkEJF%2BFGE8qAlQhfpb5b9Zn9itiMkaG41uqMTCjxd6e1jG%2BOEn4ZOSFJoo5OcXspYy6eI0OqlHqsBOcQwiShyQ4d2Qz30TNsqNeXsam%2Bm0AV%2B30U1E77APs%2BIMyEozw196FvVlOzTpIknX%2FtofvWBO1XFp4OdzaDrbJFTZZlKImn1hB8CWHfltz8QLvRZQeo36E40%2FzwtERTDlO%2B675vBiyYeH%2FptwFTIG%2BP4qh%2Be33b5qPfI0b6qMCi9nFR93bA0fbP%2FFykmrZVe5anwDxHk88vjoLSx7kntjDdppev%2F1sprgpGTQDsdsiBS9xSDj059OfEsnckvROBkN%2FDFMLzz3wUe%2BFDUm4ZMbNl0AaSQPW1CmpaE92T1DxN6U4NFGkuHaevC0lQ5So0z9wKZNdsyXj3lWz1N6pJAzoQ3YTh373mCtdOSTZRO93RzDifFMGlB%2BGxPq2dtNQRk89%2FWOWpBc72w%2FniTAY3HOIuZJRuUsrTBrp9za32g1oKuPUeIQcoGopbdmGDPoJ6QTdIaFk6Z13zMKeLwdMGOqUB83lRlycL2OE%2FwLjJlBPKW4Gl4wEvDHinEZ62pld9L9FHlsKLiju4s8IE8CwIqg2f6M5ai4r10zWTJCEfw7NnMy4oQZWubqTuzJshe%2Fl%2FZSLhl8%2BGJ8Nc26dy%2B%2BDAPNBgZx9a7MP0yl%2FhTgrnn7q6HE9phIWlWp9CjgS5OB44mSAzImZgVUurbfFYXtJUg6sCJzNwjScVVXn2Hw7McwzQnVkA4DI8&X-Amz-Signature=75ae4f6fbb7742e7489b15c7ccdb1cc6d604c55d4936c8b087430c2d642d92f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYUU575E%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIQDoIiyQKUISxo6%2FJDGJW%2FZP05Jfu9SS4wVy8b01ARMywAIgZwYZaItpcm7%2Bafa96XVnGjcLSJ0ebUSZ0gZhU0BptscqiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRkIHLYKr9pyg83xSrcA7yltDvdojHsiEYPPP4X71Viy3L%2F9KKVWjMj14LZRSQFBgdJN0BU%2FaX186iGysTnM0gtxfogO%2B7CqVTd1SyomMdCGuk9dMIeBWZ%2FdkEJF%2BFGE8qAlQhfpb5b9Zn9itiMkaG41uqMTCjxd6e1jG%2BOEn4ZOSFJoo5OcXspYy6eI0OqlHqsBOcQwiShyQ4d2Qz30TNsqNeXsam%2Bm0AV%2B30U1E77APs%2BIMyEozw196FvVlOzTpIknX%2FtofvWBO1XFp4OdzaDrbJFTZZlKImn1hB8CWHfltz8QLvRZQeo36E40%2FzwtERTDlO%2B675vBiyYeH%2FptwFTIG%2BP4qh%2Be33b5qPfI0b6qMCi9nFR93bA0fbP%2FFykmrZVe5anwDxHk88vjoLSx7kntjDdppev%2F1sprgpGTQDsdsiBS9xSDj059OfEsnckvROBkN%2FDFMLzz3wUe%2BFDUm4ZMbNl0AaSQPW1CmpaE92T1DxN6U4NFGkuHaevC0lQ5So0z9wKZNdsyXj3lWz1N6pJAzoQ3YTh373mCtdOSTZRO93RzDifFMGlB%2BGxPq2dtNQRk89%2FWOWpBc72w%2FniTAY3HOIuZJRuUsrTBrp9za32g1oKuPUeIQcoGopbdmGDPoJ6QTdIaFk6Z13zMKeLwdMGOqUB83lRlycL2OE%2FwLjJlBPKW4Gl4wEvDHinEZ62pld9L9FHlsKLiju4s8IE8CwIqg2f6M5ai4r10zWTJCEfw7NnMy4oQZWubqTuzJshe%2Fl%2FZSLhl8%2BGJ8Nc26dy%2B%2BDAPNBgZx9a7MP0yl%2FhTgrnn7q6HE9phIWlWp9CjgS5OB44mSAzImZgVUurbfFYXtJUg6sCJzNwjScVVXn2Hw7McwzQnVkA4DI8&X-Amz-Signature=e49d1bd16f92739ce70aeb83921432673ece90ed7c71b4a0179c8d9a3b58a73d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYUU575E%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIQDoIiyQKUISxo6%2FJDGJW%2FZP05Jfu9SS4wVy8b01ARMywAIgZwYZaItpcm7%2Bafa96XVnGjcLSJ0ebUSZ0gZhU0BptscqiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLRkIHLYKr9pyg83xSrcA7yltDvdojHsiEYPPP4X71Viy3L%2F9KKVWjMj14LZRSQFBgdJN0BU%2FaX186iGysTnM0gtxfogO%2B7CqVTd1SyomMdCGuk9dMIeBWZ%2FdkEJF%2BFGE8qAlQhfpb5b9Zn9itiMkaG41uqMTCjxd6e1jG%2BOEn4ZOSFJoo5OcXspYy6eI0OqlHqsBOcQwiShyQ4d2Qz30TNsqNeXsam%2Bm0AV%2B30U1E77APs%2BIMyEozw196FvVlOzTpIknX%2FtofvWBO1XFp4OdzaDrbJFTZZlKImn1hB8CWHfltz8QLvRZQeo36E40%2FzwtERTDlO%2B675vBiyYeH%2FptwFTIG%2BP4qh%2Be33b5qPfI0b6qMCi9nFR93bA0fbP%2FFykmrZVe5anwDxHk88vjoLSx7kntjDdppev%2F1sprgpGTQDsdsiBS9xSDj059OfEsnckvROBkN%2FDFMLzz3wUe%2BFDUm4ZMbNl0AaSQPW1CmpaE92T1DxN6U4NFGkuHaevC0lQ5So0z9wKZNdsyXj3lWz1N6pJAzoQ3YTh373mCtdOSTZRO93RzDifFMGlB%2BGxPq2dtNQRk89%2FWOWpBc72w%2FniTAY3HOIuZJRuUsrTBrp9za32g1oKuPUeIQcoGopbdmGDPoJ6QTdIaFk6Z13zMKeLwdMGOqUB83lRlycL2OE%2FwLjJlBPKW4Gl4wEvDHinEZ62pld9L9FHlsKLiju4s8IE8CwIqg2f6M5ai4r10zWTJCEfw7NnMy4oQZWubqTuzJshe%2Fl%2FZSLhl8%2BGJ8Nc26dy%2B%2BDAPNBgZx9a7MP0yl%2FhTgrnn7q6HE9phIWlWp9CjgS5OB44mSAzImZgVUurbfFYXtJUg6sCJzNwjScVVXn2Hw7McwzQnVkA4DI8&X-Amz-Signature=5b3435dc08abbdcf93fa598bac36371623899bceb7e8b463be9a6641bfde5da3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WJS5TYQ4%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112051Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIGEVNFrXv6qYn48ub1ZCfRULwE8JqfTpYDd7G08hMfRtAiEA54881%2B2walPBisDRtMtXIt%2FKs1xYmfQzX0vrkGX1duoqiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDARpTa3A4CNYvePoVyrcAwktIVHW0ldT9YZxQWxOUSViZnug1O5l2DI68ObplV3TTRywuRxxRJaQ8yZIcDaKI8kKXz218aFgtBPPcIpOzQrBbIMLM%2Fw0j1AQUN8XYDeH4ZEPyULQMwqdxOaXJy2jHupnYmLWd5h8YytGkGkFUogN2n586GKTEhE54dWE1DvxC3XTJ%2F7qyF4173lI1s9vUdm3ACWsIhtP5rmh7KjYkIMaP9LUwdqi%2FIc7QNF%2BQ%2FAdT1C4yYA0Kvy2zk6MxWL5K6IqnqT3M5uPO8msvHOFaOQNyWBiPj1RhjtfAJIh%2BH78uvFkCwV12WvNaTPwcKL9vehTEfROJnrKHA33oyFLC2hzvEomkOpcgDMbY3h3USMrxv41NsquMyam8GkWSOhp89jS%2F6TybTaO9cbhMhaCZ8IZoAkQ2EPniN9ptmZRyEixaF1ENZwDGsLgpg1569H2T1dW5YDVzRR152XEfqzy9RqqdPGMCYJZ6h6EqeWAnAZFptiRAMgyLq3i14mArKtCQMN4EXwaGBVH3LH%2B09j6D9YYRzadpzIers8PgerlI%2FxbYXlcSI26Zew3N0Lt7dMcIZPN4izZ%2BeL%2BsZc5VrNpJOIKHOgIYvtX8DEZVy1IpKkxBx%2BagfjUk1p0Nwc2MJmJwdMGOqUBilLIC3uXlZ%2BsgPFj05nFaVGD2ZZ38GtxcZOrLutQ%2FFTpZWdGEh5LQZzUrUd5rpzP5hldb%2FBIh2F04OmJXrDdCyl6xpmsd8%2FSgbSPXDyciMjPLMX5de%2Bol2eGZovfqFxk%2FgDv1JQfTAVU4nNQed%2Br0kCPbnJ1urBPVzn7o9LAeVXsEMQIX6H03zC8Wv0uWp0f7JS1GttjT8C%2FVVfjJh0voPZSiLZg&X-Amz-Signature=9438352c199183ccbb0cff4ec2c8535767c081d1f9c6680e7a3b0c969ed022c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MXPK72F%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112051Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIAw8FwM0l%2FSp4E8onEA8MWOhm1fhFFT%2FTMYn3Hyix%2B7OAiEAu%2FbUXAeObWXrMRbv70eyD9zOD6N%2Fiau1ZSUliUSA0n8qiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFe8gQd2f8sh3UU%2FCCrcA1s0NmCe3Skfvy95XOurlPJhMXuF7oBMn733q3OYUfa7diPiDFPdQ%2F4GqsesIMcA4DyMFC88XLYWRPrTgFo0LvXxmEm203LX2Ao4XXua2MS3LI9YqoP93dekBB8vyy2GiGlulXKeTmBXXP51Pai1ivDzWyx0P9Io2PgbaAp5DgQhRtS7POyL4E79xc124dasTQxyn5P5IFBLD2oss77TRIJGq%2B3e%2Fdy5gzyO52x1nSEWlwMOy0fqPe6UjFG8hbD%2F4ANkJbo9FBc62LJlIDPVKDv%2BxHuMS3pr1ilhemp9%2FoSF64epdI5z%2FbH4fzBXpAuQtC4Ng3EOrJBldSmuUIdfm6PZ8aRypCiDkD26Tecd2KlBAgUl2bgDglCd2VgNKLOKBtRYgAfloT5Uwushu1ZCcGSug9euwq0svU%2BnKhK7aA3jG%2BAZh1nNJpu1PEwPJqjv0irPeeRbWEsP9ukveErDa97f9Qe6HXINf3bSLr3gS37cElaQ5bleIp1ZCXSwcUlhGVKLX%2BDGmRi1qUpSSukryITRmWNcxPL0qKhnvIvNXX7lpqTR2FRHPeyvciW%2BScB70JTTVw%2BZJH0YaXmfJZkwY3Hcqe%2FL1CnJmQdz7YYRHYD48bj4K%2B3CR8ssDNQPMICIwdMGOqUBbpFIDviD0mmZm3gQUlUyqile1BjV2Yh4p9R%2BhgrQETEsCGUxakHzOKTD775t7CrMvrq%2BGnS83zda4ebbpJljhixP5rq15jFS3pvbRbFMcTc9Zpd1hOQXNNxs4Kf89iqdmeGs2Cjyhvhqc9ab4X2%2FpsP12z3dhAOP5gNGsMilkGgtTjU%2Fo7qdFv%2F5%2BbCnEnelvLIMSxnwkoJzGD62SskBM98xoirA&X-Amz-Signature=29b76b99d5828779eafa3598c4328ef2a99efcecb08b19ae252b48a90cf7df04&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MXPK72F%2F20260803%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260803T112051Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIAw8FwM0l%2FSp4E8onEA8MWOhm1fhFFT%2FTMYn3Hyix%2B7OAiEAu%2FbUXAeObWXrMRbv70eyD9zOD6N%2Fiau1ZSUliUSA0n8qiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFe8gQd2f8sh3UU%2FCCrcA1s0NmCe3Skfvy95XOurlPJhMXuF7oBMn733q3OYUfa7diPiDFPdQ%2F4GqsesIMcA4DyMFC88XLYWRPrTgFo0LvXxmEm203LX2Ao4XXua2MS3LI9YqoP93dekBB8vyy2GiGlulXKeTmBXXP51Pai1ivDzWyx0P9Io2PgbaAp5DgQhRtS7POyL4E79xc124dasTQxyn5P5IFBLD2oss77TRIJGq%2B3e%2Fdy5gzyO52x1nSEWlwMOy0fqPe6UjFG8hbD%2F4ANkJbo9FBc62LJlIDPVKDv%2BxHuMS3pr1ilhemp9%2FoSF64epdI5z%2FbH4fzBXpAuQtC4Ng3EOrJBldSmuUIdfm6PZ8aRypCiDkD26Tecd2KlBAgUl2bgDglCd2VgNKLOKBtRYgAfloT5Uwushu1ZCcGSug9euwq0svU%2BnKhK7aA3jG%2BAZh1nNJpu1PEwPJqjv0irPeeRbWEsP9ukveErDa97f9Qe6HXINf3bSLr3gS37cElaQ5bleIp1ZCXSwcUlhGVKLX%2BDGmRi1qUpSSukryITRmWNcxPL0qKhnvIvNXX7lpqTR2FRHPeyvciW%2BScB70JTTVw%2BZJH0YaXmfJZkwY3Hcqe%2FL1CnJmQdz7YYRHYD48bj4K%2B3CR8ssDNQPMICIwdMGOqUBbpFIDviD0mmZm3gQUlUyqile1BjV2Yh4p9R%2BhgrQETEsCGUxakHzOKTD775t7CrMvrq%2BGnS83zda4ebbpJljhixP5rq15jFS3pvbRbFMcTc9Zpd1hOQXNNxs4Kf89iqdmeGs2Cjyhvhqc9ab4X2%2FpsP12z3dhAOP5gNGsMilkGgtTjU%2Fo7qdFv%2F5%2BbCnEnelvLIMSxnwkoJzGD62SskBM98xoirA&X-Amz-Signature=69d651f0a28ed6c5986c7447168ab5fc03c704d9c8a3ab98083e2561a728881c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
