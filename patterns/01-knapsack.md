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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SZ2NLZGI%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083957Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDsMKlNCiGghafpm4OQLmfub5%2F4lUO0efeFNgQoGjkcFAIgKUGFjr4Veg9Lv8cJF5J0OPw%2FdwRb%2F9cVdP8TdNiIPvcqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJZPN%2FUAIAKoPwJoWyrcA4v5%2FBgASKPrPakSzDhpGJ2MfLhAhghLUgDWeTfrmj7lLWb3AmMsgkrp15kUeM4RlQM3ruxqHF7GBMHPnECGDLyUSnZ6N1VeaDkhayVxNYzRzaSHmUgS1WXhbWFvMAtOzu%2Flg45IJLgNriXwAVuDp5%2BWAkqqcbDSiz9JwKWmsenGWfsZouJHzjxr3ETBUmbs4I%2F5DwAtf%2FKzf%2F49AKUUeY6YjW94G2aH8zg5Vd%2FBtHsj2FbFZWEVXGZto%2FSXBuyRQkSjVWzjVzBXKoaMLMkjZr%2BVknsuH3kPF2qIyUwdJBr%2FWhw31jJU9aFA1W3Be5cPpl3V6IKPmc%2BZgRSY0YAbb%2FDxXob4lQeEmc4%2FvF%2BLE0oCsVDgusw5YlMroKJDAWRPTROBWCcZ7FZYswniz3UyDEf2XQHOzI80inZxkJC8woPQ%2BSwzMRZU0FfUss5kr558%2F%2BrdP8SVDQuf5o9L0ac0lmiM7TWOMJmNoDLMjtje2nlqAmmaBGXr34R3A0iwkfKRdfljOCOJ0hUGNMQY5b1sf980sn0M3P1wTIv9Hgj4O%2F%2FbOdfyuzWcN9LgeXpWTUCKmU1I2%2BL4buw17HbganjzraV2eRWA%2F08viXnrlrCz0RoNrxuUSLItQA1Za1yvMJzy4NMGOqUB8kKg2oT5Bm5qvhRWTf4QGh5ugJfwJkL1CnayIJzk06M5ycvgXqD7qQLy00Y8hLtNHXVBsOOF4fWij%2BWWLUkeXb98QjqrChp12w5PKZeutSXgUZJEd1%2B8EUk5a6HuC71iKLvWPy40KH8PJRQIe1YPKQ36LtWXl%2BQzuwRUiHeRG%2F4N6SsNieP8RHznmlUh3BlSoET%2F6QGYVq%2BgjvfcE4OzKw1c3BRS&X-Amz-Signature=3a32065d8571915f237a7513a381e448e8ca58d10895a6b9814907f69e27a1e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SZ2NLZGI%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083957Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDsMKlNCiGghafpm4OQLmfub5%2F4lUO0efeFNgQoGjkcFAIgKUGFjr4Veg9Lv8cJF5J0OPw%2FdwRb%2F9cVdP8TdNiIPvcqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJZPN%2FUAIAKoPwJoWyrcA4v5%2FBgASKPrPakSzDhpGJ2MfLhAhghLUgDWeTfrmj7lLWb3AmMsgkrp15kUeM4RlQM3ruxqHF7GBMHPnECGDLyUSnZ6N1VeaDkhayVxNYzRzaSHmUgS1WXhbWFvMAtOzu%2Flg45IJLgNriXwAVuDp5%2BWAkqqcbDSiz9JwKWmsenGWfsZouJHzjxr3ETBUmbs4I%2F5DwAtf%2FKzf%2F49AKUUeY6YjW94G2aH8zg5Vd%2FBtHsj2FbFZWEVXGZto%2FSXBuyRQkSjVWzjVzBXKoaMLMkjZr%2BVknsuH3kPF2qIyUwdJBr%2FWhw31jJU9aFA1W3Be5cPpl3V6IKPmc%2BZgRSY0YAbb%2FDxXob4lQeEmc4%2FvF%2BLE0oCsVDgusw5YlMroKJDAWRPTROBWCcZ7FZYswniz3UyDEf2XQHOzI80inZxkJC8woPQ%2BSwzMRZU0FfUss5kr558%2F%2BrdP8SVDQuf5o9L0ac0lmiM7TWOMJmNoDLMjtje2nlqAmmaBGXr34R3A0iwkfKRdfljOCOJ0hUGNMQY5b1sf980sn0M3P1wTIv9Hgj4O%2F%2FbOdfyuzWcN9LgeXpWTUCKmU1I2%2BL4buw17HbganjzraV2eRWA%2F08viXnrlrCz0RoNrxuUSLItQA1Za1yvMJzy4NMGOqUB8kKg2oT5Bm5qvhRWTf4QGh5ugJfwJkL1CnayIJzk06M5ycvgXqD7qQLy00Y8hLtNHXVBsOOF4fWij%2BWWLUkeXb98QjqrChp12w5PKZeutSXgUZJEd1%2B8EUk5a6HuC71iKLvWPy40KH8PJRQIe1YPKQ36LtWXl%2BQzuwRUiHeRG%2F4N6SsNieP8RHznmlUh3BlSoET%2F6QGYVq%2BgjvfcE4OzKw1c3BRS&X-Amz-Signature=e9a455fba9947b9b3cf0b6dab587cde69b4b484d1b229891b2fcf3143b7edcab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SZ2NLZGI%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083957Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDsMKlNCiGghafpm4OQLmfub5%2F4lUO0efeFNgQoGjkcFAIgKUGFjr4Veg9Lv8cJF5J0OPw%2FdwRb%2F9cVdP8TdNiIPvcqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJZPN%2FUAIAKoPwJoWyrcA4v5%2FBgASKPrPakSzDhpGJ2MfLhAhghLUgDWeTfrmj7lLWb3AmMsgkrp15kUeM4RlQM3ruxqHF7GBMHPnECGDLyUSnZ6N1VeaDkhayVxNYzRzaSHmUgS1WXhbWFvMAtOzu%2Flg45IJLgNriXwAVuDp5%2BWAkqqcbDSiz9JwKWmsenGWfsZouJHzjxr3ETBUmbs4I%2F5DwAtf%2FKzf%2F49AKUUeY6YjW94G2aH8zg5Vd%2FBtHsj2FbFZWEVXGZto%2FSXBuyRQkSjVWzjVzBXKoaMLMkjZr%2BVknsuH3kPF2qIyUwdJBr%2FWhw31jJU9aFA1W3Be5cPpl3V6IKPmc%2BZgRSY0YAbb%2FDxXob4lQeEmc4%2FvF%2BLE0oCsVDgusw5YlMroKJDAWRPTROBWCcZ7FZYswniz3UyDEf2XQHOzI80inZxkJC8woPQ%2BSwzMRZU0FfUss5kr558%2F%2BrdP8SVDQuf5o9L0ac0lmiM7TWOMJmNoDLMjtje2nlqAmmaBGXr34R3A0iwkfKRdfljOCOJ0hUGNMQY5b1sf980sn0M3P1wTIv9Hgj4O%2F%2FbOdfyuzWcN9LgeXpWTUCKmU1I2%2BL4buw17HbganjzraV2eRWA%2F08viXnrlrCz0RoNrxuUSLItQA1Za1yvMJzy4NMGOqUB8kKg2oT5Bm5qvhRWTf4QGh5ugJfwJkL1CnayIJzk06M5ycvgXqD7qQLy00Y8hLtNHXVBsOOF4fWij%2BWWLUkeXb98QjqrChp12w5PKZeutSXgUZJEd1%2B8EUk5a6HuC71iKLvWPy40KH8PJRQIe1YPKQ36LtWXl%2BQzuwRUiHeRG%2F4N6SsNieP8RHznmlUh3BlSoET%2F6QGYVq%2BgjvfcE4OzKw1c3BRS&X-Amz-Signature=a9d1b51518f6b16b26f46d72fa996a90ad815fc2d4c0723c63b3c1cf043e3df8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OTITKTB%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGIXek4MHTQcKIWVGreEIkkv2Vy1Q%2FkVKv3QceDE0sF0AiEAxrIeJ1fitJGuyEgT9Ti5FIML8%2FsdnuTXq%2F%2B26S58FSYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMB3tV%2FLGMve9hVs8SrcA5MgjpwcGwEB5o77qUYSMrlceuoV%2FgvumkalUZPC44eR%2B%2BnVvwlKwh4BJdOBEpx9VGk3JCl8wIg5LJ8S03xmCPmOE%2FZYPTaoQxysyURd13SJUU3R3hrlZ9iHDmTHNbiVnRth0XdNE1eVzzfJlPhEnFbUPrjpF99UMYaiaLYLp7MkcnP7TJwm1Rtra%2Bc2F7dXVVwGpYtFkq2sKBlY36Q4aYbVSEmF5o%2FyN5IrEC5h8%2BDUdGUu28av%2BWDKDabAl3O%2FOSL43ZGYQOfQVUxbgFQx3qwgOPr%2F8kOqlA8xuG%2BRS9LH9ijIuywu6S7%2BYwQJ89bxOA0Tv%2FBwNdP%2BVvhFOKRkFPTyXCX%2FjT3p%2ForA06XV8Er%2Boa%2Bp4%2B4mbtifir4H82cOgmW%2BucGBK4bAAv9mEw%2Fmwz8NZBaNDSTlBrhQeFNLdlnTFlnZGJVV%2FJFHjzq2NQgRr9TmAriSLydes%2F4pFOWJWEAzzRL1o9wJ5kXEreymAGTTZ9tLTsZKwLyM%2BAarwvzan01zNsZ4Vt4FScM7EQKTw860tT4SbN7hkuvqDcKQX5aNDTj89OWFDqSeg8Sjv%2FpQkWPB%2F8FMBvmTEErnGBSOpETJ8%2FZlmmChQYcqwdYBEt%2F646VSpmvWSxuzmmgnMIb04NMGOqUBLes%2BwydAsey8lTMBxIFj6vqdZeFNrFcaiqf%2FfGTIto8PcRTQVoYpFadF%2BQQdtJdvURd9aNuonqdZTszxUHmWiNbwGhnYmABuW7oKpgYzTTn%2B122YV7NRw1Zg%2FYejj5Nyrr%2F4%2B5FK1g7rT38M4rDuGoRgKDBMnaYNYKP5F2DDQRf3U%2B%2BvLvP0qLLFLhKtL%2FOAcrt1uTxwhjC7%2FyF7OdKU8rqPxLCO&X-Amz-Signature=46c43a8cc68f05c889bef1870266252cafd8277d5cbe3110218897a354f04295&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OTITKTB%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGIXek4MHTQcKIWVGreEIkkv2Vy1Q%2FkVKv3QceDE0sF0AiEAxrIeJ1fitJGuyEgT9Ti5FIML8%2FsdnuTXq%2F%2B26S58FSYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMB3tV%2FLGMve9hVs8SrcA5MgjpwcGwEB5o77qUYSMrlceuoV%2FgvumkalUZPC44eR%2B%2BnVvwlKwh4BJdOBEpx9VGk3JCl8wIg5LJ8S03xmCPmOE%2FZYPTaoQxysyURd13SJUU3R3hrlZ9iHDmTHNbiVnRth0XdNE1eVzzfJlPhEnFbUPrjpF99UMYaiaLYLp7MkcnP7TJwm1Rtra%2Bc2F7dXVVwGpYtFkq2sKBlY36Q4aYbVSEmF5o%2FyN5IrEC5h8%2BDUdGUu28av%2BWDKDabAl3O%2FOSL43ZGYQOfQVUxbgFQx3qwgOPr%2F8kOqlA8xuG%2BRS9LH9ijIuywu6S7%2BYwQJ89bxOA0Tv%2FBwNdP%2BVvhFOKRkFPTyXCX%2FjT3p%2ForA06XV8Er%2Boa%2Bp4%2B4mbtifir4H82cOgmW%2BucGBK4bAAv9mEw%2Fmwz8NZBaNDSTlBrhQeFNLdlnTFlnZGJVV%2FJFHjzq2NQgRr9TmAriSLydes%2F4pFOWJWEAzzRL1o9wJ5kXEreymAGTTZ9tLTsZKwLyM%2BAarwvzan01zNsZ4Vt4FScM7EQKTw860tT4SbN7hkuvqDcKQX5aNDTj89OWFDqSeg8Sjv%2FpQkWPB%2F8FMBvmTEErnGBSOpETJ8%2FZlmmChQYcqwdYBEt%2F646VSpmvWSxuzmmgnMIb04NMGOqUBLes%2BwydAsey8lTMBxIFj6vqdZeFNrFcaiqf%2FfGTIto8PcRTQVoYpFadF%2BQQdtJdvURd9aNuonqdZTszxUHmWiNbwGhnYmABuW7oKpgYzTTn%2B122YV7NRw1Zg%2FYejj5Nyrr%2F4%2B5FK1g7rT38M4rDuGoRgKDBMnaYNYKP5F2DDQRf3U%2B%2BvLvP0qLLFLhKtL%2FOAcrt1uTxwhjC7%2FyF7OdKU8rqPxLCO&X-Amz-Signature=53ca4d2dcbb06ae0f5cd94124bcdcf0fbe84969544e66936694333d9b1d549af&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OTITKTB%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGIXek4MHTQcKIWVGreEIkkv2Vy1Q%2FkVKv3QceDE0sF0AiEAxrIeJ1fitJGuyEgT9Ti5FIML8%2FsdnuTXq%2F%2B26S58FSYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMB3tV%2FLGMve9hVs8SrcA5MgjpwcGwEB5o77qUYSMrlceuoV%2FgvumkalUZPC44eR%2B%2BnVvwlKwh4BJdOBEpx9VGk3JCl8wIg5LJ8S03xmCPmOE%2FZYPTaoQxysyURd13SJUU3R3hrlZ9iHDmTHNbiVnRth0XdNE1eVzzfJlPhEnFbUPrjpF99UMYaiaLYLp7MkcnP7TJwm1Rtra%2Bc2F7dXVVwGpYtFkq2sKBlY36Q4aYbVSEmF5o%2FyN5IrEC5h8%2BDUdGUu28av%2BWDKDabAl3O%2FOSL43ZGYQOfQVUxbgFQx3qwgOPr%2F8kOqlA8xuG%2BRS9LH9ijIuywu6S7%2BYwQJ89bxOA0Tv%2FBwNdP%2BVvhFOKRkFPTyXCX%2FjT3p%2ForA06XV8Er%2Boa%2Bp4%2B4mbtifir4H82cOgmW%2BucGBK4bAAv9mEw%2Fmwz8NZBaNDSTlBrhQeFNLdlnTFlnZGJVV%2FJFHjzq2NQgRr9TmAriSLydes%2F4pFOWJWEAzzRL1o9wJ5kXEreymAGTTZ9tLTsZKwLyM%2BAarwvzan01zNsZ4Vt4FScM7EQKTw860tT4SbN7hkuvqDcKQX5aNDTj89OWFDqSeg8Sjv%2FpQkWPB%2F8FMBvmTEErnGBSOpETJ8%2FZlmmChQYcqwdYBEt%2F646VSpmvWSxuzmmgnMIb04NMGOqUBLes%2BwydAsey8lTMBxIFj6vqdZeFNrFcaiqf%2FfGTIto8PcRTQVoYpFadF%2BQQdtJdvURd9aNuonqdZTszxUHmWiNbwGhnYmABuW7oKpgYzTTn%2B122YV7NRw1Zg%2FYejj5Nyrr%2F4%2B5FK1g7rT38M4rDuGoRgKDBMnaYNYKP5F2DDQRf3U%2B%2BvLvP0qLLFLhKtL%2FOAcrt1uTxwhjC7%2FyF7OdKU8rqPxLCO&X-Amz-Signature=f5fb4047c6f6a8d32307fabc7c3d93d5d0bf7896eae0bfc0097d3abd5553f4ac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666OTITKTB%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGIXek4MHTQcKIWVGreEIkkv2Vy1Q%2FkVKv3QceDE0sF0AiEAxrIeJ1fitJGuyEgT9Ti5FIML8%2FsdnuTXq%2F%2B26S58FSYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMB3tV%2FLGMve9hVs8SrcA5MgjpwcGwEB5o77qUYSMrlceuoV%2FgvumkalUZPC44eR%2B%2BnVvwlKwh4BJdOBEpx9VGk3JCl8wIg5LJ8S03xmCPmOE%2FZYPTaoQxysyURd13SJUU3R3hrlZ9iHDmTHNbiVnRth0XdNE1eVzzfJlPhEnFbUPrjpF99UMYaiaLYLp7MkcnP7TJwm1Rtra%2Bc2F7dXVVwGpYtFkq2sKBlY36Q4aYbVSEmF5o%2FyN5IrEC5h8%2BDUdGUu28av%2BWDKDabAl3O%2FOSL43ZGYQOfQVUxbgFQx3qwgOPr%2F8kOqlA8xuG%2BRS9LH9ijIuywu6S7%2BYwQJ89bxOA0Tv%2FBwNdP%2BVvhFOKRkFPTyXCX%2FjT3p%2ForA06XV8Er%2Boa%2Bp4%2B4mbtifir4H82cOgmW%2BucGBK4bAAv9mEw%2Fmwz8NZBaNDSTlBrhQeFNLdlnTFlnZGJVV%2FJFHjzq2NQgRr9TmAriSLydes%2F4pFOWJWEAzzRL1o9wJ5kXEreymAGTTZ9tLTsZKwLyM%2BAarwvzan01zNsZ4Vt4FScM7EQKTw860tT4SbN7hkuvqDcKQX5aNDTj89OWFDqSeg8Sjv%2FpQkWPB%2F8FMBvmTEErnGBSOpETJ8%2FZlmmChQYcqwdYBEt%2F646VSpmvWSxuzmmgnMIb04NMGOqUBLes%2BwydAsey8lTMBxIFj6vqdZeFNrFcaiqf%2FfGTIto8PcRTQVoYpFadF%2BQQdtJdvURd9aNuonqdZTszxUHmWiNbwGhnYmABuW7oKpgYzTTn%2B122YV7NRw1Zg%2FYejj5Nyrr%2F4%2B5FK1g7rT38M4rDuGoRgKDBMnaYNYKP5F2DDQRf3U%2B%2BvLvP0qLLFLhKtL%2FOAcrt1uTxwhjC7%2FyF7OdKU8rqPxLCO&X-Amz-Signature=9ebd55878ef98480de97d9c546e78b9a4310e659675d34f6c437079d5df96cda&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VYH65E2B%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD%2FwSJT0S1W1b5KsLLSZU%2F2KZ3LC%2BZ7OnerRUP1PKFNRQIhALkrontXq8xTTjz1xif5XhWH228DCRXODOGZggnWyGxXKogECIL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzlO87G5JaO9qffn3Yq3APidOLEki9ePgDkYXRH9hsocOUq8%2FkWoo8yenZcrKlrdKXpwDs1Rruj6eqq%2FemEN4%2Fa3%2FGnU2ev4AGB%2BxTJUoAUWzknupVRFBtVW%2BXe95prvt4iF4Vl37l6PdcTCCfN%2Batm%2FHN8U%2B%2BrZBXI%2BFqWZFnhVRbUaJCZoA%2Fq5t8zu3C4riygrUyO%2Bhgn0%2FD%2BxYdlbVhGqkjNFXuRRJjbTQLOloyBm%2B6WJs4962W8%2BewNai5x53yqRiU4JODCucnG4vffjcgBKAHdnntDKbtC79YEAC%2BAZv0u%2BejEB2iMGF06oIqe10FmObLvvMqbE68si4WK4X9IQNgarFTi2c0ihbRUT8AQsXI4r%2BCNcFmIONfX6FmEdJb1vROPxtuH1%2BAl70t4guOamDWeDfygewzI%2Bs3TNRsXK2K5KKXalVXKY0%2FlOe2PQux8hdOS9VakbC2i2V%2FUWfASIAJAaF3lRDQsR7s3AVvMCYEuog13YpzL92z%2FkIDJAN93LDioWzfecc3PE8G4DEPrE1ISLOt9umINBJDkulcX%2FNhwTfKBM0cyWveG0yBvdDfFbGloLl56KDyZ6tfU4p4lSqOgYo9ewEmxeQE%2B4bzErK%2FPDcUcC0nmYabfddYL0n1rDzc5o8jRMqwurTDd8%2BDTBjqkAeiKuP0ofkm7WGxzfw8q%2F4yTDvkeCG8R%2BsBswxxZ1KxwwJbl%2Bz4LtU9XnHwJPQ1TuVXV0q9kTresb7Q1A5Q6ebjIsjflf3ufhTZ2cME0p6eX7Hd%2Fapz4EbZLBc7Wgy9Jetzgij%2FfI555WlSKBApNZVWzp1Hv2lsfFGHb%2FSTKGF6DkmDI9v6G4Z3uNG8iliy%2BAP%2BD02cirDgo6ufwbr9rOvrwoW7f&X-Amz-Signature=850d14ba7bf275af9dc58654637a504047abf4588099347106582e0b12cd9385&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRQYM3ZZ%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICIZcsRUbVYx3hmWnbFNLaub2DOTOTIOWvPijKCC40o2AiEA6NtouytQKjnicyrpWd%2Fe5cWaUlagmYvTns3He%2Fqk0qUqiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDASteCEps1EQJtRVcircA0Xv1UcGnQ1lgxXu3u9NBsIMnxToio4LFndkZLtnwEZVEdsJ1SkjQLTpiwWaN3ye1GYVl%2FbdleVU4oan%2BbjFHK4X8BrrnG92fNGIjICigHV8fT28hWDzGs4vlKvlOzeknql85V04C2%2B9Rj5Q%2Fb9PKaB8C1P6BDWnwev5l%2FCgFjOP1ol0XPYIGTm6V%2BN62svDwS2VLsolpekSmJHD7rpk0RMvWKjIZnW4fq2N9%2BdzMJ%2B6VXPX9bqbbVzE%2Fn7AlPYMlQeePuY%2FK1JspkC%2BJcD7wXAU286yLRzPQZcvCA3QiJVZ3lSOTEn%2FTWHV46AR5IZDJ1qArFTg29LQ82fhpKXcpi4bjs8SrlAyIBK1yRMsNHBi0BR1yHMVfnGhp6ncADK3S4Ata8r1fqvKXyGYqRFEnkL7p5McvVXrfs6IQRLMWIRukG8DixZYUziQeoW0qGC%2Bb1K2wnv34Br2WxpIRBXQsjRPeayAXQib4rf57HMY0u%2BZor6Uy%2Bp6mNEWdrzglgd0OVBM7gprhsWvha6QtHblQW5HdGruyBMCbMF%2Ben9N2nlVqTvR4YxladuguupbijZCKE6cT68SwC6G71heXVgarb10J6qRbEp01imJclQp0qLVSSwuzvqUccP7VAEyMLvy4NMGOqUBMGlWmzZUp4aOJUzS69RlmB2SD273WvtiZ%2B1uMcthgamKg2Y91sSYNFoL8zVdtKFcemX3kMJb0a%2FNoEPuC%2FbxxN%2FgcqxQ3M7FJG7loQmzHgtQXP16rjxkNUfgx21UXS7Pk0ldwt7FLkvhu09Gf37yCbDgx7HvW2VwGzn3%2Fx62EEMaSFqteT%2BbJcm4bzehaUqcFQTl2JaMk9zllGLZ5brJcgALUzS8&X-Amz-Signature=647a7e8a9fb7d741dbdf81772aff93388f51cc76a351896056a5bad72aeeff09&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRQYM3ZZ%2F20260809%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260809T083958Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICIZcsRUbVYx3hmWnbFNLaub2DOTOTIOWvPijKCC40o2AiEA6NtouytQKjnicyrpWd%2Fe5cWaUlagmYvTns3He%2Fqk0qUqiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDASteCEps1EQJtRVcircA0Xv1UcGnQ1lgxXu3u9NBsIMnxToio4LFndkZLtnwEZVEdsJ1SkjQLTpiwWaN3ye1GYVl%2FbdleVU4oan%2BbjFHK4X8BrrnG92fNGIjICigHV8fT28hWDzGs4vlKvlOzeknql85V04C2%2B9Rj5Q%2Fb9PKaB8C1P6BDWnwev5l%2FCgFjOP1ol0XPYIGTm6V%2BN62svDwS2VLsolpekSmJHD7rpk0RMvWKjIZnW4fq2N9%2BdzMJ%2B6VXPX9bqbbVzE%2Fn7AlPYMlQeePuY%2FK1JspkC%2BJcD7wXAU286yLRzPQZcvCA3QiJVZ3lSOTEn%2FTWHV46AR5IZDJ1qArFTg29LQ82fhpKXcpi4bjs8SrlAyIBK1yRMsNHBi0BR1yHMVfnGhp6ncADK3S4Ata8r1fqvKXyGYqRFEnkL7p5McvVXrfs6IQRLMWIRukG8DixZYUziQeoW0qGC%2Bb1K2wnv34Br2WxpIRBXQsjRPeayAXQib4rf57HMY0u%2BZor6Uy%2Bp6mNEWdrzglgd0OVBM7gprhsWvha6QtHblQW5HdGruyBMCbMF%2Ben9N2nlVqTvR4YxladuguupbijZCKE6cT68SwC6G71heXVgarb10J6qRbEp01imJclQp0qLVSSwuzvqUccP7VAEyMLvy4NMGOqUBMGlWmzZUp4aOJUzS69RlmB2SD273WvtiZ%2B1uMcthgamKg2Y91sSYNFoL8zVdtKFcemX3kMJb0a%2FNoEPuC%2FbxxN%2FgcqxQ3M7FJG7loQmzHgtQXP16rjxkNUfgx21UXS7Pk0ldwt7FLkvhu09Gf37yCbDgx7HvW2VwGzn3%2Fx62EEMaSFqteT%2BbJcm4bzehaUqcFQTl2JaMk9zllGLZ5brJcgALUzS8&X-Amz-Signature=393326556d1d3fc1f60dd02b3de26271f0506f971fcae08a82acae583aab9163&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
