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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZYJ4TAUG%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQCGo9%2Fi9LGdVVZJKy3wOpL4eJfw5GeJX3HpjHfyfme3HwIhAKvDwPnX8jZjjjC6VAI08FXxZhaeraOliOywh74ab3HCKv8DCAoQABoMNjM3NDIzMTgzODA1IgzKIUXuiVhS%2Fcfegeoq3APBOvZm%2ByD%2B1PsI%2Fg89bxBWSWgGLHuxaY16Ro5JpwFyurRqSjbrP0Gcwx42xJNcL2wpNzxTyoS%2BQqhsCBe6JkfxnjIZqCl1zsSFiLfQ8YI0%2FxvTIyRARD9SNV2kGeIOJEM3E0LITJFasXFxjgY9HQIxks0iEJeeIuejMxsMgvCV0m8Cyi3Yz%2FCu%2FERwvkzP63QzXY1JcaYKIqsvwZQ2s01gzbf0p5Bon1O7w%2BMpWWAHp6068qEou5Ram%2BxiH8%2FxUsobTdJv%2F0nVjd4bkHObvj3HbyBSpqp6f8STPPluhOFZZJBd3D8v0X4l2sEcSCnz9DS3edAh8Xo90TEfF%2FAb%2FVgPP1vR%2BfdZVZFYabaWeETYniQ%2Foyc%2FxGkwgMSrf8EiTGVus6opeAQ1WdaJG1jXvKK1h0AnFTB5IUekddp3W2Sdy8zEQxvit%2B2G%2FKdEP2gUerQjRetsC49BOlmnSqVNVzYTNYNc070fQOHEx3DOrZgPrenyqIQ30avkArb1sL1aYPQKrhhL301tn6X%2Bob0Gl1mcCmfANjfgZ5ZmVJhE1WHDu%2FMkhRllO0BXszFKOwk6lcCEyNtXRiNkFjXEXEy%2F8NqHePH38Yr4nwXvxweGjU2AW%2FUzLgabByHf2ijANjCN9p3SBjqkAZuvIMbGvPTLmuhmXgttLrPVbxXSee74T6NB7WAdbROptZHm8Q%2BeLTFDxx5jjWZqh1e8xpHOS8HGOmfKbIhDEo6HTOTNfD64drl17t9yGREdkEfa%2FR5yJPSWPa9oMBm6HAi0UULfqkMPruY6lCDzL0PAIng%2BhiIL9eBW21fA%2FezdFupc1H4eog%2FyL7xJgsmx27GBR2wp5gVGaoMGAfSzkYIg4Ix4&X-Amz-Signature=a76f950fe5127cd35c6ec728c8a40338b60bddfa6a2a48601de677d5a217039f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZYJ4TAUG%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQCGo9%2Fi9LGdVVZJKy3wOpL4eJfw5GeJX3HpjHfyfme3HwIhAKvDwPnX8jZjjjC6VAI08FXxZhaeraOliOywh74ab3HCKv8DCAoQABoMNjM3NDIzMTgzODA1IgzKIUXuiVhS%2Fcfegeoq3APBOvZm%2ByD%2B1PsI%2Fg89bxBWSWgGLHuxaY16Ro5JpwFyurRqSjbrP0Gcwx42xJNcL2wpNzxTyoS%2BQqhsCBe6JkfxnjIZqCl1zsSFiLfQ8YI0%2FxvTIyRARD9SNV2kGeIOJEM3E0LITJFasXFxjgY9HQIxks0iEJeeIuejMxsMgvCV0m8Cyi3Yz%2FCu%2FERwvkzP63QzXY1JcaYKIqsvwZQ2s01gzbf0p5Bon1O7w%2BMpWWAHp6068qEou5Ram%2BxiH8%2FxUsobTdJv%2F0nVjd4bkHObvj3HbyBSpqp6f8STPPluhOFZZJBd3D8v0X4l2sEcSCnz9DS3edAh8Xo90TEfF%2FAb%2FVgPP1vR%2BfdZVZFYabaWeETYniQ%2Foyc%2FxGkwgMSrf8EiTGVus6opeAQ1WdaJG1jXvKK1h0AnFTB5IUekddp3W2Sdy8zEQxvit%2B2G%2FKdEP2gUerQjRetsC49BOlmnSqVNVzYTNYNc070fQOHEx3DOrZgPrenyqIQ30avkArb1sL1aYPQKrhhL301tn6X%2Bob0Gl1mcCmfANjfgZ5ZmVJhE1WHDu%2FMkhRllO0BXszFKOwk6lcCEyNtXRiNkFjXEXEy%2F8NqHePH38Yr4nwXvxweGjU2AW%2FUzLgabByHf2ijANjCN9p3SBjqkAZuvIMbGvPTLmuhmXgttLrPVbxXSee74T6NB7WAdbROptZHm8Q%2BeLTFDxx5jjWZqh1e8xpHOS8HGOmfKbIhDEo6HTOTNfD64drl17t9yGREdkEfa%2FR5yJPSWPa9oMBm6HAi0UULfqkMPruY6lCDzL0PAIng%2BhiIL9eBW21fA%2FezdFupc1H4eog%2FyL7xJgsmx27GBR2wp5gVGaoMGAfSzkYIg4Ix4&X-Amz-Signature=6c1780bba8a921fb83c20625a0f5f45438ca717de6f80b2b0762380bf0314280&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZYJ4TAUG%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQCGo9%2Fi9LGdVVZJKy3wOpL4eJfw5GeJX3HpjHfyfme3HwIhAKvDwPnX8jZjjjC6VAI08FXxZhaeraOliOywh74ab3HCKv8DCAoQABoMNjM3NDIzMTgzODA1IgzKIUXuiVhS%2Fcfegeoq3APBOvZm%2ByD%2B1PsI%2Fg89bxBWSWgGLHuxaY16Ro5JpwFyurRqSjbrP0Gcwx42xJNcL2wpNzxTyoS%2BQqhsCBe6JkfxnjIZqCl1zsSFiLfQ8YI0%2FxvTIyRARD9SNV2kGeIOJEM3E0LITJFasXFxjgY9HQIxks0iEJeeIuejMxsMgvCV0m8Cyi3Yz%2FCu%2FERwvkzP63QzXY1JcaYKIqsvwZQ2s01gzbf0p5Bon1O7w%2BMpWWAHp6068qEou5Ram%2BxiH8%2FxUsobTdJv%2F0nVjd4bkHObvj3HbyBSpqp6f8STPPluhOFZZJBd3D8v0X4l2sEcSCnz9DS3edAh8Xo90TEfF%2FAb%2FVgPP1vR%2BfdZVZFYabaWeETYniQ%2Foyc%2FxGkwgMSrf8EiTGVus6opeAQ1WdaJG1jXvKK1h0AnFTB5IUekddp3W2Sdy8zEQxvit%2B2G%2FKdEP2gUerQjRetsC49BOlmnSqVNVzYTNYNc070fQOHEx3DOrZgPrenyqIQ30avkArb1sL1aYPQKrhhL301tn6X%2Bob0Gl1mcCmfANjfgZ5ZmVJhE1WHDu%2FMkhRllO0BXszFKOwk6lcCEyNtXRiNkFjXEXEy%2F8NqHePH38Yr4nwXvxweGjU2AW%2FUzLgabByHf2ijANjCN9p3SBjqkAZuvIMbGvPTLmuhmXgttLrPVbxXSee74T6NB7WAdbROptZHm8Q%2BeLTFDxx5jjWZqh1e8xpHOS8HGOmfKbIhDEo6HTOTNfD64drl17t9yGREdkEfa%2FR5yJPSWPa9oMBm6HAi0UULfqkMPruY6lCDzL0PAIng%2BhiIL9eBW21fA%2FezdFupc1H4eog%2FyL7xJgsmx27GBR2wp5gVGaoMGAfSzkYIg4Ix4&X-Amz-Signature=1372d74681380ac8206bc90fd8bd88e1adf58756e0db98ed34ee239134cb4711&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TD2KNEK3%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQDBRgJ%2BwLYpgKPttcy0LnutYixbHFheJweBlCVdAYS9fQIhANoLVfQTZntudyVAVe%2FixRha8v13pDkCpEULLMoaJNZcKv8DCAoQABoMNjM3NDIzMTgzODA1IgzAyp4vQgQufODYXY4q3AO6%2BKreh5xNyyP1zlJ%2BXZ5%2BioHIae%2F4FKVvvYWfzL1Y%2BXIL1MQsxJ8iySh%2BMW5Wjd5Rb872%2FgNX1uD24vkJ%2Fx5aq0diVKFempnQdg%2FPqTuripNVUkAF4KiDvPZcFVl%2FqrlGqEsoTjNhoACYebS5FzDOg%2FP3mRuRzjxOv0yBqKn8NNCxsczTWimtTlw4k4Krrs1WaccJ16a%2B9B9IE06iu2bDfaq%2BmnxBXOQbS%2F0DuWAUVUJZr1XG%2BUbyx4cLFqkFo6s9OAmq%2BQFIY401Vvnq%2Bz0Cti9rr01A%2BFId%2FgucjtynXN9cKwdAVSHNpebHMy8nuIvnB1hFCM1YDTp2v%2FAnwX7Nybvu1Q%2BdFbTQdksmY1Clu0YMa2hsZaH%2BBH%2FzBu5ompvjcMKCgM3yNBd6hq7vIWX0RgiZ8OwobT%2FiBeJR6ZP5nvWCOOlEA0j9QUmo2j9es5XpVDTTKMobFADs3bHwvzQNJ6cmK4tDxff%2F0mYijCCQSj01cqqDDbnUOJcRqA8myeo%2Bb0SW%2FFT4cYACkYtd3QlSjjndIEUlJvMdKbeR0H8nfuSGBVmLnaEh5nrFIKl6TeVwmYUK4pOP2PeIkTMCacRGAiTG1zvga%2FIG10D5xoniBQV7XsKcwH8DkJp3XTD%2F9p3SBjqkAesu1uKb%2FFCcUDK5nNpTDKg025m8nuHxPcuOAOn1Gzi%2FL0e07q0%2BeHFLWYlfOlPOY3szfhm%2FzZEKTcmgVEIqRw5GcrRXlxPreFhp5LughuNnYRESRngT6nKuJKcOlFLw%2B2D7TZkRgYKGFNzBlJLTctkeTFj0NsB78nyQggYuLdPO6waBEi0sQyXTxYjB8aH09xpbPm%2FBch60kNcnMekHhqgvuTw%2B&X-Amz-Signature=343effb58f44228d26dfd9c6e88d516f3ed68e5bc3cf6345b953a24477cba1dd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TD2KNEK3%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQDBRgJ%2BwLYpgKPttcy0LnutYixbHFheJweBlCVdAYS9fQIhANoLVfQTZntudyVAVe%2FixRha8v13pDkCpEULLMoaJNZcKv8DCAoQABoMNjM3NDIzMTgzODA1IgzAyp4vQgQufODYXY4q3AO6%2BKreh5xNyyP1zlJ%2BXZ5%2BioHIae%2F4FKVvvYWfzL1Y%2BXIL1MQsxJ8iySh%2BMW5Wjd5Rb872%2FgNX1uD24vkJ%2Fx5aq0diVKFempnQdg%2FPqTuripNVUkAF4KiDvPZcFVl%2FqrlGqEsoTjNhoACYebS5FzDOg%2FP3mRuRzjxOv0yBqKn8NNCxsczTWimtTlw4k4Krrs1WaccJ16a%2B9B9IE06iu2bDfaq%2BmnxBXOQbS%2F0DuWAUVUJZr1XG%2BUbyx4cLFqkFo6s9OAmq%2BQFIY401Vvnq%2Bz0Cti9rr01A%2BFId%2FgucjtynXN9cKwdAVSHNpebHMy8nuIvnB1hFCM1YDTp2v%2FAnwX7Nybvu1Q%2BdFbTQdksmY1Clu0YMa2hsZaH%2BBH%2FzBu5ompvjcMKCgM3yNBd6hq7vIWX0RgiZ8OwobT%2FiBeJR6ZP5nvWCOOlEA0j9QUmo2j9es5XpVDTTKMobFADs3bHwvzQNJ6cmK4tDxff%2F0mYijCCQSj01cqqDDbnUOJcRqA8myeo%2Bb0SW%2FFT4cYACkYtd3QlSjjndIEUlJvMdKbeR0H8nfuSGBVmLnaEh5nrFIKl6TeVwmYUK4pOP2PeIkTMCacRGAiTG1zvga%2FIG10D5xoniBQV7XsKcwH8DkJp3XTD%2F9p3SBjqkAesu1uKb%2FFCcUDK5nNpTDKg025m8nuHxPcuOAOn1Gzi%2FL0e07q0%2BeHFLWYlfOlPOY3szfhm%2FzZEKTcmgVEIqRw5GcrRXlxPreFhp5LughuNnYRESRngT6nKuJKcOlFLw%2B2D7TZkRgYKGFNzBlJLTctkeTFj0NsB78nyQggYuLdPO6waBEi0sQyXTxYjB8aH09xpbPm%2FBch60kNcnMekHhqgvuTw%2B&X-Amz-Signature=2b7c70c2604ce1f4161369b1078c7071fca4e7cbb4d41b50a9eb4dbf7a1bacdf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TD2KNEK3%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQDBRgJ%2BwLYpgKPttcy0LnutYixbHFheJweBlCVdAYS9fQIhANoLVfQTZntudyVAVe%2FixRha8v13pDkCpEULLMoaJNZcKv8DCAoQABoMNjM3NDIzMTgzODA1IgzAyp4vQgQufODYXY4q3AO6%2BKreh5xNyyP1zlJ%2BXZ5%2BioHIae%2F4FKVvvYWfzL1Y%2BXIL1MQsxJ8iySh%2BMW5Wjd5Rb872%2FgNX1uD24vkJ%2Fx5aq0diVKFempnQdg%2FPqTuripNVUkAF4KiDvPZcFVl%2FqrlGqEsoTjNhoACYebS5FzDOg%2FP3mRuRzjxOv0yBqKn8NNCxsczTWimtTlw4k4Krrs1WaccJ16a%2B9B9IE06iu2bDfaq%2BmnxBXOQbS%2F0DuWAUVUJZr1XG%2BUbyx4cLFqkFo6s9OAmq%2BQFIY401Vvnq%2Bz0Cti9rr01A%2BFId%2FgucjtynXN9cKwdAVSHNpebHMy8nuIvnB1hFCM1YDTp2v%2FAnwX7Nybvu1Q%2BdFbTQdksmY1Clu0YMa2hsZaH%2BBH%2FzBu5ompvjcMKCgM3yNBd6hq7vIWX0RgiZ8OwobT%2FiBeJR6ZP5nvWCOOlEA0j9QUmo2j9es5XpVDTTKMobFADs3bHwvzQNJ6cmK4tDxff%2F0mYijCCQSj01cqqDDbnUOJcRqA8myeo%2Bb0SW%2FFT4cYACkYtd3QlSjjndIEUlJvMdKbeR0H8nfuSGBVmLnaEh5nrFIKl6TeVwmYUK4pOP2PeIkTMCacRGAiTG1zvga%2FIG10D5xoniBQV7XsKcwH8DkJp3XTD%2F9p3SBjqkAesu1uKb%2FFCcUDK5nNpTDKg025m8nuHxPcuOAOn1Gzi%2FL0e07q0%2BeHFLWYlfOlPOY3szfhm%2FzZEKTcmgVEIqRw5GcrRXlxPreFhp5LughuNnYRESRngT6nKuJKcOlFLw%2B2D7TZkRgYKGFNzBlJLTctkeTFj0NsB78nyQggYuLdPO6waBEi0sQyXTxYjB8aH09xpbPm%2FBch60kNcnMekHhqgvuTw%2B&X-Amz-Signature=a259fe5acdefab24d4faa27f9932ab5512d3b98fb0e191ddfb1f76cb09daaaa8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TD2KNEK3%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJIMEYCIQDBRgJ%2BwLYpgKPttcy0LnutYixbHFheJweBlCVdAYS9fQIhANoLVfQTZntudyVAVe%2FixRha8v13pDkCpEULLMoaJNZcKv8DCAoQABoMNjM3NDIzMTgzODA1IgzAyp4vQgQufODYXY4q3AO6%2BKreh5xNyyP1zlJ%2BXZ5%2BioHIae%2F4FKVvvYWfzL1Y%2BXIL1MQsxJ8iySh%2BMW5Wjd5Rb872%2FgNX1uD24vkJ%2Fx5aq0diVKFempnQdg%2FPqTuripNVUkAF4KiDvPZcFVl%2FqrlGqEsoTjNhoACYebS5FzDOg%2FP3mRuRzjxOv0yBqKn8NNCxsczTWimtTlw4k4Krrs1WaccJ16a%2B9B9IE06iu2bDfaq%2BmnxBXOQbS%2F0DuWAUVUJZr1XG%2BUbyx4cLFqkFo6s9OAmq%2BQFIY401Vvnq%2Bz0Cti9rr01A%2BFId%2FgucjtynXN9cKwdAVSHNpebHMy8nuIvnB1hFCM1YDTp2v%2FAnwX7Nybvu1Q%2BdFbTQdksmY1Clu0YMa2hsZaH%2BBH%2FzBu5ompvjcMKCgM3yNBd6hq7vIWX0RgiZ8OwobT%2FiBeJR6ZP5nvWCOOlEA0j9QUmo2j9es5XpVDTTKMobFADs3bHwvzQNJ6cmK4tDxff%2F0mYijCCQSj01cqqDDbnUOJcRqA8myeo%2Bb0SW%2FFT4cYACkYtd3QlSjjndIEUlJvMdKbeR0H8nfuSGBVmLnaEh5nrFIKl6TeVwmYUK4pOP2PeIkTMCacRGAiTG1zvga%2FIG10D5xoniBQV7XsKcwH8DkJp3XTD%2F9p3SBjqkAesu1uKb%2FFCcUDK5nNpTDKg025m8nuHxPcuOAOn1Gzi%2FL0e07q0%2BeHFLWYlfOlPOY3szfhm%2FzZEKTcmgVEIqRw5GcrRXlxPreFhp5LughuNnYRESRngT6nKuJKcOlFLw%2B2D7TZkRgYKGFNzBlJLTctkeTFj0NsB78nyQggYuLdPO6waBEi0sQyXTxYjB8aH09xpbPm%2FBch60kNcnMekHhqgvuTw%2B&X-Amz-Signature=6d243196346907f9685aee55f09e8190fca572840c2c39d5b9bf84a48fbe8003&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WEMKH6DX%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103403Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJHMEUCIDSANEL2JyiArNaaQOYX9wonAOfg4VtS8brbz%2FFyoKMLAiEA6iRQFAHxoSywQOROINxCREphSt2NQ2pOWtf7GUJpkLcq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDM44%2BFDntJRBFhsyfyrcA9d2rMNtPUh3IqMMrBaTFAU6BWihEMbpDj4b03fJ9OMV5CogYtIKiyWexuInb%2FYAMWG6OnkeJwUiAMcDCn6HGXkVT4ZZX%2F6nbyA1ut%2Bhf%2BuMlTQ69yHNmyxuCSVW8PLv6cA9CIi%2BlHPVSaacEO5Pb5E8cLX5DYmZlZsVzBgbxT%2B%2FPPFmdZoeTd7qreTOyFVirybTp0xKewrRRNeAJGXeF94I%2F%2BUFmpHhxWF73pnodKO8pKjNdjulN88D%2FvM2ayMV0qPwMnPpkbtQD%2F0u%2BM7Vl%2FBtqjKAtpHwq4wFEGHiLOolSidbmKRHFqgkAoQJYDU03RZijpQx28MBPoC0lG3J%2B6CoRuwxg5MWTCw4lfwKxqABlftnPQ7RnPRDSpqs45AjxtDL7q9Y0fFHoij3gHmgYpl7iII9yB%2Fai0V1srGaDZE2lIcqlg9hmI5AQIq%2BFt3IG9p1fQBM0UEuw9zOjFwha%2BdJLnXiR6GA9bh68DhmTt50dLpXBY896c1Lmijb7b%2BWARjUz%2Fq8Rz4lqtmv6hKHS2gukT8Nr6MFVSt1DzL6pZgyjROgLQ7mbLb7UDdm2ClWBPzSyaDNy3IqmkBQM3tjOeor3PiSttA8DuuzaK8h7cB%2FnxizOFIOwv6Q1BleML31ndIGOqUB757CFqeXT2wTp%2FcHJzslkxNOLo8B9GZJhvsX%2BcSoRwXBusLDDjD9SkeOuZjDIPP5BYDeICRC38e%2Fj1fOhDw1JNzZky5KF33SZtLGeDEa4L9B7MzNKZnXRg%2BGGdTybrCAhjJ%2BHfk5lIzKWP096tFiqkM83pO7hBwQYC7sLhr4XJRaWC3yq5cpWKj3v3wuFbnEkDPjKlCYXpFQ%2FewjSc3sRwtzBP9i&X-Amz-Signature=186490e9dc2a5e8e22df5b466cc10aa22cfa90255cf0067b7d80558e6c398f53&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666PRKOAA2%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103405Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJHMEUCIEtgwTwHBsztKBFy5exH3OanVPJzKfdigOJW7cSNqzcwAiEA7E%2FAEgJNtm5%2Bry7cXT8qCrdqgGhbnEdshfw1XVllEooq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDHV4i2Vj1ET%2FOdaxGyrcA0epHL%2BmZqEA0Jcw3RQmSkKyHnaAv7ab%2BXyKk5FzFXMt23wYgeDnJNswpsM%2FsdHnutPid9UmX%2FnwHPFeQX2qnoI8GZhKuYy5FE9FAnz0PNsQbiW4UCQjcEZJHgToznVJaQiUBy67KAxIR4Mn%2BRSzebIwdjYqTgix9y%2FkASCjEtB%2FA41bcmOGAFC4%2F5%2FAdtMENmoPYve1AJRC1rM5%2BL86I3Hr3NC%2B6HNSwDZ39ojFi7qT4sQ6yWhrLQxwDIPUjgKaS46YjoCzKmW4TJQ1qYDPBbcegG7%2ByW7PnQp5jM0v4DaOtB1Q2ERFZCA6YwZSAug1i0imarPuJFFk7PRIrocjV%2BFyFAoa4HoL34Ef3uezoPYGwit%2BdTqgV%2FIUUpIEIftnJ8mfm9OyhUozMO%2BcBwAm%2F%2FH%2Be0gYV%2BUa3dTl5t%2BqFzPdYP8%2BylnXd4VAeC5NFSmYe0vp2BEK3%2Fm0X0YzbnHBkxPoDjOV8uG9Ttdmtl0BKUfFFv4M4jq7LqlblBgnSJ547KNnrExh3IzuA1jtRqAwGdBzyXjWF1m98nlQn%2FbcYBgGnDpJBxAFUf70UuJStsGOA92gYm9DM%2BrXKQv6WBFfNWBRG43V8NpcvvYfS9HMbbOGZFEVSfj3A3M0zfPiMJ32ndIGOqUByEJxKJm1%2BXviFIA%2FKfWdo3zGAyEp0W8zui%2BjZEinNBhFXbKzZ%2Bd0iT%2BFUDXyJqBFNemFs%2FH7kM10OQC6eCayYYuxQXkGlxl2b5zm24ZzlM1Hur1DtJt1mKYZ5fiQft36bIb%2FTx4Ks8LwjfftcEHXtYlvwa631564baoXg68SBXGwk2Ej4nFjUi3cZPIq1n0Eoh2fLzlqa9x%2FMjHFwoqkiP%2FU9sqK&X-Amz-Signature=0824f7a4526172359cf1691c3bd400cdc90d11907c77469dd044b06ff48639fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666PRKOAA2%2F20260703%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260703T103405Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEEaCXVzLXdlc3QtMiJHMEUCIEtgwTwHBsztKBFy5exH3OanVPJzKfdigOJW7cSNqzcwAiEA7E%2FAEgJNtm5%2Bry7cXT8qCrdqgGhbnEdshfw1XVllEooq%2FwMIChAAGgw2Mzc0MjMxODM4MDUiDHV4i2Vj1ET%2FOdaxGyrcA0epHL%2BmZqEA0Jcw3RQmSkKyHnaAv7ab%2BXyKk5FzFXMt23wYgeDnJNswpsM%2FsdHnutPid9UmX%2FnwHPFeQX2qnoI8GZhKuYy5FE9FAnz0PNsQbiW4UCQjcEZJHgToznVJaQiUBy67KAxIR4Mn%2BRSzebIwdjYqTgix9y%2FkASCjEtB%2FA41bcmOGAFC4%2F5%2FAdtMENmoPYve1AJRC1rM5%2BL86I3Hr3NC%2B6HNSwDZ39ojFi7qT4sQ6yWhrLQxwDIPUjgKaS46YjoCzKmW4TJQ1qYDPBbcegG7%2ByW7PnQp5jM0v4DaOtB1Q2ERFZCA6YwZSAug1i0imarPuJFFk7PRIrocjV%2BFyFAoa4HoL34Ef3uezoPYGwit%2BdTqgV%2FIUUpIEIftnJ8mfm9OyhUozMO%2BcBwAm%2F%2FH%2Be0gYV%2BUa3dTl5t%2BqFzPdYP8%2BylnXd4VAeC5NFSmYe0vp2BEK3%2Fm0X0YzbnHBkxPoDjOV8uG9Ttdmtl0BKUfFFv4M4jq7LqlblBgnSJ547KNnrExh3IzuA1jtRqAwGdBzyXjWF1m98nlQn%2FbcYBgGnDpJBxAFUf70UuJStsGOA92gYm9DM%2BrXKQv6WBFfNWBRG43V8NpcvvYfS9HMbbOGZFEVSfj3A3M0zfPiMJ32ndIGOqUByEJxKJm1%2BXviFIA%2FKfWdo3zGAyEp0W8zui%2BjZEinNBhFXbKzZ%2Bd0iT%2BFUDXyJqBFNemFs%2FH7kM10OQC6eCayYYuxQXkGlxl2b5zm24ZzlM1Hur1DtJt1mKYZ5fiQft36bIb%2FTx4Ks8LwjfftcEHXtYlvwa631564baoXg68SBXGwk2Ej4nFjUi3cZPIq1n0Eoh2fLzlqa9x%2FMjHFwoqkiP%2FU9sqK&X-Amz-Signature=e20134eb8d04ecbf673d802576ec54361f0f804f67fd65884f6fce484175eec7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
