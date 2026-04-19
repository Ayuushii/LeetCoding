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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDEYA4GI%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIE9qYlchMlaxhA63bNB5Iuvi6%2BqxkEVMXaGbUGHgFmOAAiAxe1m2Lie%2B9s2OquLNVDlC4XgFVND13rEps0n0e7P3jSr%2FAwgCEAAaDDYzNzQyMzE4MzgwNSIMMg9JM47rrti5myxJKtwD%2Bd984TcBXpJgACGUXQ4NIonnLNpuNhX2iG7ZrRrVPN%2Bf0iM3h3lDT7e15rd80AjdZCrtxHaSKvcChvFj6OPqEj0MYKfNP0RBVBVVe8MEKxbz%2Bl%2BGTqbS67LVgwRwRKL6KKSkoVeyNC5FXH%2FRTJ9wN%2FKNF4bT5kvyTy%2BoX%2FY7Yommgzl28mSz3nXawOa9in6gzAt5NPVE3pyL%2FmumQK4pRsSZPCxtIdPt60zjZqcHqARZ47lByOHS%2BKtcvXvoY7vi48bGPQUfyyMK5ZyCYJolLGA4ERcOOaNEWcDlSBq8kpP8gsGbB6EjPUBxFEReHYIyKi4VGDj7QOwzkgIEYVHNe1zt3TJ6yGJPJr4u2mOreFqVVjZgS5M9ZGFUmep1Fii0VRrSrhTJfIaFvkAIdPwdOpYsmtrvoNWL33HPj%2B7p2GvIScPvA7pdCD8vLhqBuv6ThEgX3wPwoPkKR05Fuj7J9B6DWz3MvRJ63SlR3SwHqb4%2BVAGn5PNE65bpmFiROYbYZmUwcAyJXPGRjIYvuX2eK5Xddu%2FrUeW3E2OlqZWFhUW%2B8FKjx42uckAhbO0tocbxeoE%2FAz9s3WEiNITXYroXbP%2Fvz1vGDOxoRh6B4qGq0QYqfZathpRiX%2BAAIe0ws66SzwY6pgG%2FSXW5qE7D2AH3E2kntez%2FnQLA9W1p3vwP0BGVOpajKcCOQlZRmD%2F1sgYV6FB7zIMSxRMZOe6nAminJb6GdPwYp87Gs2BMXrsMs8hPmOTr%2ByO6WEzOPoLBK63o9hnJyxid5fCGSHtvFhgGwcMP92TWmQglSycMRnzoTqwHncL9meg4LRLKx4pYXRXZnGWf9nBzUXloIIsenOOiZM61UTtMaWACYAEr&X-Amz-Signature=075492fb82d186e664b1d63ece4beaf9506bb1f163a0bbb44610b74330dd677f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDEYA4GI%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIE9qYlchMlaxhA63bNB5Iuvi6%2BqxkEVMXaGbUGHgFmOAAiAxe1m2Lie%2B9s2OquLNVDlC4XgFVND13rEps0n0e7P3jSr%2FAwgCEAAaDDYzNzQyMzE4MzgwNSIMMg9JM47rrti5myxJKtwD%2Bd984TcBXpJgACGUXQ4NIonnLNpuNhX2iG7ZrRrVPN%2Bf0iM3h3lDT7e15rd80AjdZCrtxHaSKvcChvFj6OPqEj0MYKfNP0RBVBVVe8MEKxbz%2Bl%2BGTqbS67LVgwRwRKL6KKSkoVeyNC5FXH%2FRTJ9wN%2FKNF4bT5kvyTy%2BoX%2FY7Yommgzl28mSz3nXawOa9in6gzAt5NPVE3pyL%2FmumQK4pRsSZPCxtIdPt60zjZqcHqARZ47lByOHS%2BKtcvXvoY7vi48bGPQUfyyMK5ZyCYJolLGA4ERcOOaNEWcDlSBq8kpP8gsGbB6EjPUBxFEReHYIyKi4VGDj7QOwzkgIEYVHNe1zt3TJ6yGJPJr4u2mOreFqVVjZgS5M9ZGFUmep1Fii0VRrSrhTJfIaFvkAIdPwdOpYsmtrvoNWL33HPj%2B7p2GvIScPvA7pdCD8vLhqBuv6ThEgX3wPwoPkKR05Fuj7J9B6DWz3MvRJ63SlR3SwHqb4%2BVAGn5PNE65bpmFiROYbYZmUwcAyJXPGRjIYvuX2eK5Xddu%2FrUeW3E2OlqZWFhUW%2B8FKjx42uckAhbO0tocbxeoE%2FAz9s3WEiNITXYroXbP%2Fvz1vGDOxoRh6B4qGq0QYqfZathpRiX%2BAAIe0ws66SzwY6pgG%2FSXW5qE7D2AH3E2kntez%2FnQLA9W1p3vwP0BGVOpajKcCOQlZRmD%2F1sgYV6FB7zIMSxRMZOe6nAminJb6GdPwYp87Gs2BMXrsMs8hPmOTr%2ByO6WEzOPoLBK63o9hnJyxid5fCGSHtvFhgGwcMP92TWmQglSycMRnzoTqwHncL9meg4LRLKx4pYXRXZnGWf9nBzUXloIIsenOOiZM61UTtMaWACYAEr&X-Amz-Signature=bfa6a6541d3f70c08dbc6e9cb6b7424bb71aa3b4de7ed099f0c647394ab4d18c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDEYA4GI%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIE9qYlchMlaxhA63bNB5Iuvi6%2BqxkEVMXaGbUGHgFmOAAiAxe1m2Lie%2B9s2OquLNVDlC4XgFVND13rEps0n0e7P3jSr%2FAwgCEAAaDDYzNzQyMzE4MzgwNSIMMg9JM47rrti5myxJKtwD%2Bd984TcBXpJgACGUXQ4NIonnLNpuNhX2iG7ZrRrVPN%2Bf0iM3h3lDT7e15rd80AjdZCrtxHaSKvcChvFj6OPqEj0MYKfNP0RBVBVVe8MEKxbz%2Bl%2BGTqbS67LVgwRwRKL6KKSkoVeyNC5FXH%2FRTJ9wN%2FKNF4bT5kvyTy%2BoX%2FY7Yommgzl28mSz3nXawOa9in6gzAt5NPVE3pyL%2FmumQK4pRsSZPCxtIdPt60zjZqcHqARZ47lByOHS%2BKtcvXvoY7vi48bGPQUfyyMK5ZyCYJolLGA4ERcOOaNEWcDlSBq8kpP8gsGbB6EjPUBxFEReHYIyKi4VGDj7QOwzkgIEYVHNe1zt3TJ6yGJPJr4u2mOreFqVVjZgS5M9ZGFUmep1Fii0VRrSrhTJfIaFvkAIdPwdOpYsmtrvoNWL33HPj%2B7p2GvIScPvA7pdCD8vLhqBuv6ThEgX3wPwoPkKR05Fuj7J9B6DWz3MvRJ63SlR3SwHqb4%2BVAGn5PNE65bpmFiROYbYZmUwcAyJXPGRjIYvuX2eK5Xddu%2FrUeW3E2OlqZWFhUW%2B8FKjx42uckAhbO0tocbxeoE%2FAz9s3WEiNITXYroXbP%2Fvz1vGDOxoRh6B4qGq0QYqfZathpRiX%2BAAIe0ws66SzwY6pgG%2FSXW5qE7D2AH3E2kntez%2FnQLA9W1p3vwP0BGVOpajKcCOQlZRmD%2F1sgYV6FB7zIMSxRMZOe6nAminJb6GdPwYp87Gs2BMXrsMs8hPmOTr%2ByO6WEzOPoLBK63o9hnJyxid5fCGSHtvFhgGwcMP92TWmQglSycMRnzoTqwHncL9meg4LRLKx4pYXRXZnGWf9nBzUXloIIsenOOiZM61UTtMaWACYAEr&X-Amz-Signature=6544d5a6146c99b97db79cddfe26a7c959df724d4f99b2a11a559303959b6623&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656G4UU6I%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDdcxuOawsncT7BAGTEKnHGkSazDpfrpFz%2FkVTLPZzEhQIgOBxyvIeUdZN04OB0puaaXOWNGD59kYgb7zH325y0I7Eq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDF1lLfyVXn3gvJGYzircA835wc%2Bzj4bbej2zwWeX%2F5gGE5emB%2FnesY4ERRoAhNTIX9DeovKV%2Bm3KUm0zHsXN%2FU1fBJqrDN%2BP2AbhivnLnY%2BSjPzaV0MNvAvvP3z5RJwYHzB60py%2FIBpS9LKEnrCftTiIldyC72n28L3SjHJvtCUkLQmsJWl1QHH77BKiO6gpDQ%2FDUAlSAI1inT741scpt%2FR4T4XKQmrX7Eqe%2BkWk3j5Neu5eqpNW0BCB0jn0lOFV8QCIMIUgZG35DBh1vHfee2In8AiiSIgXzuZ2RtJb%2FfhHMmfiD%2FiDCBRWU82PdQDzcMT54JCkU0sRLyEWlP3Q53MBScpGv4y58dD6ergOcYihpkxnpzBOlp5mqjQel92Vv5eERWn1LDYK7Rd%2Bw3Hg1SlbI7Gs9Q%2BQ%2FZDowyrLoJbTCHbCVSB1ez1lNyFaUkoQitAjY6XkNca%2BV5ZHVob%2BIUKQP1%2BDTHYZC3c8ei5Zma27aUvYjBNVC%2BaK%2B4Q2nO0BUmycYR3XQvPmV8MSMgsc7vF2LqDP3fK3CgktJMXwMXj6Fdl9JN8Tmzgmr0r9uygAUt%2BpbtUX4SKJf1MTMY3HvX1w2U0b%2FoJu1hjI%2FjnYCj2c6bRNBZxa5gyDx%2BlNA7s36eYbaaHOCC7PjohVMJuuks8GOqUB314Fb6Lm9bQPa35aQmri9ySZbztGvChMST9wwfa5KH7Xai2SCQKvnfBrFQtbMMe6QmA62kKq7RPU0UWsIX9rgzOOucGHjVyxQGsPiad%2FjUiz5VCpxCAkDbRJniK6rLIKOtIWHD8dHPiNJ%2F9Mwne5kXj2tYsu1GMGtr0DUlocx4o5fR68wAywAAVd0m8asjKWUkVeOQpvNJwFATgMlH%2BohAyHQugo&X-Amz-Signature=0bb97d4aa9053eb66ef51998ff035c9d0d5d8770212cc15bc410a3442c54fd8e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656G4UU6I%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDdcxuOawsncT7BAGTEKnHGkSazDpfrpFz%2FkVTLPZzEhQIgOBxyvIeUdZN04OB0puaaXOWNGD59kYgb7zH325y0I7Eq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDF1lLfyVXn3gvJGYzircA835wc%2Bzj4bbej2zwWeX%2F5gGE5emB%2FnesY4ERRoAhNTIX9DeovKV%2Bm3KUm0zHsXN%2FU1fBJqrDN%2BP2AbhivnLnY%2BSjPzaV0MNvAvvP3z5RJwYHzB60py%2FIBpS9LKEnrCftTiIldyC72n28L3SjHJvtCUkLQmsJWl1QHH77BKiO6gpDQ%2FDUAlSAI1inT741scpt%2FR4T4XKQmrX7Eqe%2BkWk3j5Neu5eqpNW0BCB0jn0lOFV8QCIMIUgZG35DBh1vHfee2In8AiiSIgXzuZ2RtJb%2FfhHMmfiD%2FiDCBRWU82PdQDzcMT54JCkU0sRLyEWlP3Q53MBScpGv4y58dD6ergOcYihpkxnpzBOlp5mqjQel92Vv5eERWn1LDYK7Rd%2Bw3Hg1SlbI7Gs9Q%2BQ%2FZDowyrLoJbTCHbCVSB1ez1lNyFaUkoQitAjY6XkNca%2BV5ZHVob%2BIUKQP1%2BDTHYZC3c8ei5Zma27aUvYjBNVC%2BaK%2B4Q2nO0BUmycYR3XQvPmV8MSMgsc7vF2LqDP3fK3CgktJMXwMXj6Fdl9JN8Tmzgmr0r9uygAUt%2BpbtUX4SKJf1MTMY3HvX1w2U0b%2FoJu1hjI%2FjnYCj2c6bRNBZxa5gyDx%2BlNA7s36eYbaaHOCC7PjohVMJuuks8GOqUB314Fb6Lm9bQPa35aQmri9ySZbztGvChMST9wwfa5KH7Xai2SCQKvnfBrFQtbMMe6QmA62kKq7RPU0UWsIX9rgzOOucGHjVyxQGsPiad%2FjUiz5VCpxCAkDbRJniK6rLIKOtIWHD8dHPiNJ%2F9Mwne5kXj2tYsu1GMGtr0DUlocx4o5fR68wAywAAVd0m8asjKWUkVeOQpvNJwFATgMlH%2BohAyHQugo&X-Amz-Signature=bb8df7fa7baef4623166cc14fcd47cb3c0e8f6329f0a80e2252ef192e08b0803&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656G4UU6I%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDdcxuOawsncT7BAGTEKnHGkSazDpfrpFz%2FkVTLPZzEhQIgOBxyvIeUdZN04OB0puaaXOWNGD59kYgb7zH325y0I7Eq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDF1lLfyVXn3gvJGYzircA835wc%2Bzj4bbej2zwWeX%2F5gGE5emB%2FnesY4ERRoAhNTIX9DeovKV%2Bm3KUm0zHsXN%2FU1fBJqrDN%2BP2AbhivnLnY%2BSjPzaV0MNvAvvP3z5RJwYHzB60py%2FIBpS9LKEnrCftTiIldyC72n28L3SjHJvtCUkLQmsJWl1QHH77BKiO6gpDQ%2FDUAlSAI1inT741scpt%2FR4T4XKQmrX7Eqe%2BkWk3j5Neu5eqpNW0BCB0jn0lOFV8QCIMIUgZG35DBh1vHfee2In8AiiSIgXzuZ2RtJb%2FfhHMmfiD%2FiDCBRWU82PdQDzcMT54JCkU0sRLyEWlP3Q53MBScpGv4y58dD6ergOcYihpkxnpzBOlp5mqjQel92Vv5eERWn1LDYK7Rd%2Bw3Hg1SlbI7Gs9Q%2BQ%2FZDowyrLoJbTCHbCVSB1ez1lNyFaUkoQitAjY6XkNca%2BV5ZHVob%2BIUKQP1%2BDTHYZC3c8ei5Zma27aUvYjBNVC%2BaK%2B4Q2nO0BUmycYR3XQvPmV8MSMgsc7vF2LqDP3fK3CgktJMXwMXj6Fdl9JN8Tmzgmr0r9uygAUt%2BpbtUX4SKJf1MTMY3HvX1w2U0b%2FoJu1hjI%2FjnYCj2c6bRNBZxa5gyDx%2BlNA7s36eYbaaHOCC7PjohVMJuuks8GOqUB314Fb6Lm9bQPa35aQmri9ySZbztGvChMST9wwfa5KH7Xai2SCQKvnfBrFQtbMMe6QmA62kKq7RPU0UWsIX9rgzOOucGHjVyxQGsPiad%2FjUiz5VCpxCAkDbRJniK6rLIKOtIWHD8dHPiNJ%2F9Mwne5kXj2tYsu1GMGtr0DUlocx4o5fR68wAywAAVd0m8asjKWUkVeOQpvNJwFATgMlH%2BohAyHQugo&X-Amz-Signature=f4a129f6f3914f9d54c2f5273692ab65840abf8ad42486de709b47e3e20777de&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656G4UU6I%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085336Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJHMEUCIQDdcxuOawsncT7BAGTEKnHGkSazDpfrpFz%2FkVTLPZzEhQIgOBxyvIeUdZN04OB0puaaXOWNGD59kYgb7zH325y0I7Eq%2FwMIAhAAGgw2Mzc0MjMxODM4MDUiDF1lLfyVXn3gvJGYzircA835wc%2Bzj4bbej2zwWeX%2F5gGE5emB%2FnesY4ERRoAhNTIX9DeovKV%2Bm3KUm0zHsXN%2FU1fBJqrDN%2BP2AbhivnLnY%2BSjPzaV0MNvAvvP3z5RJwYHzB60py%2FIBpS9LKEnrCftTiIldyC72n28L3SjHJvtCUkLQmsJWl1QHH77BKiO6gpDQ%2FDUAlSAI1inT741scpt%2FR4T4XKQmrX7Eqe%2BkWk3j5Neu5eqpNW0BCB0jn0lOFV8QCIMIUgZG35DBh1vHfee2In8AiiSIgXzuZ2RtJb%2FfhHMmfiD%2FiDCBRWU82PdQDzcMT54JCkU0sRLyEWlP3Q53MBScpGv4y58dD6ergOcYihpkxnpzBOlp5mqjQel92Vv5eERWn1LDYK7Rd%2Bw3Hg1SlbI7Gs9Q%2BQ%2FZDowyrLoJbTCHbCVSB1ez1lNyFaUkoQitAjY6XkNca%2BV5ZHVob%2BIUKQP1%2BDTHYZC3c8ei5Zma27aUvYjBNVC%2BaK%2B4Q2nO0BUmycYR3XQvPmV8MSMgsc7vF2LqDP3fK3CgktJMXwMXj6Fdl9JN8Tmzgmr0r9uygAUt%2BpbtUX4SKJf1MTMY3HvX1w2U0b%2FoJu1hjI%2FjnYCj2c6bRNBZxa5gyDx%2BlNA7s36eYbaaHOCC7PjohVMJuuks8GOqUB314Fb6Lm9bQPa35aQmri9ySZbztGvChMST9wwfa5KH7Xai2SCQKvnfBrFQtbMMe6QmA62kKq7RPU0UWsIX9rgzOOucGHjVyxQGsPiad%2FjUiz5VCpxCAkDbRJniK6rLIKOtIWHD8dHPiNJ%2F9Mwne5kXj2tYsu1GMGtr0DUlocx4o5fR68wAywAAVd0m8asjKWUkVeOQpvNJwFATgMlH%2BohAyHQugo&X-Amz-Signature=5babef5efa4acf5d37faab65ca8024368e4e5e3f448c2cb52fdd35cfe7c6c18b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SJL3YHYI%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085337Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDgaCXVzLXdlc3QtMiJHMEUCICsLCyoMCwcn%2Bu%2BzZc%2Fdww7xWsmzmogZ%2BTLEZGvWDBfCAiEApkAsKRSDkhpYnTEdVTbnGOU02mxlk5oMwN32i%2Fj5uysq%2FwMIARAAGgw2Mzc0MjMxODM4MDUiDFDKn5%2BehFOK%2FngSTCrcAzSOoBZbYDOpBPlIXSThw%2FzsuuAp10MFz3ZAjDo4p6jES51vHAb%2FzXZadizb2IgXMARQ03D4OuwYjdVPiXChwcdJXzV%2FuWRSOULdtFr0rJV15wxiOYclO4U8uRlht1n1sMYRk%2BiaqokzIcVt1kxnjyOC7QlwxY1CVgnyIgeuus0fog5RGV13yFEU2gFvY4uKL3PT1vGWgD%2F6wPKXhTjQEmMVzXUlRpvWqYf6PldotcZ1rdZO4BD9hdS3%2Bm3toDMVubpQcCrByYCHXNFH6YRZozXk86si8XniroP0t%2FpYk%2FN8aYgiPo5IbEnXpl0fPDuOaAUVArmhZ43D9E7fdjOfeOaPoZKsikHqueRP0TIlm0HJKBlpIOhNvIIgQ7XHxvPiJWMIMWPt2zmISVqULlVgTfl%2Fpk0K0ZdHloKI0%2Fp%2BZCoEPdhqe3hqGFb%2BqFcbqClTIlPghokCXUIRBlSfpwgFfgA9wkD08IgLeA1DSXjlMscGQaP7r2sP5X8r22Cxsiw7tolaXIC3j2QqpUAWqx71tonwz7v6r1JhpFNdcBMqO5ekSnoY%2FfIIV6AJz%2F2I8FXk28x3wATA5lvcFxUxrV29PwV%2BfkApKUqFlZPO1hWhJcbWsIHXiIKm5%2FXEKpPlMKGPks8GOqUB%2FcL9uqVxg4gYaOgivw6uVW9Ho8%2BKVwKkXWg%2BElF9XoQAJkCSykrHQAlPZIalPwFx4Tuj%2BQ5ITFQodQZZSoE%2FojiLWg0Y4J%2Bcfl4%2BLwPs3QH%2BlhLFWfKdBDEujr8sH8bdPjU%2Fb3FRlf4B%2FMY2a6yn86l8apW1yoPZfBfcwnBHroNp5RBOYCWLHUhh1AW2d6yMamhFD1aIPXt7yE%2BUyefhq8aT%2B42z&X-Amz-Signature=7c3eec7153e99a2f31afc8e0ea0d1068a856bcf3c76689e9003198db5e504df9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y2PVBRP6%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085337Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIH%2FfjxYqG28B9Cjn8WGoEL6VXb3GNDPpmHBRUM67PM4cAiAJ05nki3%2B03xUnks5UX8nsIAcRnsJDIoRggfhNuVLoMCr%2FAwgCEAAaDDYzNzQyMzE4MzgwNSIMe9uHxJEx8Lnl5yUIKtwD7gvxzK4qDbeIl9z8AGGT5dqZHWxY%2B4yIwczf6d4B4QTwtfnHhlJJs43L%2BBCt7qtoiQH2eJIxUKLwm28L4TVr%2FHV3lNLT07jcUTx9vBjc%2BdR%2B4zFUCAQyYi9tqJF5jLsRMhiKGVmxdgnQWvPMHVrl9X5Q4C8PmlVQXB11aTMJLTiqm5BgWUWLDCOCRjKOISsEeOOEafiwpsoDKGbgogU5x2oDz13knnFoLTcIwmcPCb8vSU%2Flf7ScnwBs5RcEyKf2sc2Dub4k2q2ujYfBnRz4LHWjFEfQ0qL2Qe8mq4MRtgg8PtOXK3dtx4B2qG%2FpnRD8fb5vwGAcM6h95L4G8jFx%2FsTtQXBE4t%2BFaaDiKCTzlrLlGDQIsFdUpW%2FCJ45lQ1l40nWlfGSX28kZw%2BFB4tVytcaUqBnshQZ64%2B3rcvu%2F4FLa5RoM6pQ4Igkp5AXeYhEyISw37qjGc9g64%2FnNY4RCDbL6IPkyoVXD3CxT6ZYUAhHQqNnRlk5Z%2F%2BBYSDztB1v4TmQ85YDVG3ErQv5HV%2B0n%2BOM%2F8TPxWRlbcz33BJuivvZ3lhg%2FGG2EfiKI3pak7CmB9U%2FoCnKdvKjjqFS0D8rK5erzC5bk3FqRYuN8l3o8eXKPjMTu0Hg3b6BsY6IwtK6SzwY6pgH0AwH3NPvCzkgvbu9C9CFGNPeNTMalRZpQ1wdJ1%2Ft0UktlCc8W8Yo1XMZBKhRU1tN%2FPeREYZwVZoU2xShRzfJ9wuFKftnxG7e2ICafxFrDD2roU1brQ%2FDVgYoDP017n9SsV4OMoK3tDh16AHXnraG39FldGjBLu%2F5wlyDd8NrMRhwdaogTKDsoPmumFymei4Ty%2FSEOzXEPasJoV%2F74CqHK2znJU9p8&X-Amz-Signature=08d0de1a29bcb146d4fa56779750e27dfed49cd9ba8442d1687df26d07bf08e5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y2PVBRP6%2F20260419%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260419T085337Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDkaCXVzLXdlc3QtMiJGMEQCIH%2FfjxYqG28B9Cjn8WGoEL6VXb3GNDPpmHBRUM67PM4cAiAJ05nki3%2B03xUnks5UX8nsIAcRnsJDIoRggfhNuVLoMCr%2FAwgCEAAaDDYzNzQyMzE4MzgwNSIMe9uHxJEx8Lnl5yUIKtwD7gvxzK4qDbeIl9z8AGGT5dqZHWxY%2B4yIwczf6d4B4QTwtfnHhlJJs43L%2BBCt7qtoiQH2eJIxUKLwm28L4TVr%2FHV3lNLT07jcUTx9vBjc%2BdR%2B4zFUCAQyYi9tqJF5jLsRMhiKGVmxdgnQWvPMHVrl9X5Q4C8PmlVQXB11aTMJLTiqm5BgWUWLDCOCRjKOISsEeOOEafiwpsoDKGbgogU5x2oDz13knnFoLTcIwmcPCb8vSU%2Flf7ScnwBs5RcEyKf2sc2Dub4k2q2ujYfBnRz4LHWjFEfQ0qL2Qe8mq4MRtgg8PtOXK3dtx4B2qG%2FpnRD8fb5vwGAcM6h95L4G8jFx%2FsTtQXBE4t%2BFaaDiKCTzlrLlGDQIsFdUpW%2FCJ45lQ1l40nWlfGSX28kZw%2BFB4tVytcaUqBnshQZ64%2B3rcvu%2F4FLa5RoM6pQ4Igkp5AXeYhEyISw37qjGc9g64%2FnNY4RCDbL6IPkyoVXD3CxT6ZYUAhHQqNnRlk5Z%2F%2BBYSDztB1v4TmQ85YDVG3ErQv5HV%2B0n%2BOM%2F8TPxWRlbcz33BJuivvZ3lhg%2FGG2EfiKI3pak7CmB9U%2FoCnKdvKjjqFS0D8rK5erzC5bk3FqRYuN8l3o8eXKPjMTu0Hg3b6BsY6IwtK6SzwY6pgH0AwH3NPvCzkgvbu9C9CFGNPeNTMalRZpQ1wdJ1%2Ft0UktlCc8W8Yo1XMZBKhRU1tN%2FPeREYZwVZoU2xShRzfJ9wuFKftnxG7e2ICafxFrDD2roU1brQ%2FDVgYoDP017n9SsV4OMoK3tDh16AHXnraG39FldGjBLu%2F5wlyDd8NrMRhwdaogTKDsoPmumFymei4Ty%2FSEOzXEPasJoV%2F74CqHK2znJU9p8&X-Amz-Signature=2360594fb4e8b16c7b0aa35724867de9c66d1a5d9c0a465f84bb03d89cdb9a29&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
