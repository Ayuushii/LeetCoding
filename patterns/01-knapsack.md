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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YUBK5E2Y%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIELGAwrsdx96lJuBNqpefqFStzztbNDWBHpVx0%2FzzlxuAiBr4WXArnSVekBMTVvavI29iu8sujD43HHixkLde6DD5iqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMiaDrkKHei1Jd9zWwKtwD3gU8seVZo3iLr6k1HPXwrOivjv4TMCVgjGyVuZQpjfmvF%2BQoibPBgNZys7%2FFYRqPX15ygHlzYg%2F2M3l690XRx8wz4SuDcmVeuzETLzK3ZDO8ipz1AoTB8BQaP70TaN2YDvEv2PSb4JyyxquLVWpHFMPqaRDQoKExImlUeoEIzmMMJTeiLGlw4HwSkC6sTJDfBEZeyiKG0PTvc1mNq4XsBDOmxVf%2FFbIYhRtmZ%2BoSnyK8UacMf%2Bda4%2FWbUhI6w10bNS5JP1vnpYMBrKZZJKZ85dy8BS5Da6BMnCgULF5RGNWNwJRsZ6arTWGGBFX%2FrNg63Qrg%2FrP5IEfce6jGXCVDe4qnUsz7jR8%2FPmREZLg2lbwfG2BFyuKYdYePKsIFHL0E3JiQnMvk5qx51R30qEyUYmBBZqV%2FTW3avIqicvR2ygB1f5SbGGvP2LIBDDpFIBzxd22SK7kb%2BJ3KsZb6eIv3ValXJRTf2UghQq4hOfVUQLfYIOsUDmLemD6ttKPysXtQLXRRyJEntJzWLcWvifrOXR1y6joMTNqRw5JihIUemkeBTL0QjboCtpETcoPWAsPuV0fxTcwQmKwfshyo7UpBGk6JfouygBbzlWBA%2FpJnQRX4OebV0kY%2FIZ6GC%2BQwiPukzQY6pgGvgarw%2BictHEllDqiT4P5clM3QmMujcR8zh3d1QrvFnbqYME2jCkynKa%2BgNP9DNzFcpFhoR5Nngc%2Fl%2FqMsaZOUEiHcKqPwMoEcdKa11ZqY0xDoYeO2%2BJz7BlaNlxtWyBaik0yX%2B%2F2su%2B5feSVEIHlcc2pLtzJZkOdIZgQ9k%2BAqUE0bRCupfaRuvjPMZo0akZ2xa5%2FF4S3e7PlSGJ00wrhGtz%2BdYQtv&X-Amz-Signature=42e028b22054136553da4e481758bedda48d1ed2af69edd5c4dd82962fd247de&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YUBK5E2Y%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIELGAwrsdx96lJuBNqpefqFStzztbNDWBHpVx0%2FzzlxuAiBr4WXArnSVekBMTVvavI29iu8sujD43HHixkLde6DD5iqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMiaDrkKHei1Jd9zWwKtwD3gU8seVZo3iLr6k1HPXwrOivjv4TMCVgjGyVuZQpjfmvF%2BQoibPBgNZys7%2FFYRqPX15ygHlzYg%2F2M3l690XRx8wz4SuDcmVeuzETLzK3ZDO8ipz1AoTB8BQaP70TaN2YDvEv2PSb4JyyxquLVWpHFMPqaRDQoKExImlUeoEIzmMMJTeiLGlw4HwSkC6sTJDfBEZeyiKG0PTvc1mNq4XsBDOmxVf%2FFbIYhRtmZ%2BoSnyK8UacMf%2Bda4%2FWbUhI6w10bNS5JP1vnpYMBrKZZJKZ85dy8BS5Da6BMnCgULF5RGNWNwJRsZ6arTWGGBFX%2FrNg63Qrg%2FrP5IEfce6jGXCVDe4qnUsz7jR8%2FPmREZLg2lbwfG2BFyuKYdYePKsIFHL0E3JiQnMvk5qx51R30qEyUYmBBZqV%2FTW3avIqicvR2ygB1f5SbGGvP2LIBDDpFIBzxd22SK7kb%2BJ3KsZb6eIv3ValXJRTf2UghQq4hOfVUQLfYIOsUDmLemD6ttKPysXtQLXRRyJEntJzWLcWvifrOXR1y6joMTNqRw5JihIUemkeBTL0QjboCtpETcoPWAsPuV0fxTcwQmKwfshyo7UpBGk6JfouygBbzlWBA%2FpJnQRX4OebV0kY%2FIZ6GC%2BQwiPukzQY6pgGvgarw%2BictHEllDqiT4P5clM3QmMujcR8zh3d1QrvFnbqYME2jCkynKa%2BgNP9DNzFcpFhoR5Nngc%2Fl%2FqMsaZOUEiHcKqPwMoEcdKa11ZqY0xDoYeO2%2BJz7BlaNlxtWyBaik0yX%2B%2F2su%2B5feSVEIHlcc2pLtzJZkOdIZgQ9k%2BAqUE0bRCupfaRuvjPMZo0akZ2xa5%2FF4S3e7PlSGJ00wrhGtz%2BdYQtv&X-Amz-Signature=4eff94b126c6dac868a920f4965794d77de94b6c40df178f3429774c6c38a49c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YUBK5E2Y%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084048Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIELGAwrsdx96lJuBNqpefqFStzztbNDWBHpVx0%2FzzlxuAiBr4WXArnSVekBMTVvavI29iu8sujD43HHixkLde6DD5iqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMiaDrkKHei1Jd9zWwKtwD3gU8seVZo3iLr6k1HPXwrOivjv4TMCVgjGyVuZQpjfmvF%2BQoibPBgNZys7%2FFYRqPX15ygHlzYg%2F2M3l690XRx8wz4SuDcmVeuzETLzK3ZDO8ipz1AoTB8BQaP70TaN2YDvEv2PSb4JyyxquLVWpHFMPqaRDQoKExImlUeoEIzmMMJTeiLGlw4HwSkC6sTJDfBEZeyiKG0PTvc1mNq4XsBDOmxVf%2FFbIYhRtmZ%2BoSnyK8UacMf%2Bda4%2FWbUhI6w10bNS5JP1vnpYMBrKZZJKZ85dy8BS5Da6BMnCgULF5RGNWNwJRsZ6arTWGGBFX%2FrNg63Qrg%2FrP5IEfce6jGXCVDe4qnUsz7jR8%2FPmREZLg2lbwfG2BFyuKYdYePKsIFHL0E3JiQnMvk5qx51R30qEyUYmBBZqV%2FTW3avIqicvR2ygB1f5SbGGvP2LIBDDpFIBzxd22SK7kb%2BJ3KsZb6eIv3ValXJRTf2UghQq4hOfVUQLfYIOsUDmLemD6ttKPysXtQLXRRyJEntJzWLcWvifrOXR1y6joMTNqRw5JihIUemkeBTL0QjboCtpETcoPWAsPuV0fxTcwQmKwfshyo7UpBGk6JfouygBbzlWBA%2FpJnQRX4OebV0kY%2FIZ6GC%2BQwiPukzQY6pgGvgarw%2BictHEllDqiT4P5clM3QmMujcR8zh3d1QrvFnbqYME2jCkynKa%2BgNP9DNzFcpFhoR5Nngc%2Fl%2FqMsaZOUEiHcKqPwMoEcdKa11ZqY0xDoYeO2%2BJz7BlaNlxtWyBaik0yX%2B%2F2su%2B5feSVEIHlcc2pLtzJZkOdIZgQ9k%2BAqUE0bRCupfaRuvjPMZo0akZ2xa5%2FF4S3e7PlSGJ00wrhGtz%2BdYQtv&X-Amz-Signature=96a4fdf577aba9d12b99125971371396c3a3654f021bc938582fba5e4a25c832&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGP4Y5PO%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA0%2Bm0LpReCtuLE5PCLKU5RQQjcf0U6zqIKPHJPTAv2WAiBu1N20CVh0nDpRYeatiRx%2Bqwdx%2F5saFR45QbNb5k5gqiqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMwaHaIgrhAvN%2BBRAyKtwDmuK9PKHtHdRRyDdamMxl34xH1Ku2z11O1Wp4d13Khijl4VFnoq0Dzg6IPOYmHG6J3FcwmU6gSyufzdhBpLqU61E8qmaPUdJO7sALtyqW19cKKt6LnxquqfZlWl3paIDrwUlWabkKZDKMTvFmo1va8md5uctWTJPs2W52u8DcmPzv5vLoMg6ItPr0kJjAHz9AukN1UJDCjCV0n%2Bp%2BOZq3vVOF4rTCMAKFY25MkOFhRZvh44gH9P02ZIQlMoM1lBj8rLsh%2B9FhdL%2BlL0LaLx15DZckdVhYAW7zmFQmyGWzUwGHJWuR36YZiN9s2O8Jmc6HlWsC8w69F80C3OJNj90vcziU9WootasFH3N5DNpM2wrXILy8s5elct%2BxiZIhJ0fGs7GehHA5iRIF8fuky9HbAfX03d1k%2FPgZciNjkCRkeOO4s4XF6PQgzQMcBwsjAYhahnce5kFPuFg2YJiIhVk5Ra7a1TnGvr7PGvZDBLkHa9kiz2t0rn3Q0FWtqTUQq5WYCcdw3RYEyXtgMIUqJ6J64Uy6iUH%2BrPJFn9Ehql7n7UG%2BEZUYAyoWiMICXIY7YgLsY7ozpkaHRm0XAntcnIVhUYTt8kQ%2Fzw1GPyIhaPRxZWobyhzuoUgXO9UCVVQwxfukzQY6pgGu87cdlf7QLeYCIVsdP1K5YS%2FYSoJIc2LtFkb60Lm3bs9r43ew0cZ%2BYC%2FXsWV4PtG55A%2FPHhrLD8X5lgKuMJOvxzKixFMOoDZW4%2BucJh7XcNlyomHGblQUnzDUEg1N8YQlN605OOVHa6fph4u504mRjTonNZeZBtASBrifAvG2gTebuRPBP5oELesqpmB8EhMtCnxajI3p4W1X6xa5Lyr43o%2BxjnkC&X-Amz-Signature=dc6411f34d1145f55e7e7fc0f8d1d1becd52f1afeac5092c07a36269332427df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGP4Y5PO%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA0%2Bm0LpReCtuLE5PCLKU5RQQjcf0U6zqIKPHJPTAv2WAiBu1N20CVh0nDpRYeatiRx%2Bqwdx%2F5saFR45QbNb5k5gqiqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMwaHaIgrhAvN%2BBRAyKtwDmuK9PKHtHdRRyDdamMxl34xH1Ku2z11O1Wp4d13Khijl4VFnoq0Dzg6IPOYmHG6J3FcwmU6gSyufzdhBpLqU61E8qmaPUdJO7sALtyqW19cKKt6LnxquqfZlWl3paIDrwUlWabkKZDKMTvFmo1va8md5uctWTJPs2W52u8DcmPzv5vLoMg6ItPr0kJjAHz9AukN1UJDCjCV0n%2Bp%2BOZq3vVOF4rTCMAKFY25MkOFhRZvh44gH9P02ZIQlMoM1lBj8rLsh%2B9FhdL%2BlL0LaLx15DZckdVhYAW7zmFQmyGWzUwGHJWuR36YZiN9s2O8Jmc6HlWsC8w69F80C3OJNj90vcziU9WootasFH3N5DNpM2wrXILy8s5elct%2BxiZIhJ0fGs7GehHA5iRIF8fuky9HbAfX03d1k%2FPgZciNjkCRkeOO4s4XF6PQgzQMcBwsjAYhahnce5kFPuFg2YJiIhVk5Ra7a1TnGvr7PGvZDBLkHa9kiz2t0rn3Q0FWtqTUQq5WYCcdw3RYEyXtgMIUqJ6J64Uy6iUH%2BrPJFn9Ehql7n7UG%2BEZUYAyoWiMICXIY7YgLsY7ozpkaHRm0XAntcnIVhUYTt8kQ%2Fzw1GPyIhaPRxZWobyhzuoUgXO9UCVVQwxfukzQY6pgGu87cdlf7QLeYCIVsdP1K5YS%2FYSoJIc2LtFkb60Lm3bs9r43ew0cZ%2BYC%2FXsWV4PtG55A%2FPHhrLD8X5lgKuMJOvxzKixFMOoDZW4%2BucJh7XcNlyomHGblQUnzDUEg1N8YQlN605OOVHa6fph4u504mRjTonNZeZBtASBrifAvG2gTebuRPBP5oELesqpmB8EhMtCnxajI3p4W1X6xa5Lyr43o%2BxjnkC&X-Amz-Signature=4e8870c64c82518bb8d91f79e885b06904e8ec3bb389fe5bb13ed34858064c0e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGP4Y5PO%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA0%2Bm0LpReCtuLE5PCLKU5RQQjcf0U6zqIKPHJPTAv2WAiBu1N20CVh0nDpRYeatiRx%2Bqwdx%2F5saFR45QbNb5k5gqiqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMwaHaIgrhAvN%2BBRAyKtwDmuK9PKHtHdRRyDdamMxl34xH1Ku2z11O1Wp4d13Khijl4VFnoq0Dzg6IPOYmHG6J3FcwmU6gSyufzdhBpLqU61E8qmaPUdJO7sALtyqW19cKKt6LnxquqfZlWl3paIDrwUlWabkKZDKMTvFmo1va8md5uctWTJPs2W52u8DcmPzv5vLoMg6ItPr0kJjAHz9AukN1UJDCjCV0n%2Bp%2BOZq3vVOF4rTCMAKFY25MkOFhRZvh44gH9P02ZIQlMoM1lBj8rLsh%2B9FhdL%2BlL0LaLx15DZckdVhYAW7zmFQmyGWzUwGHJWuR36YZiN9s2O8Jmc6HlWsC8w69F80C3OJNj90vcziU9WootasFH3N5DNpM2wrXILy8s5elct%2BxiZIhJ0fGs7GehHA5iRIF8fuky9HbAfX03d1k%2FPgZciNjkCRkeOO4s4XF6PQgzQMcBwsjAYhahnce5kFPuFg2YJiIhVk5Ra7a1TnGvr7PGvZDBLkHa9kiz2t0rn3Q0FWtqTUQq5WYCcdw3RYEyXtgMIUqJ6J64Uy6iUH%2BrPJFn9Ehql7n7UG%2BEZUYAyoWiMICXIY7YgLsY7ozpkaHRm0XAntcnIVhUYTt8kQ%2Fzw1GPyIhaPRxZWobyhzuoUgXO9UCVVQwxfukzQY6pgGu87cdlf7QLeYCIVsdP1K5YS%2FYSoJIc2LtFkb60Lm3bs9r43ew0cZ%2BYC%2FXsWV4PtG55A%2FPHhrLD8X5lgKuMJOvxzKixFMOoDZW4%2BucJh7XcNlyomHGblQUnzDUEg1N8YQlN605OOVHa6fph4u504mRjTonNZeZBtASBrifAvG2gTebuRPBP5oELesqpmB8EhMtCnxajI3p4W1X6xa5Lyr43o%2BxjnkC&X-Amz-Signature=1202cd8b9885bc8b6531f938a9859f52a8d4132f6781173191c21a401ca68825&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGP4Y5PO%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084049Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA0%2Bm0LpReCtuLE5PCLKU5RQQjcf0U6zqIKPHJPTAv2WAiBu1N20CVh0nDpRYeatiRx%2Bqwdx%2F5saFR45QbNb5k5gqiqIBAjJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMwaHaIgrhAvN%2BBRAyKtwDmuK9PKHtHdRRyDdamMxl34xH1Ku2z11O1Wp4d13Khijl4VFnoq0Dzg6IPOYmHG6J3FcwmU6gSyufzdhBpLqU61E8qmaPUdJO7sALtyqW19cKKt6LnxquqfZlWl3paIDrwUlWabkKZDKMTvFmo1va8md5uctWTJPs2W52u8DcmPzv5vLoMg6ItPr0kJjAHz9AukN1UJDCjCV0n%2Bp%2BOZq3vVOF4rTCMAKFY25MkOFhRZvh44gH9P02ZIQlMoM1lBj8rLsh%2B9FhdL%2BlL0LaLx15DZckdVhYAW7zmFQmyGWzUwGHJWuR36YZiN9s2O8Jmc6HlWsC8w69F80C3OJNj90vcziU9WootasFH3N5DNpM2wrXILy8s5elct%2BxiZIhJ0fGs7GehHA5iRIF8fuky9HbAfX03d1k%2FPgZciNjkCRkeOO4s4XF6PQgzQMcBwsjAYhahnce5kFPuFg2YJiIhVk5Ra7a1TnGvr7PGvZDBLkHa9kiz2t0rn3Q0FWtqTUQq5WYCcdw3RYEyXtgMIUqJ6J64Uy6iUH%2BrPJFn9Ehql7n7UG%2BEZUYAyoWiMICXIY7YgLsY7ozpkaHRm0XAntcnIVhUYTt8kQ%2Fzw1GPyIhaPRxZWobyhzuoUgXO9UCVVQwxfukzQY6pgGu87cdlf7QLeYCIVsdP1K5YS%2FYSoJIc2LtFkb60Lm3bs9r43ew0cZ%2BYC%2FXsWV4PtG55A%2FPHhrLD8X5lgKuMJOvxzKixFMOoDZW4%2BucJh7XcNlyomHGblQUnzDUEg1N8YQlN605OOVHa6fph4u504mRjTonNZeZBtASBrifAvG2gTebuRPBP5oELesqpmB8EhMtCnxajI3p4W1X6xa5Lyr43o%2BxjnkC&X-Amz-Signature=bb26e6d243e1c5770955d450a9602234699cffe3a0c777d5afe51631ab83d626&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCXDCWYD%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084050Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIDsDkDRrTVs%2FCwMeHNvmvB0AHmroJM6j84wB4QrLcCpKAiEA%2BYOfaNjEpX4HgAAdraA3WTjCfNCFKafTP8hBr%2FHoRmUqiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIxTF43WkWw2NzaDpyrcA7SIMOF8tLkdR3l2gjYZv%2FsRsGfzH30%2FqnSo%2B3hNqQyQ1HWZe9d%2Byst2Tere0QyHL7CDVS5Dcq%2FZbJbt%2FIoxr2N2IznnaSCNHjl4EHBIoy1KsBzogAdX6Q%2FR32r0kjPvwkMuMvh90zKLj3eAn%2B8NoSWAy3EL%2FKiHshxcYYy391JH23ovwubTEJIgCgzVzZYmobDbT6Yeg10DB1%2BELeH4j%2F2%2F3EpEbq0S2V1MNT%2FaE4tbwpTQy7esBw7RgJuEDyLq9HIZWxgRaTcWhiWr9EI4jPgnt%2FkYnWp0TBhsACXGdiXEnfVfI6N8QdeSmg75%2BfejG9hj%2FXxcZQuOJ3E8It2xIFOFkBJliiOsz5M75VBzunPnB8DPYkEoKc%2Bo50i6mecsr0DUe%2B8lVmBIH0X0e2Px9KKt4PZ90ZcezF%2Fj4rDkKKgxg5dxxFJjattHX02yPLHjZmgPcWNEXGvaPxnxaSyi6k8FxXxGgH4bVR%2BIIEpoxF2eE9MQTzRlsNEy%2FgCZJ4F8OE8FHUZTUt13HQH0zUBhTCG773zaDV8LJHZ%2B21z1UK0MpBMpgVUU8EkCi2uc5FJohzpU1ZVSmpNX7d2a3Dn%2FEjjImOfepJfq0j47nQtcIWfWIY%2BVu4e9N0zeaL9nMNf4pM0GOqUBay1EA1zJS0k5p2gRPjip3nM4v%2B1r%2BiPOJTM2XLGiz4gOYVP3pC2httW%2FP2YGTfyCPvMhwdSB3zxwDJsTIbjoEXJHBawh8brWN5Adnnp%2F9qBU%2B6jSTyZMgoF%2F9Ybl1h3vznhBmQ6A2rybnxbDCjnFcqokSYBrcS6GZLczJA3nzJNABey0%2Bw5f8JlbzvVRgf2Dx6HPUeAAPnE5f6IZqy%2FyAZoH6GRn&X-Amz-Signature=481707422bf0fc2a8c287d060875574254bf686dc72924c62366e09ff236dd41&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663GVGV2UG%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084051Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIQDoQU7u4LK11d2LCE1ZIDzk1Hzx%2FLjpK28270WUMMkeOQIgK%2FdvbyhWWXVAkXHM2nRsVKmaPVyOEAYTAGzmtdT7Gl4qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMbffHNXmPvi29R2YircA5xen%2Fm6xVCodtDX490enK6gzF6I2LPKQ3dvjhKXBD4%2Bm%2Bx%2FrQoBbIvNCyeCZlUq9qyoy2Ha8v%2FoaHCyWWhxvWNV%2FmaTgBkFrnbgHAYGNHCLTasoEKPdn8Pjz%2Fqib6qTNCe1MVrAGUekon3z7l31rOqs8NV%2FpmI%2BrMzWcbrQYx0SGUZLeYgFRfXdSbfAwglJHmZPYuUed%2FI3CS1XZKvZhPK%2B7cFxdalgHVSsZ8I2GIKdo4Fd5ULspS6ZGc9RZ6n2v0%2FgHZpvYb8WkXZBxdYodGlCemF%2F6pJxyJQCBPzNPQEJz2zQFI4ibfWp%2Fmqd6jWBsp8egv3ef6dLfo7y4lmaCeSDdkOQgx4zIEz6FNG3PLc72vWdxlcJqzzcdQMDa0%2FE06BQhw5p4NnOtoq3sGz16MnftTJucvnyTiGnyirUwcBLvkYEuWUj3nAY6Gz2xdqMwaxv879ObDqXZGIZkKCX8dGDiNGeCd1QXB3UCxaen7%2FwhNN6kTTdEdwosZ5TCZbkRxGzYvMo8L7p4RLDcdokM8RM0v4oT1izihxZVJk%2F8RWdcaWEuhtpDaKGfU9GNkbcluSuGNggZBP52Y4O60fLVn2yi6h6TWOywJrRD%2FlaMeN7B8FbXKxTUG%2F9IwQ%2BMJz6pM0GOqUBzaydRylxxsONd7B4dbm%2BCRCYpGfmI6X95VfW9XCrC2%2F36cQ%2FfoE5SFktsJ8y53B%2BjeMmaHXDhDPtsMpJaPAKR8hUJ%2BHU%2FmgTJNZ6SBxEuu5GA2%2BmKdvecdQbhfj2Fb7x%2B90UPgaM2Rub4K8rx6rP8E4YSdI6PVJBVHgXBk3%2BLcFJf7n5TCmi1%2FhxXDLQEs93rgV2Q4zaeW5G0h2eNdID5aqaNFhH&X-Amz-Signature=aa7bb731999d1c411ffb870523c16fb1eb978ca4d120a04d066fc5dc3e06ffb7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663GVGV2UG%2F20260305%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260305T084051Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIQDoQU7u4LK11d2LCE1ZIDzk1Hzx%2FLjpK28270WUMMkeOQIgK%2FdvbyhWWXVAkXHM2nRsVKmaPVyOEAYTAGzmtdT7Gl4qiAQIyf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMbffHNXmPvi29R2YircA5xen%2Fm6xVCodtDX490enK6gzF6I2LPKQ3dvjhKXBD4%2Bm%2Bx%2FrQoBbIvNCyeCZlUq9qyoy2Ha8v%2FoaHCyWWhxvWNV%2FmaTgBkFrnbgHAYGNHCLTasoEKPdn8Pjz%2Fqib6qTNCe1MVrAGUekon3z7l31rOqs8NV%2FpmI%2BrMzWcbrQYx0SGUZLeYgFRfXdSbfAwglJHmZPYuUed%2FI3CS1XZKvZhPK%2B7cFxdalgHVSsZ8I2GIKdo4Fd5ULspS6ZGc9RZ6n2v0%2FgHZpvYb8WkXZBxdYodGlCemF%2F6pJxyJQCBPzNPQEJz2zQFI4ibfWp%2Fmqd6jWBsp8egv3ef6dLfo7y4lmaCeSDdkOQgx4zIEz6FNG3PLc72vWdxlcJqzzcdQMDa0%2FE06BQhw5p4NnOtoq3sGz16MnftTJucvnyTiGnyirUwcBLvkYEuWUj3nAY6Gz2xdqMwaxv879ObDqXZGIZkKCX8dGDiNGeCd1QXB3UCxaen7%2FwhNN6kTTdEdwosZ5TCZbkRxGzYvMo8L7p4RLDcdokM8RM0v4oT1izihxZVJk%2F8RWdcaWEuhtpDaKGfU9GNkbcluSuGNggZBP52Y4O60fLVn2yi6h6TWOywJrRD%2FlaMeN7B8FbXKxTUG%2F9IwQ%2BMJz6pM0GOqUBzaydRylxxsONd7B4dbm%2BCRCYpGfmI6X95VfW9XCrC2%2F36cQ%2FfoE5SFktsJ8y53B%2BjeMmaHXDhDPtsMpJaPAKR8hUJ%2BHU%2FmgTJNZ6SBxEuu5GA2%2BmKdvecdQbhfj2Fb7x%2B90UPgaM2Rub4K8rx6rP8E4YSdI6PVJBVHgXBk3%2BLcFJf7n5TCmi1%2FhxXDLQEs93rgV2Q4zaeW5G0h2eNdID5aqaNFhH&X-Amz-Signature=bdee48215117a3d34042b31a35238a04612fe77caa07c1077ebbcf79620329ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
