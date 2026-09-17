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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHLVARPJ%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJIMEYCIQCTjyvDuxRgyeOWINfOswdvlB7XLP1JTufhzDJc5ikauAIhAOF1woDuPZuD87tpshR804QS1Ott2%2FG69zp5sQe%2BerV9Kv8DCC0QABoMNjM3NDIzMTgzODA1IgwlTO6WPegRXLX7npUq3APEFPTrM2oY7qYl29QTbpeQOHjzgpCSXCahUBbtUgsZOASm5lo5vRfrwP7WvImEXa%2BQEzOwNXwOMwCMsb%2B5%2BBZSSDhYJi%2BXv0zpfErwB0oRHxcl8a4g7nmlZXl2pTTMNGgr2ymsCoGLMWZboDXhvmbEnS%2B74iG2hUeGLU4JXp%2FhJhAq9hnoyCkdFxcRklejyrjy38%2B6xwbzrTgz%2BVjivhDqpGydQmwLruGePrQybx9O5wygGOOlYSS6I0af1cHoAyuIe48FgybWyAs2V8R7P9q5ZT5Hk4CKKm%2Fy1MQAYJyAw0jYCVEL42Adj9pxez4qACYBR48UerYg%2BE9iI3tCYO1khCO2oyfNcOvCsiqRJ4v%2FmACzgJ6kL4uIJbMcBiu%2ByYzSflT6ge9AmFUWpflC3F8NqdRNbRsPPVpdFzyehJJekphJo%2FFX3tRYlF%2F2ZRf%2BsLsDdtgMFlHootIsF0iZU0X0PjBQuzDvackuERFqLdNh0OfHHargH0%2FSBicUVzPGy3h76eMYNaKgQwUFuizm%2Fc%2FSIoUGXJU6Z8xKbDyYyJeMoXclY%2BfuUxnGCP%2Bj1OCzPSM3Uj6wcTLLVTjRgnePKIXXzNmbnNGXx3dED%2FUU57m5wkpvgU3fKV83jhWonjD7pq%2FVBjqkAdWfor7sR8og7N1HzPfpMmxKw4pPdwtbwH6a8BuxvUQurDxAzw1qSh%2FWkLNPTmuF%2B7ZPBXYpyjm18RcaVmMU8ukBHoTWjRkf8xvScL4QoCA8antLVjnF2n%2FMyQDg2QnFymXW%2FIlmiTr6bmytrqBqsGbj2DRfMHm8w%2BUH6S3MgdoBETKQcgotl%2FZ4%2BPXZDgWD94u1udKf27lvPMYg5ImlmxHMPtJF&X-Amz-Signature=4cacee9813e95ba7d6d84bc4bee3b40ec1cb07de091ef6d5b0c26bafe32ea387&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHLVARPJ%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJIMEYCIQCTjyvDuxRgyeOWINfOswdvlB7XLP1JTufhzDJc5ikauAIhAOF1woDuPZuD87tpshR804QS1Ott2%2FG69zp5sQe%2BerV9Kv8DCC0QABoMNjM3NDIzMTgzODA1IgwlTO6WPegRXLX7npUq3APEFPTrM2oY7qYl29QTbpeQOHjzgpCSXCahUBbtUgsZOASm5lo5vRfrwP7WvImEXa%2BQEzOwNXwOMwCMsb%2B5%2BBZSSDhYJi%2BXv0zpfErwB0oRHxcl8a4g7nmlZXl2pTTMNGgr2ymsCoGLMWZboDXhvmbEnS%2B74iG2hUeGLU4JXp%2FhJhAq9hnoyCkdFxcRklejyrjy38%2B6xwbzrTgz%2BVjivhDqpGydQmwLruGePrQybx9O5wygGOOlYSS6I0af1cHoAyuIe48FgybWyAs2V8R7P9q5ZT5Hk4CKKm%2Fy1MQAYJyAw0jYCVEL42Adj9pxez4qACYBR48UerYg%2BE9iI3tCYO1khCO2oyfNcOvCsiqRJ4v%2FmACzgJ6kL4uIJbMcBiu%2ByYzSflT6ge9AmFUWpflC3F8NqdRNbRsPPVpdFzyehJJekphJo%2FFX3tRYlF%2F2ZRf%2BsLsDdtgMFlHootIsF0iZU0X0PjBQuzDvackuERFqLdNh0OfHHargH0%2FSBicUVzPGy3h76eMYNaKgQwUFuizm%2Fc%2FSIoUGXJU6Z8xKbDyYyJeMoXclY%2BfuUxnGCP%2Bj1OCzPSM3Uj6wcTLLVTjRgnePKIXXzNmbnNGXx3dED%2FUU57m5wkpvgU3fKV83jhWonjD7pq%2FVBjqkAdWfor7sR8og7N1HzPfpMmxKw4pPdwtbwH6a8BuxvUQurDxAzw1qSh%2FWkLNPTmuF%2B7ZPBXYpyjm18RcaVmMU8ukBHoTWjRkf8xvScL4QoCA8antLVjnF2n%2FMyQDg2QnFymXW%2FIlmiTr6bmytrqBqsGbj2DRfMHm8w%2BUH6S3MgdoBETKQcgotl%2FZ4%2BPXZDgWD94u1udKf27lvPMYg5ImlmxHMPtJF&X-Amz-Signature=eb634eba1d25b5794ab5bdcf7c59ce53932bc31aa33ddd054c9d5fa7995df62c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHLVARPJ%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJIMEYCIQCTjyvDuxRgyeOWINfOswdvlB7XLP1JTufhzDJc5ikauAIhAOF1woDuPZuD87tpshR804QS1Ott2%2FG69zp5sQe%2BerV9Kv8DCC0QABoMNjM3NDIzMTgzODA1IgwlTO6WPegRXLX7npUq3APEFPTrM2oY7qYl29QTbpeQOHjzgpCSXCahUBbtUgsZOASm5lo5vRfrwP7WvImEXa%2BQEzOwNXwOMwCMsb%2B5%2BBZSSDhYJi%2BXv0zpfErwB0oRHxcl8a4g7nmlZXl2pTTMNGgr2ymsCoGLMWZboDXhvmbEnS%2B74iG2hUeGLU4JXp%2FhJhAq9hnoyCkdFxcRklejyrjy38%2B6xwbzrTgz%2BVjivhDqpGydQmwLruGePrQybx9O5wygGOOlYSS6I0af1cHoAyuIe48FgybWyAs2V8R7P9q5ZT5Hk4CKKm%2Fy1MQAYJyAw0jYCVEL42Adj9pxez4qACYBR48UerYg%2BE9iI3tCYO1khCO2oyfNcOvCsiqRJ4v%2FmACzgJ6kL4uIJbMcBiu%2ByYzSflT6ge9AmFUWpflC3F8NqdRNbRsPPVpdFzyehJJekphJo%2FFX3tRYlF%2F2ZRf%2BsLsDdtgMFlHootIsF0iZU0X0PjBQuzDvackuERFqLdNh0OfHHargH0%2FSBicUVzPGy3h76eMYNaKgQwUFuizm%2Fc%2FSIoUGXJU6Z8xKbDyYyJeMoXclY%2BfuUxnGCP%2Bj1OCzPSM3Uj6wcTLLVTjRgnePKIXXzNmbnNGXx3dED%2FUU57m5wkpvgU3fKV83jhWonjD7pq%2FVBjqkAdWfor7sR8og7N1HzPfpMmxKw4pPdwtbwH6a8BuxvUQurDxAzw1qSh%2FWkLNPTmuF%2B7ZPBXYpyjm18RcaVmMU8ukBHoTWjRkf8xvScL4QoCA8antLVjnF2n%2FMyQDg2QnFymXW%2FIlmiTr6bmytrqBqsGbj2DRfMHm8w%2BUH6S3MgdoBETKQcgotl%2FZ4%2BPXZDgWD94u1udKf27lvPMYg5ImlmxHMPtJF&X-Amz-Signature=4cb91b6901cd8f31cda399411fb905093b26323301d484ce69cccc1a8fb43c88&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XWIAS3J%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJGMEQCIEmVcYpxp3obqgjqjSPvcn5uw1JxBBRR7c6mkMCYi2hvAiBk%2F6oKt2XHJq%2FQldJWVL3vjJw%2FeH%2FFTGUOkVojK2sl4yr%2FAwgtEAAaDDYzNzQyMzE4MzgwNSIMVZ7d3ZMGaJNoEkltKtwDYyAmLsTJHcbqKkk3CuvN2UYV1EMSzrGzADZb%2BSwjqjlM5PEGppXtxhLaxuMaZo7d1lqizwL7XH%2FjXKixWYJw9lQ5i5NRRPvhWzq41ZwQz5agU46p9xpKxXz7ap4Qhq%2FTo2Y%2BUdxnAr9obS%2BqUU6rKz06rADUmQ6InMBdNdM1si3ZVvufLpJh3hH6lsE7cWLgKx9OnakADnv9HxufuKBbTdy33euGwOV8PzP%2BkRFF%2BuV5Vf8UQKJgFQ0KSy4C5R4Pxj1r7WRH1AanQiI%2BOen6eNc2KDiaZPxIVTOceMQZR2P93aenbqEKZ5F2yGYAOKDYK8L5aQAy5iDprv%2Fl%2FHgkM%2B7kfGchp%2FnkffiOEpxTCAw8Uay%2B9ZZW%2F828GerSYyGtG3GmtRR2ZSMRAhhnI6y39UGggwh97vNIE5Iquhg3Bv8SaR3wLT2mD2V89dWjDPu9RQDiJn8KCh%2BmUsshTgCWkPLTgQPWvKKyXZFyxsqyrOOUlP%2BV94pN%2FUBneOIiXx8%2FAqbO%2Ffz1pa2CbTB%2BXamRETx%2B385upxowPUyn8Ltb8xY86rWj2HpPlnJ5lbVbie%2BN9FVVQX8r7VVX9vwoRURPpAUBuvW%2BfBNwcS97HX61a6I4QpNgaL0LO66mgA4w16iv1QY6pgGXjC%2BDqvaerWhpDEQIO6Pdgp35UhhmdTwZOb6RN3F7RU9B%2Bbal2uUs4dtjdas11e0R75pKOEdJX52BMolXmQpV2c05JnrXuaucl7Rv%2Bigsk0aTQ%2BC%2FsuK7T8kf54ACPe%2B8zSzNkEIdXjO%2BXtxWt65dvGd8viRU%2FqI07O%2B5KxJGKJf1G2byfbIUhKuS7Dakiiz80DGKSlrfPWbQ21iNzKWcBfykk%2FCj&X-Amz-Signature=ac7370eaadb1e878ea1dedb9259256050067df27e70a9d7ff3f6d1519f93abb0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XWIAS3J%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJGMEQCIEmVcYpxp3obqgjqjSPvcn5uw1JxBBRR7c6mkMCYi2hvAiBk%2F6oKt2XHJq%2FQldJWVL3vjJw%2FeH%2FFTGUOkVojK2sl4yr%2FAwgtEAAaDDYzNzQyMzE4MzgwNSIMVZ7d3ZMGaJNoEkltKtwDYyAmLsTJHcbqKkk3CuvN2UYV1EMSzrGzADZb%2BSwjqjlM5PEGppXtxhLaxuMaZo7d1lqizwL7XH%2FjXKixWYJw9lQ5i5NRRPvhWzq41ZwQz5agU46p9xpKxXz7ap4Qhq%2FTo2Y%2BUdxnAr9obS%2BqUU6rKz06rADUmQ6InMBdNdM1si3ZVvufLpJh3hH6lsE7cWLgKx9OnakADnv9HxufuKBbTdy33euGwOV8PzP%2BkRFF%2BuV5Vf8UQKJgFQ0KSy4C5R4Pxj1r7WRH1AanQiI%2BOen6eNc2KDiaZPxIVTOceMQZR2P93aenbqEKZ5F2yGYAOKDYK8L5aQAy5iDprv%2Fl%2FHgkM%2B7kfGchp%2FnkffiOEpxTCAw8Uay%2B9ZZW%2F828GerSYyGtG3GmtRR2ZSMRAhhnI6y39UGggwh97vNIE5Iquhg3Bv8SaR3wLT2mD2V89dWjDPu9RQDiJn8KCh%2BmUsshTgCWkPLTgQPWvKKyXZFyxsqyrOOUlP%2BV94pN%2FUBneOIiXx8%2FAqbO%2Ffz1pa2CbTB%2BXamRETx%2B385upxowPUyn8Ltb8xY86rWj2HpPlnJ5lbVbie%2BN9FVVQX8r7VVX9vwoRURPpAUBuvW%2BfBNwcS97HX61a6I4QpNgaL0LO66mgA4w16iv1QY6pgGXjC%2BDqvaerWhpDEQIO6Pdgp35UhhmdTwZOb6RN3F7RU9B%2Bbal2uUs4dtjdas11e0R75pKOEdJX52BMolXmQpV2c05JnrXuaucl7Rv%2Bigsk0aTQ%2BC%2FsuK7T8kf54ACPe%2B8zSzNkEIdXjO%2BXtxWt65dvGd8viRU%2FqI07O%2B5KxJGKJf1G2byfbIUhKuS7Dakiiz80DGKSlrfPWbQ21iNzKWcBfykk%2FCj&X-Amz-Signature=9f753c38895aa5f72d4bb016d3122311ae29ffac1971d9853a3a604dc9f484fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XWIAS3J%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJGMEQCIEmVcYpxp3obqgjqjSPvcn5uw1JxBBRR7c6mkMCYi2hvAiBk%2F6oKt2XHJq%2FQldJWVL3vjJw%2FeH%2FFTGUOkVojK2sl4yr%2FAwgtEAAaDDYzNzQyMzE4MzgwNSIMVZ7d3ZMGaJNoEkltKtwDYyAmLsTJHcbqKkk3CuvN2UYV1EMSzrGzADZb%2BSwjqjlM5PEGppXtxhLaxuMaZo7d1lqizwL7XH%2FjXKixWYJw9lQ5i5NRRPvhWzq41ZwQz5agU46p9xpKxXz7ap4Qhq%2FTo2Y%2BUdxnAr9obS%2BqUU6rKz06rADUmQ6InMBdNdM1si3ZVvufLpJh3hH6lsE7cWLgKx9OnakADnv9HxufuKBbTdy33euGwOV8PzP%2BkRFF%2BuV5Vf8UQKJgFQ0KSy4C5R4Pxj1r7WRH1AanQiI%2BOen6eNc2KDiaZPxIVTOceMQZR2P93aenbqEKZ5F2yGYAOKDYK8L5aQAy5iDprv%2Fl%2FHgkM%2B7kfGchp%2FnkffiOEpxTCAw8Uay%2B9ZZW%2F828GerSYyGtG3GmtRR2ZSMRAhhnI6y39UGggwh97vNIE5Iquhg3Bv8SaR3wLT2mD2V89dWjDPu9RQDiJn8KCh%2BmUsshTgCWkPLTgQPWvKKyXZFyxsqyrOOUlP%2BV94pN%2FUBneOIiXx8%2FAqbO%2Ffz1pa2CbTB%2BXamRETx%2B385upxowPUyn8Ltb8xY86rWj2HpPlnJ5lbVbie%2BN9FVVQX8r7VVX9vwoRURPpAUBuvW%2BfBNwcS97HX61a6I4QpNgaL0LO66mgA4w16iv1QY6pgGXjC%2BDqvaerWhpDEQIO6Pdgp35UhhmdTwZOb6RN3F7RU9B%2Bbal2uUs4dtjdas11e0R75pKOEdJX52BMolXmQpV2c05JnrXuaucl7Rv%2Bigsk0aTQ%2BC%2FsuK7T8kf54ACPe%2B8zSzNkEIdXjO%2BXtxWt65dvGd8viRU%2FqI07O%2B5KxJGKJf1G2byfbIUhKuS7Dakiiz80DGKSlrfPWbQ21iNzKWcBfykk%2FCj&X-Amz-Signature=0d9203d2f98bece7768be8633450a7fc1c5b3163666669f1eb27a7c587d5d844&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XWIAS3J%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJGMEQCIEmVcYpxp3obqgjqjSPvcn5uw1JxBBRR7c6mkMCYi2hvAiBk%2F6oKt2XHJq%2FQldJWVL3vjJw%2FeH%2FFTGUOkVojK2sl4yr%2FAwgtEAAaDDYzNzQyMzE4MzgwNSIMVZ7d3ZMGaJNoEkltKtwDYyAmLsTJHcbqKkk3CuvN2UYV1EMSzrGzADZb%2BSwjqjlM5PEGppXtxhLaxuMaZo7d1lqizwL7XH%2FjXKixWYJw9lQ5i5NRRPvhWzq41ZwQz5agU46p9xpKxXz7ap4Qhq%2FTo2Y%2BUdxnAr9obS%2BqUU6rKz06rADUmQ6InMBdNdM1si3ZVvufLpJh3hH6lsE7cWLgKx9OnakADnv9HxufuKBbTdy33euGwOV8PzP%2BkRFF%2BuV5Vf8UQKJgFQ0KSy4C5R4Pxj1r7WRH1AanQiI%2BOen6eNc2KDiaZPxIVTOceMQZR2P93aenbqEKZ5F2yGYAOKDYK8L5aQAy5iDprv%2Fl%2FHgkM%2B7kfGchp%2FnkffiOEpxTCAw8Uay%2B9ZZW%2F828GerSYyGtG3GmtRR2ZSMRAhhnI6y39UGggwh97vNIE5Iquhg3Bv8SaR3wLT2mD2V89dWjDPu9RQDiJn8KCh%2BmUsshTgCWkPLTgQPWvKKyXZFyxsqyrOOUlP%2BV94pN%2FUBneOIiXx8%2FAqbO%2Ffz1pa2CbTB%2BXamRETx%2B385upxowPUyn8Ltb8xY86rWj2HpPlnJ5lbVbie%2BN9FVVQX8r7VVX9vwoRURPpAUBuvW%2BfBNwcS97HX61a6I4QpNgaL0LO66mgA4w16iv1QY6pgGXjC%2BDqvaerWhpDEQIO6Pdgp35UhhmdTwZOb6RN3F7RU9B%2Bbal2uUs4dtjdas11e0R75pKOEdJX52BMolXmQpV2c05JnrXuaucl7Rv%2Bigsk0aTQ%2BC%2FsuK7T8kf54ACPe%2B8zSzNkEIdXjO%2BXtxWt65dvGd8viRU%2FqI07O%2B5KxJGKJf1G2byfbIUhKuS7Dakiiz80DGKSlrfPWbQ21iNzKWcBfykk%2FCj&X-Amz-Signature=e61df5511e4b8475675fa2da5a63fc31272fab4c06b19a8cd6314828dd19430e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665LTGIAAV%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJIMEYCIQD7A1p3AHi5yE3thnuQvu%2B3vpnhY5nvY92LFt8JIUshTAIhALl7kviYYjozw6Dw6rXGw6fMERehdnUyV0SuitEapx%2FDKv8DCC0QABoMNjM3NDIzMTgzODA1IgzDcEJ7mll3cvRYMr4q3APKwl6arbUc0xVx33r18X3yt%2FyCnz191SsZWL9N1rKEWDT1ImPwwYpuO2xgg5OuJBcxpn9LEq1r2TCT8x8wGhD5saMOobhK04wKSSCEjthCbCc5Xph%2BxfH6%2F%2Bqm7SSpbDVZiMwZXNk7Qi7OwKmaiOnzkLA7S9S0c0Ns%2BBvlHVxfrvVVEs7YD76IIqmk0T7ENnxXfJaal9x3fclMu4mDxxqF531uUVmG5Df3YUy0Mcom4UldNXDOjUDSznQ%2FIBxB5culbQpR4XpnB6Y2cdnvJwMpftosn94I4ITe6izk10kHv%2Fp2VvGRd38pwYmfp26sTr%2BgAW7YGRCsTeSPLiqTZeynnXxTXRBs8WMWJ8phvciyXJFzWEwbIe9w16NE3ZiimAioWVNF6BQI%2FyzLUUoHGoDKBsbbFBD14Txkb8Xef7q8DszmaRxZI8z22cYn6Fz0zyd36bWaLn3qrbMROmGPvLCHe5x2NiR9RRI1AJFVIekvH4gADLoE2Y9sdQ31r4Vknu0exR6g0qJd6Jxw4yEpvPxM20LW63t8YtQZdp8PNwtDEDOrepxFLmXLu0KexN38qrWPh4mQiDBTxyQ0kgd1vRmgRgM0wtgs4NeIs5hhdY7zjuTh8OSA9v2yxUr7ijDapq%2FVBjqkARVQI1TRQB7R3AA3LqQRdZspuYGe6v9gKPpaSqrj4vwZhQTQ8Ny%2B5gcHYNEQwKBJqcTj%2F6tYOdi8Xeu3OlwEHhz8I06%2BrKI7EnEFAixTrEspPNBO64g0n8rgjR4uzia9kDdP2BscvC9rDsyk0K6VAS7vaKdvP0q7t4t%2B6mASbjwdHns6H5bq20gRVeoa7ggITKbvwKENmXitB%2FgAjBwaWoe%2F4sXI&X-Amz-Signature=b66b725956339b6188f658f934311db224e744f8d74540c8f28dde803ed9381d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664UFZWMC2%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJHMEUCIQCn3r1kzQSrFw%2FnP%2Fj8%2FUGQBR%2BeGeP8GBAqvDPma5chowIga6nWMDwIhjSc%2FuL8Rdg0y0ppFy4oTPrKjX4kudyMayYq%2FwMILRAAGgw2Mzc0MjMxODM4MDUiDGXNo%2FB4XQgPidHC8CrcA8gFqVuvCwOootdvYrdIedfKohNXD%2F5HZ2qEZmcIB9KzDoBk%2Fr7V5xjHqvcCiMGhWovMHH5J13Ns%2Byp5kmpMugL38%2FE4lJwgXC1eQrxaTObVjYdu%2B9Z9JK%2B5MglTJUkejZ%2FUzDd33OUJ6TziIdnG%2FpVKsxfY2dUWQ%2BeQFMvXD8HK5qxrKyjHRFS1014YflCZovGZNlZ%2Ff%2FZsMtoKy8NfOZokPb8rGgciruTXfklzOXGwB5kmUZwXjF6fk0GqqmW7l16HYFCuT3D5dxC1EdkKIlzZVrWrc4oLoJ85chq%2FsJPuQchEzRaAwYgtv3nzhGWTVGmbjmygTsTPQcbTpOaPcXrsEvfWwNpXtI1j1LjVcmzO5KKAF5%2FkAs83hl7CaI3JQF4wCBNBpUf%2BVi3p%2BJpxVSsxdNdjlQRbuJTnD3Zx5MmWPw5jNPd%2BDVVWLj4E7xwoXS1z%2FG8Q4QpArKqA5PD%2FG9TY5lolBhp0dMOVN0rSeKXNywDPE3Fufx865XD4fjbZM8eDyQtwPGbeLifxJi1MgIVn7dY10t8rkqvaoYVyfLrddtOhfryjKTH5GxBVYwa6ucorRyJVaQiPAtyWlnnN%2Bj5hQioj3RX4mqFyfDTRLkwazq8cSnuH8WkjTXueMIOmr9UGOqUBq94yjU4%2B%2FKQynkDC%2F5Ky205WsgUWRsIALz2k%2B3j9KewdMrCti%2BWrw8q8yfgJd0RWYiBO2e2vifM%2FetyyQ0vJaQO3%2FlpkuLHpooEigFqF1DwdG1aesEDX8XWordDZ%2FY0fQJ692LHww8mLFkhihWzyb21wQDsXNkvjEM%2F5rFTtRPirQpU1EqIKevvROo%2BfYNlvutPsDvp97b08E8Hg6MDQzRPxUkyy&X-Amz-Signature=40d88a7645948f1329e7c842005f6b5d59ec3b1cbabd901f2ad4b1c0dfd07fdf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664UFZWMC2%2F20260917%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260917T130317Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGQaCXVzLXdlc3QtMiJHMEUCIQCn3r1kzQSrFw%2FnP%2Fj8%2FUGQBR%2BeGeP8GBAqvDPma5chowIga6nWMDwIhjSc%2FuL8Rdg0y0ppFy4oTPrKjX4kudyMayYq%2FwMILRAAGgw2Mzc0MjMxODM4MDUiDGXNo%2FB4XQgPidHC8CrcA8gFqVuvCwOootdvYrdIedfKohNXD%2F5HZ2qEZmcIB9KzDoBk%2Fr7V5xjHqvcCiMGhWovMHH5J13Ns%2Byp5kmpMugL38%2FE4lJwgXC1eQrxaTObVjYdu%2B9Z9JK%2B5MglTJUkejZ%2FUzDd33OUJ6TziIdnG%2FpVKsxfY2dUWQ%2BeQFMvXD8HK5qxrKyjHRFS1014YflCZovGZNlZ%2Ff%2FZsMtoKy8NfOZokPb8rGgciruTXfklzOXGwB5kmUZwXjF6fk0GqqmW7l16HYFCuT3D5dxC1EdkKIlzZVrWrc4oLoJ85chq%2FsJPuQchEzRaAwYgtv3nzhGWTVGmbjmygTsTPQcbTpOaPcXrsEvfWwNpXtI1j1LjVcmzO5KKAF5%2FkAs83hl7CaI3JQF4wCBNBpUf%2BVi3p%2BJpxVSsxdNdjlQRbuJTnD3Zx5MmWPw5jNPd%2BDVVWLj4E7xwoXS1z%2FG8Q4QpArKqA5PD%2FG9TY5lolBhp0dMOVN0rSeKXNywDPE3Fufx865XD4fjbZM8eDyQtwPGbeLifxJi1MgIVn7dY10t8rkqvaoYVyfLrddtOhfryjKTH5GxBVYwa6ucorRyJVaQiPAtyWlnnN%2Bj5hQioj3RX4mqFyfDTRLkwazq8cSnuH8WkjTXueMIOmr9UGOqUBq94yjU4%2B%2FKQynkDC%2F5Ky205WsgUWRsIALz2k%2B3j9KewdMrCti%2BWrw8q8yfgJd0RWYiBO2e2vifM%2FetyyQ0vJaQO3%2FlpkuLHpooEigFqF1DwdG1aesEDX8XWordDZ%2FY0fQJ692LHww8mLFkhihWzyb21wQDsXNkvjEM%2F5rFTtRPirQpU1EqIKevvROo%2BfYNlvutPsDvp97b08E8Hg6MDQzRPxUkyy&X-Amz-Signature=be5c722b4dd4e13ab6c29c18d5b3ba485a6e0d6c669da5377ce1a60bea3a96ed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
