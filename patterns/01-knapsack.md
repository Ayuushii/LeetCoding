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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46675GPUX3N%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIElvUfOgra7i7wPM%2B%2Fcxg2l4l2HyE%2F62gjVVVUFh3J1XAiEA2DbgZ8MuAzPHgUZ%2BBL1F%2FBq2CMesaRkZT3CQ6pMhHpsqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOtMNHcDg45bk%2FmGyircA8YSvyc3H7BQxx7HwhOzqQO%2BZI6Wql1p424SxQDRmlpptTKfUfa2dC%2B82wzu2A8RqWudR90wbA1BohEZNcI9YIlc7jI%2FAYhBPltmG%2BqvDpHHRBjoji5uxZgCRvtK1y8pFnkAdRIC8nrTIvuR9LAAwgU0n44MV29fVMX5r9kLj8dvirENL79d4N3NOnHa9NJfJ9wBhVFGTBlj1p9rRh2TrVcV1OrUaXilFrElnNjKHdejeY65LftpaS5BruwsbBnX8fctePvyJ%2BFm3FmAUFTsVpOaPqyY2g6PK8XpDAmXeSaUqb8%2BsrXoU2Abat65sb8vgtr6ZJcc7IfzBGYDtwtk4rv6dOB%2FJh6iDXfYgxjExBWzLRc3jLTstqvN0COabzOydYeLTIeCrtyS3AerrT8BjsqJqhDKWGhj6orEEJQ6QRa1imaZMRn8PQOnNaJ0vf1x6X%2BqAN%2BLOxA8swvEBca4KsGsbdKI6nC%2FqeX2z6gkqyrAKgCfHPBxcciw%2BnBV3RPqoQ%2F3Xx1WQNGw%2FIViJfXKVX%2BBI3wZ4zG7vfSSMdG7sxpftX1HtH%2BTpOvqs0X64SJPUI%2BSS4OXGPzx%2Bx5O8XAyO9JV6BzGtC0MLe3z%2BC24%2BDNLtfkpYPBYZofpqLnKMPPI9s8GOqUBOTfY5ch%2FJWlxOplsOzMSP8AVhM%2BbbpxUAv2FkIs%2BoFOuAAEENQY1Bnv7gWHtDuP0YHngBFBcGulB%2Fd4QcfrjcTibqrOVHtQfZ3YGT9qHEtPr%2FBAgQo2MbJAMQQ4m76GXQ5sAGu9egWFOHkTv9Z0QXqpG3MbZZ6Cj9Mv5uLJ2stmOZNCYmB2GqnWkmidfwS%2FB1YQ%2FUvo3Qy8fPhO0ql51nNdC4jKs&X-Amz-Signature=4d05cd0e372dd6a62dcfb797d0ee1186bceab5c6f919fbe9420a213ce37b700c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46675GPUX3N%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIElvUfOgra7i7wPM%2B%2Fcxg2l4l2HyE%2F62gjVVVUFh3J1XAiEA2DbgZ8MuAzPHgUZ%2BBL1F%2FBq2CMesaRkZT3CQ6pMhHpsqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOtMNHcDg45bk%2FmGyircA8YSvyc3H7BQxx7HwhOzqQO%2BZI6Wql1p424SxQDRmlpptTKfUfa2dC%2B82wzu2A8RqWudR90wbA1BohEZNcI9YIlc7jI%2FAYhBPltmG%2BqvDpHHRBjoji5uxZgCRvtK1y8pFnkAdRIC8nrTIvuR9LAAwgU0n44MV29fVMX5r9kLj8dvirENL79d4N3NOnHa9NJfJ9wBhVFGTBlj1p9rRh2TrVcV1OrUaXilFrElnNjKHdejeY65LftpaS5BruwsbBnX8fctePvyJ%2BFm3FmAUFTsVpOaPqyY2g6PK8XpDAmXeSaUqb8%2BsrXoU2Abat65sb8vgtr6ZJcc7IfzBGYDtwtk4rv6dOB%2FJh6iDXfYgxjExBWzLRc3jLTstqvN0COabzOydYeLTIeCrtyS3AerrT8BjsqJqhDKWGhj6orEEJQ6QRa1imaZMRn8PQOnNaJ0vf1x6X%2BqAN%2BLOxA8swvEBca4KsGsbdKI6nC%2FqeX2z6gkqyrAKgCfHPBxcciw%2BnBV3RPqoQ%2F3Xx1WQNGw%2FIViJfXKVX%2BBI3wZ4zG7vfSSMdG7sxpftX1HtH%2BTpOvqs0X64SJPUI%2BSS4OXGPzx%2Bx5O8XAyO9JV6BzGtC0MLe3z%2BC24%2BDNLtfkpYPBYZofpqLnKMPPI9s8GOqUBOTfY5ch%2FJWlxOplsOzMSP8AVhM%2BbbpxUAv2FkIs%2BoFOuAAEENQY1Bnv7gWHtDuP0YHngBFBcGulB%2Fd4QcfrjcTibqrOVHtQfZ3YGT9qHEtPr%2FBAgQo2MbJAMQQ4m76GXQ5sAGu9egWFOHkTv9Z0QXqpG3MbZZ6Cj9Mv5uLJ2stmOZNCYmB2GqnWkmidfwS%2FB1YQ%2FUvo3Qy8fPhO0ql51nNdC4jKs&X-Amz-Signature=07875a8ca2b2a5f2cfcd1ed466eaf0247ba394a4fcd1d27360541e03a56ae8ad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46675GPUX3N%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIElvUfOgra7i7wPM%2B%2Fcxg2l4l2HyE%2F62gjVVVUFh3J1XAiEA2DbgZ8MuAzPHgUZ%2BBL1F%2FBq2CMesaRkZT3CQ6pMhHpsqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOtMNHcDg45bk%2FmGyircA8YSvyc3H7BQxx7HwhOzqQO%2BZI6Wql1p424SxQDRmlpptTKfUfa2dC%2B82wzu2A8RqWudR90wbA1BohEZNcI9YIlc7jI%2FAYhBPltmG%2BqvDpHHRBjoji5uxZgCRvtK1y8pFnkAdRIC8nrTIvuR9LAAwgU0n44MV29fVMX5r9kLj8dvirENL79d4N3NOnHa9NJfJ9wBhVFGTBlj1p9rRh2TrVcV1OrUaXilFrElnNjKHdejeY65LftpaS5BruwsbBnX8fctePvyJ%2BFm3FmAUFTsVpOaPqyY2g6PK8XpDAmXeSaUqb8%2BsrXoU2Abat65sb8vgtr6ZJcc7IfzBGYDtwtk4rv6dOB%2FJh6iDXfYgxjExBWzLRc3jLTstqvN0COabzOydYeLTIeCrtyS3AerrT8BjsqJqhDKWGhj6orEEJQ6QRa1imaZMRn8PQOnNaJ0vf1x6X%2BqAN%2BLOxA8swvEBca4KsGsbdKI6nC%2FqeX2z6gkqyrAKgCfHPBxcciw%2BnBV3RPqoQ%2F3Xx1WQNGw%2FIViJfXKVX%2BBI3wZ4zG7vfSSMdG7sxpftX1HtH%2BTpOvqs0X64SJPUI%2BSS4OXGPzx%2Bx5O8XAyO9JV6BzGtC0MLe3z%2BC24%2BDNLtfkpYPBYZofpqLnKMPPI9s8GOqUBOTfY5ch%2FJWlxOplsOzMSP8AVhM%2BbbpxUAv2FkIs%2BoFOuAAEENQY1Bnv7gWHtDuP0YHngBFBcGulB%2Fd4QcfrjcTibqrOVHtQfZ3YGT9qHEtPr%2FBAgQo2MbJAMQQ4m76GXQ5sAGu9egWFOHkTv9Z0QXqpG3MbZZ6Cj9Mv5uLJ2stmOZNCYmB2GqnWkmidfwS%2FB1YQ%2FUvo3Qy8fPhO0ql51nNdC4jKs&X-Amz-Signature=dba80c72dbeee3f31ed9d6b96b58d85620b960aedb3aa29f7f4f8b85ed94163f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKS2NYAX%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQC40rgirMiHXe8DZ4uNbqvEgSRdOJJxLNrvkD3jks8bJQIhAKzq7Iw5cJUc67YyFvUkhfvgP%2BmEvYHq1m7Rc%2BPVGTKVKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwQSZBB7fMfn9EORyoq3APUFdTQx7nR%2FgPVqSEMZR6PK2XjzUf4bZjeZTU590%2FxoeHaiBllDsLCoSVlhtvWrgVL299%2F3XV2j0PEdByWzb3hcio5vOmmzBlLhJD%2BTicw1T4r%2BP5R8movXjSACItKy4rMvKVQ9OTN3ymyPs3Mp%2FdNB7P0N8kD%2BP8nbpqxitwWO45vgZ%2Fqo67fw4l4tJ6I%2FbxZ0MBBAlcOPHXP9MrHJQFyzSiY%2FxC8m9alQc094PVAun%2Fc8TrcBHvoOmzGWWUwnTbo57BmPmp7NGxTdc4nqfOstLJyaOzY0XeGeY6XY1ThW6p3DVRPnz2poOHwQt9PSTLG5a6G8dFldS260Gyn%2BaIio9R2sE5Q82cnTKQ%2FNlN2WBUrI5BW9pXQyKPte68tJl2%2B7AfP2SbLGCb9B2Kxwaz7IiL92NcZYq5Jok%2B%2BHLuSeZe0geNu7wniA%2BbA7s38EOUIcvENthzlubKSXTDSmJQUBY2uC%2B3LGuxZPsejWEuGaEW4vkugx%2Fo8yn5JoybrSjaqkZLiZVxLkmPZ1cxjpt6umENBuaBUHweNK%2BjKWUE3CFnAsYHDlPJO48plrjw%2FpZCPrPcgVMrAMyzWoMm7bbUitYDYpWpN0F4On6pbo5hQGivDwx4HpZcAfQcUITCdy%2FbPBjqkARKluM%2BcnT3F7NLR1NImTtf2tOtE1LifzkdzbE3Cdo9RviLet%2FqisVD%2FzZ%2BgKmB9PpJkrjK1%2BUvb4v9sSD7PhkbCZF8AxSHBg3RtTejjIwlFXjCEMEIeF1uQxHeq7dZ9vkEDU2zdKE%2F150hp%2FQe1kQ9H2SwWEdPCvcEoTY15ckmTFMRi6fz5fraRqUWwXk93WioY7%2BY2S0dVZgeU9I3zJw6Ey6lr&X-Amz-Signature=59b1717e5ff959f3c6f1b376c07c7c8ee8f34b9c3735d713bb4c12a440ac8694&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKS2NYAX%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQC40rgirMiHXe8DZ4uNbqvEgSRdOJJxLNrvkD3jks8bJQIhAKzq7Iw5cJUc67YyFvUkhfvgP%2BmEvYHq1m7Rc%2BPVGTKVKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwQSZBB7fMfn9EORyoq3APUFdTQx7nR%2FgPVqSEMZR6PK2XjzUf4bZjeZTU590%2FxoeHaiBllDsLCoSVlhtvWrgVL299%2F3XV2j0PEdByWzb3hcio5vOmmzBlLhJD%2BTicw1T4r%2BP5R8movXjSACItKy4rMvKVQ9OTN3ymyPs3Mp%2FdNB7P0N8kD%2BP8nbpqxitwWO45vgZ%2Fqo67fw4l4tJ6I%2FbxZ0MBBAlcOPHXP9MrHJQFyzSiY%2FxC8m9alQc094PVAun%2Fc8TrcBHvoOmzGWWUwnTbo57BmPmp7NGxTdc4nqfOstLJyaOzY0XeGeY6XY1ThW6p3DVRPnz2poOHwQt9PSTLG5a6G8dFldS260Gyn%2BaIio9R2sE5Q82cnTKQ%2FNlN2WBUrI5BW9pXQyKPte68tJl2%2B7AfP2SbLGCb9B2Kxwaz7IiL92NcZYq5Jok%2B%2BHLuSeZe0geNu7wniA%2BbA7s38EOUIcvENthzlubKSXTDSmJQUBY2uC%2B3LGuxZPsejWEuGaEW4vkugx%2Fo8yn5JoybrSjaqkZLiZVxLkmPZ1cxjpt6umENBuaBUHweNK%2BjKWUE3CFnAsYHDlPJO48plrjw%2FpZCPrPcgVMrAMyzWoMm7bbUitYDYpWpN0F4On6pbo5hQGivDwx4HpZcAfQcUITCdy%2FbPBjqkARKluM%2BcnT3F7NLR1NImTtf2tOtE1LifzkdzbE3Cdo9RviLet%2FqisVD%2FzZ%2BgKmB9PpJkrjK1%2BUvb4v9sSD7PhkbCZF8AxSHBg3RtTejjIwlFXjCEMEIeF1uQxHeq7dZ9vkEDU2zdKE%2F150hp%2FQe1kQ9H2SwWEdPCvcEoTY15ckmTFMRi6fz5fraRqUWwXk93WioY7%2BY2S0dVZgeU9I3zJw6Ey6lr&X-Amz-Signature=09f2f2a46e311262b3c1fcb8bf5f576ac6eb0ccad8bf1d9b6f0f1109373dbd0d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKS2NYAX%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQC40rgirMiHXe8DZ4uNbqvEgSRdOJJxLNrvkD3jks8bJQIhAKzq7Iw5cJUc67YyFvUkhfvgP%2BmEvYHq1m7Rc%2BPVGTKVKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwQSZBB7fMfn9EORyoq3APUFdTQx7nR%2FgPVqSEMZR6PK2XjzUf4bZjeZTU590%2FxoeHaiBllDsLCoSVlhtvWrgVL299%2F3XV2j0PEdByWzb3hcio5vOmmzBlLhJD%2BTicw1T4r%2BP5R8movXjSACItKy4rMvKVQ9OTN3ymyPs3Mp%2FdNB7P0N8kD%2BP8nbpqxitwWO45vgZ%2Fqo67fw4l4tJ6I%2FbxZ0MBBAlcOPHXP9MrHJQFyzSiY%2FxC8m9alQc094PVAun%2Fc8TrcBHvoOmzGWWUwnTbo57BmPmp7NGxTdc4nqfOstLJyaOzY0XeGeY6XY1ThW6p3DVRPnz2poOHwQt9PSTLG5a6G8dFldS260Gyn%2BaIio9R2sE5Q82cnTKQ%2FNlN2WBUrI5BW9pXQyKPte68tJl2%2B7AfP2SbLGCb9B2Kxwaz7IiL92NcZYq5Jok%2B%2BHLuSeZe0geNu7wniA%2BbA7s38EOUIcvENthzlubKSXTDSmJQUBY2uC%2B3LGuxZPsejWEuGaEW4vkugx%2Fo8yn5JoybrSjaqkZLiZVxLkmPZ1cxjpt6umENBuaBUHweNK%2BjKWUE3CFnAsYHDlPJO48plrjw%2FpZCPrPcgVMrAMyzWoMm7bbUitYDYpWpN0F4On6pbo5hQGivDwx4HpZcAfQcUITCdy%2FbPBjqkARKluM%2BcnT3F7NLR1NImTtf2tOtE1LifzkdzbE3Cdo9RviLet%2FqisVD%2FzZ%2BgKmB9PpJkrjK1%2BUvb4v9sSD7PhkbCZF8AxSHBg3RtTejjIwlFXjCEMEIeF1uQxHeq7dZ9vkEDU2zdKE%2F150hp%2FQe1kQ9H2SwWEdPCvcEoTY15ckmTFMRi6fz5fraRqUWwXk93WioY7%2BY2S0dVZgeU9I3zJw6Ey6lr&X-Amz-Signature=e293ef4e1b9b408b4ad361e1688251fdc897fe9cdbdab28db864ad95bbf25e7a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QKS2NYAX%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092000Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQC40rgirMiHXe8DZ4uNbqvEgSRdOJJxLNrvkD3jks8bJQIhAKzq7Iw5cJUc67YyFvUkhfvgP%2BmEvYHq1m7Rc%2BPVGTKVKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwQSZBB7fMfn9EORyoq3APUFdTQx7nR%2FgPVqSEMZR6PK2XjzUf4bZjeZTU590%2FxoeHaiBllDsLCoSVlhtvWrgVL299%2F3XV2j0PEdByWzb3hcio5vOmmzBlLhJD%2BTicw1T4r%2BP5R8movXjSACItKy4rMvKVQ9OTN3ymyPs3Mp%2FdNB7P0N8kD%2BP8nbpqxitwWO45vgZ%2Fqo67fw4l4tJ6I%2FbxZ0MBBAlcOPHXP9MrHJQFyzSiY%2FxC8m9alQc094PVAun%2Fc8TrcBHvoOmzGWWUwnTbo57BmPmp7NGxTdc4nqfOstLJyaOzY0XeGeY6XY1ThW6p3DVRPnz2poOHwQt9PSTLG5a6G8dFldS260Gyn%2BaIio9R2sE5Q82cnTKQ%2FNlN2WBUrI5BW9pXQyKPte68tJl2%2B7AfP2SbLGCb9B2Kxwaz7IiL92NcZYq5Jok%2B%2BHLuSeZe0geNu7wniA%2BbA7s38EOUIcvENthzlubKSXTDSmJQUBY2uC%2B3LGuxZPsejWEuGaEW4vkugx%2Fo8yn5JoybrSjaqkZLiZVxLkmPZ1cxjpt6umENBuaBUHweNK%2BjKWUE3CFnAsYHDlPJO48plrjw%2FpZCPrPcgVMrAMyzWoMm7bbUitYDYpWpN0F4On6pbo5hQGivDwx4HpZcAfQcUITCdy%2FbPBjqkARKluM%2BcnT3F7NLR1NImTtf2tOtE1LifzkdzbE3Cdo9RviLet%2FqisVD%2FzZ%2BgKmB9PpJkrjK1%2BUvb4v9sSD7PhkbCZF8AxSHBg3RtTejjIwlFXjCEMEIeF1uQxHeq7dZ9vkEDU2zdKE%2F150hp%2FQe1kQ9H2SwWEdPCvcEoTY15ckmTFMRi6fz5fraRqUWwXk93WioY7%2BY2S0dVZgeU9I3zJw6Ey6lr&X-Amz-Signature=cd6bf538004161aa2979110908a1e09e5d799c05fd46f49e5cb3fa57c03153a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SS5OEA7G%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092001Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQC%2FX3HXRSJ8u12uMCCUEQJDbWWPCNWKxu84godnSq9YEgIhAJu3bx0GDeff89aBc70eMu1aKmrkxblIeCRYsx6J3wwyKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxYl641nFLEicksAzoq3APjYZuiNh8Ud%2F9bGORbIPIIg4JWu3%2F%2BEp7S7oHqFh%2B6o0byqr45vfLuGDgLxdqbzJ5%2BnZIZkv22nGP%2BknfX25aIrTyBeB8newvpB40r1DVjNuKsnYi6W9vGzTmuqq8hXD1A1n56p5bnWzVbzWTLO0fjXP4oo46Mw0mFIFuy8TsHWiDa8ubwnwG25d2jBjtmEBhhR9H7cP6x3DZ7lSOcXllCOkergp5GJq8cwjHDwkPYTlczDKx6xsEM2Qc8cUruj2%2FjoPKcgcu4wGlRzE4BekXV%2FsHmBljS0LGSFaYeqOdL87j1R426NydTNEeBvOzokIejl5Lpd6M9ItG7FDQsY%2BEePictJkOg0%2BvDSklOEETczJuuWgk8iGwt4HzOIhTGILs%2F7JciBsKYM7HfROiQjUcaBpS3bCK2To6pJVSmUAQAZpkqhDkFoaZCSZLfCx%2FwkcJAa08cbM5EVueDPf7Nkrtq8QMCRoGTyGK%2Bp8xHQiR8Da8PshnBL8LXn9BRZI9gJ8uHnmRo3iX5dvdZG5oclr0%2Fbm2uwufpQVfItJv2q%2BCholeSpd0x6CCFk4XIgbrRnBGek69Wibw2VUu2OazI2VmcemvS8qCYsZUhsdS4xBNaUrZgcdxepw4HJU%2BtizCRyvbPBjqkAQr8cxV6V37H0BzHt4CSrF8TqRTq5goCi9TZG4hdjDa6HI5sPXcpY2EjvOTHUuhjPa3MnAfCjPKiTXvxWF0RI9eg8rANY20ngjKHeQ0EP0d%2Fijc69Ty7sbqHOyIhB%2BcNdUwUCByGp2X6O%2BIDM%2Bqnmtmp0%2B1DCBqX2MWq30b9ghGugFKbC7k9nmDkmqIungjzl4FStEavLoIajiaDR44IxKhDz3RM&X-Amz-Signature=cdbf62a03d393106b69904e765698e9dcb6f0c1df85ebda6e9882bbcd5e14d71&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666MVAEHFQ%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092001Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIQDUpakQAkz2ZD3hUTRGeCx1ccuzCVome2JD4aHBHpDPZAIgTKQWHC6TudJOrJ%2FDpzhqlxjHbGUjttVXITZv2Pj3Q%2FkqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBoz7BRyEoJ4BcsRbSrcAw1BqCbkJOTIL9fJMnidtLCaxOTRFc2TKu5PIEF7WGgtvNtuGotLFc0utRfBd9jzGSR%2BOnKCtaGPCcmY2pBMs2AAn6CkZse7o1OpBAw9dmmad5jL9k1ugjxLjpRfrpmHJH0Bx%2FvaZu4dyaGsw25g1zUhbia1iRJucPkrokwwiqL7uqJskXBbcMgBSGAHHuqFnyT202VfK%2BTEmUdnRyIFN%2FQbIvz0ZVaqTpcCf%2BneQnS9pR32I%2Fp2D0zrtA1a3iaRIpqzVwn%2B%2B%2F1wswaUwEiYy1MlW0wij%2FrP4aYb1thhFf5vGQwW6EYiVZ7Q%2FKps1jHf2eCEN2QZOJR6LO8l%2BBJnA0TEEzN6XbgUGH1V%2BbpXIhzr2KwycGRI83H1ZRqMnwBMGcwkoMvAf8jTr6%2B7AdKh2GJFtinmp47%2FX3uKDwxFJPfHIgk5rh0gdPDUqtjpqRXFx%2BtqVwOVnJH%2FxGXdiJkgaeGrY42lHEzHHwJSk1E6fa2Rk7W4bHu9Rdv32%2FXxNx6nECZMbObCrxmxSxVGHM4TVYgeCM0uqDbedrpPz4MreYQDc4kS8oJG997HPyiLRHpY%2B8BcOQNcxu8OmzuVJCWoxZVkkl9D5KJjG5EyIWHBFatEk0LhvUnQk4P4fK9nMJLJ9s8GOqUBjNvjlN7yJ64AJa9YDWIF4d0hSpyzz88e2gC3dru1Ub1L6y1xNij%2Bkjh8ZYfRrRDMGOZxO1XnEb3G%2BA3et2NC5kzqzRPrFt0E1C12n9sH72qqdepD%2FccZcrVnjsFQb9KlPY%2FKQFLNGF1Nb9XDpZq8OWtG5o3hslXwrJ13cWi1pENDymYkHg1eC9nMkgt1wXny8zSSPhnKDLXs%2FZMUZGjorvhucFnw&X-Amz-Signature=a63da5dae0c0cab754e026e7dc82635e13298235a617aa0aecf274b09549f71d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666MVAEHFQ%2F20260508%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260508T092001Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIQDUpakQAkz2ZD3hUTRGeCx1ccuzCVome2JD4aHBHpDPZAIgTKQWHC6TudJOrJ%2FDpzhqlxjHbGUjttVXITZv2Pj3Q%2FkqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBoz7BRyEoJ4BcsRbSrcAw1BqCbkJOTIL9fJMnidtLCaxOTRFc2TKu5PIEF7WGgtvNtuGotLFc0utRfBd9jzGSR%2BOnKCtaGPCcmY2pBMs2AAn6CkZse7o1OpBAw9dmmad5jL9k1ugjxLjpRfrpmHJH0Bx%2FvaZu4dyaGsw25g1zUhbia1iRJucPkrokwwiqL7uqJskXBbcMgBSGAHHuqFnyT202VfK%2BTEmUdnRyIFN%2FQbIvz0ZVaqTpcCf%2BneQnS9pR32I%2Fp2D0zrtA1a3iaRIpqzVwn%2B%2B%2F1wswaUwEiYy1MlW0wij%2FrP4aYb1thhFf5vGQwW6EYiVZ7Q%2FKps1jHf2eCEN2QZOJR6LO8l%2BBJnA0TEEzN6XbgUGH1V%2BbpXIhzr2KwycGRI83H1ZRqMnwBMGcwkoMvAf8jTr6%2B7AdKh2GJFtinmp47%2FX3uKDwxFJPfHIgk5rh0gdPDUqtjpqRXFx%2BtqVwOVnJH%2FxGXdiJkgaeGrY42lHEzHHwJSk1E6fa2Rk7W4bHu9Rdv32%2FXxNx6nECZMbObCrxmxSxVGHM4TVYgeCM0uqDbedrpPz4MreYQDc4kS8oJG997HPyiLRHpY%2B8BcOQNcxu8OmzuVJCWoxZVkkl9D5KJjG5EyIWHBFatEk0LhvUnQk4P4fK9nMJLJ9s8GOqUBjNvjlN7yJ64AJa9YDWIF4d0hSpyzz88e2gC3dru1Ub1L6y1xNij%2Bkjh8ZYfRrRDMGOZxO1XnEb3G%2BA3et2NC5kzqzRPrFt0E1C12n9sH72qqdepD%2FccZcrVnjsFQb9KlPY%2FKQFLNGF1Nb9XDpZq8OWtG5o3hslXwrJ13cWi1pENDymYkHg1eC9nMkgt1wXny8zSSPhnKDLXs%2FZMUZGjorvhucFnw&X-Amz-Signature=9e9f8e14f6fb9200b4189eafc5a11936649b6d84aa44dcf0139d359e2f9cd7e2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
