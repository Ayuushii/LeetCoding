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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UCOY6UNC%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIE67x4YstkAsGxS%2BxRCPZg6ed2zUX9scWTJRe8MgBowOAiEAp3wjVIqUztQ4jP7wO8yJnAcjiBLQul6him%2BzpFMee4Yq%2FwMIMxAAGgw2Mzc0MjMxODM4MDUiDNFlOvddfggufo7zFCrcA2SrVMd%2BHgqfkI%2Bkk5B6MBo6cohGIKoibuie8tDmkPPwmydkZdNcR5QOH8LN3L1Ml2lhjqwIIHXm3ylAe1OgYz%2BpcWADcuEmat2T0x0jKDa5AS8rI1yPZEDtIW3hBhrU652PBekHMjwa3OxQwPi43WzA5z4R8SNaRm8NMfvEBfOcKgXYJ%2FhrE42Rgq1UK5cftwRxAj0M9tjeyb%2BAkUPaj3SEZVvRKj8dcs0FKze4%2F5n9bcn6erHuUyC5AatO7g8HLEhgZGO2yjuVbX46iJhUBQ71oF9Gy4Ycy%2F3SFEPEwoc4qyLzy1bdvOkWaLqDYcsiFlvVTmipfk4v9Dml6Wt676Htz7J1D9s75dAugPWbWls7xqfasXqlTZCU9e1Rh70Z%2BSc4QZkR7Tj%2F4Yc3O59lw%2F%2FLw07%2F2p%2BEUoe0S0mgU8s4lFhG8UPakF93SjUDN%2BFp4yeQIUNi4j0s777Sb7qZtrb1AHiCS8%2F2JbVMEmzAS%2FU%2BgzkPkm4zpH%2B4QzWzz9Ljohvv9eQWUaSu26Bkm3zAX%2BPmcpTgdKM0OEh4b9%2BtvajBzDkTTwO8Z0InfUM1XhjKEqAFqttthOMoDPtrB01JA6iAIijw%2Bm%2F1fKt9oFtDPwR0sUnQymLXsWzkxBmJMOqsl9MGOqUBcwGILy7M1obKeZQ6Pdkhcfhj%2FK9b2V0ofoCW1mKivCC4sViBVretA1jNhTHrU%2BcbZhoivV8sd6Ld51tGl5PNorjcOcD3jwTv3vcxzLDgYnJFA2lQwd0Yt0S6itMbAwNPSVFpKI6e6JSXhgdDkAVJXvOZ8bcmePzWHpu05xyeRS9mwEzAuKgj2Tf5DrQgAtytzpmOvPFKKClykHtAfB7OKyw4iWbl&X-Amz-Signature=393ac829c1125635c2ecd8c6a17e5093e8b96e29f464a71e02f67aa8c137d204&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UCOY6UNC%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIE67x4YstkAsGxS%2BxRCPZg6ed2zUX9scWTJRe8MgBowOAiEAp3wjVIqUztQ4jP7wO8yJnAcjiBLQul6him%2BzpFMee4Yq%2FwMIMxAAGgw2Mzc0MjMxODM4MDUiDNFlOvddfggufo7zFCrcA2SrVMd%2BHgqfkI%2Bkk5B6MBo6cohGIKoibuie8tDmkPPwmydkZdNcR5QOH8LN3L1Ml2lhjqwIIHXm3ylAe1OgYz%2BpcWADcuEmat2T0x0jKDa5AS8rI1yPZEDtIW3hBhrU652PBekHMjwa3OxQwPi43WzA5z4R8SNaRm8NMfvEBfOcKgXYJ%2FhrE42Rgq1UK5cftwRxAj0M9tjeyb%2BAkUPaj3SEZVvRKj8dcs0FKze4%2F5n9bcn6erHuUyC5AatO7g8HLEhgZGO2yjuVbX46iJhUBQ71oF9Gy4Ycy%2F3SFEPEwoc4qyLzy1bdvOkWaLqDYcsiFlvVTmipfk4v9Dml6Wt676Htz7J1D9s75dAugPWbWls7xqfasXqlTZCU9e1Rh70Z%2BSc4QZkR7Tj%2F4Yc3O59lw%2F%2FLw07%2F2p%2BEUoe0S0mgU8s4lFhG8UPakF93SjUDN%2BFp4yeQIUNi4j0s777Sb7qZtrb1AHiCS8%2F2JbVMEmzAS%2FU%2BgzkPkm4zpH%2B4QzWzz9Ljohvv9eQWUaSu26Bkm3zAX%2BPmcpTgdKM0OEh4b9%2BtvajBzDkTTwO8Z0InfUM1XhjKEqAFqttthOMoDPtrB01JA6iAIijw%2Bm%2F1fKt9oFtDPwR0sUnQymLXsWzkxBmJMOqsl9MGOqUBcwGILy7M1obKeZQ6Pdkhcfhj%2FK9b2V0ofoCW1mKivCC4sViBVretA1jNhTHrU%2BcbZhoivV8sd6Ld51tGl5PNorjcOcD3jwTv3vcxzLDgYnJFA2lQwd0Yt0S6itMbAwNPSVFpKI6e6JSXhgdDkAVJXvOZ8bcmePzWHpu05xyeRS9mwEzAuKgj2Tf5DrQgAtytzpmOvPFKKClykHtAfB7OKyw4iWbl&X-Amz-Signature=663eda20d06f161af80d789879f63644e2b52931e3959f3ac338a60470664327&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UCOY6UNC%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJHMEUCIE67x4YstkAsGxS%2BxRCPZg6ed2zUX9scWTJRe8MgBowOAiEAp3wjVIqUztQ4jP7wO8yJnAcjiBLQul6him%2BzpFMee4Yq%2FwMIMxAAGgw2Mzc0MjMxODM4MDUiDNFlOvddfggufo7zFCrcA2SrVMd%2BHgqfkI%2Bkk5B6MBo6cohGIKoibuie8tDmkPPwmydkZdNcR5QOH8LN3L1Ml2lhjqwIIHXm3ylAe1OgYz%2BpcWADcuEmat2T0x0jKDa5AS8rI1yPZEDtIW3hBhrU652PBekHMjwa3OxQwPi43WzA5z4R8SNaRm8NMfvEBfOcKgXYJ%2FhrE42Rgq1UK5cftwRxAj0M9tjeyb%2BAkUPaj3SEZVvRKj8dcs0FKze4%2F5n9bcn6erHuUyC5AatO7g8HLEhgZGO2yjuVbX46iJhUBQ71oF9Gy4Ycy%2F3SFEPEwoc4qyLzy1bdvOkWaLqDYcsiFlvVTmipfk4v9Dml6Wt676Htz7J1D9s75dAugPWbWls7xqfasXqlTZCU9e1Rh70Z%2BSc4QZkR7Tj%2F4Yc3O59lw%2F%2FLw07%2F2p%2BEUoe0S0mgU8s4lFhG8UPakF93SjUDN%2BFp4yeQIUNi4j0s777Sb7qZtrb1AHiCS8%2F2JbVMEmzAS%2FU%2BgzkPkm4zpH%2B4QzWzz9Ljohvv9eQWUaSu26Bkm3zAX%2BPmcpTgdKM0OEh4b9%2BtvajBzDkTTwO8Z0InfUM1XhjKEqAFqttthOMoDPtrB01JA6iAIijw%2Bm%2F1fKt9oFtDPwR0sUnQymLXsWzkxBmJMOqsl9MGOqUBcwGILy7M1obKeZQ6Pdkhcfhj%2FK9b2V0ofoCW1mKivCC4sViBVretA1jNhTHrU%2BcbZhoivV8sd6Ld51tGl5PNorjcOcD3jwTv3vcxzLDgYnJFA2lQwd0Yt0S6itMbAwNPSVFpKI6e6JSXhgdDkAVJXvOZ8bcmePzWHpu05xyeRS9mwEzAuKgj2Tf5DrQgAtytzpmOvPFKKClykHtAfB7OKyw4iWbl&X-Amz-Signature=84de0b0c9329358e004fb71439eccdfd33112b558b09c91298b648a83e9d62b1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665QI44YOB%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQCc3pn59xeDWS8AHLbwsPQupx2H4QOm4Gtnr2sDWDJlaAIhANT79Cw9D3qJf7vCjHelJTRhvldf3AVmtAOyfr%2FugnOeKv8DCDMQABoMNjM3NDIzMTgzODA1Igz2DQ%2F6OzgR2%2FnY658q3AOIV49Nu4Acynp1CkPhKBxU6COovDSDG0DDPuzsocOOe%2BHMs24b08hSleDMG2NwMOZf9n45rooZvKAtyvS8zedcqpqiAAfgOQnrOJkm8vyzA4tPGEohA7pBArsGrAifGwZ1u1kxaYo2etz6psxZH91zIKDILAV%2BhuP6RIg5DGX%2Fm8desFwtCpAjlXBEWLLaUVZYednJ5ibhBT5VIsAEa%2F5D1sbzjDNk1ROqA2Ihg2YQZzaN%2Fa6lIlqCn24EXgxwLrhabi4jGkQiRi2Haf3FzfAK43HkjwjaHXuXGGMVuur7M4yR4ueyg0alTlAMwfJ43rVc5Msj7K1nbl0%2FsWfAoVw%2BaFuIv6WXEEAabM%2FR9DdUyKvESV5dU5LhMGhbc6PEBDWIlcF%2BTYgHRXkEgltW%2BCAehe5tRYjhMItoXGn%2FEjR6E6RV%2Fd7W4ACaOLUm1opckZRD1qTbKXbq3R2Wzeo%2BIHZG7uvySSSdPr%2BrbO7IRveLEszK1mrqFSF%2B7xK4v05wL1%2BWU8oIO37bWmBu12vq4znRr3d%2BWgDHF7bz6MsfL8tbpf7JPzLpVBNKWqFOQdXnj04t8nyiPinLxdzic4eBN0eCHw%2BY3EkYISciG8GboEZ28nbKDAH%2BHSWbybiTxTD%2BqpfTBjqkATtWq52%2BVUpuu0O31mVaN%2BPsmknSqvP4CTxGJfnT2sCTLzAsZQEqiPGB%2BfXh9f6tBsUC3g%2BY2nuGm%2FqPvuqtOV5ZY81eqS9lJ7nC7aDHgkpknXzjK%2F1pNwFsO941Kq44q6QjGIrsGaerYgwhfmibG7yR66rHKz77Rj6OwLm3wEAU0kkPMtzQjuAlUk70amkisG58VZRv8ejt4dL6kA66hE0sreI1&X-Amz-Signature=0b15d9d999b2d2b54f50f1ad4b6a147a9ee201c3fd15e5cbe2f45c9c06dca9e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665QI44YOB%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQCc3pn59xeDWS8AHLbwsPQupx2H4QOm4Gtnr2sDWDJlaAIhANT79Cw9D3qJf7vCjHelJTRhvldf3AVmtAOyfr%2FugnOeKv8DCDMQABoMNjM3NDIzMTgzODA1Igz2DQ%2F6OzgR2%2FnY658q3AOIV49Nu4Acynp1CkPhKBxU6COovDSDG0DDPuzsocOOe%2BHMs24b08hSleDMG2NwMOZf9n45rooZvKAtyvS8zedcqpqiAAfgOQnrOJkm8vyzA4tPGEohA7pBArsGrAifGwZ1u1kxaYo2etz6psxZH91zIKDILAV%2BhuP6RIg5DGX%2Fm8desFwtCpAjlXBEWLLaUVZYednJ5ibhBT5VIsAEa%2F5D1sbzjDNk1ROqA2Ihg2YQZzaN%2Fa6lIlqCn24EXgxwLrhabi4jGkQiRi2Haf3FzfAK43HkjwjaHXuXGGMVuur7M4yR4ueyg0alTlAMwfJ43rVc5Msj7K1nbl0%2FsWfAoVw%2BaFuIv6WXEEAabM%2FR9DdUyKvESV5dU5LhMGhbc6PEBDWIlcF%2BTYgHRXkEgltW%2BCAehe5tRYjhMItoXGn%2FEjR6E6RV%2Fd7W4ACaOLUm1opckZRD1qTbKXbq3R2Wzeo%2BIHZG7uvySSSdPr%2BrbO7IRveLEszK1mrqFSF%2B7xK4v05wL1%2BWU8oIO37bWmBu12vq4znRr3d%2BWgDHF7bz6MsfL8tbpf7JPzLpVBNKWqFOQdXnj04t8nyiPinLxdzic4eBN0eCHw%2BY3EkYISciG8GboEZ28nbKDAH%2BHSWbybiTxTD%2BqpfTBjqkATtWq52%2BVUpuu0O31mVaN%2BPsmknSqvP4CTxGJfnT2sCTLzAsZQEqiPGB%2BfXh9f6tBsUC3g%2BY2nuGm%2FqPvuqtOV5ZY81eqS9lJ7nC7aDHgkpknXzjK%2F1pNwFsO941Kq44q6QjGIrsGaerYgwhfmibG7yR66rHKz77Rj6OwLm3wEAU0kkPMtzQjuAlUk70amkisG58VZRv8ejt4dL6kA66hE0sreI1&X-Amz-Signature=5276eff5e6cce768aaea68f0d886ab4458a3ab25ab1e7e07dabf7853e96e5478&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665QI44YOB%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQCc3pn59xeDWS8AHLbwsPQupx2H4QOm4Gtnr2sDWDJlaAIhANT79Cw9D3qJf7vCjHelJTRhvldf3AVmtAOyfr%2FugnOeKv8DCDMQABoMNjM3NDIzMTgzODA1Igz2DQ%2F6OzgR2%2FnY658q3AOIV49Nu4Acynp1CkPhKBxU6COovDSDG0DDPuzsocOOe%2BHMs24b08hSleDMG2NwMOZf9n45rooZvKAtyvS8zedcqpqiAAfgOQnrOJkm8vyzA4tPGEohA7pBArsGrAifGwZ1u1kxaYo2etz6psxZH91zIKDILAV%2BhuP6RIg5DGX%2Fm8desFwtCpAjlXBEWLLaUVZYednJ5ibhBT5VIsAEa%2F5D1sbzjDNk1ROqA2Ihg2YQZzaN%2Fa6lIlqCn24EXgxwLrhabi4jGkQiRi2Haf3FzfAK43HkjwjaHXuXGGMVuur7M4yR4ueyg0alTlAMwfJ43rVc5Msj7K1nbl0%2FsWfAoVw%2BaFuIv6WXEEAabM%2FR9DdUyKvESV5dU5LhMGhbc6PEBDWIlcF%2BTYgHRXkEgltW%2BCAehe5tRYjhMItoXGn%2FEjR6E6RV%2Fd7W4ACaOLUm1opckZRD1qTbKXbq3R2Wzeo%2BIHZG7uvySSSdPr%2BrbO7IRveLEszK1mrqFSF%2B7xK4v05wL1%2BWU8oIO37bWmBu12vq4znRr3d%2BWgDHF7bz6MsfL8tbpf7JPzLpVBNKWqFOQdXnj04t8nyiPinLxdzic4eBN0eCHw%2BY3EkYISciG8GboEZ28nbKDAH%2BHSWbybiTxTD%2BqpfTBjqkATtWq52%2BVUpuu0O31mVaN%2BPsmknSqvP4CTxGJfnT2sCTLzAsZQEqiPGB%2BfXh9f6tBsUC3g%2BY2nuGm%2FqPvuqtOV5ZY81eqS9lJ7nC7aDHgkpknXzjK%2F1pNwFsO941Kq44q6QjGIrsGaerYgwhfmibG7yR66rHKz77Rj6OwLm3wEAU0kkPMtzQjuAlUk70amkisG58VZRv8ejt4dL6kA66hE0sreI1&X-Amz-Signature=9bc91d03f51df73c3f8915696dc64d43fdf188612746e6e988d66f70a0a9e636&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665QI44YOB%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095731Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQCc3pn59xeDWS8AHLbwsPQupx2H4QOm4Gtnr2sDWDJlaAIhANT79Cw9D3qJf7vCjHelJTRhvldf3AVmtAOyfr%2FugnOeKv8DCDMQABoMNjM3NDIzMTgzODA1Igz2DQ%2F6OzgR2%2FnY658q3AOIV49Nu4Acynp1CkPhKBxU6COovDSDG0DDPuzsocOOe%2BHMs24b08hSleDMG2NwMOZf9n45rooZvKAtyvS8zedcqpqiAAfgOQnrOJkm8vyzA4tPGEohA7pBArsGrAifGwZ1u1kxaYo2etz6psxZH91zIKDILAV%2BhuP6RIg5DGX%2Fm8desFwtCpAjlXBEWLLaUVZYednJ5ibhBT5VIsAEa%2F5D1sbzjDNk1ROqA2Ihg2YQZzaN%2Fa6lIlqCn24EXgxwLrhabi4jGkQiRi2Haf3FzfAK43HkjwjaHXuXGGMVuur7M4yR4ueyg0alTlAMwfJ43rVc5Msj7K1nbl0%2FsWfAoVw%2BaFuIv6WXEEAabM%2FR9DdUyKvESV5dU5LhMGhbc6PEBDWIlcF%2BTYgHRXkEgltW%2BCAehe5tRYjhMItoXGn%2FEjR6E6RV%2Fd7W4ACaOLUm1opckZRD1qTbKXbq3R2Wzeo%2BIHZG7uvySSSdPr%2BrbO7IRveLEszK1mrqFSF%2B7xK4v05wL1%2BWU8oIO37bWmBu12vq4znRr3d%2BWgDHF7bz6MsfL8tbpf7JPzLpVBNKWqFOQdXnj04t8nyiPinLxdzic4eBN0eCHw%2BY3EkYISciG8GboEZ28nbKDAH%2BHSWbybiTxTD%2BqpfTBjqkATtWq52%2BVUpuu0O31mVaN%2BPsmknSqvP4CTxGJfnT2sCTLzAsZQEqiPGB%2BfXh9f6tBsUC3g%2BY2nuGm%2FqPvuqtOV5ZY81eqS9lJ7nC7aDHgkpknXzjK%2F1pNwFsO941Kq44q6QjGIrsGaerYgwhfmibG7yR66rHKz77Rj6OwLm3wEAU0kkPMtzQjuAlUk70amkisG58VZRv8ejt4dL6kA66hE0sreI1&X-Amz-Signature=d661acac8bba5c952a9a5991fda78efd25904eb48a358ce0d37bde40a9d9d400&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R4D2MCCY%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095732Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJIMEYCIQDM2Ke%2FmVVpgx2iPHLRljoRuMM01VTwzNYOQ0x%2Fkh0qFAIhAMQYk%2BFsFhuXVIhy9ME0jYbREvxJWu58h135xabi37SPKv8DCDMQABoMNjM3NDIzMTgzODA1IgxBP3PzoDwhY8JqgPoq3AM9aInsjsxmewunEAioOTTPsP%2FwMYWqgsSRJ8BYP2%2Fnn58zjWyq2lt9da2Uey%2FfgnhFqhUSYrZl7WVVIUveS4mUWzotBE4Y4%2FY5Njx5xNeqOV8s2vlma%2FlyWefL0heeuJG2eHfVGFNx0ho%2F8tQneVRq9kn1XZyEbPpQtr3P5DsRYWBP9s1SNhnW109fcVMt6pw0xsmAHumFEyswn%2BGx93%2BnQnRs91ote8phYxRnjUYS8wAFpkMvddUWy5MXJHOeoSk%2BNFVh1g%2FQghN%2Bsj3wEOERfO9BURg0hIZhnm567ImplBFEW9z5MTPjY1B63r0nKGpLofwncChqDOqdJ4ThIhGpH3fU7cW6TWFpx7BqZa0ve0hTMjgrn0HWQ6gpI5nhZJFIqXaaBrvV2EiKLMEFAEwYz5xn4UArOGvS6vOBcFJ9fOez%2BdKBG2C7IBMYqyZQtwcSWKb8QaxIzPy4lnAPPhk0sw02YU%2FuSS1NpTcTHOTukFemO%2BQDKAVLcBYhP5DLwWayWbqpEaLqt%2FiJXCRZJuCL1Fgn8DB1FYlWLylI8YEDkfe6tpjyLLaznvsnurqAlvEwSSyOB4KYcp4FORQe1HrJzDuP8ZTnqbnZv9s%2Bw2qyvLA%2F%2FYLzfor5UqdQUzC7rZfTBjqkARTAfjj7F3USj%2FrPKezD6yLoo7i%2BbYSsEpcGFfkLQOpMSGaCHFNMGWDUMsg61j6JnpFbNayAhZyZgB%2FoqIPwcabh%2BAw8Pgqu7q827XrVaAWjZ4eDlsSocCzksj9OygLghDS9m22pT%2BTqSx1XFPJKubYNnU5fu6kXmAR%2Bu1TPKmSbQWFLFwPTCBLX09Zj3%2Bniep%2BfhJXLSKrm%2FJRGF1sL4KKA%2FYRF&X-Amz-Signature=347ec81eb9176ff1c8bce612c9deef5de4d5f71ef764c0f4b5a052470bf87cb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RDZJYJVU%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095732Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJGMEQCIDyYaiF6Kr0zZrwV%2BCNro6hOX%2FDL344wm1z1xmhHvzJSAiBgJjscrHQvSQJVedFognemdREqgMj%2BIPClzqEGiCZG5Sr%2FAwgzEAAaDDYzNzQyMzE4MzgwNSIMDW%2B6aQ6StEn79%2BOkKtwD4E1YJ6bdd%2FH3jp8oatnWzf%2BBPIRBCpfJUaAW72MUZoK9P737DaYV%2FMdsOmQJ5N3yRNl07VASaucvLPMFU6%2Bg3kVE1mUaNqRA2Ne3%2BHInHcqzJFH8hvNZOd2O%2BTpQhQ1uUF%2BPwe6DGeX5fo2loLBeJn7Ma7BZHQODHM1L%2FLd8R6dZYiR%2BK5f2NffrWvhaVb5TPFyksjqHskNWQOKoZhHZXxLmr46Sz3knPmyyQlZUdajWNALqKgtYhnHG3Gnb%2FeA8MiEPYs0lWSTr3NHqnjxSkFSCOZka%2Blt%2BB64DUw7CWUyU4PxYXCDfqEh1iBtHB2xVI59ZO7T3ZUL7t32EwBlpIHoCAbDJvjYPXrfuu0NnUzRxtBwLZ2Llje5YIavlwtU0g7zllEiru1AhcUAB%2BpoX1d3siSMVpLEB2CCkhv%2BBslpvh0yMkZDs7hV4ugQPmE57OHak1gHbiwiG9E2Ut06bRtuUSFuJpsCB8Cgid1J2967QCjTQwI5Qq19uY9oe%2Bq%2BnDTEGDyaoHEhveqAJEpBu%2B5oW6E42nzEwJ0DlpIyZSGEM3OT9UIPDZY9oGjwMsmmFc4f6rOgwxn0YiTprRBRQCJzz%2BC8RkHG8LCh%2F7OA%2Bm95gN7gbs1aj70M%2FQisw%2FayX0wY6pgHFi8BUbQpRTTUS3yCcSLcm90WWPUXUzkkeWvt0vRExAuIbnPBMPwErgR1yMwEo1pYgVQcUx2DufT5CIFPsHPWxmZf8NUBeF4gYavVu%2ByKblEUhpeSoiPU6i%2BEH95dxlL8nsNoXQYYDiWVCLY9eFIfGacH%2FxuiJkr6TBYEo6933B3fgWCoE2XH8ZR5BBrvu1UXyVlSbN7i%2Bec1%2BKJXhSFN9ZH6xcflO&X-Amz-Signature=2b96a08e521a3fca0b418db0ff28b280907532c46319374085802c542124fadd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RDZJYJVU%2F20260726%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260726T095732Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGoaCXVzLXdlc3QtMiJGMEQCIDyYaiF6Kr0zZrwV%2BCNro6hOX%2FDL344wm1z1xmhHvzJSAiBgJjscrHQvSQJVedFognemdREqgMj%2BIPClzqEGiCZG5Sr%2FAwgzEAAaDDYzNzQyMzE4MzgwNSIMDW%2B6aQ6StEn79%2BOkKtwD4E1YJ6bdd%2FH3jp8oatnWzf%2BBPIRBCpfJUaAW72MUZoK9P737DaYV%2FMdsOmQJ5N3yRNl07VASaucvLPMFU6%2Bg3kVE1mUaNqRA2Ne3%2BHInHcqzJFH8hvNZOd2O%2BTpQhQ1uUF%2BPwe6DGeX5fo2loLBeJn7Ma7BZHQODHM1L%2FLd8R6dZYiR%2BK5f2NffrWvhaVb5TPFyksjqHskNWQOKoZhHZXxLmr46Sz3knPmyyQlZUdajWNALqKgtYhnHG3Gnb%2FeA8MiEPYs0lWSTr3NHqnjxSkFSCOZka%2Blt%2BB64DUw7CWUyU4PxYXCDfqEh1iBtHB2xVI59ZO7T3ZUL7t32EwBlpIHoCAbDJvjYPXrfuu0NnUzRxtBwLZ2Llje5YIavlwtU0g7zllEiru1AhcUAB%2BpoX1d3siSMVpLEB2CCkhv%2BBslpvh0yMkZDs7hV4ugQPmE57OHak1gHbiwiG9E2Ut06bRtuUSFuJpsCB8Cgid1J2967QCjTQwI5Qq19uY9oe%2Bq%2BnDTEGDyaoHEhveqAJEpBu%2B5oW6E42nzEwJ0DlpIyZSGEM3OT9UIPDZY9oGjwMsmmFc4f6rOgwxn0YiTprRBRQCJzz%2BC8RkHG8LCh%2F7OA%2Bm95gN7gbs1aj70M%2FQisw%2FayX0wY6pgHFi8BUbQpRTTUS3yCcSLcm90WWPUXUzkkeWvt0vRExAuIbnPBMPwErgR1yMwEo1pYgVQcUx2DufT5CIFPsHPWxmZf8NUBeF4gYavVu%2ByKblEUhpeSoiPU6i%2BEH95dxlL8nsNoXQYYDiWVCLY9eFIfGacH%2FxuiJkr6TBYEo6933B3fgWCoE2XH8ZR5BBrvu1UXyVlSbN7i%2Bec1%2BKJXhSFN9ZH6xcflO&X-Amz-Signature=2ad59e58e6905a1febb56fab56eca02d479c838a8de5880adf967bdbcf62f64e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
