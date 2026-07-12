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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FJXQWPR%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIDU6okYSHhJYFxWMJw2HcuYzzbebANgdjiuS6ieregsdAiAtVQ7XluZutgiasSPhqnR4u6gFF7YvBtY7mCjk4jy0YyqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMTP79MjiY1%2Fx2SQ4tKtwDGtFgcnTuK%2FN70TKc2%2B9pjQUkk0eNLmLyB5UIooOpr7SxXEYHyIl%2FFNk1sxWTlVv%2FkXx6p05RVC%2B%2Fou3TmRKURYZPC%2BBFrClIRzGXLGoqZObsDP8Sm%2F2zrgzUNq59bk2wLJxdcTgiAijWqL6%2Fw5XZONfJV3GgAZgdRZcxVxpVf7u6bdndMzKwKOycGmXf0nSLmIozgW69oFNhJD7X1a83MQiB8AZHVpWqIPDk4wPxGRmJNyqU7uS%2BpFtZzDeguHR0aW4PbK6VxsQlonkU4pzxAjgSQ%2FWhAtr1O2k2TfUBRkdZG9PqQh3BhClQWNG7OB1%2BjAylU2BB23xwkOmyEruLh6PzpPvQnpSNndPbIvaCOhTFDMnSQL4bYrYSphvHtT7Iw09QX3VBNjvKioYD2iPwPJskWCCnVCz5dzm%2FrpO23%2FTmpGmZnk6%2FryvlKaaba%2BtXBbixFqmmpRBdXQOe%2FimLwOwXbkKaBdHV9IdHzMEbhGQlpli686OKCnDvpjM4KZPGh16CoJ54136xr715YkDHvRTcWZZSVCctM0mUNgF%2BsMfkiWiwaxR7Cu8dITsWKYhAViHrPKYuI6G%2FLkgh96rcxTbYGyThdH6I8q1Zye980P%2BMt78IdF5DZD41w4Awt4jN0gY6pgE01loB%2F7eo9%2FP52Wh1XrKfQCkdKAOAIdrnItlsftSMLj0QT%2BR6r87uZSV%2FtusQN0ahBVgldj4uFn0wkPBl2KNpxw6USrzBwMu0BBHevlYxnb%2BIrZ9iEdBYZhBf%2BNf%2BzVZFQUVhZ30xs6CygzvzLiKE%2F1MyX90H3cYQBHavBa8ZOuEqjnrp6ya8fCWKKr38KkrbLqmx%2BOtX5uxMLnisLIDS5HfWg%2FW9&X-Amz-Signature=d3b0ea168f29565cf42d67dc52f056dd34fc996f69ccdce8b5056c7f7bd4340b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FJXQWPR%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIDU6okYSHhJYFxWMJw2HcuYzzbebANgdjiuS6ieregsdAiAtVQ7XluZutgiasSPhqnR4u6gFF7YvBtY7mCjk4jy0YyqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMTP79MjiY1%2Fx2SQ4tKtwDGtFgcnTuK%2FN70TKc2%2B9pjQUkk0eNLmLyB5UIooOpr7SxXEYHyIl%2FFNk1sxWTlVv%2FkXx6p05RVC%2B%2Fou3TmRKURYZPC%2BBFrClIRzGXLGoqZObsDP8Sm%2F2zrgzUNq59bk2wLJxdcTgiAijWqL6%2Fw5XZONfJV3GgAZgdRZcxVxpVf7u6bdndMzKwKOycGmXf0nSLmIozgW69oFNhJD7X1a83MQiB8AZHVpWqIPDk4wPxGRmJNyqU7uS%2BpFtZzDeguHR0aW4PbK6VxsQlonkU4pzxAjgSQ%2FWhAtr1O2k2TfUBRkdZG9PqQh3BhClQWNG7OB1%2BjAylU2BB23xwkOmyEruLh6PzpPvQnpSNndPbIvaCOhTFDMnSQL4bYrYSphvHtT7Iw09QX3VBNjvKioYD2iPwPJskWCCnVCz5dzm%2FrpO23%2FTmpGmZnk6%2FryvlKaaba%2BtXBbixFqmmpRBdXQOe%2FimLwOwXbkKaBdHV9IdHzMEbhGQlpli686OKCnDvpjM4KZPGh16CoJ54136xr715YkDHvRTcWZZSVCctM0mUNgF%2BsMfkiWiwaxR7Cu8dITsWKYhAViHrPKYuI6G%2FLkgh96rcxTbYGyThdH6I8q1Zye980P%2BMt78IdF5DZD41w4Awt4jN0gY6pgE01loB%2F7eo9%2FP52Wh1XrKfQCkdKAOAIdrnItlsftSMLj0QT%2BR6r87uZSV%2FtusQN0ahBVgldj4uFn0wkPBl2KNpxw6USrzBwMu0BBHevlYxnb%2BIrZ9iEdBYZhBf%2BNf%2BzVZFQUVhZ30xs6CygzvzLiKE%2F1MyX90H3cYQBHavBa8ZOuEqjnrp6ya8fCWKKr38KkrbLqmx%2BOtX5uxMLnisLIDS5HfWg%2FW9&X-Amz-Signature=064544bac27a1bd503829c28b4ef6d5ada431a124a43f4e946bf2ec71ca7e439&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664FJXQWPR%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIDU6okYSHhJYFxWMJw2HcuYzzbebANgdjiuS6ieregsdAiAtVQ7XluZutgiasSPhqnR4u6gFF7YvBtY7mCjk4jy0YyqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMTP79MjiY1%2Fx2SQ4tKtwDGtFgcnTuK%2FN70TKc2%2B9pjQUkk0eNLmLyB5UIooOpr7SxXEYHyIl%2FFNk1sxWTlVv%2FkXx6p05RVC%2B%2Fou3TmRKURYZPC%2BBFrClIRzGXLGoqZObsDP8Sm%2F2zrgzUNq59bk2wLJxdcTgiAijWqL6%2Fw5XZONfJV3GgAZgdRZcxVxpVf7u6bdndMzKwKOycGmXf0nSLmIozgW69oFNhJD7X1a83MQiB8AZHVpWqIPDk4wPxGRmJNyqU7uS%2BpFtZzDeguHR0aW4PbK6VxsQlonkU4pzxAjgSQ%2FWhAtr1O2k2TfUBRkdZG9PqQh3BhClQWNG7OB1%2BjAylU2BB23xwkOmyEruLh6PzpPvQnpSNndPbIvaCOhTFDMnSQL4bYrYSphvHtT7Iw09QX3VBNjvKioYD2iPwPJskWCCnVCz5dzm%2FrpO23%2FTmpGmZnk6%2FryvlKaaba%2BtXBbixFqmmpRBdXQOe%2FimLwOwXbkKaBdHV9IdHzMEbhGQlpli686OKCnDvpjM4KZPGh16CoJ54136xr715YkDHvRTcWZZSVCctM0mUNgF%2BsMfkiWiwaxR7Cu8dITsWKYhAViHrPKYuI6G%2FLkgh96rcxTbYGyThdH6I8q1Zye980P%2BMt78IdF5DZD41w4Awt4jN0gY6pgE01loB%2F7eo9%2FP52Wh1XrKfQCkdKAOAIdrnItlsftSMLj0QT%2BR6r87uZSV%2FtusQN0ahBVgldj4uFn0wkPBl2KNpxw6USrzBwMu0BBHevlYxnb%2BIrZ9iEdBYZhBf%2BNf%2BzVZFQUVhZ30xs6CygzvzLiKE%2F1MyX90H3cYQBHavBa8ZOuEqjnrp6ya8fCWKKr38KkrbLqmx%2BOtX5uxMLnisLIDS5HfWg%2FW9&X-Amz-Signature=c60c37d2b5ecc6f614a312a8bc6b90fb387bdd0fd8b97110ae56e2e85c89879c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665H3NYUQ2%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIFutFn5WqknKp95UTUlLKKbKAW3tbpDpMwxusXeRFMuJAiEAkRD7F8ycUgbBJQPSQvNc0zACpffREnaGkQA1Ujyj3YMqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIKKtZtOnJ51xMmojSrcA4UbpkuKyORF5xaNR9iIFXeEfOLAhDfsjCge%2FmOGlHBmnqlQoj%2FXPD1nmrJMLqoDOGd4e0wjFteiXY0i7Z5I7RbVxmmXi7%2Fy1c2Rel2nmjZV0dfINTvKt%2F3iePcFpQSnwGM3yXOP4EGYRRj3VwvYzlR9vAI5HZY7%2BJ9FA5sDEwx9W19glVYyAxVRUjkopj6DD1p2mEh5tIyrp%2BzS5BSEtAMBXSKxkFtRkF6zwII2v2TxMjoUIqITfhZaFG3sWDi2BATz7DNzmm8TlVg66W5a0lGfcHe2PS0M5%2Bstl4TA6Mkg4HMgUGE7hEAOAYGBqIcHmXoS0zQu6WKAUHtSeKC8hyIol0O3yZFwcsn3FvnUH%2FWAHjvr8BDBOFktZW1HfcVupkpYU9TzafLaIF7Kyuoule%2BxpiFf8OOGztW6bpQN4Oi%2BVthIVzQBqqMIXVfMOAgvcdF7eMRnzkxFM2YnvSLlnjlQKvt3ZJCO18ABNKVIgCB8KeiWsQQDcqmblQ%2FzWUFrDbZUcSo6%2FXoidCpdvbimB7ejqJcP19MJa%2BdZmdSmK3KsD%2FniekEYzCkyMwcC8jmR86na3LJ9cKIt7JC2i9ucGvXfMUPGUJlzbn7Q%2FX2O8QKwWt146ycjQabG%2F7ogMLWIzdIGOqUB1dH%2Blc2ChCMehvL53TwtehJrvcnUvXFP2%2B%2F4Ayhnn4T6OCKNbRf%2FBLuSi0QjEApTA2SE%2FXGgOQJn7pN2JsREft%2FiI54sb9nxh59OVP20JhEuLygY8%2F1TgY7hRH506HVnqsr7zjNC9bnrzBgSTRTCm5NxH7HzmPh87NQstYc3e%2F%2BWv898JnJ3N8bCwL%2Bi8ZDEk0kC0i%2F0otlsI9vPoEbt%2FjXn%2BSJn&X-Amz-Signature=659eee388e47a025963c2f1e5f29374ce993a23999b4000a6784a71a74bc52fc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665H3NYUQ2%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIFutFn5WqknKp95UTUlLKKbKAW3tbpDpMwxusXeRFMuJAiEAkRD7F8ycUgbBJQPSQvNc0zACpffREnaGkQA1Ujyj3YMqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIKKtZtOnJ51xMmojSrcA4UbpkuKyORF5xaNR9iIFXeEfOLAhDfsjCge%2FmOGlHBmnqlQoj%2FXPD1nmrJMLqoDOGd4e0wjFteiXY0i7Z5I7RbVxmmXi7%2Fy1c2Rel2nmjZV0dfINTvKt%2F3iePcFpQSnwGM3yXOP4EGYRRj3VwvYzlR9vAI5HZY7%2BJ9FA5sDEwx9W19glVYyAxVRUjkopj6DD1p2mEh5tIyrp%2BzS5BSEtAMBXSKxkFtRkF6zwII2v2TxMjoUIqITfhZaFG3sWDi2BATz7DNzmm8TlVg66W5a0lGfcHe2PS0M5%2Bstl4TA6Mkg4HMgUGE7hEAOAYGBqIcHmXoS0zQu6WKAUHtSeKC8hyIol0O3yZFwcsn3FvnUH%2FWAHjvr8BDBOFktZW1HfcVupkpYU9TzafLaIF7Kyuoule%2BxpiFf8OOGztW6bpQN4Oi%2BVthIVzQBqqMIXVfMOAgvcdF7eMRnzkxFM2YnvSLlnjlQKvt3ZJCO18ABNKVIgCB8KeiWsQQDcqmblQ%2FzWUFrDbZUcSo6%2FXoidCpdvbimB7ejqJcP19MJa%2BdZmdSmK3KsD%2FniekEYzCkyMwcC8jmR86na3LJ9cKIt7JC2i9ucGvXfMUPGUJlzbn7Q%2FX2O8QKwWt146ycjQabG%2F7ogMLWIzdIGOqUB1dH%2Blc2ChCMehvL53TwtehJrvcnUvXFP2%2B%2F4Ayhnn4T6OCKNbRf%2FBLuSi0QjEApTA2SE%2FXGgOQJn7pN2JsREft%2FiI54sb9nxh59OVP20JhEuLygY8%2F1TgY7hRH506HVnqsr7zjNC9bnrzBgSTRTCm5NxH7HzmPh87NQstYc3e%2F%2BWv898JnJ3N8bCwL%2Bi8ZDEk0kC0i%2F0otlsI9vPoEbt%2FjXn%2BSJn&X-Amz-Signature=3f46ae89b9056d547da36d7ec3697075e4e4f3185e655571a997f5c11697a9a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665H3NYUQ2%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIFutFn5WqknKp95UTUlLKKbKAW3tbpDpMwxusXeRFMuJAiEAkRD7F8ycUgbBJQPSQvNc0zACpffREnaGkQA1Ujyj3YMqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIKKtZtOnJ51xMmojSrcA4UbpkuKyORF5xaNR9iIFXeEfOLAhDfsjCge%2FmOGlHBmnqlQoj%2FXPD1nmrJMLqoDOGd4e0wjFteiXY0i7Z5I7RbVxmmXi7%2Fy1c2Rel2nmjZV0dfINTvKt%2F3iePcFpQSnwGM3yXOP4EGYRRj3VwvYzlR9vAI5HZY7%2BJ9FA5sDEwx9W19glVYyAxVRUjkopj6DD1p2mEh5tIyrp%2BzS5BSEtAMBXSKxkFtRkF6zwII2v2TxMjoUIqITfhZaFG3sWDi2BATz7DNzmm8TlVg66W5a0lGfcHe2PS0M5%2Bstl4TA6Mkg4HMgUGE7hEAOAYGBqIcHmXoS0zQu6WKAUHtSeKC8hyIol0O3yZFwcsn3FvnUH%2FWAHjvr8BDBOFktZW1HfcVupkpYU9TzafLaIF7Kyuoule%2BxpiFf8OOGztW6bpQN4Oi%2BVthIVzQBqqMIXVfMOAgvcdF7eMRnzkxFM2YnvSLlnjlQKvt3ZJCO18ABNKVIgCB8KeiWsQQDcqmblQ%2FzWUFrDbZUcSo6%2FXoidCpdvbimB7ejqJcP19MJa%2BdZmdSmK3KsD%2FniekEYzCkyMwcC8jmR86na3LJ9cKIt7JC2i9ucGvXfMUPGUJlzbn7Q%2FX2O8QKwWt146ycjQabG%2F7ogMLWIzdIGOqUB1dH%2Blc2ChCMehvL53TwtehJrvcnUvXFP2%2B%2F4Ayhnn4T6OCKNbRf%2FBLuSi0QjEApTA2SE%2FXGgOQJn7pN2JsREft%2FiI54sb9nxh59OVP20JhEuLygY8%2F1TgY7hRH506HVnqsr7zjNC9bnrzBgSTRTCm5NxH7HzmPh87NQstYc3e%2F%2BWv898JnJ3N8bCwL%2Bi8ZDEk0kC0i%2F0otlsI9vPoEbt%2FjXn%2BSJn&X-Amz-Signature=a6a7ac9abfc6e206e490dc92623ed457a4e505b46ab6dadd69cd5cf8161d5c0f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665H3NYUQ2%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIFutFn5WqknKp95UTUlLKKbKAW3tbpDpMwxusXeRFMuJAiEAkRD7F8ycUgbBJQPSQvNc0zACpffREnaGkQA1Ujyj3YMqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIKKtZtOnJ51xMmojSrcA4UbpkuKyORF5xaNR9iIFXeEfOLAhDfsjCge%2FmOGlHBmnqlQoj%2FXPD1nmrJMLqoDOGd4e0wjFteiXY0i7Z5I7RbVxmmXi7%2Fy1c2Rel2nmjZV0dfINTvKt%2F3iePcFpQSnwGM3yXOP4EGYRRj3VwvYzlR9vAI5HZY7%2BJ9FA5sDEwx9W19glVYyAxVRUjkopj6DD1p2mEh5tIyrp%2BzS5BSEtAMBXSKxkFtRkF6zwII2v2TxMjoUIqITfhZaFG3sWDi2BATz7DNzmm8TlVg66W5a0lGfcHe2PS0M5%2Bstl4TA6Mkg4HMgUGE7hEAOAYGBqIcHmXoS0zQu6WKAUHtSeKC8hyIol0O3yZFwcsn3FvnUH%2FWAHjvr8BDBOFktZW1HfcVupkpYU9TzafLaIF7Kyuoule%2BxpiFf8OOGztW6bpQN4Oi%2BVthIVzQBqqMIXVfMOAgvcdF7eMRnzkxFM2YnvSLlnjlQKvt3ZJCO18ABNKVIgCB8KeiWsQQDcqmblQ%2FzWUFrDbZUcSo6%2FXoidCpdvbimB7ejqJcP19MJa%2BdZmdSmK3KsD%2FniekEYzCkyMwcC8jmR86na3LJ9cKIt7JC2i9ucGvXfMUPGUJlzbn7Q%2FX2O8QKwWt146ycjQabG%2F7ogMLWIzdIGOqUB1dH%2Blc2ChCMehvL53TwtehJrvcnUvXFP2%2B%2F4Ayhnn4T6OCKNbRf%2FBLuSi0QjEApTA2SE%2FXGgOQJn7pN2JsREft%2FiI54sb9nxh59OVP20JhEuLygY8%2F1TgY7hRH506HVnqsr7zjNC9bnrzBgSTRTCm5NxH7HzmPh87NQstYc3e%2F%2BWv898JnJ3N8bCwL%2Bi8ZDEk0kC0i%2F0otlsI9vPoEbt%2FjXn%2BSJn&X-Amz-Signature=4290032395beab7f748de3dd5bcdf55cedd0371a3c6d452e525e8a2300a59b10&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633CPWOJW%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQDQ4QK%2F8hz6SH211W3IsjZSgVIksvVqh7hFw47CXYIkLgIgWzy9k75zdV0uvhXozRacEelXWqOCHntoVLVsZQxobrwqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEUmc0KyIZqXuXTttircA%2Fmwu4b26G6Q%2B%2BxJBmFg2Fmm0Tyr%2BzIvTSbYWPJD9bxIL7aBv6QLvhs3MYoW%2BSy1WgtKLLWLOGlKiauU8CU3kG%2FWjlFyubLYP3VVV2FUt%2FbmeyKTQsKq5LxRWj7jh8K1L4dj1RD7pHEwZPqcrMVlg7ssVSQJQaUbEPiW%2BSqnmdT9KyUEO5pM5gpuM8e8resB0Xn7hzIC6LsTkIKzZnvYVWeHjCmfTK6ROWFs5%2B%2BwOcHUY%2BJfjFdIy9W2rYL45KnGZU1uBOcsXfHnnpQuhXmbpsOmayNocpgWxsBg901ZzsnijlLRJiLl39eyEF2qXMWhSoZg637u%2BoLYItoi1zyJGbiyC%2FFka9DjfpVq0K07JY8qdaohkcbthuDs9RYJm%2Fjad%2Bj8YDhzBcJachP89iQo0uaL%2Fg8Dq07NHDSjnte5fcTVtj8%2Bpt71bvbh9POR1rI2k7OrnWtcXu29zp6RWu4GTCkvSbMYIk3TyEr%2BTZDYT3sw%2BarCv9YX58oO2xksQW6S1ejKiZ7mAmRLeyOXUUXitQtIDCB3ZhUlBJVtONT5rq3H4OaIbuZCWHD5jGbFMZjCY0k3JujC1WUSWoT9HmvWTfeZI4aEawfrnu09G1x%2FWeXGUhrtkiK1lnwlpDN0MNCKzdIGOqUB9IkaOKwd4XXY8mYZh7fwVOxxUOogELVmJzSBnQiNONRCenuUkTJhQyz1k%2FGNEAmwpfxokk3nnF3XuJ4Dj%2F4NY8n5BkV0eIEs%2BZ%2BYCiWRNH8y%2BonHjVNXBDVk86EqeFcrbqLkPkv8%2FAmoPNSTuiUdOuyWBx%2BBDd4DaDn7tYVh9bUQ0LjHFtbswmi3xRN08724mckBUoeZfKLkaxNzIqKwvlP6CMHc&X-Amz-Signature=1ebe2cfe3551e14fad62733017078e39b44d9a7bdf98bd7c8b4908b1e8ac06f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665ME4QHWJ%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCICdtkXoZsWYL7xRQ9vFNVOpizqhhRBZRX6j5x8ujzXxwAiBSrUbBesp73L%2B673uXT9Innpe1G6TMZzCiqxmhD1WociqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMk0hNFJ1jgl3VlCyJKtwDux%2Bp3DW35O4IXD0dfOH6dlGiWm6T0Bl%2F1K4Rm%2BTOXgaBu3muwrI4pFMZe6lzMSd%2Fw7bi45M5Unggp4LTtF6D%2BmgSBeU5aUIIVTGhWJ6%2FQpklwA1xxgSTIwa5waZ5Fgeyibz62oNheSqP%2FSMBrHD1lOe4%2BEG3%2BkhM%2BTP5DkUgEZjDIQ%2Fzf2agINLtWqKuL965vWHtOZ27Xqj1YW7nic0JciP7gVSxTWZmV8YeBRuQzXhivqK81EvG%2BB4DucSxBK79wc6oO94aUwDj0yBKKKHrrXjVGyOZex0Mm37kYPmQWPgSlubAeViScrb9PYpli9DwisLo0yUXuo8NEIO3NgPzPrTZFsbeIK1PoHKl8i6tG0zy%2FDUVxPJ3xmaWmT2XUOZOlakDMpFDvpFuqvfpANrnI5FnYM7rcTOMYWHa0lkJTXCw0yUhw98e4tDEuKOc%2FPPPzD9NA0DK0%2Fql2fPxOpzxuoQpODBUUrBnXG1RSFn6V8e3tu6i6zCwxzPRCT62pm9ORH8ljVttiBnkG%2Bt6oCSvVUrI%2BQqxiEZS7pJ%2BqA0yquEkx6tv19l4kba%2FKflAXfJvxSanUuIuL8utMBb3vaIfne2qrIMM3UoCYIj%2BHlkkwvDLA52BwxszrSj127AwnovN0gY6pgHohY6pq9nszzJHu7xE268bSb62yKeXk1BMW08s9BqyJs%2Fhh%2Fy9FDgUYJkNREMY0%2FbcaCVI05Eh3sbVGPduJ2DU98RkAgss8gaEXpNxMZrEi31IbK52eUxNw%2F9I0mIO7BI9z0t1qogjPySTFc4wiwTa4gbeYWwGsbEkcyqwoIAMYNZAP73AbQKlyAxPIJyiVRT3QNYcNg56PDnMxqERsqmDAblTTm%2FU&X-Amz-Signature=6ccc86eedeb75bf3f3aff7578af759c1b70c786f27770da9ae292bb4334ed43b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665ME4QHWJ%2F20260712%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260712T094927Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCICdtkXoZsWYL7xRQ9vFNVOpizqhhRBZRX6j5x8ujzXxwAiBSrUbBesp73L%2B673uXT9Innpe1G6TMZzCiqxmhD1WociqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMk0hNFJ1jgl3VlCyJKtwDux%2Bp3DW35O4IXD0dfOH6dlGiWm6T0Bl%2F1K4Rm%2BTOXgaBu3muwrI4pFMZe6lzMSd%2Fw7bi45M5Unggp4LTtF6D%2BmgSBeU5aUIIVTGhWJ6%2FQpklwA1xxgSTIwa5waZ5Fgeyibz62oNheSqP%2FSMBrHD1lOe4%2BEG3%2BkhM%2BTP5DkUgEZjDIQ%2Fzf2agINLtWqKuL965vWHtOZ27Xqj1YW7nic0JciP7gVSxTWZmV8YeBRuQzXhivqK81EvG%2BB4DucSxBK79wc6oO94aUwDj0yBKKKHrrXjVGyOZex0Mm37kYPmQWPgSlubAeViScrb9PYpli9DwisLo0yUXuo8NEIO3NgPzPrTZFsbeIK1PoHKl8i6tG0zy%2FDUVxPJ3xmaWmT2XUOZOlakDMpFDvpFuqvfpANrnI5FnYM7rcTOMYWHa0lkJTXCw0yUhw98e4tDEuKOc%2FPPPzD9NA0DK0%2Fql2fPxOpzxuoQpODBUUrBnXG1RSFn6V8e3tu6i6zCwxzPRCT62pm9ORH8ljVttiBnkG%2Bt6oCSvVUrI%2BQqxiEZS7pJ%2BqA0yquEkx6tv19l4kba%2FKflAXfJvxSanUuIuL8utMBb3vaIfne2qrIMM3UoCYIj%2BHlkkwvDLA52BwxszrSj127AwnovN0gY6pgHohY6pq9nszzJHu7xE268bSb62yKeXk1BMW08s9BqyJs%2Fhh%2Fy9FDgUYJkNREMY0%2FbcaCVI05Eh3sbVGPduJ2DU98RkAgss8gaEXpNxMZrEi31IbK52eUxNw%2F9I0mIO7BI9z0t1qogjPySTFc4wiwTa4gbeYWwGsbEkcyqwoIAMYNZAP73AbQKlyAxPIJyiVRT3QNYcNg56PDnMxqERsqmDAblTTm%2FU&X-Amz-Signature=ae3ef53888e333f1a58c49f4705559e7d4fe5d8290dcd0f3c929ac919137128b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
