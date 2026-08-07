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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHF5ATQV%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDWV85h%2FjVcxD6LjKd96LLGR7hCjSf82tg2lPv9ZoIkbwIhAM4tgqCLoFXD765C9vimLWo9U%2FgN1KOw71yHUgIiHu9HKv8DCFAQABoMNjM3NDIzMTgzODA1IgzIe%2BYZXMXnKTXXomIq3AMU55tg%2FtGFhBaB5dQn1VovR280hzgNDGNt5dvRal4HjjBcwr7NVMwcPTs6WYsdh13q%2Boo2j%2Fn0nLwrXS0eLjHQawvPREwSeoHXbhx%2F876HyHGqT9YJAAzV7M9IzPpr%2BLpcvFbbES6uvRf284xay3L13eZlpTaY4sxwo7%2Fabn6oDLKVu4cp3LZ20AIeOs58Prjn3yaI7CAQwVUUh8f9mzrhX0bCEkAGmc010wjCZhifoaZatyPhQH5SID8MqkTcVx%2BJHnUWeNbLxl9AHZwBCQNa65uhTMoOBIvil7UN8mJQLTB5tLZ5HLK1pSuBTP5ZY3GnDaLgqgfxaasWLpa4Ji%2FZafk3fzIhok1Ch7O%2FBtZtovpaRy8vLg6fcj1TnUrhZhBIitOWZN1Bnraq8MRowa8eQHhLa3nVyHd%2FbzfH0157ig9a48pYJQDhLxLu5IM4yfPyTVI6OqtSh5N6XPIQvHvFdTBbog8wZ2FPicRTK2rmzkvsfTL6wWE1K3wQUDJLqpmGV6di5p1W0ONn3c03BgT5d51NZ9GZcG149wsWBM%2B9Cvmh5peBEpziTk4A1YWPjglLKjO%2FMVDL%2FQ3OrwaU1DVC%2FlxXa5G0PUSzLtkoa%2BhjFHzAlhWirNhOLza3WzCekNbTBjqkATH8l9wXSejjdpBuug46obbcgJvwGFca%2FYZciy81BM0IW%2FLd3ltBfocsztTqES2fTZngvxotXa7C4mxM3pHIqjH5bjM2SlFbAr4joMnmjOVE1J1mPmJdulnKCcZoUB4Jl%2F6PF7kKHccERsGC9G8qVg0E7y2fOSwLMwC4loQx5tCVbdcZ11ytwhFlnXeU9AvmDb1At3N1jXxKYU0UyEqcboH3HaJu&X-Amz-Signature=e9a0d7c0ff607cf80e1cc925e8a0a99bc1d2d3f3bdc5eebf6ad7ce46063d90d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHF5ATQV%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDWV85h%2FjVcxD6LjKd96LLGR7hCjSf82tg2lPv9ZoIkbwIhAM4tgqCLoFXD765C9vimLWo9U%2FgN1KOw71yHUgIiHu9HKv8DCFAQABoMNjM3NDIzMTgzODA1IgzIe%2BYZXMXnKTXXomIq3AMU55tg%2FtGFhBaB5dQn1VovR280hzgNDGNt5dvRal4HjjBcwr7NVMwcPTs6WYsdh13q%2Boo2j%2Fn0nLwrXS0eLjHQawvPREwSeoHXbhx%2F876HyHGqT9YJAAzV7M9IzPpr%2BLpcvFbbES6uvRf284xay3L13eZlpTaY4sxwo7%2Fabn6oDLKVu4cp3LZ20AIeOs58Prjn3yaI7CAQwVUUh8f9mzrhX0bCEkAGmc010wjCZhifoaZatyPhQH5SID8MqkTcVx%2BJHnUWeNbLxl9AHZwBCQNa65uhTMoOBIvil7UN8mJQLTB5tLZ5HLK1pSuBTP5ZY3GnDaLgqgfxaasWLpa4Ji%2FZafk3fzIhok1Ch7O%2FBtZtovpaRy8vLg6fcj1TnUrhZhBIitOWZN1Bnraq8MRowa8eQHhLa3nVyHd%2FbzfH0157ig9a48pYJQDhLxLu5IM4yfPyTVI6OqtSh5N6XPIQvHvFdTBbog8wZ2FPicRTK2rmzkvsfTL6wWE1K3wQUDJLqpmGV6di5p1W0ONn3c03BgT5d51NZ9GZcG149wsWBM%2B9Cvmh5peBEpziTk4A1YWPjglLKjO%2FMVDL%2FQ3OrwaU1DVC%2FlxXa5G0PUSzLtkoa%2BhjFHzAlhWirNhOLza3WzCekNbTBjqkATH8l9wXSejjdpBuug46obbcgJvwGFca%2FYZciy81BM0IW%2FLd3ltBfocsztTqES2fTZngvxotXa7C4mxM3pHIqjH5bjM2SlFbAr4joMnmjOVE1J1mPmJdulnKCcZoUB4Jl%2F6PF7kKHccERsGC9G8qVg0E7y2fOSwLMwC4loQx5tCVbdcZ11ytwhFlnXeU9AvmDb1At3N1jXxKYU0UyEqcboH3HaJu&X-Amz-Signature=daf22dea6d455e4534e4e3daa3d36b085661043033e79f47147a1a7d7f546711&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QHF5ATQV%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDWV85h%2FjVcxD6LjKd96LLGR7hCjSf82tg2lPv9ZoIkbwIhAM4tgqCLoFXD765C9vimLWo9U%2FgN1KOw71yHUgIiHu9HKv8DCFAQABoMNjM3NDIzMTgzODA1IgzIe%2BYZXMXnKTXXomIq3AMU55tg%2FtGFhBaB5dQn1VovR280hzgNDGNt5dvRal4HjjBcwr7NVMwcPTs6WYsdh13q%2Boo2j%2Fn0nLwrXS0eLjHQawvPREwSeoHXbhx%2F876HyHGqT9YJAAzV7M9IzPpr%2BLpcvFbbES6uvRf284xay3L13eZlpTaY4sxwo7%2Fabn6oDLKVu4cp3LZ20AIeOs58Prjn3yaI7CAQwVUUh8f9mzrhX0bCEkAGmc010wjCZhifoaZatyPhQH5SID8MqkTcVx%2BJHnUWeNbLxl9AHZwBCQNa65uhTMoOBIvil7UN8mJQLTB5tLZ5HLK1pSuBTP5ZY3GnDaLgqgfxaasWLpa4Ji%2FZafk3fzIhok1Ch7O%2FBtZtovpaRy8vLg6fcj1TnUrhZhBIitOWZN1Bnraq8MRowa8eQHhLa3nVyHd%2FbzfH0157ig9a48pYJQDhLxLu5IM4yfPyTVI6OqtSh5N6XPIQvHvFdTBbog8wZ2FPicRTK2rmzkvsfTL6wWE1K3wQUDJLqpmGV6di5p1W0ONn3c03BgT5d51NZ9GZcG149wsWBM%2B9Cvmh5peBEpziTk4A1YWPjglLKjO%2FMVDL%2FQ3OrwaU1DVC%2FlxXa5G0PUSzLtkoa%2BhjFHzAlhWirNhOLza3WzCekNbTBjqkATH8l9wXSejjdpBuug46obbcgJvwGFca%2FYZciy81BM0IW%2FLd3ltBfocsztTqES2fTZngvxotXa7C4mxM3pHIqjH5bjM2SlFbAr4joMnmjOVE1J1mPmJdulnKCcZoUB4Jl%2F6PF7kKHccERsGC9G8qVg0E7y2fOSwLMwC4loQx5tCVbdcZ11ytwhFlnXeU9AvmDb1At3N1jXxKYU0UyEqcboH3HaJu&X-Amz-Signature=6743e92a45d7319c012c709ae4f89c3c990da60b28160cb30b4de81b92615c74&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZT3EV2FX%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuFqceVze4SdGy394vP%2FfAs6RaeNR2EhdjZoIgSfusDAIhAPxRu%2B6d4%2FzfZgnhqVePaWeLa%2BuAOvM8%2BjMnPThQv52oKv8DCFAQABoMNjM3NDIzMTgzODA1Igy%2BYxu6t8v%2BtTpyqmkq3AMWRh8lBkVMc5cfYm0XkGsv7HHeat4nhVp3efSvNt7PuVjexEe7def2km1JVx4a%2F2y9iJFiEdEm3uVMegLiqPtJJ%2BGG4j%2F9UAgybBPrqEs2UGR970KLh%2FZGvHjT%2BnzVuKfqC8TylEQ%2BonLDzZiZVph33s2YD1%2BmrMz7%2BfLn6cySh2cvDOmv7%2BJYY7e1MS%2FFn4KSVXQZN3E%2BbrePiPQ%2BzOdU5FFeGuZr4tP31bGG3rA8gJz3AtdUS8mhulbT1CBLLw%2Bf6y2yZH%2Fv1ggrZFq8OP5TBh7RIwvghWSnlq52nrYPnaRuEOTnL3XtwbTmX6lVQcm38sXiBy8tKzs3s63oYQWU99urUxGtTNfrroU5Tk%2FsWvDHTjEtEq5KOpOgCDc6P%2FIpZ%2FEVvCHAsg4p6Bw%2FpadsjJXkcnn74DRfyYGl4yZeSTMzMfSvoxbL7wp2WXfhZ4AXg0LmdCHxT6mSoCY%2BdYWVK8D8UCtqJz%2FSd0Wbe5oFc%2Bef1ujENNWjheiYWXd0DLdF8d5y2fwjQd6nTwcy%2BXF6xjbnjuUticvPyJ2Gel78JN41OEHqwUHnyeronm1MjWxKZDP0suBmTE94Rgi7wrwpuj8BIe6mIPIoKxtJ1E8f6CLcHeDP4dmOSb%2BOtTDijdbTBjqkAZmcM7EgennVgb%2FsUuP4PPCfHhQQRdcYMRsPSgH6fZBAK6rCiM3Kg9BBX4hLvWegPLqSiPCA4T5v7Qa4tnr73h9k7%2F060KvrI%2FzLFXIMs5cjWo27TJN%2FQagc%2FeMJVO7y7qIRqDM8LWj1xnO6QyjiNAdsQOZ0pS%2F%2BLq6gq4d82gaPIMUthC6HJzjLnR65cdQWNhH%2FXzpmGUTZ9hHHjGTyffpyNF5T&X-Amz-Signature=bd628f9efefefa3403c148a170ae6e3e8d6fd24ac39277db56d9f1fb0151b1f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZT3EV2FX%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuFqceVze4SdGy394vP%2FfAs6RaeNR2EhdjZoIgSfusDAIhAPxRu%2B6d4%2FzfZgnhqVePaWeLa%2BuAOvM8%2BjMnPThQv52oKv8DCFAQABoMNjM3NDIzMTgzODA1Igy%2BYxu6t8v%2BtTpyqmkq3AMWRh8lBkVMc5cfYm0XkGsv7HHeat4nhVp3efSvNt7PuVjexEe7def2km1JVx4a%2F2y9iJFiEdEm3uVMegLiqPtJJ%2BGG4j%2F9UAgybBPrqEs2UGR970KLh%2FZGvHjT%2BnzVuKfqC8TylEQ%2BonLDzZiZVph33s2YD1%2BmrMz7%2BfLn6cySh2cvDOmv7%2BJYY7e1MS%2FFn4KSVXQZN3E%2BbrePiPQ%2BzOdU5FFeGuZr4tP31bGG3rA8gJz3AtdUS8mhulbT1CBLLw%2Bf6y2yZH%2Fv1ggrZFq8OP5TBh7RIwvghWSnlq52nrYPnaRuEOTnL3XtwbTmX6lVQcm38sXiBy8tKzs3s63oYQWU99urUxGtTNfrroU5Tk%2FsWvDHTjEtEq5KOpOgCDc6P%2FIpZ%2FEVvCHAsg4p6Bw%2FpadsjJXkcnn74DRfyYGl4yZeSTMzMfSvoxbL7wp2WXfhZ4AXg0LmdCHxT6mSoCY%2BdYWVK8D8UCtqJz%2FSd0Wbe5oFc%2Bef1ujENNWjheiYWXd0DLdF8d5y2fwjQd6nTwcy%2BXF6xjbnjuUticvPyJ2Gel78JN41OEHqwUHnyeronm1MjWxKZDP0suBmTE94Rgi7wrwpuj8BIe6mIPIoKxtJ1E8f6CLcHeDP4dmOSb%2BOtTDijdbTBjqkAZmcM7EgennVgb%2FsUuP4PPCfHhQQRdcYMRsPSgH6fZBAK6rCiM3Kg9BBX4hLvWegPLqSiPCA4T5v7Qa4tnr73h9k7%2F060KvrI%2FzLFXIMs5cjWo27TJN%2FQagc%2FeMJVO7y7qIRqDM8LWj1xnO6QyjiNAdsQOZ0pS%2F%2BLq6gq4d82gaPIMUthC6HJzjLnR65cdQWNhH%2FXzpmGUTZ9hHHjGTyffpyNF5T&X-Amz-Signature=3c70079d4f76cef0b1651885a6f8d07eb2722f87e3ee894f14a69e46f141c6a9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZT3EV2FX%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuFqceVze4SdGy394vP%2FfAs6RaeNR2EhdjZoIgSfusDAIhAPxRu%2B6d4%2FzfZgnhqVePaWeLa%2BuAOvM8%2BjMnPThQv52oKv8DCFAQABoMNjM3NDIzMTgzODA1Igy%2BYxu6t8v%2BtTpyqmkq3AMWRh8lBkVMc5cfYm0XkGsv7HHeat4nhVp3efSvNt7PuVjexEe7def2km1JVx4a%2F2y9iJFiEdEm3uVMegLiqPtJJ%2BGG4j%2F9UAgybBPrqEs2UGR970KLh%2FZGvHjT%2BnzVuKfqC8TylEQ%2BonLDzZiZVph33s2YD1%2BmrMz7%2BfLn6cySh2cvDOmv7%2BJYY7e1MS%2FFn4KSVXQZN3E%2BbrePiPQ%2BzOdU5FFeGuZr4tP31bGG3rA8gJz3AtdUS8mhulbT1CBLLw%2Bf6y2yZH%2Fv1ggrZFq8OP5TBh7RIwvghWSnlq52nrYPnaRuEOTnL3XtwbTmX6lVQcm38sXiBy8tKzs3s63oYQWU99urUxGtTNfrroU5Tk%2FsWvDHTjEtEq5KOpOgCDc6P%2FIpZ%2FEVvCHAsg4p6Bw%2FpadsjJXkcnn74DRfyYGl4yZeSTMzMfSvoxbL7wp2WXfhZ4AXg0LmdCHxT6mSoCY%2BdYWVK8D8UCtqJz%2FSd0Wbe5oFc%2Bef1ujENNWjheiYWXd0DLdF8d5y2fwjQd6nTwcy%2BXF6xjbnjuUticvPyJ2Gel78JN41OEHqwUHnyeronm1MjWxKZDP0suBmTE94Rgi7wrwpuj8BIe6mIPIoKxtJ1E8f6CLcHeDP4dmOSb%2BOtTDijdbTBjqkAZmcM7EgennVgb%2FsUuP4PPCfHhQQRdcYMRsPSgH6fZBAK6rCiM3Kg9BBX4hLvWegPLqSiPCA4T5v7Qa4tnr73h9k7%2F060KvrI%2FzLFXIMs5cjWo27TJN%2FQagc%2FeMJVO7y7qIRqDM8LWj1xnO6QyjiNAdsQOZ0pS%2F%2BLq6gq4d82gaPIMUthC6HJzjLnR65cdQWNhH%2FXzpmGUTZ9hHHjGTyffpyNF5T&X-Amz-Signature=9c735da3fe870fbcdc1ef27926250a4f6134402a5e1155c34674d6cf1e83029d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZT3EV2FX%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuFqceVze4SdGy394vP%2FfAs6RaeNR2EhdjZoIgSfusDAIhAPxRu%2B6d4%2FzfZgnhqVePaWeLa%2BuAOvM8%2BjMnPThQv52oKv8DCFAQABoMNjM3NDIzMTgzODA1Igy%2BYxu6t8v%2BtTpyqmkq3AMWRh8lBkVMc5cfYm0XkGsv7HHeat4nhVp3efSvNt7PuVjexEe7def2km1JVx4a%2F2y9iJFiEdEm3uVMegLiqPtJJ%2BGG4j%2F9UAgybBPrqEs2UGR970KLh%2FZGvHjT%2BnzVuKfqC8TylEQ%2BonLDzZiZVph33s2YD1%2BmrMz7%2BfLn6cySh2cvDOmv7%2BJYY7e1MS%2FFn4KSVXQZN3E%2BbrePiPQ%2BzOdU5FFeGuZr4tP31bGG3rA8gJz3AtdUS8mhulbT1CBLLw%2Bf6y2yZH%2Fv1ggrZFq8OP5TBh7RIwvghWSnlq52nrYPnaRuEOTnL3XtwbTmX6lVQcm38sXiBy8tKzs3s63oYQWU99urUxGtTNfrroU5Tk%2FsWvDHTjEtEq5KOpOgCDc6P%2FIpZ%2FEVvCHAsg4p6Bw%2FpadsjJXkcnn74DRfyYGl4yZeSTMzMfSvoxbL7wp2WXfhZ4AXg0LmdCHxT6mSoCY%2BdYWVK8D8UCtqJz%2FSd0Wbe5oFc%2Bef1ujENNWjheiYWXd0DLdF8d5y2fwjQd6nTwcy%2BXF6xjbnjuUticvPyJ2Gel78JN41OEHqwUHnyeronm1MjWxKZDP0suBmTE94Rgi7wrwpuj8BIe6mIPIoKxtJ1E8f6CLcHeDP4dmOSb%2BOtTDijdbTBjqkAZmcM7EgennVgb%2FsUuP4PPCfHhQQRdcYMRsPSgH6fZBAK6rCiM3Kg9BBX4hLvWegPLqSiPCA4T5v7Qa4tnr73h9k7%2F060KvrI%2FzLFXIMs5cjWo27TJN%2FQagc%2FeMJVO7y7qIRqDM8LWj1xnO6QyjiNAdsQOZ0pS%2F%2BLq6gq4d82gaPIMUthC6HJzjLnR65cdQWNhH%2FXzpmGUTZ9hHHjGTyffpyNF5T&X-Amz-Signature=675a2e0211077ae78e0c1f53a4fe465c25ee94b4626b4e05a0ff9d0c07ceffe5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OTGEILP%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCvhOkz3PfOYuAINJNBOK4dVnXcUo1udL3kDX8r%2BaA59AIgPlG5nZpNvAXBWQZcZdq%2BCNpPaFJ%2BKJUMRhkF6%2F%2FdU4cq%2FwMIUBAAGgw2Mzc0MjMxODM4MDUiDI%2BXwGPj2V0BcQCZoCrcAwe9ZEi077GAMLVsFy6S8ivEjq83RBK%2BmGVPArU64TbPAjn%2BI2YjQRRQU5XE6wKu7tJwNdzUV4oX8gCWC1eQyEIGTgiXbU53zNNiCV9MDkqCGY9WVlmF8txT8MadjRMGGD7PXfyIA1eYiwO9Hn%2FJzshWqrhebVsOvcnRLkh8qVBlyWW3x6YnBHhM%2FyDGZPCftiaa06DkGponEyPeCyw3Cd%2BckFf718MPNCxWTxa3CsyC%2FPIgSDEc7LWJ82Lc2QRiEUyOaL%2B33U%2BT7Rx1DJprWoe%2Fp9DXk%2FM1OkfiD8sXeCiUBEnQRuWGWhreAlhunRrqqEOFrKC6Ogqz6CVWVeOQxb764WruWO9SzOO9TCuQS0VW92KbJcxBVgVr2L21aj2SIRB9c4FdeFrvn5fBmh7nTeAneoA%2BzfEK%2BLxTECJm%2FmaaOXtNjN5ERRWGy8CKElgKOwgZ9yU8yQzy0PTR5Hf6jC%2FLO1uRj8XA1yhn7QazoYw3b%2BSgFnoVYK9CJMmC%2FBmA1QT5YaTPWXhTNrVQXR%2Fjp0bSaQwh3ONraZLUO%2FnOCIC0ONBhpS1IxfIIPCn7CzizyYMjwYGcuP2Cpxj%2FKz0j37MiaAPfml1SXbGYKWYL5RkyjocTm81eUtltE0%2BtMOKP1tMGOqUBlakcKEy4f8g9A5rGgJXOIAKh1%2FNVp5miNPbupE7%2FcFz2gw4XrsL59BX4J5CuMFyNWWNs8ul9hVcnwGn%2BB9fqAdevxZK1793HI39Vfl5zAUY9uCxWh4v0XAsMWXEpT8m4RAs9lRPLkUXaZDvKJJBxayFH3ZvwMlgnQqnUJyme00GbjXvOEE%2BFvuk6fR8HTDoq9YYsIaMrCE51G3RJ5MGK6fC4aAyj&X-Amz-Signature=12464571fcd0e79aec7ea5b9fc2aad0bc482ae5c8eea0049835ec57e6a4fe3d0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663UBZO264%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCC3bVoKgJ0Fb%2Fybb6T6UXzNnKIM4%2FovW3q1qYFCBRljQIgFC%2FGC3MIIvDrsCgwK9aIbufXAz%2BpetfM9c8FaU2ylZcq%2FwMIUBAAGgw2Mzc0MjMxODM4MDUiDLlTQK%2F%2FQRyTNSm6QircA%2Bd8WJVvsi%2Fc8VMze0g05ueVSNzGJ329TjCFgvdf1M9%2BClwRNZvSy5TytJXuD%2FEpxGNDr%2Fd21ztyYU3uNv4fulmz%2FxQnZHhdCD6sv2l81JGISxEQC0pCA6NJklcOYnRpw4s%2Bc%2BI1fVg1T5eHBRgGC12aAGHW54FnhgcFS0m4IgrZ3fMPbH019YZqU7a3LrlSBrDsrbIojyk7WCO4NJPwYCT2u53qAAw0VWyNUxaV3CFeBlA7MGgn%2B%2BoIIb7yzphX3Z%2BEhNJB2K%2BK5%2Fl31VShl0BiPTOqCmNBcCVdnn9sd%2BDKJLK7MxcIrR8%2FT0kBgYMQvmyEHjrdzkzbHJCQ5wdf5zP9HJVfQj9XwIBq2l7sL8JjHvQmrQQxOKWdyTtHLA8TM6y2tmj4c9MQxWb4yu%2BzSMDyew5%2BYsmYUy2fSWHOgYPgzQgHgshB%2F%2Fs6aKy74c16ZqUzDYwGucD6xUEDNW74yfWm5EqF%2F4CUBde8ADGstKIO4t4cYOp%2ByHNNbc0mabtY9FnUMpmN5ssNyV7lTuJLF5nWFtkYouU4dbalHi5hUI%2BlQqNcTFifFA%2BvIP85rNPPl8GnW9naB%2BjainOczcVP4cngubIJTlLxvtZsjMmkpU94sh3VUS78UVbB75oLML6N1tMGOqUBF1v0nN%2FgDF67BNE1TBoMmsm1AN5zIEKS%2FICHjmZPKgP7VYkRIxWgCRT3AdrpsOADyWg04KFmzVxpwOqQjjm1YNcBPcqwTY%2BE9Gj3eHP7Fpj%2FGTLj7r44BtlBf%2BPT72yrBUzW6zHy3XsMOkcyIQlb6EPeJ3rV3Fs0%2Br69qmphR2LOiyjQL%2FeRygRXlScZxIxDNwIvVNn6rEIcTYWnsILdYwZw64kb&X-Amz-Signature=992eba3a7f4603719dcd52864b5a38e59610e8b8a845ab93f269498cc72bd60a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663UBZO264%2F20260807%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260807T085708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCC3bVoKgJ0Fb%2Fybb6T6UXzNnKIM4%2FovW3q1qYFCBRljQIgFC%2FGC3MIIvDrsCgwK9aIbufXAz%2BpetfM9c8FaU2ylZcq%2FwMIUBAAGgw2Mzc0MjMxODM4MDUiDLlTQK%2F%2FQRyTNSm6QircA%2Bd8WJVvsi%2Fc8VMze0g05ueVSNzGJ329TjCFgvdf1M9%2BClwRNZvSy5TytJXuD%2FEpxGNDr%2Fd21ztyYU3uNv4fulmz%2FxQnZHhdCD6sv2l81JGISxEQC0pCA6NJklcOYnRpw4s%2Bc%2BI1fVg1T5eHBRgGC12aAGHW54FnhgcFS0m4IgrZ3fMPbH019YZqU7a3LrlSBrDsrbIojyk7WCO4NJPwYCT2u53qAAw0VWyNUxaV3CFeBlA7MGgn%2B%2BoIIb7yzphX3Z%2BEhNJB2K%2BK5%2Fl31VShl0BiPTOqCmNBcCVdnn9sd%2BDKJLK7MxcIrR8%2FT0kBgYMQvmyEHjrdzkzbHJCQ5wdf5zP9HJVfQj9XwIBq2l7sL8JjHvQmrQQxOKWdyTtHLA8TM6y2tmj4c9MQxWb4yu%2BzSMDyew5%2BYsmYUy2fSWHOgYPgzQgHgshB%2F%2Fs6aKy74c16ZqUzDYwGucD6xUEDNW74yfWm5EqF%2F4CUBde8ADGstKIO4t4cYOp%2ByHNNbc0mabtY9FnUMpmN5ssNyV7lTuJLF5nWFtkYouU4dbalHi5hUI%2BlQqNcTFifFA%2BvIP85rNPPl8GnW9naB%2BjainOczcVP4cngubIJTlLxvtZsjMmkpU94sh3VUS78UVbB75oLML6N1tMGOqUBF1v0nN%2FgDF67BNE1TBoMmsm1AN5zIEKS%2FICHjmZPKgP7VYkRIxWgCRT3AdrpsOADyWg04KFmzVxpwOqQjjm1YNcBPcqwTY%2BE9Gj3eHP7Fpj%2FGTLj7r44BtlBf%2BPT72yrBUzW6zHy3XsMOkcyIQlb6EPeJ3rV3Fs0%2Br69qmphR2LOiyjQL%2FeRygRXlScZxIxDNwIvVNn6rEIcTYWnsILdYwZw64kb&X-Amz-Signature=7c79b79092fbbe976612e5e2099628eea3b7978c084b8e36d77bd2e87d6bd76a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
