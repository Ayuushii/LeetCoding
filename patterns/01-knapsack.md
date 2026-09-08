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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UPHI5WRD%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123755Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAeW1fvvR%2Fnkh5VbfMM7nrq8DLEUP3RbzJbHD%2F7diyC9AiBF67kzLPowPy%2FpKhTZwrToNq4FIUkDiGHfMwponf8daSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIMkmodubiM1iYc3lygKtwDdnfQqjCbCA%2BTIUPDX8HnDXtGXcreWJTKO3XFj8CI9ZwaHAQDdiCUE0vZLA8KHU1RKjofpvmIJdt7VuPKuTIi03%2BNnl81mHukaqXr4ZLAOEbvd%2B9tisrcHpuwGJUA4DH8G7EmswmttS11BmJltufDony3NiTKKismZrIj2YDbNggijfYC4iLKM%2BUxUGE06oLfKf2ebvceLTBH%2BwX5GPsLA8aN%2FSjHc0YH0jXstXzASZXdpZFaV08zGKMm5CXE%2FfdrULW22q%2Ba1mQoR2bEX4EYVSJVhaqqZXALIrgnMvQ84W%2FEwcTMOGb6wUMJkzg%2F4FhzswEsckyqxCJ%2BRC0ZgLOPugGywC5MxS7TRm2lq1O%2Brg1vB4yX2dPmzXUEjBg%2BN4YfF0niBgkx9XPnJMcXN%2Bey1Ouus46Zp8vrsPZxac8Zmi%2BExAFuCYVI2PEPDCF46LLSE4d3eebHqURxVowiazcYZiWH02P3Yq5YMlIUUGvzKNhz4apWBcvUkwocXX8wgwSi2KFF9GDiJ8qW9jvF1Hx1yxZ1E9DLeWo84rORU5P6VIzjDOPQJxIPBv2Lxld%2F3kG1OEc1bmZLyAG53rM3uJYM%2BVOzJzkS6CgOD6QvKaARGA%2FNARI6z%2BmIqwWDQjgw34j%2F1AY6pgEyg%2BU2PwMvzuFt2XRstmoTZ7lSC4qqVMCsJHMIOqQBirruDN%2FbHMra0ksPfGFr3N6T2%2Fg74tuRwos%2BxMhMiIqxUUTMqAY3ShL7CwrBlOknPECpMHBS7pZkAYpf0nXx0y2EDey0G1EciwHZ7uXVDwPRYciJqgtccyvGW49do03SAq4O57JJO5WunWcI389A9g5WmvBpv8hxg169g0OgRWHpYUfsN6RX&X-Amz-Signature=c51a533f4f8b560b8e2334bde40dbf60d3d731695f0d6e2822565c549c82c18f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UPHI5WRD%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123755Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAeW1fvvR%2Fnkh5VbfMM7nrq8DLEUP3RbzJbHD%2F7diyC9AiBF67kzLPowPy%2FpKhTZwrToNq4FIUkDiGHfMwponf8daSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIMkmodubiM1iYc3lygKtwDdnfQqjCbCA%2BTIUPDX8HnDXtGXcreWJTKO3XFj8CI9ZwaHAQDdiCUE0vZLA8KHU1RKjofpvmIJdt7VuPKuTIi03%2BNnl81mHukaqXr4ZLAOEbvd%2B9tisrcHpuwGJUA4DH8G7EmswmttS11BmJltufDony3NiTKKismZrIj2YDbNggijfYC4iLKM%2BUxUGE06oLfKf2ebvceLTBH%2BwX5GPsLA8aN%2FSjHc0YH0jXstXzASZXdpZFaV08zGKMm5CXE%2FfdrULW22q%2Ba1mQoR2bEX4EYVSJVhaqqZXALIrgnMvQ84W%2FEwcTMOGb6wUMJkzg%2F4FhzswEsckyqxCJ%2BRC0ZgLOPugGywC5MxS7TRm2lq1O%2Brg1vB4yX2dPmzXUEjBg%2BN4YfF0niBgkx9XPnJMcXN%2Bey1Ouus46Zp8vrsPZxac8Zmi%2BExAFuCYVI2PEPDCF46LLSE4d3eebHqURxVowiazcYZiWH02P3Yq5YMlIUUGvzKNhz4apWBcvUkwocXX8wgwSi2KFF9GDiJ8qW9jvF1Hx1yxZ1E9DLeWo84rORU5P6VIzjDOPQJxIPBv2Lxld%2F3kG1OEc1bmZLyAG53rM3uJYM%2BVOzJzkS6CgOD6QvKaARGA%2FNARI6z%2BmIqwWDQjgw34j%2F1AY6pgEyg%2BU2PwMvzuFt2XRstmoTZ7lSC4qqVMCsJHMIOqQBirruDN%2FbHMra0ksPfGFr3N6T2%2Fg74tuRwos%2BxMhMiIqxUUTMqAY3ShL7CwrBlOknPECpMHBS7pZkAYpf0nXx0y2EDey0G1EciwHZ7uXVDwPRYciJqgtccyvGW49do03SAq4O57JJO5WunWcI389A9g5WmvBpv8hxg169g0OgRWHpYUfsN6RX&X-Amz-Signature=6461ca0ffae6568110b1be897698de710ae999d8b1bcc4082a61e56567cbcfbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UPHI5WRD%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123755Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAeW1fvvR%2Fnkh5VbfMM7nrq8DLEUP3RbzJbHD%2F7diyC9AiBF67kzLPowPy%2FpKhTZwrToNq4FIUkDiGHfMwponf8daSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIMkmodubiM1iYc3lygKtwDdnfQqjCbCA%2BTIUPDX8HnDXtGXcreWJTKO3XFj8CI9ZwaHAQDdiCUE0vZLA8KHU1RKjofpvmIJdt7VuPKuTIi03%2BNnl81mHukaqXr4ZLAOEbvd%2B9tisrcHpuwGJUA4DH8G7EmswmttS11BmJltufDony3NiTKKismZrIj2YDbNggijfYC4iLKM%2BUxUGE06oLfKf2ebvceLTBH%2BwX5GPsLA8aN%2FSjHc0YH0jXstXzASZXdpZFaV08zGKMm5CXE%2FfdrULW22q%2Ba1mQoR2bEX4EYVSJVhaqqZXALIrgnMvQ84W%2FEwcTMOGb6wUMJkzg%2F4FhzswEsckyqxCJ%2BRC0ZgLOPugGywC5MxS7TRm2lq1O%2Brg1vB4yX2dPmzXUEjBg%2BN4YfF0niBgkx9XPnJMcXN%2Bey1Ouus46Zp8vrsPZxac8Zmi%2BExAFuCYVI2PEPDCF46LLSE4d3eebHqURxVowiazcYZiWH02P3Yq5YMlIUUGvzKNhz4apWBcvUkwocXX8wgwSi2KFF9GDiJ8qW9jvF1Hx1yxZ1E9DLeWo84rORU5P6VIzjDOPQJxIPBv2Lxld%2F3kG1OEc1bmZLyAG53rM3uJYM%2BVOzJzkS6CgOD6QvKaARGA%2FNARI6z%2BmIqwWDQjgw34j%2F1AY6pgEyg%2BU2PwMvzuFt2XRstmoTZ7lSC4qqVMCsJHMIOqQBirruDN%2FbHMra0ksPfGFr3N6T2%2Fg74tuRwos%2BxMhMiIqxUUTMqAY3ShL7CwrBlOknPECpMHBS7pZkAYpf0nXx0y2EDey0G1EciwHZ7uXVDwPRYciJqgtccyvGW49do03SAq4O57JJO5WunWcI389A9g5WmvBpv8hxg169g0OgRWHpYUfsN6RX&X-Amz-Signature=d802c62023d67362635e5d40be300b28aa443862df782ebf61e091e654d362db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RELRZVTH%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123756Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHD9z%2BGEpoYkR9SFFVl0BYDu57JT7%2BykMJwKqtLJ4s17AiAVAe2n6ZImeVa65kq%2FekLyMsPbMOJEkzlyA0PmW%2F%2BcUSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIM1it%2FfppEiTDE8i%2FUKtwDemMqjnK91Fj%2BcDHx8HVycKQ1soWQzsLAHfMVnsthfZ%2FSI21O11Qbt9AthGVf5HvE1bBwqvxsBGDU1XqlokauRPX3AW4Z4cqmiTq3tU8Nh%2F%2BeJ6Cs1%2FosKiDaL1KrMCkW5VSoQ1QB82Qq7BU0PQpIF2PrRtcCQLtwQtbV5QTM7WR0Pvmi9dV%2FYZ0f7%2Fx54knzrlpTrn8jRw5pEuaeMcutFqJK6TW%2B5y28bVS8L5tQN8hXnPhtqyslWz5rErH9vd9uVMzbmxZzaQPy7QBQFXCDVjNTk%2BqlyjVZissDGzuS3ILNo%2ByDroQTM5KLPKAQRdRv25WIjMuSc5SNdwSw2x5qmZ2iE7gEVWNYcytfihndZPRRToE2NBM0Wy8izfKAon5ANkllHyJkGHBzvw7hjGt5qO1uTWGLCoYJl0eQ4H7nhVfbXIREc%2BiH%2FTmgYlnODXt8OLxR2uYZWPSKz1uXOlUdupI2P0GKH4Rhmf9W46LUip9KQ4EExpaOIsFpKDQSgCV1M5dWRyPW3HsZqF0yAazf45aSLkPdQvU5%2FO7keqkfySYP3FUKNcUmlTO2De8mrt2SroJFHxI4QGwJI7NNDSGZiKjBdk9ERuUZm2IGmVFW6EjmH%2BhxqDe74DF0nt8w%2B4n%2F1AY6pgHgWGdwEXS%2Fr%2FoAVwcMPd%2FlS%2FmESKI5F%2Br6b%2FdSJxO%2FtTg2jFWah2b31MqKpetqSEAE6RTHfatlSER4%2FrNC%2BySuxOaLahDShurWXCdF96TyBE0yutm87unricH0ghycwgHjnQxMvUImi9SP2aPpyzfIGR%2Bg4MA65We4ikquxd1RRVA6cipEbVlfE6oafTz5jYKpIwx%2FioaxS0ql8RVPOgQT%2FhhXZvwu&X-Amz-Signature=ae0641ce7cf81fe9c60f797929e7aa0aed9243ab8349cfe6fcd2494492cc8ed8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RELRZVTH%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123756Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHD9z%2BGEpoYkR9SFFVl0BYDu57JT7%2BykMJwKqtLJ4s17AiAVAe2n6ZImeVa65kq%2FekLyMsPbMOJEkzlyA0PmW%2F%2BcUSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIM1it%2FfppEiTDE8i%2FUKtwDemMqjnK91Fj%2BcDHx8HVycKQ1soWQzsLAHfMVnsthfZ%2FSI21O11Qbt9AthGVf5HvE1bBwqvxsBGDU1XqlokauRPX3AW4Z4cqmiTq3tU8Nh%2F%2BeJ6Cs1%2FosKiDaL1KrMCkW5VSoQ1QB82Qq7BU0PQpIF2PrRtcCQLtwQtbV5QTM7WR0Pvmi9dV%2FYZ0f7%2Fx54knzrlpTrn8jRw5pEuaeMcutFqJK6TW%2B5y28bVS8L5tQN8hXnPhtqyslWz5rErH9vd9uVMzbmxZzaQPy7QBQFXCDVjNTk%2BqlyjVZissDGzuS3ILNo%2ByDroQTM5KLPKAQRdRv25WIjMuSc5SNdwSw2x5qmZ2iE7gEVWNYcytfihndZPRRToE2NBM0Wy8izfKAon5ANkllHyJkGHBzvw7hjGt5qO1uTWGLCoYJl0eQ4H7nhVfbXIREc%2BiH%2FTmgYlnODXt8OLxR2uYZWPSKz1uXOlUdupI2P0GKH4Rhmf9W46LUip9KQ4EExpaOIsFpKDQSgCV1M5dWRyPW3HsZqF0yAazf45aSLkPdQvU5%2FO7keqkfySYP3FUKNcUmlTO2De8mrt2SroJFHxI4QGwJI7NNDSGZiKjBdk9ERuUZm2IGmVFW6EjmH%2BhxqDe74DF0nt8w%2B4n%2F1AY6pgHgWGdwEXS%2Fr%2FoAVwcMPd%2FlS%2FmESKI5F%2Br6b%2FdSJxO%2FtTg2jFWah2b31MqKpetqSEAE6RTHfatlSER4%2FrNC%2BySuxOaLahDShurWXCdF96TyBE0yutm87unricH0ghycwgHjnQxMvUImi9SP2aPpyzfIGR%2Bg4MA65We4ikquxd1RRVA6cipEbVlfE6oafTz5jYKpIwx%2FioaxS0ql8RVPOgQT%2FhhXZvwu&X-Amz-Signature=f53f5ba1fcfa0e076282fa52883ae06e4b22ffe16730ecd1788c8d4cadfaccf5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RELRZVTH%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123756Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHD9z%2BGEpoYkR9SFFVl0BYDu57JT7%2BykMJwKqtLJ4s17AiAVAe2n6ZImeVa65kq%2FekLyMsPbMOJEkzlyA0PmW%2F%2BcUSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIM1it%2FfppEiTDE8i%2FUKtwDemMqjnK91Fj%2BcDHx8HVycKQ1soWQzsLAHfMVnsthfZ%2FSI21O11Qbt9AthGVf5HvE1bBwqvxsBGDU1XqlokauRPX3AW4Z4cqmiTq3tU8Nh%2F%2BeJ6Cs1%2FosKiDaL1KrMCkW5VSoQ1QB82Qq7BU0PQpIF2PrRtcCQLtwQtbV5QTM7WR0Pvmi9dV%2FYZ0f7%2Fx54knzrlpTrn8jRw5pEuaeMcutFqJK6TW%2B5y28bVS8L5tQN8hXnPhtqyslWz5rErH9vd9uVMzbmxZzaQPy7QBQFXCDVjNTk%2BqlyjVZissDGzuS3ILNo%2ByDroQTM5KLPKAQRdRv25WIjMuSc5SNdwSw2x5qmZ2iE7gEVWNYcytfihndZPRRToE2NBM0Wy8izfKAon5ANkllHyJkGHBzvw7hjGt5qO1uTWGLCoYJl0eQ4H7nhVfbXIREc%2BiH%2FTmgYlnODXt8OLxR2uYZWPSKz1uXOlUdupI2P0GKH4Rhmf9W46LUip9KQ4EExpaOIsFpKDQSgCV1M5dWRyPW3HsZqF0yAazf45aSLkPdQvU5%2FO7keqkfySYP3FUKNcUmlTO2De8mrt2SroJFHxI4QGwJI7NNDSGZiKjBdk9ERuUZm2IGmVFW6EjmH%2BhxqDe74DF0nt8w%2B4n%2F1AY6pgHgWGdwEXS%2Fr%2FoAVwcMPd%2FlS%2FmESKI5F%2Br6b%2FdSJxO%2FtTg2jFWah2b31MqKpetqSEAE6RTHfatlSER4%2FrNC%2BySuxOaLahDShurWXCdF96TyBE0yutm87unricH0ghycwgHjnQxMvUImi9SP2aPpyzfIGR%2Bg4MA65We4ikquxd1RRVA6cipEbVlfE6oafTz5jYKpIwx%2FioaxS0ql8RVPOgQT%2FhhXZvwu&X-Amz-Signature=92fbea69d81b6a1912caf3c733c8ccea6d399c9a799aa6d866ee49f8f6de8c4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RELRZVTH%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123756Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHD9z%2BGEpoYkR9SFFVl0BYDu57JT7%2BykMJwKqtLJ4s17AiAVAe2n6ZImeVa65kq%2FekLyMsPbMOJEkzlyA0PmW%2F%2BcUSr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIM1it%2FfppEiTDE8i%2FUKtwDemMqjnK91Fj%2BcDHx8HVycKQ1soWQzsLAHfMVnsthfZ%2FSI21O11Qbt9AthGVf5HvE1bBwqvxsBGDU1XqlokauRPX3AW4Z4cqmiTq3tU8Nh%2F%2BeJ6Cs1%2FosKiDaL1KrMCkW5VSoQ1QB82Qq7BU0PQpIF2PrRtcCQLtwQtbV5QTM7WR0Pvmi9dV%2FYZ0f7%2Fx54knzrlpTrn8jRw5pEuaeMcutFqJK6TW%2B5y28bVS8L5tQN8hXnPhtqyslWz5rErH9vd9uVMzbmxZzaQPy7QBQFXCDVjNTk%2BqlyjVZissDGzuS3ILNo%2ByDroQTM5KLPKAQRdRv25WIjMuSc5SNdwSw2x5qmZ2iE7gEVWNYcytfihndZPRRToE2NBM0Wy8izfKAon5ANkllHyJkGHBzvw7hjGt5qO1uTWGLCoYJl0eQ4H7nhVfbXIREc%2BiH%2FTmgYlnODXt8OLxR2uYZWPSKz1uXOlUdupI2P0GKH4Rhmf9W46LUip9KQ4EExpaOIsFpKDQSgCV1M5dWRyPW3HsZqF0yAazf45aSLkPdQvU5%2FO7keqkfySYP3FUKNcUmlTO2De8mrt2SroJFHxI4QGwJI7NNDSGZiKjBdk9ERuUZm2IGmVFW6EjmH%2BhxqDe74DF0nt8w%2B4n%2F1AY6pgHgWGdwEXS%2Fr%2FoAVwcMPd%2FlS%2FmESKI5F%2Br6b%2FdSJxO%2FtTg2jFWah2b31MqKpetqSEAE6RTHfatlSER4%2FrNC%2BySuxOaLahDShurWXCdF96TyBE0yutm87unricH0ghycwgHjnQxMvUImi9SP2aPpyzfIGR%2Bg4MA65We4ikquxd1RRVA6cipEbVlfE6oafTz5jYKpIwx%2FioaxS0ql8RVPOgQT%2FhhXZvwu&X-Amz-Signature=04fdd195117d0ab4dc8fb2da9cf01c1a8f84826cfbc190a88331a466682d01fe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TMSY7P2R%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123758Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBVfMSKBCtZ4bnPcAF5MZMIckQAwdlwfQ0H1AyDhO1kQAiAjJpKDX%2F9mgq1fcRwbGHaJttSVKViDk7Yt3V2H7XFx2Cr%2FAwhREAAaDDYzNzQyMzE4MzgwNSIMRqz45aXFE0E4W4q%2BKtwDQ%2B%2F1E96i0CWYOYTDas87ZHgVGKlqLVubSuuXjAgcLplQs7cfd0p12SnduBSbA3M3WImhUvCkUHJPaRNO3Lw%2BzQ10Xnu1zyuWaVURggwv2jg%2BGxF%2Bd3A0IsNEgTfGpjkF1%2FbHqQwNNLhXcuvYzuwXDQ3PXXB3l3AbFKku73zDGff0A6YPbTLGd72mGWqoeeUDj4rmKooGsfB27A%2B53oi1AUJnuUUPcQV7dl3QvVVsLrwQTXcDp9wnMIavL9h9KGqPOqFyiCVKy03JGrdH6fFOyzRJTxGkOF3MbJVw3dzmuQlOJ8A4GvdbUs76HTC8hg9Nm5LqvPNiIoiJQ11M3F%2FFES7RVSd%2FxGAiodKvnJSCTtwcb2aQdrG4SWd0yOYLxEHDBz3vF%2FKXl0zuxV4Ssr%2Fqgr46QpY0sbTXOVMwBsGO27BQzHJlq6XaXaDBXqwyMhAyN5T7hvutHi%2FK25lRSW7g16LRBf2jtj%2BnJijEZvhBEO2C852BKU1rYK1N7XKwhBYSDNPQLg3jni0OfIDfk7uXTiIwAsHhaDHLcTSUI6EGRaENyj1ifP2rWC8aUCG9y4I3SMzbQqm4QmJQccl%2FDuhzrBPUbBhyRsUpQd39rjUnWBDOBq6WrnisFgZEolUw4Ij%2F1AY6pgG8oSOmERCKshksuzfEEvLfWPrCdjAcBgdY686%2FYFKr2pE8Ho%2Fuxn22cn6k9QPN6Nl%2FL%2FTslAqaqQrD48fuVFNMpkZJMv%2FOkCXO%2FbP59zHaxpAb47RzBoD2KDOJkeEU5nyBH30o2jYcUk%2BKQcHYsxl%2BLwOHyaSnI%2B2y1rX532BwNgxDta%2B6Hp%2FWFaxR8RonNkCVLMPs0FFVHo0kGBP5l%2F2OyWMF9Rjn&X-Amz-Signature=b5b3c4e403142a94e3401f4404586e9109ae05db992c4c3af589208616143c0a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663FBUEANH%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123759Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCnYz3iONyJkyIFG9RcGnSJ%2BbdPcZIaWyrCnDeLAxD0DgIgCosTKROZl4BF2veEBm%2BbH60iGWKD2D3lwnp8BYQFi4Uq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDKyqgSJmZFnBclvYlyrcA%2BFZvORUyW6%2FIdI9bdWcuJFLJWstUKjcpolYdkZA1SjsoJ2WRuVMPBhS7HzMzC8RGwfMC5bYWVFU%2BzSjkKJfhFYdYCvt%2FqO6k%2BUw7YbC%2B5kohUpqjCPzRwV2IqcGSbrdCfY%2BOzaWIrBw8mTEZyh9WtxUMJdB4SRoczjN4Ho%2BS%2FOgvytaOPWe4CfWa8YlTxWBgGOsmw9TsdjsV4RZBG4yto3xHNEqJlwTwSd9hRAsNIdmqn6Xv9BhKncuQWay9KHPUUWY98PB3EP87LycMb%2FxyTzLY7133Rh3YrP2EF%2B%2B2IAAfko1o%2FEvKqsd1jKFyxKYOLYXrt53QxHEoU3FnZMWzgNd1WM8WToEB2AEf8wPZlQSpX31jn79N8Qz11AajZJNWNZ5mkgNlgFFM79%2FsGYlybrDKQgRLWOxsfAR%2BMTpcUDnz3KHqfd7vtUFL5gH1fS3sZHpx0X1yCfbf2mRPq2pjmjxcuX%2FtB8a9aQB0pOeIqqUEQrfD4jzK4JM5SHEJJm0tYwc9WaCIRV%2BGicKMcVH%2BmV84ncQfBchoIAGci293bMWArrimzuip8ZCqHs0dPmpxvIhJ8Dg7%2BH9ndphXPJC5hDxDZXiOaXbPGVaO3pQ4eGdPqrpuGZSRDRcbMJZMJ2R%2F9QGOqUB5CDp6YbM1WZUUC1mgGL%2BqrjaMC6D6pYg2pJy%2Bj1sQdRSW46vTLLe5dJCNg4oQVdDOpJcq59m0WPN52WS79zrNmwvxKBUP4XcXZCV664vN%2FqWBEVF0s8gY9rvGE2Ke2%2F9%2Bg0Setn0bgB7Csj%2FjFoZHyP80IOMM57MKAddntwO6nGHWfAlfk2lq0%2BcRxnY0cBDm9R%2Bqg8iznFQlh3rM0OJG1JB%2FjPP&X-Amz-Signature=a315ce5d68004c25b30b668f90c01eb68fd2ec7ef976e2514ea7c7432af86796&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663FBUEANH%2F20260908%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260908T123759Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCnYz3iONyJkyIFG9RcGnSJ%2BbdPcZIaWyrCnDeLAxD0DgIgCosTKROZl4BF2veEBm%2BbH60iGWKD2D3lwnp8BYQFi4Uq%2FwMIUhAAGgw2Mzc0MjMxODM4MDUiDKyqgSJmZFnBclvYlyrcA%2BFZvORUyW6%2FIdI9bdWcuJFLJWstUKjcpolYdkZA1SjsoJ2WRuVMPBhS7HzMzC8RGwfMC5bYWVFU%2BzSjkKJfhFYdYCvt%2FqO6k%2BUw7YbC%2B5kohUpqjCPzRwV2IqcGSbrdCfY%2BOzaWIrBw8mTEZyh9WtxUMJdB4SRoczjN4Ho%2BS%2FOgvytaOPWe4CfWa8YlTxWBgGOsmw9TsdjsV4RZBG4yto3xHNEqJlwTwSd9hRAsNIdmqn6Xv9BhKncuQWay9KHPUUWY98PB3EP87LycMb%2FxyTzLY7133Rh3YrP2EF%2B%2B2IAAfko1o%2FEvKqsd1jKFyxKYOLYXrt53QxHEoU3FnZMWzgNd1WM8WToEB2AEf8wPZlQSpX31jn79N8Qz11AajZJNWNZ5mkgNlgFFM79%2FsGYlybrDKQgRLWOxsfAR%2BMTpcUDnz3KHqfd7vtUFL5gH1fS3sZHpx0X1yCfbf2mRPq2pjmjxcuX%2FtB8a9aQB0pOeIqqUEQrfD4jzK4JM5SHEJJm0tYwc9WaCIRV%2BGicKMcVH%2BmV84ncQfBchoIAGci293bMWArrimzuip8ZCqHs0dPmpxvIhJ8Dg7%2BH9ndphXPJC5hDxDZXiOaXbPGVaO3pQ4eGdPqrpuGZSRDRcbMJZMJ2R%2F9QGOqUB5CDp6YbM1WZUUC1mgGL%2BqrjaMC6D6pYg2pJy%2Bj1sQdRSW46vTLLe5dJCNg4oQVdDOpJcq59m0WPN52WS79zrNmwvxKBUP4XcXZCV664vN%2FqWBEVF0s8gY9rvGE2Ke2%2F9%2Bg0Setn0bgB7Csj%2FjFoZHyP80IOMM57MKAddntwO6nGHWfAlfk2lq0%2BcRxnY0cBDm9R%2Bqg8iznFQlh3rM0OJG1JB%2FjPP&X-Amz-Signature=b191c403341f4ba547fb4d58faf2b9aec312bdb21923921998dd83bd3f7dcfd3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
