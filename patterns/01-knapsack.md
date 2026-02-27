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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5BKRSDT%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084009Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCICLdM2XQTryczMBkvN%2FLhUyIYcYExlpXuc0JIi%2FmbdVSAiEAt6VzRhRbd%2FFyVNkIqvwe2ro4CE5WcmhWAQsw01bhemgq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDHtZVH419ts163YcNCrcA7JVi4UcayfRRGp2V9IbWHxiLZ490XlE3uDLsZP69bQURwNJN7NV93DFtM44L1VzXe6vCRXJcSCHnz1PLIT93cEkl6ljOa0ykXBoceJcu%2FflKQh1DvERJnHKT2uOzMBEW1r2R6ihPlhk%2BiO%2BMgGvazyonREdwB%2F7YzRBEZTqHkJikObnfYkpbi0ofDxSGVo%2F2AP3SXbQDoW9V399PKHKHXou%2FPq7hOwN0xfVQKyt%2BUlCqRJs3xoajX5qfgEjwZpVc5alo%2B3DiVEPQbvUWDBh41aGspT2Q%2BbQCdDfC1x%2BBj9OyKrewoGD33XYHGk5O1zLSdmIgat7dSD9a%2BJB%2F1hykFLuDlrjnKNt7lsF26rlxWv6EOedACP8AR2W2tkAGqBBoDD0dylZYHFBVAPyLJ4EwUGlAXExsLyqM96NGBjC7fsUtorzJzx47UWBBZHge%2Bv57WPOPaXV7R551TsJU%2FYSb8%2B9iwa7VSWfWcH0fmvYR8LothJ7Si%2FxM9rTjBMHT1jDVs1BgHqe6hfjIYERV0aO4VoyaL3OtZwo7qEatQQPArXB4o6aRkH7c6ux9fpe0en6%2FMDt%2BjQUMm75C7p3qw%2BfvLfhKvFTwOaZhG0GWJy2QtaUvjgyWrjVdw5p8QggMIOahc0GOqUBTiNt4u%2BA1OEESkmloyXgLz6VwmGME68POOaoc%2FxAW41jQRYGOUSpzo5yp%2BtjVJj3MOJLvJI8r3ztMvkZDg1vnrh7iEkP50Fl2gE6mGNQClYJbB7Y0GsSMIc%2BjliZ2BAvIaiYTtvcEhOEFa%2B6cjdpVHea%2FPGEtr3LW29HFsH8JSDU8uAJdwG86TujCbogWZMz0aVmlwXwCZJFOWfN%2BL04dgE95cKI&X-Amz-Signature=6b754892df30a5624a6e9bf0775ca6b385bc7070610197f75cf3bcd0471b66c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5BKRSDT%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084009Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCICLdM2XQTryczMBkvN%2FLhUyIYcYExlpXuc0JIi%2FmbdVSAiEAt6VzRhRbd%2FFyVNkIqvwe2ro4CE5WcmhWAQsw01bhemgq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDHtZVH419ts163YcNCrcA7JVi4UcayfRRGp2V9IbWHxiLZ490XlE3uDLsZP69bQURwNJN7NV93DFtM44L1VzXe6vCRXJcSCHnz1PLIT93cEkl6ljOa0ykXBoceJcu%2FflKQh1DvERJnHKT2uOzMBEW1r2R6ihPlhk%2BiO%2BMgGvazyonREdwB%2F7YzRBEZTqHkJikObnfYkpbi0ofDxSGVo%2F2AP3SXbQDoW9V399PKHKHXou%2FPq7hOwN0xfVQKyt%2BUlCqRJs3xoajX5qfgEjwZpVc5alo%2B3DiVEPQbvUWDBh41aGspT2Q%2BbQCdDfC1x%2BBj9OyKrewoGD33XYHGk5O1zLSdmIgat7dSD9a%2BJB%2F1hykFLuDlrjnKNt7lsF26rlxWv6EOedACP8AR2W2tkAGqBBoDD0dylZYHFBVAPyLJ4EwUGlAXExsLyqM96NGBjC7fsUtorzJzx47UWBBZHge%2Bv57WPOPaXV7R551TsJU%2FYSb8%2B9iwa7VSWfWcH0fmvYR8LothJ7Si%2FxM9rTjBMHT1jDVs1BgHqe6hfjIYERV0aO4VoyaL3OtZwo7qEatQQPArXB4o6aRkH7c6ux9fpe0en6%2FMDt%2BjQUMm75C7p3qw%2BfvLfhKvFTwOaZhG0GWJy2QtaUvjgyWrjVdw5p8QggMIOahc0GOqUBTiNt4u%2BA1OEESkmloyXgLz6VwmGME68POOaoc%2FxAW41jQRYGOUSpzo5yp%2BtjVJj3MOJLvJI8r3ztMvkZDg1vnrh7iEkP50Fl2gE6mGNQClYJbB7Y0GsSMIc%2BjliZ2BAvIaiYTtvcEhOEFa%2B6cjdpVHea%2FPGEtr3LW29HFsH8JSDU8uAJdwG86TujCbogWZMz0aVmlwXwCZJFOWfN%2BL04dgE95cKI&X-Amz-Signature=6e0d3c70dbe253dc357cfd8e19b958f7237376082cb16000e5ce8acaf64737f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5BKRSDT%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084009Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCICLdM2XQTryczMBkvN%2FLhUyIYcYExlpXuc0JIi%2FmbdVSAiEAt6VzRhRbd%2FFyVNkIqvwe2ro4CE5WcmhWAQsw01bhemgq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDHtZVH419ts163YcNCrcA7JVi4UcayfRRGp2V9IbWHxiLZ490XlE3uDLsZP69bQURwNJN7NV93DFtM44L1VzXe6vCRXJcSCHnz1PLIT93cEkl6ljOa0ykXBoceJcu%2FflKQh1DvERJnHKT2uOzMBEW1r2R6ihPlhk%2BiO%2BMgGvazyonREdwB%2F7YzRBEZTqHkJikObnfYkpbi0ofDxSGVo%2F2AP3SXbQDoW9V399PKHKHXou%2FPq7hOwN0xfVQKyt%2BUlCqRJs3xoajX5qfgEjwZpVc5alo%2B3DiVEPQbvUWDBh41aGspT2Q%2BbQCdDfC1x%2BBj9OyKrewoGD33XYHGk5O1zLSdmIgat7dSD9a%2BJB%2F1hykFLuDlrjnKNt7lsF26rlxWv6EOedACP8AR2W2tkAGqBBoDD0dylZYHFBVAPyLJ4EwUGlAXExsLyqM96NGBjC7fsUtorzJzx47UWBBZHge%2Bv57WPOPaXV7R551TsJU%2FYSb8%2B9iwa7VSWfWcH0fmvYR8LothJ7Si%2FxM9rTjBMHT1jDVs1BgHqe6hfjIYERV0aO4VoyaL3OtZwo7qEatQQPArXB4o6aRkH7c6ux9fpe0en6%2FMDt%2BjQUMm75C7p3qw%2BfvLfhKvFTwOaZhG0GWJy2QtaUvjgyWrjVdw5p8QggMIOahc0GOqUBTiNt4u%2BA1OEESkmloyXgLz6VwmGME68POOaoc%2FxAW41jQRYGOUSpzo5yp%2BtjVJj3MOJLvJI8r3ztMvkZDg1vnrh7iEkP50Fl2gE6mGNQClYJbB7Y0GsSMIc%2BjliZ2BAvIaiYTtvcEhOEFa%2B6cjdpVHea%2FPGEtr3LW29HFsH8JSDU8uAJdwG86TujCbogWZMz0aVmlwXwCZJFOWfN%2BL04dgE95cKI&X-Amz-Signature=44df4b18a68d92b7ebf23c9d4de5bd244ec8b8ee4fc4bea5d59274dfb06be718&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665KJ5PZ77%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIAtdMj07rve8qm7tdYhZvPd6xxCZfwN9tdkAzAg6m6SXAiEAyqXPQCSCZCB8WWVuYnAAz573sp%2FI8XSuQZp4Oz%2B3RwIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDGWAA%2BWLbfw5p8TlKCrcA%2BkvemMK6ZDyXvJxY6C%2FlqNwpn7sw1txkvAz5spyk3xHVQ%2BRekGGqB8OVnxbb0XSatm5vToiYZmi0N2D5FSyTQV98RC118viL7FhC6xcz4qiDvfPPvOkJvXD%2BB%2Bz%2FiP9iGItaGvI1AcBtTamCJ4pS3Fe%2FWIEg7tzOwov7yWqQDDq2pKTfloZRWnZtKxdAFw%2FKvPa0nL90q1xjCaptgO101bYQs6Un0IWnR3ot7zHp31s9pB986MsMTpavxcRkC8VnHdFr3NKzxka1BaM%2BOrOBecaE3AKuXKVcSspY0QW%2FyX0zdHU0ljP3Lgk5ntR%2F0S0R9ti%2Fpe1tDRM6KDequMUxpIiwedRjNxjYOR2nASAa%2BU9619g1Sz0ys%2FJarUvCAZU7SefdxZ6z3uzYUotOl%2FQwr43ug0QNKB6vigSi6XNiq2IcPx6VEr14KP%2FVxgBZihVuzjD35E4RLitVOQiA%2BvLk1BmPQ2nYE0crdx7dGKvF%2FmKjQPAlfSpnLi2hmnf0fgWSeE2TRZL2FWMQsQRVFO3xE2cHTs9nJHf74TvPkfsLUJ4Wz5Ci2SFdJE68rQpWTlnZ2feXLgMFg8QWHFOy%2FvalPPRcY0CZLx8cdjLELwtFrl9N75LkNUU9e1TaCBWMOGZhc0GOqUBNn3NGiBBs4AmgCwtN7Mys8vMc0kLPywkAbT3q%2FiaVomDMX801O5oPZUhBwTVfutBeDp9s1%2BIa7OZFohZdCTIQrJpNL%2FQ%2B3S154yp%2BcjnClRI83HK3oLcyUG2rn%2BPtZLqclEnDFy01UgrFK0Jp%2Fk%2FjsC0xAXbVTjyQ6dEbksq%2FnOleSTvLnxRWa%2BLfgObWoUzD5aYYP624YH4EtCmsKfKTB6SsaQf&X-Amz-Signature=8b51099dcdd59f129638013931493265df63b083f8fa0d76a9078841f2fa0796&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665KJ5PZ77%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIAtdMj07rve8qm7tdYhZvPd6xxCZfwN9tdkAzAg6m6SXAiEAyqXPQCSCZCB8WWVuYnAAz573sp%2FI8XSuQZp4Oz%2B3RwIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDGWAA%2BWLbfw5p8TlKCrcA%2BkvemMK6ZDyXvJxY6C%2FlqNwpn7sw1txkvAz5spyk3xHVQ%2BRekGGqB8OVnxbb0XSatm5vToiYZmi0N2D5FSyTQV98RC118viL7FhC6xcz4qiDvfPPvOkJvXD%2BB%2Bz%2FiP9iGItaGvI1AcBtTamCJ4pS3Fe%2FWIEg7tzOwov7yWqQDDq2pKTfloZRWnZtKxdAFw%2FKvPa0nL90q1xjCaptgO101bYQs6Un0IWnR3ot7zHp31s9pB986MsMTpavxcRkC8VnHdFr3NKzxka1BaM%2BOrOBecaE3AKuXKVcSspY0QW%2FyX0zdHU0ljP3Lgk5ntR%2F0S0R9ti%2Fpe1tDRM6KDequMUxpIiwedRjNxjYOR2nASAa%2BU9619g1Sz0ys%2FJarUvCAZU7SefdxZ6z3uzYUotOl%2FQwr43ug0QNKB6vigSi6XNiq2IcPx6VEr14KP%2FVxgBZihVuzjD35E4RLitVOQiA%2BvLk1BmPQ2nYE0crdx7dGKvF%2FmKjQPAlfSpnLi2hmnf0fgWSeE2TRZL2FWMQsQRVFO3xE2cHTs9nJHf74TvPkfsLUJ4Wz5Ci2SFdJE68rQpWTlnZ2feXLgMFg8QWHFOy%2FvalPPRcY0CZLx8cdjLELwtFrl9N75LkNUU9e1TaCBWMOGZhc0GOqUBNn3NGiBBs4AmgCwtN7Mys8vMc0kLPywkAbT3q%2FiaVomDMX801O5oPZUhBwTVfutBeDp9s1%2BIa7OZFohZdCTIQrJpNL%2FQ%2B3S154yp%2BcjnClRI83HK3oLcyUG2rn%2BPtZLqclEnDFy01UgrFK0Jp%2Fk%2FjsC0xAXbVTjyQ6dEbksq%2FnOleSTvLnxRWa%2BLfgObWoUzD5aYYP624YH4EtCmsKfKTB6SsaQf&X-Amz-Signature=cee1218861fc9054128b895a8627780374c277cd8679be3a845b274e8c2a202a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665KJ5PZ77%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIAtdMj07rve8qm7tdYhZvPd6xxCZfwN9tdkAzAg6m6SXAiEAyqXPQCSCZCB8WWVuYnAAz573sp%2FI8XSuQZp4Oz%2B3RwIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDGWAA%2BWLbfw5p8TlKCrcA%2BkvemMK6ZDyXvJxY6C%2FlqNwpn7sw1txkvAz5spyk3xHVQ%2BRekGGqB8OVnxbb0XSatm5vToiYZmi0N2D5FSyTQV98RC118viL7FhC6xcz4qiDvfPPvOkJvXD%2BB%2Bz%2FiP9iGItaGvI1AcBtTamCJ4pS3Fe%2FWIEg7tzOwov7yWqQDDq2pKTfloZRWnZtKxdAFw%2FKvPa0nL90q1xjCaptgO101bYQs6Un0IWnR3ot7zHp31s9pB986MsMTpavxcRkC8VnHdFr3NKzxka1BaM%2BOrOBecaE3AKuXKVcSspY0QW%2FyX0zdHU0ljP3Lgk5ntR%2F0S0R9ti%2Fpe1tDRM6KDequMUxpIiwedRjNxjYOR2nASAa%2BU9619g1Sz0ys%2FJarUvCAZU7SefdxZ6z3uzYUotOl%2FQwr43ug0QNKB6vigSi6XNiq2IcPx6VEr14KP%2FVxgBZihVuzjD35E4RLitVOQiA%2BvLk1BmPQ2nYE0crdx7dGKvF%2FmKjQPAlfSpnLi2hmnf0fgWSeE2TRZL2FWMQsQRVFO3xE2cHTs9nJHf74TvPkfsLUJ4Wz5Ci2SFdJE68rQpWTlnZ2feXLgMFg8QWHFOy%2FvalPPRcY0CZLx8cdjLELwtFrl9N75LkNUU9e1TaCBWMOGZhc0GOqUBNn3NGiBBs4AmgCwtN7Mys8vMc0kLPywkAbT3q%2FiaVomDMX801O5oPZUhBwTVfutBeDp9s1%2BIa7OZFohZdCTIQrJpNL%2FQ%2B3S154yp%2BcjnClRI83HK3oLcyUG2rn%2BPtZLqclEnDFy01UgrFK0Jp%2Fk%2FjsC0xAXbVTjyQ6dEbksq%2FnOleSTvLnxRWa%2BLfgObWoUzD5aYYP624YH4EtCmsKfKTB6SsaQf&X-Amz-Signature=a620563fc32b1e6f0f55fcf5f7189086a291cc0e100f76b21b3b9b4836fcc2f2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665KJ5PZ77%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084011Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIAtdMj07rve8qm7tdYhZvPd6xxCZfwN9tdkAzAg6m6SXAiEAyqXPQCSCZCB8WWVuYnAAz573sp%2FI8XSuQZp4Oz%2B3RwIq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDGWAA%2BWLbfw5p8TlKCrcA%2BkvemMK6ZDyXvJxY6C%2FlqNwpn7sw1txkvAz5spyk3xHVQ%2BRekGGqB8OVnxbb0XSatm5vToiYZmi0N2D5FSyTQV98RC118viL7FhC6xcz4qiDvfPPvOkJvXD%2BB%2Bz%2FiP9iGItaGvI1AcBtTamCJ4pS3Fe%2FWIEg7tzOwov7yWqQDDq2pKTfloZRWnZtKxdAFw%2FKvPa0nL90q1xjCaptgO101bYQs6Un0IWnR3ot7zHp31s9pB986MsMTpavxcRkC8VnHdFr3NKzxka1BaM%2BOrOBecaE3AKuXKVcSspY0QW%2FyX0zdHU0ljP3Lgk5ntR%2F0S0R9ti%2Fpe1tDRM6KDequMUxpIiwedRjNxjYOR2nASAa%2BU9619g1Sz0ys%2FJarUvCAZU7SefdxZ6z3uzYUotOl%2FQwr43ug0QNKB6vigSi6XNiq2IcPx6VEr14KP%2FVxgBZihVuzjD35E4RLitVOQiA%2BvLk1BmPQ2nYE0crdx7dGKvF%2FmKjQPAlfSpnLi2hmnf0fgWSeE2TRZL2FWMQsQRVFO3xE2cHTs9nJHf74TvPkfsLUJ4Wz5Ci2SFdJE68rQpWTlnZ2feXLgMFg8QWHFOy%2FvalPPRcY0CZLx8cdjLELwtFrl9N75LkNUU9e1TaCBWMOGZhc0GOqUBNn3NGiBBs4AmgCwtN7Mys8vMc0kLPywkAbT3q%2FiaVomDMX801O5oPZUhBwTVfutBeDp9s1%2BIa7OZFohZdCTIQrJpNL%2FQ%2B3S154yp%2BcjnClRI83HK3oLcyUG2rn%2BPtZLqclEnDFy01UgrFK0Jp%2Fk%2FjsC0xAXbVTjyQ6dEbksq%2FnOleSTvLnxRWa%2BLfgObWoUzD5aYYP624YH4EtCmsKfKTB6SsaQf&X-Amz-Signature=0b495238ed358b98439fb33b3543291c05b4bd861f464cae4ab0f511bc744169&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46623NQCICK%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084020Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJHMEUCIQCE49967og3Xe16GXpb8r4v0V43E5dPG4R8FbZXncyRmgIgPK87Gd63RHTuKx82uXKjdwbDoOoe18osbRbXErVqtVUq%2FwMIORAAGgw2Mzc0MjMxODM4MDUiDI27CGRlWlTz5zC6eircAzROtrxh%2BeHqpnY3gMRJdPdpxfsxGszkPaWWP1UZa%2FZUJ654ARZ1V4NJHosnfyTc%2FUzhfFHk0VS6XKVdVg43dzvVqC8Zf9SyUW06vycw7BU%2B%2FwQ7JG%2Foiw77LIu%2FRshCTi%2BuaJPggsCjdFKYF1XBEpdzi6ZQ6RA4qmMbS6JCbILB28oz8f%2BRBn%2BrIALVVhV3kTEaUEneJMygt6rF8blEx4qMo4Cxv7WirOGkiIX8lnlFduqkCy1rqqdZTieAV6m1hur2joS19Ih4qfKrXvHXU%2Biwjg6WGQc4EkNQHmLXrYfRwDIw2SNgOGoTJuuVeYku4qpYKmary3flGNRHKMbvMQp5c4IHEJAqGDG6VEe3BZFeQ9%2FYdiqDpM0keq%2B7nMTP90CD1qtaRaiPxjlvf0hhTw0Ry%2FgSnxXxT45m0eJIyfQjAyl%2B5RRlr3bOXTuFik6HyyxuAjp%2FVI5bpZ01EQcncFVQjsJHsPrcM%2BGYXGjMyvhiUuEsh%2F1wI9w84pvo7HksnSy2Ev1LpWovdKGj06ZQtptuMdztEEF63LRaGYcXKM0aeF4GwuwjgzDoRxq9HoHhHQBq%2BcdjqjUUdJ%2F8syzZqTH450UdFbX8WofqWZ4fpETzToysUfkek2WrZxnRMMyZhc0GOqUBcHCvxr5MufunBA7bZX9sSya7zZMOhHd%2FEjt%2BABClwiN2rFQdttSDCz0m%2BpHW%2BtEtTuM%2BZqTPEuNjXHRuYF9kgiq0%2Fg3SHRG1IAvoNoLG4rwP1jPVGUNPiztrzlSXkgOVzTa0JCxQkEZdXZQ%2B1ltV9A6uMvxqVXW8z8SfNV4GZHr1OrBWEuaOxti9tbyTw1qhPfCqtkoeyKBLcdEwl3wzyD%2BxI3W8&X-Amz-Signature=5c7becb5ec3bc32c01fb38fb14ad5eee8283d7fe8d0e94b66f5db1e0f750d328&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665OPOKWCE%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084023Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJGMEQCIAzkdMXS%2BOYTV%2FQe3h%2B%2FRkEkWW2Bmz%2FdLPlQqQgXqccQAiBxZbO9itB3DTl01iyTVTle7K3Fr2VDnB099MlvqUtC3Cr%2FAwg5EAAaDDYzNzQyMzE4MzgwNSIMGoEoLMd3uH3glCScKtwDGIKTHjJjPVBVTBuAtwEHjAPGcVN1ulGR05429s1qL9qcVt1AD2I0WmjzithzCboSr0L698xKgd34SRxcnA6Ohy9eiGmPQCNOmfF8d%2BKYvJKVlZahkgXyJkRkWIsCH13Ozvtfowl9%2BFDPEgICk0F6eCZKLGCbm2uIoPVPALTbjqfDZVdE3xeeb4gns9EZBl%2FRh5YIWzCMjSZiL72jMlXxnAnu0RRW0T52XRMhfnDzwcHbCH%2FKzYXEbQtKffG9hre0dj8Scf9wQYRNYX8B5ojQQMZZiahNf%2Bk7b3QDRj5vGNtKmT0Vpki%2F1ZDDODrMNqkJro6y%2FHeecjxI%2BXf4020cNWX%2BaGfJive8x%2FnjYMWI4QPqdt9vCI1skqAUaq2X8%2FiOjuTcrdb14YJOxonh7jDgaJFOrpGjyllG9EXwKRzuJoM0UtZRXzcXsRm4dj%2FLJe8R%2Ft7RaKgVmYke7LrRfqec3E1DlaWOrPh%2BT5ljDV%2FopKJ%2FZBtL966XHFxwyR%2FJA2B872BOZ4h%2FC4GbTqGKpg3J1xyulxzpfOUvTU8QQdGD3rEvxPImaZjzmj4SMZ7K%2FtozqHozJnIT%2BXNwFNjRdYDMsNJavh97RZhEe32vPP25jX5KwQg1RWe1UHwCZrwwrJmFzQY6pgEBAZO7dOhb1%2FmbF1ZmBaUgb87khw93Bqifhz2D6qHmJCcCTgsz2FtVmjCDGLLFPOOlYM4KrLn5W6xflI5VaZnSEpHMQLjHc30k5p3cuuh2RwkcJeSyKIFbPP9eEiGHg8hHEK4X%2BcEReRn6Kv%2Fino6T9koy4bgA6asxD9ru5mDi9dvIOs80tX8AF%2Bk%2Bvqie9gfhac5RNLYsDRiKJUT73VLD8yQYtbjt&X-Amz-Signature=06b0ff90b2029dfb3a8c3fb788172bb7d960eaf05d3b3d36f93d8cafa3e80433&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665OPOKWCE%2F20260227%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260227T084023Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHAaCXVzLXdlc3QtMiJGMEQCIAzkdMXS%2BOYTV%2FQe3h%2B%2FRkEkWW2Bmz%2FdLPlQqQgXqccQAiBxZbO9itB3DTl01iyTVTle7K3Fr2VDnB099MlvqUtC3Cr%2FAwg5EAAaDDYzNzQyMzE4MzgwNSIMGoEoLMd3uH3glCScKtwDGIKTHjJjPVBVTBuAtwEHjAPGcVN1ulGR05429s1qL9qcVt1AD2I0WmjzithzCboSr0L698xKgd34SRxcnA6Ohy9eiGmPQCNOmfF8d%2BKYvJKVlZahkgXyJkRkWIsCH13Ozvtfowl9%2BFDPEgICk0F6eCZKLGCbm2uIoPVPALTbjqfDZVdE3xeeb4gns9EZBl%2FRh5YIWzCMjSZiL72jMlXxnAnu0RRW0T52XRMhfnDzwcHbCH%2FKzYXEbQtKffG9hre0dj8Scf9wQYRNYX8B5ojQQMZZiahNf%2Bk7b3QDRj5vGNtKmT0Vpki%2F1ZDDODrMNqkJro6y%2FHeecjxI%2BXf4020cNWX%2BaGfJive8x%2FnjYMWI4QPqdt9vCI1skqAUaq2X8%2FiOjuTcrdb14YJOxonh7jDgaJFOrpGjyllG9EXwKRzuJoM0UtZRXzcXsRm4dj%2FLJe8R%2Ft7RaKgVmYke7LrRfqec3E1DlaWOrPh%2BT5ljDV%2FopKJ%2FZBtL966XHFxwyR%2FJA2B872BOZ4h%2FC4GbTqGKpg3J1xyulxzpfOUvTU8QQdGD3rEvxPImaZjzmj4SMZ7K%2FtozqHozJnIT%2BXNwFNjRdYDMsNJavh97RZhEe32vPP25jX5KwQg1RWe1UHwCZrwwrJmFzQY6pgEBAZO7dOhb1%2FmbF1ZmBaUgb87khw93Bqifhz2D6qHmJCcCTgsz2FtVmjCDGLLFPOOlYM4KrLn5W6xflI5VaZnSEpHMQLjHc30k5p3cuuh2RwkcJeSyKIFbPP9eEiGHg8hHEK4X%2BcEReRn6Kv%2Fino6T9koy4bgA6asxD9ru5mDi9dvIOs80tX8AF%2Bk%2Bvqie9gfhac5RNLYsDRiKJUT73VLD8yQYtbjt&X-Amz-Signature=8325ad6abeb0c6e8b1718af0513f3f4a762a4504b7bf25381f4a945d471d5165&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
