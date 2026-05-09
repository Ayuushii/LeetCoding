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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZRB6BAVU%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIBr87toNbxh20Hn7CYo6hvCGTXEBDJLR3w7MRKEG2JI4AiBWVvZx%2BgijS6AXu6SOaot6a%2BVjBPcOcPlAxL7OWuj6hSqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMH3hOdP%2B6AO5WFk92KtwD%2BtSmk8FJLkwNNXR8l900FT9Atg0mIlF0zcTPiYGs2ae3CV2bIMtspXXkO1JeYf8yUIbLFYpzPdfcQ2KSd83Q55In9Ue4gWpJz1hF6uZR%2FTUfxghYW35xLNmnUJ1QKfDkccqjGk%2FXdAfeTb25xQvmWlBkWsK09ElOwtHr%2BNmuNpSy1%2Fj5IypXafAJLJYT9O6PJm%2Ft6CdjhfIKRt8OqjLBPeA9I3QmK2IgSj4a1RvPraWL44qri91ZUNV3yIjKjLvvsr47AnfLUUepkxZd5%2Blg59gZJptOZfTmSl%2FenGznkMOJzbK74DsjLnRCkRADQyTbZU%2Fz7cqsmT2TdrDwNjTvMbQVc9k2Pc9P8omtEs0m6wjy2Ge5OX1Ln%2FGoLRlcUsf8KFA8mlru0pac50y%2F9Xp0CT5ka9irmcXBfFa%2BkPob4nBBRtiRbbHDBxO%2FKZ382vvgMNvRreB9s5oRTR%2BHguN%2FAPgkTL2VXDGagAYst86zpRdZ1H3HxxeyZOSr7Y1N%2FWovimB1f6r%2F1mQkj%2BId8YCy1C2h7VNp1yeMRNov6mW5HbM73KGopW9RMYc2D45EMQmVlgzTYZ5R4IUxKM62MvjICto5pVmyOtuiY%2FXVjFiyswO8mICbGsTRfCE8rnEw1tf7zwY6pgERv0thiwJX8AHCpQmKr5OeZnHcjQxnSI6PtFqsJi5nsGeQyNA%2Fibt2zaGEGd6oYGp4DRXxfGmDaifOqDcijkz841TlVY42xvSHqsffcJzFxp%2FjEDgHuGyEhTa%2BbQjnNTRRXR19jN63MajMEx%2FgUxshFQfqw03ZEIraG4lMlTrRdf0lFq3ecVGLcM3Gz1hQD39zhLjsVu6GiQoH9BvsrAGFZoNgCH0V&X-Amz-Signature=332d34baef1cb7ebe1cf372cd9ce85d3eca316c013bc5bc1fcdbb1a0cb15b8e6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZRB6BAVU%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIBr87toNbxh20Hn7CYo6hvCGTXEBDJLR3w7MRKEG2JI4AiBWVvZx%2BgijS6AXu6SOaot6a%2BVjBPcOcPlAxL7OWuj6hSqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMH3hOdP%2B6AO5WFk92KtwD%2BtSmk8FJLkwNNXR8l900FT9Atg0mIlF0zcTPiYGs2ae3CV2bIMtspXXkO1JeYf8yUIbLFYpzPdfcQ2KSd83Q55In9Ue4gWpJz1hF6uZR%2FTUfxghYW35xLNmnUJ1QKfDkccqjGk%2FXdAfeTb25xQvmWlBkWsK09ElOwtHr%2BNmuNpSy1%2Fj5IypXafAJLJYT9O6PJm%2Ft6CdjhfIKRt8OqjLBPeA9I3QmK2IgSj4a1RvPraWL44qri91ZUNV3yIjKjLvvsr47AnfLUUepkxZd5%2Blg59gZJptOZfTmSl%2FenGznkMOJzbK74DsjLnRCkRADQyTbZU%2Fz7cqsmT2TdrDwNjTvMbQVc9k2Pc9P8omtEs0m6wjy2Ge5OX1Ln%2FGoLRlcUsf8KFA8mlru0pac50y%2F9Xp0CT5ka9irmcXBfFa%2BkPob4nBBRtiRbbHDBxO%2FKZ382vvgMNvRreB9s5oRTR%2BHguN%2FAPgkTL2VXDGagAYst86zpRdZ1H3HxxeyZOSr7Y1N%2FWovimB1f6r%2F1mQkj%2BId8YCy1C2h7VNp1yeMRNov6mW5HbM73KGopW9RMYc2D45EMQmVlgzTYZ5R4IUxKM62MvjICto5pVmyOtuiY%2FXVjFiyswO8mICbGsTRfCE8rnEw1tf7zwY6pgERv0thiwJX8AHCpQmKr5OeZnHcjQxnSI6PtFqsJi5nsGeQyNA%2Fibt2zaGEGd6oYGp4DRXxfGmDaifOqDcijkz841TlVY42xvSHqsffcJzFxp%2FjEDgHuGyEhTa%2BbQjnNTRRXR19jN63MajMEx%2FgUxshFQfqw03ZEIraG4lMlTrRdf0lFq3ecVGLcM3Gz1hQD39zhLjsVu6GiQoH9BvsrAGFZoNgCH0V&X-Amz-Signature=83eacd7d93e58371b84327d9022f9241055f60c2dc954b35a4e336907690dbc9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZRB6BAVU%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIBr87toNbxh20Hn7CYo6hvCGTXEBDJLR3w7MRKEG2JI4AiBWVvZx%2BgijS6AXu6SOaot6a%2BVjBPcOcPlAxL7OWuj6hSqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMH3hOdP%2B6AO5WFk92KtwD%2BtSmk8FJLkwNNXR8l900FT9Atg0mIlF0zcTPiYGs2ae3CV2bIMtspXXkO1JeYf8yUIbLFYpzPdfcQ2KSd83Q55In9Ue4gWpJz1hF6uZR%2FTUfxghYW35xLNmnUJ1QKfDkccqjGk%2FXdAfeTb25xQvmWlBkWsK09ElOwtHr%2BNmuNpSy1%2Fj5IypXafAJLJYT9O6PJm%2Ft6CdjhfIKRt8OqjLBPeA9I3QmK2IgSj4a1RvPraWL44qri91ZUNV3yIjKjLvvsr47AnfLUUepkxZd5%2Blg59gZJptOZfTmSl%2FenGznkMOJzbK74DsjLnRCkRADQyTbZU%2Fz7cqsmT2TdrDwNjTvMbQVc9k2Pc9P8omtEs0m6wjy2Ge5OX1Ln%2FGoLRlcUsf8KFA8mlru0pac50y%2F9Xp0CT5ka9irmcXBfFa%2BkPob4nBBRtiRbbHDBxO%2FKZ382vvgMNvRreB9s5oRTR%2BHguN%2FAPgkTL2VXDGagAYst86zpRdZ1H3HxxeyZOSr7Y1N%2FWovimB1f6r%2F1mQkj%2BId8YCy1C2h7VNp1yeMRNov6mW5HbM73KGopW9RMYc2D45EMQmVlgzTYZ5R4IUxKM62MvjICto5pVmyOtuiY%2FXVjFiyswO8mICbGsTRfCE8rnEw1tf7zwY6pgERv0thiwJX8AHCpQmKr5OeZnHcjQxnSI6PtFqsJi5nsGeQyNA%2Fibt2zaGEGd6oYGp4DRXxfGmDaifOqDcijkz841TlVY42xvSHqsffcJzFxp%2FjEDgHuGyEhTa%2BbQjnNTRRXR19jN63MajMEx%2FgUxshFQfqw03ZEIraG4lMlTrRdf0lFq3ecVGLcM3Gz1hQD39zhLjsVu6GiQoH9BvsrAGFZoNgCH0V&X-Amz-Signature=6534c68e786f45607388b7457fba3e90fac1b35fd4e7d1a39dd3fbd941f7de62&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665USEVOXR%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDGFWL%2FojoM%2FcWNDJI1hzzdpKNEte5GHRUj4q8Yrz2lbgIhAPR3qapdZpOPzMT52QgEs5mbHDyqS4chg%2FXmUyBmi2n9KogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy%2BBCutlARcloEfpS8q3APDCOhL46%2F1Lx7C3VFs%2BHMBeSAAjbtWmMoUm4zZ2p85wYcR8iXYccsmekBfhIwWZDz79LXO7X4afaBg5nNj7D%2FheV9VnW63IPEz1yfXlSWLeY6tkvoAuAGGFs8AIrfT5jZ0Vi0lo1sshGBzuf28ufyhpqcdrWOJQ%2BzOxjjxRfTXmo1dTSJ9yWrKKGuuXIm0iZn4YueBvTgcM03hKGWzbKG2UkU6TO3a11UnwaACVZv2arFowXdSE62XN9ud4ZtoOsWdzrD1%2FfdqYgOBuZQZhESM4MrNbfDIqToAC7ny0%2B7U1tZ5nRwrXAiH%2B5xkYb1PAm%2BOa%2FpxkwtdZ9Oz8FuCVKmJgg%2Bp%2BHpON1j0mIbGAwFb727OXB2%2FHYiIa0CAjnQdNA%2FQbHdHrj%2BAAvLQxc3yKHlK7BSq30oSubCXL3R7oNHlYZj6BqpPpf51vf4id98Uaw8ZBMyGr9q9yNITFX3J%2BRa3ICBVHgPH4sfYHKmm7ndxuLKR2sAwdyVGJmKk5uxuIhIFMOj%2FoEdWjqJoPxmQHQSjz8A1PHm9%2FO%2FdMzSmVTnofPuoQfBON1GXpcYhP4SpLQBoGHqRLbzPF3onK92bBeIZmZJbMTZzBsckoTI5GlQRCTCTbaHMdgfoGJWiPDDI2PvPBjqkARVtnkR2BU9kwDRYPGHGY8%2FaGCMFqqCS5fQaBuOOQ8QoUOm%2B45UHH3b6tDj15B%2BYwkEnA0i%2B5rvIcgaKMppKe%2BmPhxkAkJxbXBAmPLorgOVioBO4xCrTUwi%2FRviQIpDhHedQuZSi1yZrMWbfpeWvvvWlYP9emgxAj4o6u8nqiWvCX6Zh01sqe1BrklQLmKiJntftXVaecqhFScuizYRNHzpTRecU&X-Amz-Signature=e552bfc6b71ee6057013933c615632d2844d79abc8b35115e89136bc0d6170b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665USEVOXR%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDGFWL%2FojoM%2FcWNDJI1hzzdpKNEte5GHRUj4q8Yrz2lbgIhAPR3qapdZpOPzMT52QgEs5mbHDyqS4chg%2FXmUyBmi2n9KogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy%2BBCutlARcloEfpS8q3APDCOhL46%2F1Lx7C3VFs%2BHMBeSAAjbtWmMoUm4zZ2p85wYcR8iXYccsmekBfhIwWZDz79LXO7X4afaBg5nNj7D%2FheV9VnW63IPEz1yfXlSWLeY6tkvoAuAGGFs8AIrfT5jZ0Vi0lo1sshGBzuf28ufyhpqcdrWOJQ%2BzOxjjxRfTXmo1dTSJ9yWrKKGuuXIm0iZn4YueBvTgcM03hKGWzbKG2UkU6TO3a11UnwaACVZv2arFowXdSE62XN9ud4ZtoOsWdzrD1%2FfdqYgOBuZQZhESM4MrNbfDIqToAC7ny0%2B7U1tZ5nRwrXAiH%2B5xkYb1PAm%2BOa%2FpxkwtdZ9Oz8FuCVKmJgg%2Bp%2BHpON1j0mIbGAwFb727OXB2%2FHYiIa0CAjnQdNA%2FQbHdHrj%2BAAvLQxc3yKHlK7BSq30oSubCXL3R7oNHlYZj6BqpPpf51vf4id98Uaw8ZBMyGr9q9yNITFX3J%2BRa3ICBVHgPH4sfYHKmm7ndxuLKR2sAwdyVGJmKk5uxuIhIFMOj%2FoEdWjqJoPxmQHQSjz8A1PHm9%2FO%2FdMzSmVTnofPuoQfBON1GXpcYhP4SpLQBoGHqRLbzPF3onK92bBeIZmZJbMTZzBsckoTI5GlQRCTCTbaHMdgfoGJWiPDDI2PvPBjqkARVtnkR2BU9kwDRYPGHGY8%2FaGCMFqqCS5fQaBuOOQ8QoUOm%2B45UHH3b6tDj15B%2BYwkEnA0i%2B5rvIcgaKMppKe%2BmPhxkAkJxbXBAmPLorgOVioBO4xCrTUwi%2FRviQIpDhHedQuZSi1yZrMWbfpeWvvvWlYP9emgxAj4o6u8nqiWvCX6Zh01sqe1BrklQLmKiJntftXVaecqhFScuizYRNHzpTRecU&X-Amz-Signature=27347017e931c667ceac410980f00b90927aa4e82ee03170c6371d36370d47dc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665USEVOXR%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDGFWL%2FojoM%2FcWNDJI1hzzdpKNEte5GHRUj4q8Yrz2lbgIhAPR3qapdZpOPzMT52QgEs5mbHDyqS4chg%2FXmUyBmi2n9KogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy%2BBCutlARcloEfpS8q3APDCOhL46%2F1Lx7C3VFs%2BHMBeSAAjbtWmMoUm4zZ2p85wYcR8iXYccsmekBfhIwWZDz79LXO7X4afaBg5nNj7D%2FheV9VnW63IPEz1yfXlSWLeY6tkvoAuAGGFs8AIrfT5jZ0Vi0lo1sshGBzuf28ufyhpqcdrWOJQ%2BzOxjjxRfTXmo1dTSJ9yWrKKGuuXIm0iZn4YueBvTgcM03hKGWzbKG2UkU6TO3a11UnwaACVZv2arFowXdSE62XN9ud4ZtoOsWdzrD1%2FfdqYgOBuZQZhESM4MrNbfDIqToAC7ny0%2B7U1tZ5nRwrXAiH%2B5xkYb1PAm%2BOa%2FpxkwtdZ9Oz8FuCVKmJgg%2Bp%2BHpON1j0mIbGAwFb727OXB2%2FHYiIa0CAjnQdNA%2FQbHdHrj%2BAAvLQxc3yKHlK7BSq30oSubCXL3R7oNHlYZj6BqpPpf51vf4id98Uaw8ZBMyGr9q9yNITFX3J%2BRa3ICBVHgPH4sfYHKmm7ndxuLKR2sAwdyVGJmKk5uxuIhIFMOj%2FoEdWjqJoPxmQHQSjz8A1PHm9%2FO%2FdMzSmVTnofPuoQfBON1GXpcYhP4SpLQBoGHqRLbzPF3onK92bBeIZmZJbMTZzBsckoTI5GlQRCTCTbaHMdgfoGJWiPDDI2PvPBjqkARVtnkR2BU9kwDRYPGHGY8%2FaGCMFqqCS5fQaBuOOQ8QoUOm%2B45UHH3b6tDj15B%2BYwkEnA0i%2B5rvIcgaKMppKe%2BmPhxkAkJxbXBAmPLorgOVioBO4xCrTUwi%2FRviQIpDhHedQuZSi1yZrMWbfpeWvvvWlYP9emgxAj4o6u8nqiWvCX6Zh01sqe1BrklQLmKiJntftXVaecqhFScuizYRNHzpTRecU&X-Amz-Signature=d3c91723aaeafccabe60684438a0230f1296861c3f5d22f05cd66c2a6226b0e7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665USEVOXR%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQDGFWL%2FojoM%2FcWNDJI1hzzdpKNEte5GHRUj4q8Yrz2lbgIhAPR3qapdZpOPzMT52QgEs5mbHDyqS4chg%2FXmUyBmi2n9KogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy%2BBCutlARcloEfpS8q3APDCOhL46%2F1Lx7C3VFs%2BHMBeSAAjbtWmMoUm4zZ2p85wYcR8iXYccsmekBfhIwWZDz79LXO7X4afaBg5nNj7D%2FheV9VnW63IPEz1yfXlSWLeY6tkvoAuAGGFs8AIrfT5jZ0Vi0lo1sshGBzuf28ufyhpqcdrWOJQ%2BzOxjjxRfTXmo1dTSJ9yWrKKGuuXIm0iZn4YueBvTgcM03hKGWzbKG2UkU6TO3a11UnwaACVZv2arFowXdSE62XN9ud4ZtoOsWdzrD1%2FfdqYgOBuZQZhESM4MrNbfDIqToAC7ny0%2B7U1tZ5nRwrXAiH%2B5xkYb1PAm%2BOa%2FpxkwtdZ9Oz8FuCVKmJgg%2Bp%2BHpON1j0mIbGAwFb727OXB2%2FHYiIa0CAjnQdNA%2FQbHdHrj%2BAAvLQxc3yKHlK7BSq30oSubCXL3R7oNHlYZj6BqpPpf51vf4id98Uaw8ZBMyGr9q9yNITFX3J%2BRa3ICBVHgPH4sfYHKmm7ndxuLKR2sAwdyVGJmKk5uxuIhIFMOj%2FoEdWjqJoPxmQHQSjz8A1PHm9%2FO%2FdMzSmVTnofPuoQfBON1GXpcYhP4SpLQBoGHqRLbzPF3onK92bBeIZmZJbMTZzBsckoTI5GlQRCTCTbaHMdgfoGJWiPDDI2PvPBjqkARVtnkR2BU9kwDRYPGHGY8%2FaGCMFqqCS5fQaBuOOQ8QoUOm%2B45UHH3b6tDj15B%2BYwkEnA0i%2B5rvIcgaKMppKe%2BmPhxkAkJxbXBAmPLorgOVioBO4xCrTUwi%2FRviQIpDhHedQuZSi1yZrMWbfpeWvvvWlYP9emgxAj4o6u8nqiWvCX6Zh01sqe1BrklQLmKiJntftXVaecqhFScuizYRNHzpTRecU&X-Amz-Signature=f84bc73a684634abe5a700d2dc62e681bb6bb68a059a308ba7f93e3eb6f09746&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCQOOG3V%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIAWvt6e4r1XCK128oqBebnC6DxYGQAt1STR7ofZjPH0rAiA6f5gDVuY2kUDcb7%2FFbm8CgfCTR13qqUF9Oyppb6K7BSqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMU%2BLSlrLFu%2FlfAnUVKtwDb2cJY1kq%2FjM7URhF9hKzghFiybqlwaz7PGFtdEjYDOnAgiOw8EVeTBnyaqTBMC3akA7tRfuAW9NyR1iDHIkKssperILxcn6%2BmT%2FyxE28IjqBUepeKRoadxZUlgwVatLBbBqdvCsvlSkPpxOwYaCfMn7TtRMnqxC0YL7GxplbRqhj5wpPOymZJoSz6IXFVfjCrvAgaJWemPjrWVGMSOvVtXiwJcTszjk5LSON2HeCb20uIcOZKYG%2Fk0XJ2ogX5ditiCx9HAeKdVo2RwTdqCiAu2JrN1OHxzzHn3imuhttn4p2v607%2FaHv4DaGbgeiHXoJvELWc1VGwSTfXR6rapHUwI5SGYj4uYQXKLuEyeq48llMVsoPSoS6Uhaw6nhYk%2FiuXKYVMbtrM3thEE9vItyRWrsWMKZAX2Vic%2BVw4Lv6wCwlYO3XVFu1K9SUCHTHFgYREsTyH3DSANlYiOFEBDpcyiOml%2BygdyLStd%2Bt%2Fek0Cy7Q9Bww%2BiBBzfvZ1XSIFjH8dE63XfFTIc41TEosp6NjIBwhSMLWwvmTU%2BsbPkvaKSICacRf4ZRplaozU%2BuyVraKf3d0kfjlxyHnv3xQ2MUlbKdWaX2ZzH6e7exqiUFa6LuJyT6DIN20O3%2FgE3cwx9b7zwY6pgEcgJ4sBh6KEUC0KLXj3Z3RoKYUX3%2FxXYi2FZ%2BzgLhrPvnKJUlM7AdJR%2FbfbSfxw8a9Mn3p%2F1HmCDnczAAdKVjLksO%2FeDfjq4WAjeyUOn3a%2F%2BWS%2B9TZUUpprCKobRpwTEcO5%2Fp8MjVP16c%2FEnaQtFspJmaFC%2BtmkktnHJdcufJ71JOGaczRA42ItLDhyQU34J4Q4mThVQmYOL1A9mJGlHvo%2BNoN%2BV2T&X-Amz-Signature=c97b7e50f02bc3f170463dbcf7c9cbec30b597f77834af6da15dcfb5417df7c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZSF4OLI%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQC8XVE34UHzGSBLYdM5ow0HNp%2Bx8H%2Bqo04WsWspJ2MpkQIgWL8MAbDqzOTTAk1%2Fd89THWglAX4ykc%2BJk48CA5kuHrsqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPaV836H9AKzsU%2BA5ircAxTYP%2FtQenFI5cdnkDYxcAUgSi8nnrkF%2FDApj7EtFqx9tdDg9CmegdCO2lq8%2Fdl4Vj6zYGe2Se12taP%2Ba%2FYtBM2wUh%2BZt1oOWQxXDbAxF0ytvI2s1RINUy837LxIFRPq0G1rF1ZV11YD8AsqcvxedNYo6yxc8cIwi8t4hNMFvV8%2Fa%2FNIaIy3IDz6qmru2SfxjNv1bGEi%2FflzlxDUo36uEENajCu8ifSddCcccrsOvUmBIVbZOqepnuSz36Z%2Ff17Fbprk4JgAGeX6zISw6QC6TK%2BtpOnnlL1KfXKVW0rnYl2GNzzcRHviiaDp59XTUh8UuRCnKq0MIEQauzdROyK74CIB3xgJtCcxnspZ36r2dzAtuT9wIvj445s2ZDZTRQznoVCm0FuLm0sThcrX6qcLSn5fiIQR%2FHRgA%2FMrX4bT%2BMJrACzI%2FzS5BB0aBFrek6Zh7NgAoCLiWDNiWy%2F5%2FG7gaGIDZRu1jRdsXIXRcLLmgDyHsOHFcxGvLwa1W1GQwEfUFXmSGy7MI9h4FikVFijEXV%2FMF%2FG3y8lnP5sTtZDqAHZ5lBGgKK%2FgqWFJKwmta6z3XC%2F5i6Y1VrxaPr26kCRPihTRllO4SIi00Kb04dTlY1r0QhEiPoJyPWll6%2BLmMKTX%2B88GOqUBwseAGKsWvg6LwUuvdSdchbeI6ScCEeFLsuD99qR3N9XolkbZ7FPOwzrGlAc%2B%2F%2BYHcj%2F5FEHh8iIGxYGaMFh8Gw4mxZxtQC8gUpcLyH7BerXqwknMRlJ6LcgA9s%2FpgwlWCcz0DDa0EPHIs2cUNL1gPLlFoIMGJS%2FkciZ4wAXci8zY57rl4kVH6t9R8lhe2v4zAXEt9lprMrO3qzAQKNpoINABwoy%2F&X-Amz-Signature=a12b52bfa4f76c0aab671f23d38fee7ea706498ab8a3f5e044ad9b3be34292c5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RZSF4OLI%2F20260509%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260509T091853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQC8XVE34UHzGSBLYdM5ow0HNp%2Bx8H%2Bqo04WsWspJ2MpkQIgWL8MAbDqzOTTAk1%2Fd89THWglAX4ykc%2BJk48CA5kuHrsqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPaV836H9AKzsU%2BA5ircAxTYP%2FtQenFI5cdnkDYxcAUgSi8nnrkF%2FDApj7EtFqx9tdDg9CmegdCO2lq8%2Fdl4Vj6zYGe2Se12taP%2Ba%2FYtBM2wUh%2BZt1oOWQxXDbAxF0ytvI2s1RINUy837LxIFRPq0G1rF1ZV11YD8AsqcvxedNYo6yxc8cIwi8t4hNMFvV8%2Fa%2FNIaIy3IDz6qmru2SfxjNv1bGEi%2FflzlxDUo36uEENajCu8ifSddCcccrsOvUmBIVbZOqepnuSz36Z%2Ff17Fbprk4JgAGeX6zISw6QC6TK%2BtpOnnlL1KfXKVW0rnYl2GNzzcRHviiaDp59XTUh8UuRCnKq0MIEQauzdROyK74CIB3xgJtCcxnspZ36r2dzAtuT9wIvj445s2ZDZTRQznoVCm0FuLm0sThcrX6qcLSn5fiIQR%2FHRgA%2FMrX4bT%2BMJrACzI%2FzS5BB0aBFrek6Zh7NgAoCLiWDNiWy%2F5%2FG7gaGIDZRu1jRdsXIXRcLLmgDyHsOHFcxGvLwa1W1GQwEfUFXmSGy7MI9h4FikVFijEXV%2FMF%2FG3y8lnP5sTtZDqAHZ5lBGgKK%2FgqWFJKwmta6z3XC%2F5i6Y1VrxaPr26kCRPihTRllO4SIi00Kb04dTlY1r0QhEiPoJyPWll6%2BLmMKTX%2B88GOqUBwseAGKsWvg6LwUuvdSdchbeI6ScCEeFLsuD99qR3N9XolkbZ7FPOwzrGlAc%2B%2F%2BYHcj%2F5FEHh8iIGxYGaMFh8Gw4mxZxtQC8gUpcLyH7BerXqwknMRlJ6LcgA9s%2FpgwlWCcz0DDa0EPHIs2cUNL1gPLlFoIMGJS%2FkciZ4wAXci8zY57rl4kVH6t9R8lhe2v4zAXEt9lprMrO3qzAQKNpoINABwoy%2F&X-Amz-Signature=6c207561e5b4ecc310b9fcdb81e7aa1059b694920f4c3474c484399cd14cd422&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
