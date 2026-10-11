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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZIJ4URBE%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGon1Ml1fg8%2F%2B9tP7WpIbQ%2FrlUifTxQYprN0XfVUej5DAiBO8tYBpRz2s3s%2FOnkAEgyLxXUH98xOuJdeiqSAVihmoyr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMBJQqjSCw5SMdBD7JKtwDZdAM8EOWbhZRJWyhquuAdh4P8LkhnRYIH%2FRu3MVomzD0186CGMYg4uWgAT5%2F5gjYnPdUGeD5Kqz%2BIWM90LlUXd7K89TS%2FNiD42erQxjeP2kiNDBCTJbzGFQ2lkO716fHq1XG%2FjYY5u%2BhEmR%2BQrbZ78NHBB8Os%2BLuJyPU1F2Q6db9UtRfQcOMxgmxTUoOBpWPHxJUTVPbZ%2BMmm7DPuIkG4UQYPLTnbj8rqhCY8uYcWOxHZi4rQ8506RAgGID1xYAKQHBaNz49FVsWEsnb5f6%2FXJbipvgYfTnJkHN8r9ripLrU68KdNAdBTnlj%2FmDH8Ugp5n6RlCD9ANqBMgOGGR2f7WpzCfXaZKr6wu9C%2FtvYzhLLUPuWvqUQAgBalQWpKETsufyYV86UJesrl1X4W5e5fudtGkPxJmEjXX03cf69fPhz5rWVkydxsgEGQLp0gY3CtjN8eiN3THvqZkbmSQrVOj%2F9cje2LdI8ZvVp0hAJNdrLS6oK5CucJuPp0x%2F1dRz8QY%2B7p9FIiHn%2BANMXpEy%2F%2BtXR64xnPKoCI02jiq1%2BYBtzoQKtIJ0J7mOC%2Be2yMh8s53d5t8ortjgF7lHn8Sbwyu%2FdKhM37FRkb39QMQFeRJOTmSKVyiOeNUchs10wytat1gY6pgERBysW6T44lgia3vdMx8P7ku4Hhbf2wZX%2Bvk7QFdd32tN2TfqpmO9BDw34qLl7yiPCUdYoMYa7DessfqMHrYcH1Ilc3nYGIlQY%2BDt1XF8F4GPnFJP96TJH%2Bt%2BjeQzrzq%2FeMXdE64quBe%2F5cJ8l8X%2Fzn1P%2BICsiT6pNCC%2FtVNUr66bqe%2FDrcL1yJQN8rnCUJCrQK7uAxn8V7ib97TmpK0Ne%2FHiPcrO9&X-Amz-Signature=9bab4f525a41f40ca54a16e9a2741db0ea9eb2159961a2feadf8f37e34f8789f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZIJ4URBE%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGon1Ml1fg8%2F%2B9tP7WpIbQ%2FrlUifTxQYprN0XfVUej5DAiBO8tYBpRz2s3s%2FOnkAEgyLxXUH98xOuJdeiqSAVihmoyr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMBJQqjSCw5SMdBD7JKtwDZdAM8EOWbhZRJWyhquuAdh4P8LkhnRYIH%2FRu3MVomzD0186CGMYg4uWgAT5%2F5gjYnPdUGeD5Kqz%2BIWM90LlUXd7K89TS%2FNiD42erQxjeP2kiNDBCTJbzGFQ2lkO716fHq1XG%2FjYY5u%2BhEmR%2BQrbZ78NHBB8Os%2BLuJyPU1F2Q6db9UtRfQcOMxgmxTUoOBpWPHxJUTVPbZ%2BMmm7DPuIkG4UQYPLTnbj8rqhCY8uYcWOxHZi4rQ8506RAgGID1xYAKQHBaNz49FVsWEsnb5f6%2FXJbipvgYfTnJkHN8r9ripLrU68KdNAdBTnlj%2FmDH8Ugp5n6RlCD9ANqBMgOGGR2f7WpzCfXaZKr6wu9C%2FtvYzhLLUPuWvqUQAgBalQWpKETsufyYV86UJesrl1X4W5e5fudtGkPxJmEjXX03cf69fPhz5rWVkydxsgEGQLp0gY3CtjN8eiN3THvqZkbmSQrVOj%2F9cje2LdI8ZvVp0hAJNdrLS6oK5CucJuPp0x%2F1dRz8QY%2B7p9FIiHn%2BANMXpEy%2F%2BtXR64xnPKoCI02jiq1%2BYBtzoQKtIJ0J7mOC%2Be2yMh8s53d5t8ortjgF7lHn8Sbwyu%2FdKhM37FRkb39QMQFeRJOTmSKVyiOeNUchs10wytat1gY6pgERBysW6T44lgia3vdMx8P7ku4Hhbf2wZX%2Bvk7QFdd32tN2TfqpmO9BDw34qLl7yiPCUdYoMYa7DessfqMHrYcH1Ilc3nYGIlQY%2BDt1XF8F4GPnFJP96TJH%2Bt%2BjeQzrzq%2FeMXdE64quBe%2F5cJ8l8X%2Fzn1P%2BICsiT6pNCC%2FtVNUr66bqe%2FDrcL1yJQN8rnCUJCrQK7uAxn8V7ib97TmpK0Ne%2FHiPcrO9&X-Amz-Signature=e96fda3fb9bdfb2dca5949015a6375c506504351d942f404837cf73887cf6652&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZIJ4URBE%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGon1Ml1fg8%2F%2B9tP7WpIbQ%2FrlUifTxQYprN0XfVUej5DAiBO8tYBpRz2s3s%2FOnkAEgyLxXUH98xOuJdeiqSAVihmoyr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMBJQqjSCw5SMdBD7JKtwDZdAM8EOWbhZRJWyhquuAdh4P8LkhnRYIH%2FRu3MVomzD0186CGMYg4uWgAT5%2F5gjYnPdUGeD5Kqz%2BIWM90LlUXd7K89TS%2FNiD42erQxjeP2kiNDBCTJbzGFQ2lkO716fHq1XG%2FjYY5u%2BhEmR%2BQrbZ78NHBB8Os%2BLuJyPU1F2Q6db9UtRfQcOMxgmxTUoOBpWPHxJUTVPbZ%2BMmm7DPuIkG4UQYPLTnbj8rqhCY8uYcWOxHZi4rQ8506RAgGID1xYAKQHBaNz49FVsWEsnb5f6%2FXJbipvgYfTnJkHN8r9ripLrU68KdNAdBTnlj%2FmDH8Ugp5n6RlCD9ANqBMgOGGR2f7WpzCfXaZKr6wu9C%2FtvYzhLLUPuWvqUQAgBalQWpKETsufyYV86UJesrl1X4W5e5fudtGkPxJmEjXX03cf69fPhz5rWVkydxsgEGQLp0gY3CtjN8eiN3THvqZkbmSQrVOj%2F9cje2LdI8ZvVp0hAJNdrLS6oK5CucJuPp0x%2F1dRz8QY%2B7p9FIiHn%2BANMXpEy%2F%2BtXR64xnPKoCI02jiq1%2BYBtzoQKtIJ0J7mOC%2Be2yMh8s53d5t8ortjgF7lHn8Sbwyu%2FdKhM37FRkb39QMQFeRJOTmSKVyiOeNUchs10wytat1gY6pgERBysW6T44lgia3vdMx8P7ku4Hhbf2wZX%2Bvk7QFdd32tN2TfqpmO9BDw34qLl7yiPCUdYoMYa7DessfqMHrYcH1Ilc3nYGIlQY%2BDt1XF8F4GPnFJP96TJH%2Bt%2BjeQzrzq%2FeMXdE64quBe%2F5cJ8l8X%2Fzn1P%2BICsiT6pNCC%2FtVNUr66bqe%2FDrcL1yJQN8rnCUJCrQK7uAxn8V7ib97TmpK0Ne%2FHiPcrO9&X-Amz-Signature=927ee00459465dc3e2f041750fa221ac71639036ad7860aed6bededa9c62fc46&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2ZSAVEJ%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKyKnbIya2Enhpxnm2JiumBkDg50qYen0Cxg7qrpb5XAIgVimz%2BNWvSg%2BT63BDKhQvJQM5q9bVhomB4UQOnnBDSLoq%2FwMIbBAAGgw2Mzc0MjMxODM4MDUiDGS9y75SCht3k37CFircA5EG9mZN3Kgbj8OKqC550XNyCEzC0edEU9m1%2BuKO40492sTEz5g0j0kCSOoJmRR5PchNaozBFLn8mh1TXUOc5QoPH%2FWFQirgpr2lD0Kzx9Cis%2BCto7Nv%2Bz0na3EWNm7QAKR2bR8D6yM1P%2B6oYwJka5Iso9gT3I3GF7JCt9W8WE0%2FxTqefaM43PQWN4bIpGl3DswTIAAbtHNelRKoUTzB5ZUCJZRAfBOG6J%2BFl3LObYCX2iQOg3otdG26%2F%2Fon0fWfbIzkzP1Os2wNq6X3wNJqU7mDn1GBhFdvZuGJOilYwmQumoU7yt8A1ulUOLZpKrXFRzHOuuXTlTv5yeT9kqSM5q5716vPTjxZSQDbN6C4sOlU9z5YIVcywQpalhrRBQdaUahwq9RN%2FR%2FJ6WDoRaP4TbtVBaUb4Y9p%2BLBXZrOdmRnsecC8%2FrBplJ9Oj88a9An9BjoB2RK%2B8f4fpDAcy3M5JvEf%2FbMBSaHH93QcnGkkSL3JtokymReB9vRo8JTofhjrOOXvUYbJjnPRFxfpt1jX%2BKZ8kBCjXrsfErHK6FokUl1vrEB76L27QYcuFqAwm%2Bq8%2BOOrjX0of8I2XYj5VSe2%2BtmKltcC3Eu9DBdJRf2TCJHEBaR7XtGv42JlNXnzMLjUrdYGOqUBti1joNRHTwqsDT2ffqStgtxZ6ZksAYJ9R8sLTyrw3ygMdzHS0GEkd7cPeuYI%2FmL6GUHqwHt5GlfGew5xK4Vso6cp3jf3yPBMdVTW%2FHchZ11RgDu0RoAbJGsyw2%2F9Mo46xtSv6gkx3dbK%2BVsk7cSOCsi2pSYlZnQfdU8otymGR4xOLnxTwXsuovpqJEvGgO%2FDBMflMHHL6mjUIAsW1CbBOQG6hQ9C&X-Amz-Signature=76992702b9139b203cea24a0acf9f810ebcde9c906c63b8784f3cfba95ddcfcc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2ZSAVEJ%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKyKnbIya2Enhpxnm2JiumBkDg50qYen0Cxg7qrpb5XAIgVimz%2BNWvSg%2BT63BDKhQvJQM5q9bVhomB4UQOnnBDSLoq%2FwMIbBAAGgw2Mzc0MjMxODM4MDUiDGS9y75SCht3k37CFircA5EG9mZN3Kgbj8OKqC550XNyCEzC0edEU9m1%2BuKO40492sTEz5g0j0kCSOoJmRR5PchNaozBFLn8mh1TXUOc5QoPH%2FWFQirgpr2lD0Kzx9Cis%2BCto7Nv%2Bz0na3EWNm7QAKR2bR8D6yM1P%2B6oYwJka5Iso9gT3I3GF7JCt9W8WE0%2FxTqefaM43PQWN4bIpGl3DswTIAAbtHNelRKoUTzB5ZUCJZRAfBOG6J%2BFl3LObYCX2iQOg3otdG26%2F%2Fon0fWfbIzkzP1Os2wNq6X3wNJqU7mDn1GBhFdvZuGJOilYwmQumoU7yt8A1ulUOLZpKrXFRzHOuuXTlTv5yeT9kqSM5q5716vPTjxZSQDbN6C4sOlU9z5YIVcywQpalhrRBQdaUahwq9RN%2FR%2FJ6WDoRaP4TbtVBaUb4Y9p%2BLBXZrOdmRnsecC8%2FrBplJ9Oj88a9An9BjoB2RK%2B8f4fpDAcy3M5JvEf%2FbMBSaHH93QcnGkkSL3JtokymReB9vRo8JTofhjrOOXvUYbJjnPRFxfpt1jX%2BKZ8kBCjXrsfErHK6FokUl1vrEB76L27QYcuFqAwm%2Bq8%2BOOrjX0of8I2XYj5VSe2%2BtmKltcC3Eu9DBdJRf2TCJHEBaR7XtGv42JlNXnzMLjUrdYGOqUBti1joNRHTwqsDT2ffqStgtxZ6ZksAYJ9R8sLTyrw3ygMdzHS0GEkd7cPeuYI%2FmL6GUHqwHt5GlfGew5xK4Vso6cp3jf3yPBMdVTW%2FHchZ11RgDu0RoAbJGsyw2%2F9Mo46xtSv6gkx3dbK%2BVsk7cSOCsi2pSYlZnQfdU8otymGR4xOLnxTwXsuovpqJEvGgO%2FDBMflMHHL6mjUIAsW1CbBOQG6hQ9C&X-Amz-Signature=033240001b682eff5b266aa1a03638500a348f9190b401031232fea988830320&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2ZSAVEJ%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKyKnbIya2Enhpxnm2JiumBkDg50qYen0Cxg7qrpb5XAIgVimz%2BNWvSg%2BT63BDKhQvJQM5q9bVhomB4UQOnnBDSLoq%2FwMIbBAAGgw2Mzc0MjMxODM4MDUiDGS9y75SCht3k37CFircA5EG9mZN3Kgbj8OKqC550XNyCEzC0edEU9m1%2BuKO40492sTEz5g0j0kCSOoJmRR5PchNaozBFLn8mh1TXUOc5QoPH%2FWFQirgpr2lD0Kzx9Cis%2BCto7Nv%2Bz0na3EWNm7QAKR2bR8D6yM1P%2B6oYwJka5Iso9gT3I3GF7JCt9W8WE0%2FxTqefaM43PQWN4bIpGl3DswTIAAbtHNelRKoUTzB5ZUCJZRAfBOG6J%2BFl3LObYCX2iQOg3otdG26%2F%2Fon0fWfbIzkzP1Os2wNq6X3wNJqU7mDn1GBhFdvZuGJOilYwmQumoU7yt8A1ulUOLZpKrXFRzHOuuXTlTv5yeT9kqSM5q5716vPTjxZSQDbN6C4sOlU9z5YIVcywQpalhrRBQdaUahwq9RN%2FR%2FJ6WDoRaP4TbtVBaUb4Y9p%2BLBXZrOdmRnsecC8%2FrBplJ9Oj88a9An9BjoB2RK%2B8f4fpDAcy3M5JvEf%2FbMBSaHH93QcnGkkSL3JtokymReB9vRo8JTofhjrOOXvUYbJjnPRFxfpt1jX%2BKZ8kBCjXrsfErHK6FokUl1vrEB76L27QYcuFqAwm%2Bq8%2BOOrjX0of8I2XYj5VSe2%2BtmKltcC3Eu9DBdJRf2TCJHEBaR7XtGv42JlNXnzMLjUrdYGOqUBti1joNRHTwqsDT2ffqStgtxZ6ZksAYJ9R8sLTyrw3ygMdzHS0GEkd7cPeuYI%2FmL6GUHqwHt5GlfGew5xK4Vso6cp3jf3yPBMdVTW%2FHchZ11RgDu0RoAbJGsyw2%2F9Mo46xtSv6gkx3dbK%2BVsk7cSOCsi2pSYlZnQfdU8otymGR4xOLnxTwXsuovpqJEvGgO%2FDBMflMHHL6mjUIAsW1CbBOQG6hQ9C&X-Amz-Signature=d780f17912eddfc95da8a8ca621f8317dd352c395f29f6e2f2560c12968416f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2ZSAVEJ%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143924Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKyKnbIya2Enhpxnm2JiumBkDg50qYen0Cxg7qrpb5XAIgVimz%2BNWvSg%2BT63BDKhQvJQM5q9bVhomB4UQOnnBDSLoq%2FwMIbBAAGgw2Mzc0MjMxODM4MDUiDGS9y75SCht3k37CFircA5EG9mZN3Kgbj8OKqC550XNyCEzC0edEU9m1%2BuKO40492sTEz5g0j0kCSOoJmRR5PchNaozBFLn8mh1TXUOc5QoPH%2FWFQirgpr2lD0Kzx9Cis%2BCto7Nv%2Bz0na3EWNm7QAKR2bR8D6yM1P%2B6oYwJka5Iso9gT3I3GF7JCt9W8WE0%2FxTqefaM43PQWN4bIpGl3DswTIAAbtHNelRKoUTzB5ZUCJZRAfBOG6J%2BFl3LObYCX2iQOg3otdG26%2F%2Fon0fWfbIzkzP1Os2wNq6X3wNJqU7mDn1GBhFdvZuGJOilYwmQumoU7yt8A1ulUOLZpKrXFRzHOuuXTlTv5yeT9kqSM5q5716vPTjxZSQDbN6C4sOlU9z5YIVcywQpalhrRBQdaUahwq9RN%2FR%2FJ6WDoRaP4TbtVBaUb4Y9p%2BLBXZrOdmRnsecC8%2FrBplJ9Oj88a9An9BjoB2RK%2B8f4fpDAcy3M5JvEf%2FbMBSaHH93QcnGkkSL3JtokymReB9vRo8JTofhjrOOXvUYbJjnPRFxfpt1jX%2BKZ8kBCjXrsfErHK6FokUl1vrEB76L27QYcuFqAwm%2Bq8%2BOOrjX0of8I2XYj5VSe2%2BtmKltcC3Eu9DBdJRf2TCJHEBaR7XtGv42JlNXnzMLjUrdYGOqUBti1joNRHTwqsDT2ffqStgtxZ6ZksAYJ9R8sLTyrw3ygMdzHS0GEkd7cPeuYI%2FmL6GUHqwHt5GlfGew5xK4Vso6cp3jf3yPBMdVTW%2FHchZ11RgDu0RoAbJGsyw2%2F9Mo46xtSv6gkx3dbK%2BVsk7cSOCsi2pSYlZnQfdU8otymGR4xOLnxTwXsuovpqJEvGgO%2FDBMflMHHL6mjUIAsW1CbBOQG6hQ9C&X-Amz-Signature=ccf1632efde1dda84e80426dafc7d10c7a7beb55168e2787e5ee2ad1ec92bc78&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664JV2D7UO%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDbyU%2FVz%2FUWgMbA8RNxoTL%2FnMfK46GrlhrUMbHYDVUCOAIgMhq0jYf9j1jrNm%2FJ5vpUAc9kzWeFJkAUWKchYMXQrwoq%2FwMIaxAAGgw2Mzc0MjMxODM4MDUiDBOeBdJuFQtYUhLvZCrcA%2BmIx1VWPZw2gZ%2Foyu0QFLYDktyZQTmXWCikvMewXBpLBFQQVWh6BsPeV4D44fceFh13U%2FC8FoGInuspE2QU54NWIR4mURGbTPZwEzx3LXgYE1SIpd%2BDw0NTa43ul%2FMDeYk2qfyvHpw3sJdvUj29DURGQNNRZGqqbW8w8COyw0Ty8oiomE5NKEC7pqFe2XFx9pjklhjL1y0tx06%2Fqbs9yq0iPcv%2FdIYUTqagKje4oZQcI7eKeurkpixSCBl6cxWXtpXZcdFz0RJlRvl%2BdFlJfbCpDoAvA7%2FFGCZFVb4tq9C9sgXK5ecJ39I8cqE38pzJpWpmt7r3zz845hbJdGqdn4fTjvUvsgN7GA8tAuO9BgoE5bTWExEQQDtjt%2FTmmaWpFneGzntJykXl1gWf7M9qlUM%2FjjUgdACe6pndhSG826Fpf5HapnLmrzMdfCkFoeUtgezPKXrozWZLJ28b56vttaDgSsPPLG9FOK2k5D%2FqcOzCj81b7bnc%2BS3MkCPbVg0bdSUNWP1xuQf3C%2BQFB%2F014itOtzOBX0WpOsc76I%2B7%2Fk2%2FX43ZCkKOeR18jY5MD4jC9HknUMsGDPKsuhaVla1LQxDpBV0WXWVJkQfLWycuTeCFqTFy58nXY8OdrFiZMNPWrdYGOqUB%2BguBvxzaixLg124GD%2FCI23juo1kJOkpmlunGiBB3flRW3odTfGEcklgJP2VckSyWuuQ05elCyVQl%2BtvDY%2F4qONeNEh6xhGC6UjJNVemr9%2FVn5PsuFrroAESfKKQQIA5IdW6t4stcF12295zKPjeU%2FkNquDMjpDHNzEzVmsWDay4x3n4xWnuJijk68iu6%2Bopa8k4N9YhgelL31QYWPTeEEp61WOZU&X-Amz-Signature=ce46776e604a9437eb590b6d7c876bcb8fa9fff9b2880caed7fe27e69f8d5ebb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663Y3IO3WG%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGjswBJkpbHp%2FJEMT%2FxaM1l0TvcR%2FhouBXTCY2QtGwSdAiAPVgNQX%2Fq%2BhYulZgaLyYaDGcPaQrkAYeARZwi%2FjxCchyr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMPOZCz7%2B8h54ybuuDKtwDPNsigVZotSIOX6pNXC73bIDIgQaix40xC3SnDTxj8WIfv%2Fwu72HZgEw6h5Zrge4e0AMfPMmsYbN99YV8yKkB10VZZ7HqrmHgyNL9eCi7l4PLV%2BvcKcDDwd6yNFBFUUah1c9mX5RMaPZquF1p2GCj2okQ%2FAomHEWv5tX8jR0P1BqR0Ey7YtIzpKLJkiv4c7HsGofbmKylEKlLdm1ZgLWdcEQ4wfMufq%2BhAbiktsCDjmpUaAhaUnPGdl2vvQi019GqE3c7mBZDrMyTWZUNRwesOVIvvUrPIFAyQG6ELuIllxAcuR7%2Bupx8pptoZcgeeMGK2QW4lRxDazpyH8AqBXAQAFAl4%2BBvvLc4CgwarT44uhUtJblrh9Ru6DmvnTrTqJfLPX0In1CKV4DglD2WIMRA6eJ8SA3mCCebzY8W6I%2FiHoNUbLyFIbE6A9sZH3rix4IgAjxi8BA4qQXthAFla6KSflHSdX4oPKTtPcXAcPPn2DFKCjaBu1OoeVQP%2BdbHnL2ZRs9IhAdyRDnwNradsFvW5ie%2FXhUapNzwPUzBL36Wt2DzGw%2Fj1%2Fz8E%2BUqQIczgq7DmUTgtZM15rsGBh1fMefTBJjN3N7lylUVsPWsJRQZslA2DkL6hZewm17APswwntWt1gY6pgGGfA8%2FoN3pW6IR8W%2Fnjck2DfCgFLlcRuIubTgzqrVMLk%2B%2Faavk1b243lpiijSASvQgdmOaVJ7h48HG8Jo%2FEjTK2RQOIHwEOUrGYfp4IvCszulYo%2FMSOByP%2BTKHLJ8nlle1UTna7wE0rSIj0kkR2fDqpSULpzqL6AjEeR2jkAQb3pJ4YYFz0%2B4LYnGKC0qFq6t2jijjOK7ZOd9auYQF365iHfAWjt0x&X-Amz-Signature=c6cfb52b667397265db983826cf8ad5dfecb197eba8ba7e6a7c201985e3cde4d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663Y3IO3WG%2F20261011%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261011T143925Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGjswBJkpbHp%2FJEMT%2FxaM1l0TvcR%2FhouBXTCY2QtGwSdAiAPVgNQX%2Fq%2BhYulZgaLyYaDGcPaQrkAYeARZwi%2FjxCchyr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMPOZCz7%2B8h54ybuuDKtwDPNsigVZotSIOX6pNXC73bIDIgQaix40xC3SnDTxj8WIfv%2Fwu72HZgEw6h5Zrge4e0AMfPMmsYbN99YV8yKkB10VZZ7HqrmHgyNL9eCi7l4PLV%2BvcKcDDwd6yNFBFUUah1c9mX5RMaPZquF1p2GCj2okQ%2FAomHEWv5tX8jR0P1BqR0Ey7YtIzpKLJkiv4c7HsGofbmKylEKlLdm1ZgLWdcEQ4wfMufq%2BhAbiktsCDjmpUaAhaUnPGdl2vvQi019GqE3c7mBZDrMyTWZUNRwesOVIvvUrPIFAyQG6ELuIllxAcuR7%2Bupx8pptoZcgeeMGK2QW4lRxDazpyH8AqBXAQAFAl4%2BBvvLc4CgwarT44uhUtJblrh9Ru6DmvnTrTqJfLPX0In1CKV4DglD2WIMRA6eJ8SA3mCCebzY8W6I%2FiHoNUbLyFIbE6A9sZH3rix4IgAjxi8BA4qQXthAFla6KSflHSdX4oPKTtPcXAcPPn2DFKCjaBu1OoeVQP%2BdbHnL2ZRs9IhAdyRDnwNradsFvW5ie%2FXhUapNzwPUzBL36Wt2DzGw%2Fj1%2Fz8E%2BUqQIczgq7DmUTgtZM15rsGBh1fMefTBJjN3N7lylUVsPWsJRQZslA2DkL6hZewm17APswwntWt1gY6pgGGfA8%2FoN3pW6IR8W%2Fnjck2DfCgFLlcRuIubTgzqrVMLk%2B%2Faavk1b243lpiijSASvQgdmOaVJ7h48HG8Jo%2FEjTK2RQOIHwEOUrGYfp4IvCszulYo%2FMSOByP%2BTKHLJ8nlle1UTna7wE0rSIj0kkR2fDqpSULpzqL6AjEeR2jkAQb3pJ4YYFz0%2B4LYnGKC0qFq6t2jijjOK7ZOd9auYQF365iHfAWjt0x&X-Amz-Signature=ee653b642c957265eca1dd6b261d2d608028c6941431da6bd3fb66ca8cfa4136&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
