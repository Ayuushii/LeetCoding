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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666MM7PUVV%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB0vfecx%2Bge6GHVmAzpGCBX3OKc3D9e7DV4GQDUAdgcVAiBUDDUAbOEgJJmRicB8WMSCIV%2BvM6NTaP3vFqMnXNyk5Sr%2FAwhoEAAaDDYzNzQyMzE4MzgwNSIMjBQwsD6k47i4WSVFKtwDY32du9brrxplic2zI14Euzsm8vli2pun3lv%2FkoPPqdA9xyNg%2Br8iQ5V9RRp8YfzX%2BfegetMSD4SEivofLsT1IrdEZPYw0EmJIPY03yyiXWUAOHraZUnlDSgXXhSNLsChLBNhwAIJivDwKSrlesOuq8rzWoE08CCBwJ9NCcjNReVW2WXIOvUZAOiuyNPvy6Ib8A3CLHFrmqx8QM87CVaElkSKPOLEy%2Fa9Xm2q9oZV%2F7%2BLjnPNccTZs1%2Bfi7AWeMBe1QUQVuxixYkuvN%2BH%2BcT83d4tmr63NUXLEyJb6QZ%2Buz9fgKaHf%2FEmk62OHYy%2FqMpOhnoI9C8rTxI%2B2yx2MP8unYMxJ9OVJJ8Uscr6J9T4HRyX8%2F7NCtFrUkMqwo9HJNaXYGSVzaBe9%2FBp5Uep5F%2BvyDL6bzwja%2F1WHTUnob4Mndu8qACs%2FN1oxmxRBQREinel%2F8WswT0HSrkImVzeUcFPEQNakklZhFdRaDT9ybXw9bQOE1fB9RMj6%2BV2bFGw%2F%2FxAwwJpaZFlLHdNwLhNNc4AUPrzuok3V4%2FnmLnYcg%2BEZ4Hv1LT3wsEf%2FGizDUBzInRITv0IjcHG1rLbZ11v0MMlvLc24Ep%2Bk6FiDAAsy6Au%2FaFAQXeXG8b5pMc9x44wpaTb0wY6pgF%2BGd6faw75cK3zoJp601tyL8MEyxEGOw94oxSwT4%2FCjgVOaPvONj9p32fdnLPcNGOG8XBhwQ1M%2FHDG98SJBUKRGSwQqmhOeoay4LVWmf1FGuKUKeD5FU1%2BencQKut2tJKJhtF1PKKM2%2F8nEalEWsl3SRJ9B9PPLQxNfCb4xgy%2BTi0%2FHfOrzvHzQl4B43imicWipeuFxuaDighYuaXj5edpNjyleG8H&X-Amz-Signature=0bec0aa4a190d45d38d6cd8c419c2b107d184bd688dfbdaa7e493bbc00a098a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666MM7PUVV%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB0vfecx%2Bge6GHVmAzpGCBX3OKc3D9e7DV4GQDUAdgcVAiBUDDUAbOEgJJmRicB8WMSCIV%2BvM6NTaP3vFqMnXNyk5Sr%2FAwhoEAAaDDYzNzQyMzE4MzgwNSIMjBQwsD6k47i4WSVFKtwDY32du9brrxplic2zI14Euzsm8vli2pun3lv%2FkoPPqdA9xyNg%2Br8iQ5V9RRp8YfzX%2BfegetMSD4SEivofLsT1IrdEZPYw0EmJIPY03yyiXWUAOHraZUnlDSgXXhSNLsChLBNhwAIJivDwKSrlesOuq8rzWoE08CCBwJ9NCcjNReVW2WXIOvUZAOiuyNPvy6Ib8A3CLHFrmqx8QM87CVaElkSKPOLEy%2Fa9Xm2q9oZV%2F7%2BLjnPNccTZs1%2Bfi7AWeMBe1QUQVuxixYkuvN%2BH%2BcT83d4tmr63NUXLEyJb6QZ%2Buz9fgKaHf%2FEmk62OHYy%2FqMpOhnoI9C8rTxI%2B2yx2MP8unYMxJ9OVJJ8Uscr6J9T4HRyX8%2F7NCtFrUkMqwo9HJNaXYGSVzaBe9%2FBp5Uep5F%2BvyDL6bzwja%2F1WHTUnob4Mndu8qACs%2FN1oxmxRBQREinel%2F8WswT0HSrkImVzeUcFPEQNakklZhFdRaDT9ybXw9bQOE1fB9RMj6%2BV2bFGw%2F%2FxAwwJpaZFlLHdNwLhNNc4AUPrzuok3V4%2FnmLnYcg%2BEZ4Hv1LT3wsEf%2FGizDUBzInRITv0IjcHG1rLbZ11v0MMlvLc24Ep%2Bk6FiDAAsy6Au%2FaFAQXeXG8b5pMc9x44wpaTb0wY6pgF%2BGd6faw75cK3zoJp601tyL8MEyxEGOw94oxSwT4%2FCjgVOaPvONj9p32fdnLPcNGOG8XBhwQ1M%2FHDG98SJBUKRGSwQqmhOeoay4LVWmf1FGuKUKeD5FU1%2BencQKut2tJKJhtF1PKKM2%2F8nEalEWsl3SRJ9B9PPLQxNfCb4xgy%2BTi0%2FHfOrzvHzQl4B43imicWipeuFxuaDighYuaXj5edpNjyleG8H&X-Amz-Signature=77a19727ac5bf1ae045ad74168bbab0abec28b468da9e7e148422f678b0b324e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666MM7PUVV%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083851Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB0vfecx%2Bge6GHVmAzpGCBX3OKc3D9e7DV4GQDUAdgcVAiBUDDUAbOEgJJmRicB8WMSCIV%2BvM6NTaP3vFqMnXNyk5Sr%2FAwhoEAAaDDYzNzQyMzE4MzgwNSIMjBQwsD6k47i4WSVFKtwDY32du9brrxplic2zI14Euzsm8vli2pun3lv%2FkoPPqdA9xyNg%2Br8iQ5V9RRp8YfzX%2BfegetMSD4SEivofLsT1IrdEZPYw0EmJIPY03yyiXWUAOHraZUnlDSgXXhSNLsChLBNhwAIJivDwKSrlesOuq8rzWoE08CCBwJ9NCcjNReVW2WXIOvUZAOiuyNPvy6Ib8A3CLHFrmqx8QM87CVaElkSKPOLEy%2Fa9Xm2q9oZV%2F7%2BLjnPNccTZs1%2Bfi7AWeMBe1QUQVuxixYkuvN%2BH%2BcT83d4tmr63NUXLEyJb6QZ%2Buz9fgKaHf%2FEmk62OHYy%2FqMpOhnoI9C8rTxI%2B2yx2MP8unYMxJ9OVJJ8Uscr6J9T4HRyX8%2F7NCtFrUkMqwo9HJNaXYGSVzaBe9%2FBp5Uep5F%2BvyDL6bzwja%2F1WHTUnob4Mndu8qACs%2FN1oxmxRBQREinel%2F8WswT0HSrkImVzeUcFPEQNakklZhFdRaDT9ybXw9bQOE1fB9RMj6%2BV2bFGw%2F%2FxAwwJpaZFlLHdNwLhNNc4AUPrzuok3V4%2FnmLnYcg%2BEZ4Hv1LT3wsEf%2FGizDUBzInRITv0IjcHG1rLbZ11v0MMlvLc24Ep%2Bk6FiDAAsy6Au%2FaFAQXeXG8b5pMc9x44wpaTb0wY6pgF%2BGd6faw75cK3zoJp601tyL8MEyxEGOw94oxSwT4%2FCjgVOaPvONj9p32fdnLPcNGOG8XBhwQ1M%2FHDG98SJBUKRGSwQqmhOeoay4LVWmf1FGuKUKeD5FU1%2BencQKut2tJKJhtF1PKKM2%2F8nEalEWsl3SRJ9B9PPLQxNfCb4xgy%2BTi0%2FHfOrzvHzQl4B43imicWipeuFxuaDighYuaXj5edpNjyleG8H&X-Amz-Signature=2b0dd5fc005421ae368715dc5f08a51b75cc1b159faf19f3513cea6ad3d1fd9d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKCPDEEW%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG77fHTiUZKYRc6yGE54b%2BuQnFEHZv%2BJWEvKXkgyrxCLAiEA4cq2gxoDnIDfOjj7i0pd0zopIo8yP%2BY8YoVv3biEolkq%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDFffwC6UeRCFUVu7uircA6aT90huDoGRnoMrAFNAECoPacSjs8KLSDO1xhenOdp%2BEuTAtMjSh3YFZrEwcdZE1Z2aewIltk%2BICm8J3ZtVD0ljTnKXQVLh2IIW6%2Ffz%2FZ0Vjc%2Bq0QNbLt1B1BXBLTVS%2FWgf1pOeRg02SfEImUhWUOHV06xc0gxNe6dObZA7xZHfHAfs5l%2FlQPIW3zkGmd1vh84Ktc947hgypl3IlEQkcu4ST1XJs59Jd8VlJgbWsuSIamqtARwuHXpRSFuo9HDAj%2FZXVIXhYi7crGYyOJDBmjz3usxcyHVkjnJB53l36rOmkUS07JZ8tS59Szzl8049enE9rY3xhoWAKgbClPsC4Pl%2Fk7u%2BWBYzRbl0oAPVMqe5Qd2h%2FT6Yiq%2B2uCyFAkoB0ht0kIQuNRo9wZUMZV78m8WUKLhgEypfEBk6g%2BXslO0lX1raCDC31jCE20f%2FcvsCu%2BvZjJu9B08zMcFhIRoBFxhz6SnhDisKx2X2ajY686VTwo5vdBEzCRFzODAk6V3vDByMK5A0DbOJDBbvH%2FMDBQtvXCGcR%2BTX8hISRKSbjT0%2BCBbnaqtHJuw801CAJEP7gLFKLdxmtIRFHjsuUE%2FidcJjAPmF4bXPE%2BFk%2Fm%2BtHQ1y9JIFcYomTseEywqoMMaj29MGOqUBm%2F9pPIwd9LZmfU6YgTlJExzbeUY7T6bRn%2FGWmJPZ7MVWHTWxcOUayn02drT4NcCdJO6GYq4E0nae7ah%2BbbnLc7tCag7QtJqCUC4aBuYzQdtUKBVXcK5i0pTDRpI4JqveYiQeuQ%2BHEpuMydY%2Bqlops35RkqMeLirofTiJzG6oT02vOSFFaMsO0X%2BZ%2FuJX4%2B1fMxvNZ7XoVzD%2Bl3vM%2BcEKlAnGSm52&X-Amz-Signature=69013d81763f65428431abfcc541e2fc5097dc6c84d548ad41e33a53e514a8f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKCPDEEW%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG77fHTiUZKYRc6yGE54b%2BuQnFEHZv%2BJWEvKXkgyrxCLAiEA4cq2gxoDnIDfOjj7i0pd0zopIo8yP%2BY8YoVv3biEolkq%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDFffwC6UeRCFUVu7uircA6aT90huDoGRnoMrAFNAECoPacSjs8KLSDO1xhenOdp%2BEuTAtMjSh3YFZrEwcdZE1Z2aewIltk%2BICm8J3ZtVD0ljTnKXQVLh2IIW6%2Ffz%2FZ0Vjc%2Bq0QNbLt1B1BXBLTVS%2FWgf1pOeRg02SfEImUhWUOHV06xc0gxNe6dObZA7xZHfHAfs5l%2FlQPIW3zkGmd1vh84Ktc947hgypl3IlEQkcu4ST1XJs59Jd8VlJgbWsuSIamqtARwuHXpRSFuo9HDAj%2FZXVIXhYi7crGYyOJDBmjz3usxcyHVkjnJB53l36rOmkUS07JZ8tS59Szzl8049enE9rY3xhoWAKgbClPsC4Pl%2Fk7u%2BWBYzRbl0oAPVMqe5Qd2h%2FT6Yiq%2B2uCyFAkoB0ht0kIQuNRo9wZUMZV78m8WUKLhgEypfEBk6g%2BXslO0lX1raCDC31jCE20f%2FcvsCu%2BvZjJu9B08zMcFhIRoBFxhz6SnhDisKx2X2ajY686VTwo5vdBEzCRFzODAk6V3vDByMK5A0DbOJDBbvH%2FMDBQtvXCGcR%2BTX8hISRKSbjT0%2BCBbnaqtHJuw801CAJEP7gLFKLdxmtIRFHjsuUE%2FidcJjAPmF4bXPE%2BFk%2Fm%2BtHQ1y9JIFcYomTseEywqoMMaj29MGOqUBm%2F9pPIwd9LZmfU6YgTlJExzbeUY7T6bRn%2FGWmJPZ7MVWHTWxcOUayn02drT4NcCdJO6GYq4E0nae7ah%2BbbnLc7tCag7QtJqCUC4aBuYzQdtUKBVXcK5i0pTDRpI4JqveYiQeuQ%2BHEpuMydY%2Bqlops35RkqMeLirofTiJzG6oT02vOSFFaMsO0X%2BZ%2FuJX4%2B1fMxvNZ7XoVzD%2Bl3vM%2BcEKlAnGSm52&X-Amz-Signature=8de3d569806589bab61cfeb7f22a77385a69579172dfdae48d8217da1617e4b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKCPDEEW%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG77fHTiUZKYRc6yGE54b%2BuQnFEHZv%2BJWEvKXkgyrxCLAiEA4cq2gxoDnIDfOjj7i0pd0zopIo8yP%2BY8YoVv3biEolkq%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDFffwC6UeRCFUVu7uircA6aT90huDoGRnoMrAFNAECoPacSjs8KLSDO1xhenOdp%2BEuTAtMjSh3YFZrEwcdZE1Z2aewIltk%2BICm8J3ZtVD0ljTnKXQVLh2IIW6%2Ffz%2FZ0Vjc%2Bq0QNbLt1B1BXBLTVS%2FWgf1pOeRg02SfEImUhWUOHV06xc0gxNe6dObZA7xZHfHAfs5l%2FlQPIW3zkGmd1vh84Ktc947hgypl3IlEQkcu4ST1XJs59Jd8VlJgbWsuSIamqtARwuHXpRSFuo9HDAj%2FZXVIXhYi7crGYyOJDBmjz3usxcyHVkjnJB53l36rOmkUS07JZ8tS59Szzl8049enE9rY3xhoWAKgbClPsC4Pl%2Fk7u%2BWBYzRbl0oAPVMqe5Qd2h%2FT6Yiq%2B2uCyFAkoB0ht0kIQuNRo9wZUMZV78m8WUKLhgEypfEBk6g%2BXslO0lX1raCDC31jCE20f%2FcvsCu%2BvZjJu9B08zMcFhIRoBFxhz6SnhDisKx2X2ajY686VTwo5vdBEzCRFzODAk6V3vDByMK5A0DbOJDBbvH%2FMDBQtvXCGcR%2BTX8hISRKSbjT0%2BCBbnaqtHJuw801CAJEP7gLFKLdxmtIRFHjsuUE%2FidcJjAPmF4bXPE%2BFk%2Fm%2BtHQ1y9JIFcYomTseEywqoMMaj29MGOqUBm%2F9pPIwd9LZmfU6YgTlJExzbeUY7T6bRn%2FGWmJPZ7MVWHTWxcOUayn02drT4NcCdJO6GYq4E0nae7ah%2BbbnLc7tCag7QtJqCUC4aBuYzQdtUKBVXcK5i0pTDRpI4JqveYiQeuQ%2BHEpuMydY%2Bqlops35RkqMeLirofTiJzG6oT02vOSFFaMsO0X%2BZ%2FuJX4%2B1fMxvNZ7XoVzD%2Bl3vM%2BcEKlAnGSm52&X-Amz-Signature=7c1d6707334576445340514fca15b424f5462aa03ac75b4b16f2db3e66370546&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YKCPDEEW%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG77fHTiUZKYRc6yGE54b%2BuQnFEHZv%2BJWEvKXkgyrxCLAiEA4cq2gxoDnIDfOjj7i0pd0zopIo8yP%2BY8YoVv3biEolkq%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDFffwC6UeRCFUVu7uircA6aT90huDoGRnoMrAFNAECoPacSjs8KLSDO1xhenOdp%2BEuTAtMjSh3YFZrEwcdZE1Z2aewIltk%2BICm8J3ZtVD0ljTnKXQVLh2IIW6%2Ffz%2FZ0Vjc%2Bq0QNbLt1B1BXBLTVS%2FWgf1pOeRg02SfEImUhWUOHV06xc0gxNe6dObZA7xZHfHAfs5l%2FlQPIW3zkGmd1vh84Ktc947hgypl3IlEQkcu4ST1XJs59Jd8VlJgbWsuSIamqtARwuHXpRSFuo9HDAj%2FZXVIXhYi7crGYyOJDBmjz3usxcyHVkjnJB53l36rOmkUS07JZ8tS59Szzl8049enE9rY3xhoWAKgbClPsC4Pl%2Fk7u%2BWBYzRbl0oAPVMqe5Qd2h%2FT6Yiq%2B2uCyFAkoB0ht0kIQuNRo9wZUMZV78m8WUKLhgEypfEBk6g%2BXslO0lX1raCDC31jCE20f%2FcvsCu%2BvZjJu9B08zMcFhIRoBFxhz6SnhDisKx2X2ajY686VTwo5vdBEzCRFzODAk6V3vDByMK5A0DbOJDBbvH%2FMDBQtvXCGcR%2BTX8hISRKSbjT0%2BCBbnaqtHJuw801CAJEP7gLFKLdxmtIRFHjsuUE%2FidcJjAPmF4bXPE%2BFk%2Fm%2BtHQ1y9JIFcYomTseEywqoMMaj29MGOqUBm%2F9pPIwd9LZmfU6YgTlJExzbeUY7T6bRn%2FGWmJPZ7MVWHTWxcOUayn02drT4NcCdJO6GYq4E0nae7ah%2BbbnLc7tCag7QtJqCUC4aBuYzQdtUKBVXcK5i0pTDRpI4JqveYiQeuQ%2BHEpuMydY%2Bqlops35RkqMeLirofTiJzG6oT02vOSFFaMsO0X%2BZ%2FuJX4%2B1fMxvNZ7XoVzD%2Bl3vM%2BcEKlAnGSm52&X-Amz-Signature=015980e16cc27c3217390170a833ffb21ee917cefbc77d24b6868b90a1177c36&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466USXF76EI%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC5eoTaCiAs%2FAVHp8HpaCOPslElDy7ZpnTFjwZ3wDfEqAIgSX5VpuzIAjjgNJeLrSFR0r3qr2zy%2FwjAgywg6ZDRTS8q%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDAxIAmZkcyDM0d7wNyrcA%2Fjddo3cdQ2oPOMOZaf%2F7ndZc45bgvcTdt6%2BbgQJBGVFUHoLvnH8DmGrCy5oJjJhQMR7wxfXQcFM0H79hb4w%2BXhTPIHlw00YcFS2iR0vsjT%2BAvsuuGqghdbvQq9WHSZS1WPlXGzJgHGSv7b%2FvbY940nP7OGAriH6QbGK5Qr%2BwkK3btgwbOYCABGrm8hoqI3%2FjBSW1cmgWr2qCdyVmbsVAZeAM94PqHL1VsYlIMEZ7tLwEJIkRrFPQ1Ym8gYEnLJGq0ZVSli7l7TMF4fB4ZzI4HcOFNbyQXrRRys4dmrMAY85N1lKhbjdsPAnK1PGDiPAwL8PkyrngiDzJNkSwlQgMB70WVnhvYA87wQGc2aJqUPerbWZCTzSrXgMc0GJe0c%2FCZmC7jl2%2BtGgqxw8WVC5hv3YZrYGJgmddoZP5QtjYqyFZ4Flfy0LvA4CXB85Q7H91NG%2FBvMYK1x5brMha5beltr4I8sMnXLPu2MqinrLhjzkTl%2B3r94bvEDbGiOfQob9XAspvI3tlsU%2FMx%2BDLCggylAJ3vKJtRptwV4bcjeSOKz7hoeNVmgYUFEtiSNUPGdiU6HE3M%2FrmUiUT4IxskEJZAWggOFaMNBbRbZP5TAFMB6%2Bx6LzfbhbrVr1Rq3%2BMM%2Bl29MGOqUBqNiGEWhYG2YF0uEG6ni4Dvy1UZySxKbnrH%2F9zpEPMatPrnBioaKu%2Ft3fCCmBXwFK62YlaOyVV%2F5d0%2FB19bz%2B4cctnZkLvs208BavcoU0kG2cWftFVxSyXYB41YChfpZciP%2F8yqs7IU7%2ByTqHdNF0BPZA89ouZCtEFEWvzU7fXG2XcuZwUtqEt7K9Txj%2FKq%2B4QUbocKg%2FqslvWPdQSOaHzqZCxt1T&X-Amz-Signature=29516b45a9810d095705bf23ec0df83acf7b8050c7ca444aa17b54d3f6d1bfbd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YK26L7NO%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFDI6f%2Fh6Nbw1mTZooAzOeVd2fCgD9XeiPPB9VWKlwzFAiEAj4fPic8KOyoaCgOfHoIxhJHVcTKsany9nN7dVDHR0tsq%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDIRI5AiFuRxiDKKuIircAwGNg1KIlSjWQwkoA3fn96Dsbexxm4LnCdq0KzF1KXn7ADlkJZxX3A0zPbYBFY6HUCfEUQ0DWMYpijT1v%2FWHthu2trCmG34hya5IMrsPfjZ8m4w8sinTmI6GmJvfyVlrcAmXyykKgw4yh%2BECnY%2Bm33lPd4L%2BXGAvPL8qaqBobFtKcCvbEgjvA%2Fz%2BeaUPu1bjNcadfCV%2FUlDzfuoeao6IGgsA3VAK%2BP9MwvmFaOH6xJZvlv7efvW9yAuDiKWBdODTz8mz7ad9dNdEa9CtPV3hThNP6BJeBJWqoPq4SZQCB5z%2Fy41gp64yoajo7r82jx6syfkomBpmZR%2BkEW%2Bw89OZ1fihQ%2BTjigBT259EZTMenHlBp9Lk9LeoxR7S0FQPxx1Z62oIJYML79UPuzSxhMHc0%2BXei%2FvA9jgK1lQyZfIoZidEcNzlbdYvAst58NaOZR6HIE5HbBc%2Fmb1IKCUxxlPbfY3xvBG3VuLCCFY5qbnb3UlUKvXpfIjN5t9a3nlXqba2HCKh%2Bgm1AG3KnvzxLdoYNkfm544%2B78moNpXgPnJfMjWDxBlkC4enlBc42o%2BnDImqCvMWkisQn34Jn8SOSAc%2BZWVjPliNROHs9kKkEJ6Fesrw%2B4p%2BE3R7CxohgiEfMO6l29MGOqUBcn7fXOEnRKKmQHEbbPkFFRaiDK25dK%2Blm3jWZAV2XI72uXCSN0EYQjkkH0fgVf%2BqAt0K8wbdhELf3ohIktY1MfVCwQekxAUrg%2FtMlGa7tZUEXCzKGqh6Fsp7wjBJU07wkJ1mybXGu3OEDpgK75igeDm0PE2mdppPoOPqvRP4wMoGgwl6%2BhnFL6ph4XIDJAA0JVH6Ak4FrUBcHY1Oz7F%2BU36MV2%2FY&X-Amz-Signature=1fa846dd39efe8817f30638be05a9e017ce66aba180ce636473bb69e04c77393&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YK26L7NO%2F20260808%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260808T083852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFDI6f%2Fh6Nbw1mTZooAzOeVd2fCgD9XeiPPB9VWKlwzFAiEAj4fPic8KOyoaCgOfHoIxhJHVcTKsany9nN7dVDHR0tsq%2FwMIaBAAGgw2Mzc0MjMxODM4MDUiDIRI5AiFuRxiDKKuIircAwGNg1KIlSjWQwkoA3fn96Dsbexxm4LnCdq0KzF1KXn7ADlkJZxX3A0zPbYBFY6HUCfEUQ0DWMYpijT1v%2FWHthu2trCmG34hya5IMrsPfjZ8m4w8sinTmI6GmJvfyVlrcAmXyykKgw4yh%2BECnY%2Bm33lPd4L%2BXGAvPL8qaqBobFtKcCvbEgjvA%2Fz%2BeaUPu1bjNcadfCV%2FUlDzfuoeao6IGgsA3VAK%2BP9MwvmFaOH6xJZvlv7efvW9yAuDiKWBdODTz8mz7ad9dNdEa9CtPV3hThNP6BJeBJWqoPq4SZQCB5z%2Fy41gp64yoajo7r82jx6syfkomBpmZR%2BkEW%2Bw89OZ1fihQ%2BTjigBT259EZTMenHlBp9Lk9LeoxR7S0FQPxx1Z62oIJYML79UPuzSxhMHc0%2BXei%2FvA9jgK1lQyZfIoZidEcNzlbdYvAst58NaOZR6HIE5HbBc%2Fmb1IKCUxxlPbfY3xvBG3VuLCCFY5qbnb3UlUKvXpfIjN5t9a3nlXqba2HCKh%2Bgm1AG3KnvzxLdoYNkfm544%2B78moNpXgPnJfMjWDxBlkC4enlBc42o%2BnDImqCvMWkisQn34Jn8SOSAc%2BZWVjPliNROHs9kKkEJ6Fesrw%2B4p%2BE3R7CxohgiEfMO6l29MGOqUBcn7fXOEnRKKmQHEbbPkFFRaiDK25dK%2Blm3jWZAV2XI72uXCSN0EYQjkkH0fgVf%2BqAt0K8wbdhELf3ohIktY1MfVCwQekxAUrg%2FtMlGa7tZUEXCzKGqh6Fsp7wjBJU07wkJ1mybXGu3OEDpgK75igeDm0PE2mdppPoOPqvRP4wMoGgwl6%2BhnFL6ph4XIDJAA0JVH6Ak4FrUBcHY1Oz7F%2BU36MV2%2FY&X-Amz-Signature=1ae4758ec8cbedcf76d0caf4f861d8e38b7b444dd10e3bb19407755369317219&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
