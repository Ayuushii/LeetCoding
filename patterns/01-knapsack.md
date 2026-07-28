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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUGLFNGI%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuIVOMuhLIMfXbbMKy8wryDwQ1NA%2BaBUVSZglE%2BjamzAIhAOevZB71PDo8%2FP08g8LZ3m%2FQxVKu4vB2%2Bs1LJ%2Fy3oniCKv8DCGMQABoMNjM3NDIzMTgzODA1IgxR5vQh%2Fg4khL0sehoq3APSf8CbjItAf%2B96MfdON02J2Bcoh93Uw6lwKQTZHoEvxZPUnqpjFJUdQv%2Bt%2BNQPUd94j8fnN8l4fH2P9u8elM6CgfgvTATmXgDwe5ChdazEVDLqM3GrBHxPT2TWUml%2FV8%2B8gSTbyrE6TExMbqVwCeQHd3gxIgf%2BaMW%2FB0MA51F7eF35rmNVTm1bnnfsc%2BWl3yZXiM2QyOQmBDechRLUQ3B3MpgsXpOlhgBRC9wJmFFxJsDQICYRNpK%2BQrDow%2BXWf%2Fzs8XyJOrpOkIlETZhazuea6aA7Zy7tok9ZvE2mbxBUc9CPcxsSg3AB8YPiaN1d65ZKe8D5vKZQMqJlXxld2Mc5PNfSknpv%2BNU%2B3nvAH%2F%2BI6i4GCz273tqLT1DEYfSd7Pv2BF9uY2yA2A1ImH7%2BJKdwbwIFcdhKc0vaCxrk%2B0nIRw1NdFv8wfHPzGg6IkOEh5SR15Qcm1ZkLM99k4j0meAGmKU5srQwnJH9DfgBrF17tyd8tJC1MD1R269bX9Egy40kfxHiGlfRkEBxp8I1ajV7c7sfWliHfWbgYDKtBDX2K2LNTkVk5RkjIEx%2FufUxyrVOjjy5nvamhWFSy98PbCbX1Z0PY%2FSQvh4qV1GOtCH0CPWCD5DbalDFjhpTpTDm86HTBjqkAWiMVAa9AFsPe2ODV4Jt9%2F%2FD8HcBH1KiBKpNA1nacVS01fN75%2Bd9XK82rrJPOQsphnVThZQbIdE0rUaEBIPsp5juxAqrhtPKJ7X2KO1tLmOPJ3zSFfMKPFUUF5hpAdEFx6w%2Ft2PxVUnfdCeHbGbt4Oj%2BS5Of%2BGKyHsyyzae7XATbNYzy13Jq3jPYwAK0IUODRVmzPmpCDTxwg%2BF6wmLN5wGE%2BIMD&X-Amz-Signature=9548ce96b84286c3067c32f5887f7d923f9fb262506561bb6685ed6062323c4e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUGLFNGI%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuIVOMuhLIMfXbbMKy8wryDwQ1NA%2BaBUVSZglE%2BjamzAIhAOevZB71PDo8%2FP08g8LZ3m%2FQxVKu4vB2%2Bs1LJ%2Fy3oniCKv8DCGMQABoMNjM3NDIzMTgzODA1IgxR5vQh%2Fg4khL0sehoq3APSf8CbjItAf%2B96MfdON02J2Bcoh93Uw6lwKQTZHoEvxZPUnqpjFJUdQv%2Bt%2BNQPUd94j8fnN8l4fH2P9u8elM6CgfgvTATmXgDwe5ChdazEVDLqM3GrBHxPT2TWUml%2FV8%2B8gSTbyrE6TExMbqVwCeQHd3gxIgf%2BaMW%2FB0MA51F7eF35rmNVTm1bnnfsc%2BWl3yZXiM2QyOQmBDechRLUQ3B3MpgsXpOlhgBRC9wJmFFxJsDQICYRNpK%2BQrDow%2BXWf%2Fzs8XyJOrpOkIlETZhazuea6aA7Zy7tok9ZvE2mbxBUc9CPcxsSg3AB8YPiaN1d65ZKe8D5vKZQMqJlXxld2Mc5PNfSknpv%2BNU%2B3nvAH%2F%2BI6i4GCz273tqLT1DEYfSd7Pv2BF9uY2yA2A1ImH7%2BJKdwbwIFcdhKc0vaCxrk%2B0nIRw1NdFv8wfHPzGg6IkOEh5SR15Qcm1ZkLM99k4j0meAGmKU5srQwnJH9DfgBrF17tyd8tJC1MD1R269bX9Egy40kfxHiGlfRkEBxp8I1ajV7c7sfWliHfWbgYDKtBDX2K2LNTkVk5RkjIEx%2FufUxyrVOjjy5nvamhWFSy98PbCbX1Z0PY%2FSQvh4qV1GOtCH0CPWCD5DbalDFjhpTpTDm86HTBjqkAWiMVAa9AFsPe2ODV4Jt9%2F%2FD8HcBH1KiBKpNA1nacVS01fN75%2Bd9XK82rrJPOQsphnVThZQbIdE0rUaEBIPsp5juxAqrhtPKJ7X2KO1tLmOPJ3zSFfMKPFUUF5hpAdEFx6w%2Ft2PxVUnfdCeHbGbt4Oj%2BS5Of%2BGKyHsyyzae7XATbNYzy13Jq3jPYwAK0IUODRVmzPmpCDTxwg%2BF6wmLN5wGE%2BIMD&X-Amz-Signature=7a8ec9b7880fa37e7c3c927e994d0034f96651d314123fccad011032817764c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VUGLFNGI%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDuIVOMuhLIMfXbbMKy8wryDwQ1NA%2BaBUVSZglE%2BjamzAIhAOevZB71PDo8%2FP08g8LZ3m%2FQxVKu4vB2%2Bs1LJ%2Fy3oniCKv8DCGMQABoMNjM3NDIzMTgzODA1IgxR5vQh%2Fg4khL0sehoq3APSf8CbjItAf%2B96MfdON02J2Bcoh93Uw6lwKQTZHoEvxZPUnqpjFJUdQv%2Bt%2BNQPUd94j8fnN8l4fH2P9u8elM6CgfgvTATmXgDwe5ChdazEVDLqM3GrBHxPT2TWUml%2FV8%2B8gSTbyrE6TExMbqVwCeQHd3gxIgf%2BaMW%2FB0MA51F7eF35rmNVTm1bnnfsc%2BWl3yZXiM2QyOQmBDechRLUQ3B3MpgsXpOlhgBRC9wJmFFxJsDQICYRNpK%2BQrDow%2BXWf%2Fzs8XyJOrpOkIlETZhazuea6aA7Zy7tok9ZvE2mbxBUc9CPcxsSg3AB8YPiaN1d65ZKe8D5vKZQMqJlXxld2Mc5PNfSknpv%2BNU%2B3nvAH%2F%2BI6i4GCz273tqLT1DEYfSd7Pv2BF9uY2yA2A1ImH7%2BJKdwbwIFcdhKc0vaCxrk%2B0nIRw1NdFv8wfHPzGg6IkOEh5SR15Qcm1ZkLM99k4j0meAGmKU5srQwnJH9DfgBrF17tyd8tJC1MD1R269bX9Egy40kfxHiGlfRkEBxp8I1ajV7c7sfWliHfWbgYDKtBDX2K2LNTkVk5RkjIEx%2FufUxyrVOjjy5nvamhWFSy98PbCbX1Z0PY%2FSQvh4qV1GOtCH0CPWCD5DbalDFjhpTpTDm86HTBjqkAWiMVAa9AFsPe2ODV4Jt9%2F%2FD8HcBH1KiBKpNA1nacVS01fN75%2Bd9XK82rrJPOQsphnVThZQbIdE0rUaEBIPsp5juxAqrhtPKJ7X2KO1tLmOPJ3zSFfMKPFUUF5hpAdEFx6w%2Ft2PxVUnfdCeHbGbt4Oj%2BS5Of%2BGKyHsyyzae7XATbNYzy13Jq3jPYwAK0IUODRVmzPmpCDTxwg%2BF6wmLN5wGE%2BIMD&X-Amz-Signature=2bc997c0055c50a635bd0605266c21d8105579adbe8deb62c02ed4a603692835&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624MH7WFR%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF5jvUq9%2FSaZeCNKJsKFiNOxaVI7OKQn2KthhKJU%2Bhe5AiEA%2BbyxAPncoquRcnAEnc%2Fm%2B75dPxxCPJRQgt3%2BH74uSvsq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDAebtVh%2BBlLJgrC79CrcA6fM89laFkvVB%2FyYZxXNSz5v%2F9eJWeFK6mKzZFoKLIf7Fu%2FnPBKyzfi5E1bhz5JDlTmpcseMlxHjaLewqKqdDQPQdcjGdCApFyfnyZcgvgzAHNX29yYsKpd5PUXZinf3X2uWL2mye0%2FuwQdjvJR5nFtdJ2%2FN3MeUdPRP%2B9PZeonh3KDv9TH5u5J8%2FQ6otdANehPquFo8hh%2FkuugRzfoWf1xqb1we4nq5NVX0MLOVkYDsm8fd0Rb2Rce3bjhvaWXx8uNF%2BwtuwCkxX67rYbAeWpMxs3BVQiZvzVOUw83AINFE3Y0GUbBrcEt6gfSE0M%2F1zA4Zwdy6se7oAZzk9%2B%2B%2BFrWYknXd4vClMQWQEJijpDfbZphAeqO69ELjndfxEJEn3%2FgZwaPWgD4I2tTPEY%2FW093xvakhlP324FVMFAfdOZ%2Bz5dArIYVP7c0OE6iTQvYrhZv8y%2BLUfKKyyyFQXKpHolviv9W5X1f8AEdSd%2FhzNMvt9anvNSVnZVoV%2FMC5R9OAcYfb5cvcPxtDbvxrw%2F1OPLar0ndNTQDfkf7k%2BOgbSl34Xk%2FQIXcV18ycw9RnVrK6gey4urJCIA0%2FUvj1mTm8oCTVCFRjjezvMUQ9G1D4lxxJDy0QFOuFmSKClKtrMKHvodMGOqUBr2sDVHABdLl%2Bkscejup7mudfoKM70dtwV%2FIT2v%2FaRPtHGzo2GlkJjiW0p95bSH7Wdrrnj%2F%2FjD43lx7eoUQ0Af5i6Ju3YQzeJ5q9hJQav%2FP0h2TzunAJxqQSiOpmC77bXS%2BS%2FMMdq%2BgAYP8zwobd%2BwkjfYxRIvWDNq1PgA6ql%2FZaKmw%2FUkQu2NiCpQOHs7OFzJZWg8Aqk7VeWB0Kt2nvjMS19QXoZ&X-Amz-Signature=43c80d5ab051c3c58a7eeb30f433a141fd34a885fc068ec0f7c926d6d61cedfe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624MH7WFR%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF5jvUq9%2FSaZeCNKJsKFiNOxaVI7OKQn2KthhKJU%2Bhe5AiEA%2BbyxAPncoquRcnAEnc%2Fm%2B75dPxxCPJRQgt3%2BH74uSvsq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDAebtVh%2BBlLJgrC79CrcA6fM89laFkvVB%2FyYZxXNSz5v%2F9eJWeFK6mKzZFoKLIf7Fu%2FnPBKyzfi5E1bhz5JDlTmpcseMlxHjaLewqKqdDQPQdcjGdCApFyfnyZcgvgzAHNX29yYsKpd5PUXZinf3X2uWL2mye0%2FuwQdjvJR5nFtdJ2%2FN3MeUdPRP%2B9PZeonh3KDv9TH5u5J8%2FQ6otdANehPquFo8hh%2FkuugRzfoWf1xqb1we4nq5NVX0MLOVkYDsm8fd0Rb2Rce3bjhvaWXx8uNF%2BwtuwCkxX67rYbAeWpMxs3BVQiZvzVOUw83AINFE3Y0GUbBrcEt6gfSE0M%2F1zA4Zwdy6se7oAZzk9%2B%2B%2BFrWYknXd4vClMQWQEJijpDfbZphAeqO69ELjndfxEJEn3%2FgZwaPWgD4I2tTPEY%2FW093xvakhlP324FVMFAfdOZ%2Bz5dArIYVP7c0OE6iTQvYrhZv8y%2BLUfKKyyyFQXKpHolviv9W5X1f8AEdSd%2FhzNMvt9anvNSVnZVoV%2FMC5R9OAcYfb5cvcPxtDbvxrw%2F1OPLar0ndNTQDfkf7k%2BOgbSl34Xk%2FQIXcV18ycw9RnVrK6gey4urJCIA0%2FUvj1mTm8oCTVCFRjjezvMUQ9G1D4lxxJDy0QFOuFmSKClKtrMKHvodMGOqUBr2sDVHABdLl%2Bkscejup7mudfoKM70dtwV%2FIT2v%2FaRPtHGzo2GlkJjiW0p95bSH7Wdrrnj%2F%2FjD43lx7eoUQ0Af5i6Ju3YQzeJ5q9hJQav%2FP0h2TzunAJxqQSiOpmC77bXS%2BS%2FMMdq%2BgAYP8zwobd%2BwkjfYxRIvWDNq1PgA6ql%2FZaKmw%2FUkQu2NiCpQOHs7OFzJZWg8Aqk7VeWB0Kt2nvjMS19QXoZ&X-Amz-Signature=e908a25d194e0bc91b7dfd58ec8bae28c23cd64a1f837a0c8f8d2a9a8d07951f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624MH7WFR%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF5jvUq9%2FSaZeCNKJsKFiNOxaVI7OKQn2KthhKJU%2Bhe5AiEA%2BbyxAPncoquRcnAEnc%2Fm%2B75dPxxCPJRQgt3%2BH74uSvsq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDAebtVh%2BBlLJgrC79CrcA6fM89laFkvVB%2FyYZxXNSz5v%2F9eJWeFK6mKzZFoKLIf7Fu%2FnPBKyzfi5E1bhz5JDlTmpcseMlxHjaLewqKqdDQPQdcjGdCApFyfnyZcgvgzAHNX29yYsKpd5PUXZinf3X2uWL2mye0%2FuwQdjvJR5nFtdJ2%2FN3MeUdPRP%2B9PZeonh3KDv9TH5u5J8%2FQ6otdANehPquFo8hh%2FkuugRzfoWf1xqb1we4nq5NVX0MLOVkYDsm8fd0Rb2Rce3bjhvaWXx8uNF%2BwtuwCkxX67rYbAeWpMxs3BVQiZvzVOUw83AINFE3Y0GUbBrcEt6gfSE0M%2F1zA4Zwdy6se7oAZzk9%2B%2B%2BFrWYknXd4vClMQWQEJijpDfbZphAeqO69ELjndfxEJEn3%2FgZwaPWgD4I2tTPEY%2FW093xvakhlP324FVMFAfdOZ%2Bz5dArIYVP7c0OE6iTQvYrhZv8y%2BLUfKKyyyFQXKpHolviv9W5X1f8AEdSd%2FhzNMvt9anvNSVnZVoV%2FMC5R9OAcYfb5cvcPxtDbvxrw%2F1OPLar0ndNTQDfkf7k%2BOgbSl34Xk%2FQIXcV18ycw9RnVrK6gey4urJCIA0%2FUvj1mTm8oCTVCFRjjezvMUQ9G1D4lxxJDy0QFOuFmSKClKtrMKHvodMGOqUBr2sDVHABdLl%2Bkscejup7mudfoKM70dtwV%2FIT2v%2FaRPtHGzo2GlkJjiW0p95bSH7Wdrrnj%2F%2FjD43lx7eoUQ0Af5i6Ju3YQzeJ5q9hJQav%2FP0h2TzunAJxqQSiOpmC77bXS%2BS%2FMMdq%2BgAYP8zwobd%2BwkjfYxRIvWDNq1PgA6ql%2FZaKmw%2FUkQu2NiCpQOHs7OFzJZWg8Aqk7VeWB0Kt2nvjMS19QXoZ&X-Amz-Signature=812049d1cf0efff089e4867736f568df43de436c3393ed4443aab9845a7f0389&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624MH7WFR%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF5jvUq9%2FSaZeCNKJsKFiNOxaVI7OKQn2KthhKJU%2Bhe5AiEA%2BbyxAPncoquRcnAEnc%2Fm%2B75dPxxCPJRQgt3%2BH74uSvsq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDAebtVh%2BBlLJgrC79CrcA6fM89laFkvVB%2FyYZxXNSz5v%2F9eJWeFK6mKzZFoKLIf7Fu%2FnPBKyzfi5E1bhz5JDlTmpcseMlxHjaLewqKqdDQPQdcjGdCApFyfnyZcgvgzAHNX29yYsKpd5PUXZinf3X2uWL2mye0%2FuwQdjvJR5nFtdJ2%2FN3MeUdPRP%2B9PZeonh3KDv9TH5u5J8%2FQ6otdANehPquFo8hh%2FkuugRzfoWf1xqb1we4nq5NVX0MLOVkYDsm8fd0Rb2Rce3bjhvaWXx8uNF%2BwtuwCkxX67rYbAeWpMxs3BVQiZvzVOUw83AINFE3Y0GUbBrcEt6gfSE0M%2F1zA4Zwdy6se7oAZzk9%2B%2B%2BFrWYknXd4vClMQWQEJijpDfbZphAeqO69ELjndfxEJEn3%2FgZwaPWgD4I2tTPEY%2FW093xvakhlP324FVMFAfdOZ%2Bz5dArIYVP7c0OE6iTQvYrhZv8y%2BLUfKKyyyFQXKpHolviv9W5X1f8AEdSd%2FhzNMvt9anvNSVnZVoV%2FMC5R9OAcYfb5cvcPxtDbvxrw%2F1OPLar0ndNTQDfkf7k%2BOgbSl34Xk%2FQIXcV18ycw9RnVrK6gey4urJCIA0%2FUvj1mTm8oCTVCFRjjezvMUQ9G1D4lxxJDy0QFOuFmSKClKtrMKHvodMGOqUBr2sDVHABdLl%2Bkscejup7mudfoKM70dtwV%2FIT2v%2FaRPtHGzo2GlkJjiW0p95bSH7Wdrrnj%2F%2FjD43lx7eoUQ0Af5i6Ju3YQzeJ5q9hJQav%2FP0h2TzunAJxqQSiOpmC77bXS%2BS%2FMMdq%2BgAYP8zwobd%2BwkjfYxRIvWDNq1PgA6ql%2FZaKmw%2FUkQu2NiCpQOHs7OFzJZWg8Aqk7VeWB0Kt2nvjMS19QXoZ&X-Amz-Signature=6057fc55089831942aee1ca43de5508381ba595cb3bc8eb95d3b85c7ec4354d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WO63PVYH%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHIiWT7it%2B1j4dLrqioEQNX8ncU6MKu0Q2vMIO2hqezZAiEA5KXFIeySoPKzUC8o2BHkOR%2F8ZanJ9uFO00IhMYCC7CUq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDMryBV8%2FBzy%2BGk2EqSrcA217mjjySo4QyB00%2BLAb8xCW7X5LITEF1geB8I0MCURG5ozjdlcQqo2ml3TBTokZUuuOxJJyhJlBC%2BEgor6SQKL5ajsZoBfp3EmBR0ed8pBirxawBKjLugm7%2BhGfk%2FA9Y1XGnHQNIbit147QBH1kmwxH9PfGee%2BcXDJ%2FaCs%2B%2Bsz4rqcupPiS27Odc30EdTTPu1IIDbNGqqsiI1wJBpk2NqekQ9Ma4AGfC5j%2F0hj0131iIWoKbaTy7MLej7M7oly0WA5Cb9SHczxW%2FC0Ozi3Gv610PQRZa4uBDofdO3PlRDDS9RN7r%2ByiAcB2iIhSVau4LfUopNkJfvW5MZVo7myhOnynNwo1mGfvg3mrerZEITE5x5LSC80SQSNGm9AnERnFQHmM1E%2FXitq%2BMv2vns8CFdzrsZQee5etgwVEkPsfL3yVaRKl%2B%2B16NY7YSG1lKHYxOfqMpTmOE9OAkfspe2wRHjF8aIlmzTmpIrfNOOeE35dvd98PhRDV1U1e%2BrShT%2BGhhuUJCdBA8Sx3AQQ8cX84aUlZCvJpR7yBRAWoXt%2FDiuJQKE%2BTMGolevYmQZRcKdeQwEQRcg2uTaaQ2%2FuND8Dka2pVrQLgxCc76DOypLZ17YfISHQc6AzjwaJ3eVnmMKbvodMGOqUByVGzRRivpy7bIzyQtNEdjVtNIloyiblKLN%2FWdp99W1E%2FYWOZXVh60UBWln6SGg72rvQQCWKKfOGcEkd2Ny%2B98xH2iwx4fSFpewsBPi7V5sdSG2svT2pl4z45kppRbxp4jLyZ%2FJQyWElYxlRgD4HRvucp4%2Bh1ryKVc2ql7Y9heEnxPaflwOQSCWaKNJ4BBhWlGEz%2FBKQ%2FXneH9Jdcnv0oNP9jufp4&X-Amz-Signature=744b88642eebb73aac8abb050053c9b028f36a5ef1ae28af9de24fa56799deee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCTKGOIC%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQDGQk95eH1SPZMnPbzctIdYtJtkwGOT%2FLlQIkbJDrCHEgIfeobDxv3CjbcqxcjS%2BY3j%2FtZvLfWhaqgE0PO0wkFVrir%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIM9acIfi%2B76ctyHt7XKtwDo5zSrHVKa4F5ZvJTRuyvybDgFsnY2g2QVhr6NsT1GRRpxTnzH%2B5PkucFBVQVihE0YPdQplzzKbLG4mB56Nu4t2EqoBZ%2Fm9cMv%2FAaS7rRNGj7uJiia1yCXzQaCjBTIST%2Bsqrh8rlmolDHgNg7VNVF42FHW%2B9FASS24xPf%2BYc9QuvJ%2Bq6h70xpEjQACCCEk2Fip%2BXlCCpPlo1o%2FNC6r2MK%2F5m5gRGXj9hFDy9FOnOd8yQW0scV0hSoedeEec%2BcvqefYkBP0uMvIYkc6Z4rWyOtZcuF031jwmndzF%2FrF8kj4iTpCLdwTl93yazsN8NjS0NZf42YGUQzyAq9RtiMt1hwepEalktRTlNNjAARNvILEKWmYrySjZqOhW7hyR%2FlP7AkLS4aUyofdCmCmmb%2FO0L%2BWP0qI6zpC6cBC%2B2oTAODxxVgLxP%2Ft39zoAHHNGEdZeR%2B46Xs9Ep0b87%2F6x33HYRjJBvgR5SVDyalB8SCO4Z0C4e6E4nYxLbdDIO53USCJqcVDB8m6AvqL9Fn0pj8i8TJG3aWcOzQK2g9wpiCOf%2B7vEJ%2FjzARyCIKLWsViuqGCzR%2FHnNohsBM9BnW%2FnhH%2B7xs6qXzUaNsjtQSLdY7HxAFsgz%2Bs%2Fn1E3c%2FO2Vspa4wm%2FCh0wY6pgGINDS1pbbhYepggvdLRBd3ttclDGsziNmUN4WXO19xXfYJvcCS1v495zrxRibpfdqL6otqGs1UQZXXKI7rXfy9%2Fc1gChtMCgxRlfCsIup7bPDf8BxzKio5KDo6xqspM9%2FrgTbqNeWv0x9fUZB8PBJwNQ5A0Q%2FB8JOJNK9X%2BrZ%2FvnW4Uwu0cb%2BreYKuEttMahK%2BN%2BRd1B%2FJLx0qMVDUzWkMOlLP5mbU&X-Amz-Signature=30fd4fa7b5c0297a830b659c223e6fc654cb7a7d0cf67b9e019f0bf80dab8cdf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TCTKGOIC%2F20260728%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260728T103304Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQDGQk95eH1SPZMnPbzctIdYtJtkwGOT%2FLlQIkbJDrCHEgIfeobDxv3CjbcqxcjS%2BY3j%2FtZvLfWhaqgE0PO0wkFVrir%2FAwhjEAAaDDYzNzQyMzE4MzgwNSIM9acIfi%2B76ctyHt7XKtwDo5zSrHVKa4F5ZvJTRuyvybDgFsnY2g2QVhr6NsT1GRRpxTnzH%2B5PkucFBVQVihE0YPdQplzzKbLG4mB56Nu4t2EqoBZ%2Fm9cMv%2FAaS7rRNGj7uJiia1yCXzQaCjBTIST%2Bsqrh8rlmolDHgNg7VNVF42FHW%2B9FASS24xPf%2BYc9QuvJ%2Bq6h70xpEjQACCCEk2Fip%2BXlCCpPlo1o%2FNC6r2MK%2F5m5gRGXj9hFDy9FOnOd8yQW0scV0hSoedeEec%2BcvqefYkBP0uMvIYkc6Z4rWyOtZcuF031jwmndzF%2FrF8kj4iTpCLdwTl93yazsN8NjS0NZf42YGUQzyAq9RtiMt1hwepEalktRTlNNjAARNvILEKWmYrySjZqOhW7hyR%2FlP7AkLS4aUyofdCmCmmb%2FO0L%2BWP0qI6zpC6cBC%2B2oTAODxxVgLxP%2Ft39zoAHHNGEdZeR%2B46Xs9Ep0b87%2F6x33HYRjJBvgR5SVDyalB8SCO4Z0C4e6E4nYxLbdDIO53USCJqcVDB8m6AvqL9Fn0pj8i8TJG3aWcOzQK2g9wpiCOf%2B7vEJ%2FjzARyCIKLWsViuqGCzR%2FHnNohsBM9BnW%2FnhH%2B7xs6qXzUaNsjtQSLdY7HxAFsgz%2Bs%2Fn1E3c%2FO2Vspa4wm%2FCh0wY6pgGINDS1pbbhYepggvdLRBd3ttclDGsziNmUN4WXO19xXfYJvcCS1v495zrxRibpfdqL6otqGs1UQZXXKI7rXfy9%2Fc1gChtMCgxRlfCsIup7bPDf8BxzKio5KDo6xqspM9%2FrgTbqNeWv0x9fUZB8PBJwNQ5A0Q%2FB8JOJNK9X%2BrZ%2FvnW4Uwu0cb%2BreYKuEttMahK%2BN%2BRd1B%2FJLx0qMVDUzWkMOlLP5mbU&X-Amz-Signature=c93649ceb4acb663d8a7b0a4d5fca4893ffb22ec0ec4b173071b15d8d8dc1630&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
