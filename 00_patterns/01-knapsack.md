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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BIXZIOC%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCuxuyxNFRTXzQTfo6SfwL5hvTdoH9Lqea9gQ%2Bg%2B0smqwIgMrCKSn6z%2BpGaafdT76LECKQML7p2DIVTScbadggDW%2F0qiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMsnBYYCdvKPmIwkgCrcA%2Fx1n5Jf4RzJ8hFbGOoDTYvPFLk2mCuDgmrRxp8T6W%2FOXUNQ1qyEAURRp%2B78WxAOVKn0Pqk%2FhJS7wKewwpEtoxcJRdPuW%2B%2B17KOyOUe2VAKOZNJ9Zh6OSTvnBxzRV053%2FNOMumsSHc9g7RArPfWuWKEMUcsjAPGQYBdO4enyrB%2FrPXGvZ0fC1VHFkVLlrrJrhVgqYmgau7%2Faq19IQMjSactvi4n%2BCC9O819Ztxh6f0S9p8CRpqTy0FmkpC0UVpjeVwS0Ftbaoiq3So8tkFOnseCjHGebk5Gx7PBW%2BI6NJVCDq5kEIMO%2FXESoD0X09gHbBNtG5TfeWodahRsc73y88%2BaRsTKgVZGAwpjOzWqTedHL2MHygh%2Bpq9suFLOoXpvYonGTNpfFT0AWoV33WvqaxrKpifbjlc%2BeLoKplCdw4Rp46%2Fo7Xsxf7r1dNO5kmZE%2BTmGLoZoSBrPaEkaN9y1c65zO8pg9UUhJdnLgaV4peZjUn7nVKHgbQdWUmQGEU%2FC4Ag5vkAF5Ytz1mhM1YV68wnzSgGqjt8fcTVkrpBSuDkXS%2FjFeSibhC0xHHq9Qdrvh9HipFOE8JQ5Bc0uorBe%2FVDk2MpCgqAlq5U74ZYxjdEGidp04qvCoxUla3qQ3MNzLr8wGOqUBdeP4DoAKHVjzXs8h%2BKGZRFGqTDQd6b0PowQWdxDJGzmDCChF0rFSrcleTXkjcRubPO16OcTKl8P%2B54wTqWNk%2FC5%2F9pmmD%2FANrXNnGWDq4Z3ldz7d%2BuK7yHKOc%2FaNZaPTkO3TrFF6eLIGn9Xz5tm2uNGNBMNkWgjsjt4fnJZQDoktXxXHhLEVFDxHPc8BBM1PvUAi5ljl7xvm6AyWdIyYrTQ3BMhP&X-Amz-Signature=bad6d6ca362b2f9c3c24906bfc7d81bc0493b723d1e514f596e7bdbd12af8c2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BIXZIOC%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCuxuyxNFRTXzQTfo6SfwL5hvTdoH9Lqea9gQ%2Bg%2B0smqwIgMrCKSn6z%2BpGaafdT76LECKQML7p2DIVTScbadggDW%2F0qiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMsnBYYCdvKPmIwkgCrcA%2Fx1n5Jf4RzJ8hFbGOoDTYvPFLk2mCuDgmrRxp8T6W%2FOXUNQ1qyEAURRp%2B78WxAOVKn0Pqk%2FhJS7wKewwpEtoxcJRdPuW%2B%2B17KOyOUe2VAKOZNJ9Zh6OSTvnBxzRV053%2FNOMumsSHc9g7RArPfWuWKEMUcsjAPGQYBdO4enyrB%2FrPXGvZ0fC1VHFkVLlrrJrhVgqYmgau7%2Faq19IQMjSactvi4n%2BCC9O819Ztxh6f0S9p8CRpqTy0FmkpC0UVpjeVwS0Ftbaoiq3So8tkFOnseCjHGebk5Gx7PBW%2BI6NJVCDq5kEIMO%2FXESoD0X09gHbBNtG5TfeWodahRsc73y88%2BaRsTKgVZGAwpjOzWqTedHL2MHygh%2Bpq9suFLOoXpvYonGTNpfFT0AWoV33WvqaxrKpifbjlc%2BeLoKplCdw4Rp46%2Fo7Xsxf7r1dNO5kmZE%2BTmGLoZoSBrPaEkaN9y1c65zO8pg9UUhJdnLgaV4peZjUn7nVKHgbQdWUmQGEU%2FC4Ag5vkAF5Ytz1mhM1YV68wnzSgGqjt8fcTVkrpBSuDkXS%2FjFeSibhC0xHHq9Qdrvh9HipFOE8JQ5Bc0uorBe%2FVDk2MpCgqAlq5U74ZYxjdEGidp04qvCoxUla3qQ3MNzLr8wGOqUBdeP4DoAKHVjzXs8h%2BKGZRFGqTDQd6b0PowQWdxDJGzmDCChF0rFSrcleTXkjcRubPO16OcTKl8P%2B54wTqWNk%2FC5%2F9pmmD%2FANrXNnGWDq4Z3ldz7d%2BuK7yHKOc%2FaNZaPTkO3TrFF6eLIGn9Xz5tm2uNGNBMNkWgjsjt4fnJZQDoktXxXHhLEVFDxHPc8BBM1PvUAi5ljl7xvm6AyWdIyYrTQ3BMhP&X-Amz-Signature=86919476092461869b2cf144a7f11c4b9ded9e0c1b868963f302baeb02ba1e82&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665BIXZIOC%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCuxuyxNFRTXzQTfo6SfwL5hvTdoH9Lqea9gQ%2Bg%2B0smqwIgMrCKSn6z%2BpGaafdT76LECKQML7p2DIVTScbadggDW%2F0qiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMsnBYYCdvKPmIwkgCrcA%2Fx1n5Jf4RzJ8hFbGOoDTYvPFLk2mCuDgmrRxp8T6W%2FOXUNQ1qyEAURRp%2B78WxAOVKn0Pqk%2FhJS7wKewwpEtoxcJRdPuW%2B%2B17KOyOUe2VAKOZNJ9Zh6OSTvnBxzRV053%2FNOMumsSHc9g7RArPfWuWKEMUcsjAPGQYBdO4enyrB%2FrPXGvZ0fC1VHFkVLlrrJrhVgqYmgau7%2Faq19IQMjSactvi4n%2BCC9O819Ztxh6f0S9p8CRpqTy0FmkpC0UVpjeVwS0Ftbaoiq3So8tkFOnseCjHGebk5Gx7PBW%2BI6NJVCDq5kEIMO%2FXESoD0X09gHbBNtG5TfeWodahRsc73y88%2BaRsTKgVZGAwpjOzWqTedHL2MHygh%2Bpq9suFLOoXpvYonGTNpfFT0AWoV33WvqaxrKpifbjlc%2BeLoKplCdw4Rp46%2Fo7Xsxf7r1dNO5kmZE%2BTmGLoZoSBrPaEkaN9y1c65zO8pg9UUhJdnLgaV4peZjUn7nVKHgbQdWUmQGEU%2FC4Ag5vkAF5Ytz1mhM1YV68wnzSgGqjt8fcTVkrpBSuDkXS%2FjFeSibhC0xHHq9Qdrvh9HipFOE8JQ5Bc0uorBe%2FVDk2MpCgqAlq5U74ZYxjdEGidp04qvCoxUla3qQ3MNzLr8wGOqUBdeP4DoAKHVjzXs8h%2BKGZRFGqTDQd6b0PowQWdxDJGzmDCChF0rFSrcleTXkjcRubPO16OcTKl8P%2B54wTqWNk%2FC5%2F9pmmD%2FANrXNnGWDq4Z3ldz7d%2BuK7yHKOc%2FaNZaPTkO3TrFF6eLIGn9Xz5tm2uNGNBMNkWgjsjt4fnJZQDoktXxXHhLEVFDxHPc8BBM1PvUAi5ljl7xvm6AyWdIyYrTQ3BMhP&X-Amz-Signature=5e4bca4c0c0c4cf4d7be57b095cdd7d79e0ae1c6256d78480cda432ced303465&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLM6MQKI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEqLp6hHSiQBkn3vRyzBqO4Qn54rdw75sNGEZT1hMzL8AiEAju1H9Uks8Al%2B1LV53s0hEzDp5S0oEh%2FCDMpBijTH%2FiIqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOMfxPytgenkMozLoSrcA7lAhxLWfyyVji9VcE1nOVbN1hyq1Byd%2B3cQAZJxEEmNS9q2wr2iQAQ0frkHPgDhJC5dn9WpgiJ3cPuAAXxMGVCcDeRloltMPdC02oDnNyepn3hwEfu%2BCIHbFYYWmBFFKEYN3dTHEX0UeXx%2F%2BUocxptcl5wpwhS8i2nsdHrEVGEQsNrHupODs5odUmAXcWhgOeWJ14%2FyChB%2B9TJ4%2BbPwhMWiJA%2FsUFVVNagNjv57zb13LEM0yzDy%2FeUytZITtLL%2BrM3cb0kZn3jV%2BOaNGlsxa80iUVd5OCYvOOa%2FpiCy0RnnxzV%2BXM6M9GlwobUEc4Xg%2BkEfBmRDWTQr4ukcCdpVgxiJMG%2F0bDZGoJqcxN1PtI3LhRJAU6cZBZirE3KZ9Le6Pd8kwt6T7moyPq%2F0l8YWQGFUwRxUFyaNB8aoiWb4Qq1sb5kRGj1B9W3%2BiD83QQxELNYFl3rsC6%2BNUKSog9kLxfnZWr5mR5nOMVueN5y29Mwbpmo7s0duvQy3h%2F13OpLLv3kCtrvEhY%2FKdvgCQJ27YuHwrcpCox05VHzMJHpDYb72MuulCZ%2ByufMFEAWpa7652rQDvXd1Wynf8vXASUap0r2i3J%2Fk%2Bxo0Y1t0zkjwhuyPtSnOkiKKV3BhgtbOMJzLr8wGOqUB1DpxYnEtzmXuJe04Y%2B7VOvwAbM9M6B4djqEe4aNlfg8UxfKovyWnJqGYoajDwcJvXwiWrXKvtdp9iCxny6XLgR66zf0%2FxRZCi2szB7tqDmJ9f%2BvCr%2BkSOwL6MdxzwLf1Skcsx9gwbaZOD6RoP%2FrPaGLY16%2B4qqeflVSh5wzt5mmvBj1LcJNr96ojvh0upU0e4A1lc%2BDXZWV6GPkvo9IrGawGSIMG&X-Amz-Signature=b03475e28f171290515f69c6749189f25508f432153dcf101238b0ea682e0bbc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLM6MQKI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEqLp6hHSiQBkn3vRyzBqO4Qn54rdw75sNGEZT1hMzL8AiEAju1H9Uks8Al%2B1LV53s0hEzDp5S0oEh%2FCDMpBijTH%2FiIqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOMfxPytgenkMozLoSrcA7lAhxLWfyyVji9VcE1nOVbN1hyq1Byd%2B3cQAZJxEEmNS9q2wr2iQAQ0frkHPgDhJC5dn9WpgiJ3cPuAAXxMGVCcDeRloltMPdC02oDnNyepn3hwEfu%2BCIHbFYYWmBFFKEYN3dTHEX0UeXx%2F%2BUocxptcl5wpwhS8i2nsdHrEVGEQsNrHupODs5odUmAXcWhgOeWJ14%2FyChB%2B9TJ4%2BbPwhMWiJA%2FsUFVVNagNjv57zb13LEM0yzDy%2FeUytZITtLL%2BrM3cb0kZn3jV%2BOaNGlsxa80iUVd5OCYvOOa%2FpiCy0RnnxzV%2BXM6M9GlwobUEc4Xg%2BkEfBmRDWTQr4ukcCdpVgxiJMG%2F0bDZGoJqcxN1PtI3LhRJAU6cZBZirE3KZ9Le6Pd8kwt6T7moyPq%2F0l8YWQGFUwRxUFyaNB8aoiWb4Qq1sb5kRGj1B9W3%2BiD83QQxELNYFl3rsC6%2BNUKSog9kLxfnZWr5mR5nOMVueN5y29Mwbpmo7s0duvQy3h%2F13OpLLv3kCtrvEhY%2FKdvgCQJ27YuHwrcpCox05VHzMJHpDYb72MuulCZ%2ByufMFEAWpa7652rQDvXd1Wynf8vXASUap0r2i3J%2Fk%2Bxo0Y1t0zkjwhuyPtSnOkiKKV3BhgtbOMJzLr8wGOqUB1DpxYnEtzmXuJe04Y%2B7VOvwAbM9M6B4djqEe4aNlfg8UxfKovyWnJqGYoajDwcJvXwiWrXKvtdp9iCxny6XLgR66zf0%2FxRZCi2szB7tqDmJ9f%2BvCr%2BkSOwL6MdxzwLf1Skcsx9gwbaZOD6RoP%2FrPaGLY16%2B4qqeflVSh5wzt5mmvBj1LcJNr96ojvh0upU0e4A1lc%2BDXZWV6GPkvo9IrGawGSIMG&X-Amz-Signature=a04abe6bf19ee72dac3394c6334939b2707470618e615c956e2abab5700d5f53&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLM6MQKI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEqLp6hHSiQBkn3vRyzBqO4Qn54rdw75sNGEZT1hMzL8AiEAju1H9Uks8Al%2B1LV53s0hEzDp5S0oEh%2FCDMpBijTH%2FiIqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOMfxPytgenkMozLoSrcA7lAhxLWfyyVji9VcE1nOVbN1hyq1Byd%2B3cQAZJxEEmNS9q2wr2iQAQ0frkHPgDhJC5dn9WpgiJ3cPuAAXxMGVCcDeRloltMPdC02oDnNyepn3hwEfu%2BCIHbFYYWmBFFKEYN3dTHEX0UeXx%2F%2BUocxptcl5wpwhS8i2nsdHrEVGEQsNrHupODs5odUmAXcWhgOeWJ14%2FyChB%2B9TJ4%2BbPwhMWiJA%2FsUFVVNagNjv57zb13LEM0yzDy%2FeUytZITtLL%2BrM3cb0kZn3jV%2BOaNGlsxa80iUVd5OCYvOOa%2FpiCy0RnnxzV%2BXM6M9GlwobUEc4Xg%2BkEfBmRDWTQr4ukcCdpVgxiJMG%2F0bDZGoJqcxN1PtI3LhRJAU6cZBZirE3KZ9Le6Pd8kwt6T7moyPq%2F0l8YWQGFUwRxUFyaNB8aoiWb4Qq1sb5kRGj1B9W3%2BiD83QQxELNYFl3rsC6%2BNUKSog9kLxfnZWr5mR5nOMVueN5y29Mwbpmo7s0duvQy3h%2F13OpLLv3kCtrvEhY%2FKdvgCQJ27YuHwrcpCox05VHzMJHpDYb72MuulCZ%2ByufMFEAWpa7652rQDvXd1Wynf8vXASUap0r2i3J%2Fk%2Bxo0Y1t0zkjwhuyPtSnOkiKKV3BhgtbOMJzLr8wGOqUB1DpxYnEtzmXuJe04Y%2B7VOvwAbM9M6B4djqEe4aNlfg8UxfKovyWnJqGYoajDwcJvXwiWrXKvtdp9iCxny6XLgR66zf0%2FxRZCi2szB7tqDmJ9f%2BvCr%2BkSOwL6MdxzwLf1Skcsx9gwbaZOD6RoP%2FrPaGLY16%2B4qqeflVSh5wzt5mmvBj1LcJNr96ojvh0upU0e4A1lc%2BDXZWV6GPkvo9IrGawGSIMG&X-Amz-Signature=5d1643735b7fd67bd65d368b1a7d83dd54c25c64fdfa74b62948bacb128c3413&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLM6MQKI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043359Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEqLp6hHSiQBkn3vRyzBqO4Qn54rdw75sNGEZT1hMzL8AiEAju1H9Uks8Al%2B1LV53s0hEzDp5S0oEh%2FCDMpBijTH%2FiIqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOMfxPytgenkMozLoSrcA7lAhxLWfyyVji9VcE1nOVbN1hyq1Byd%2B3cQAZJxEEmNS9q2wr2iQAQ0frkHPgDhJC5dn9WpgiJ3cPuAAXxMGVCcDeRloltMPdC02oDnNyepn3hwEfu%2BCIHbFYYWmBFFKEYN3dTHEX0UeXx%2F%2BUocxptcl5wpwhS8i2nsdHrEVGEQsNrHupODs5odUmAXcWhgOeWJ14%2FyChB%2B9TJ4%2BbPwhMWiJA%2FsUFVVNagNjv57zb13LEM0yzDy%2FeUytZITtLL%2BrM3cb0kZn3jV%2BOaNGlsxa80iUVd5OCYvOOa%2FpiCy0RnnxzV%2BXM6M9GlwobUEc4Xg%2BkEfBmRDWTQr4ukcCdpVgxiJMG%2F0bDZGoJqcxN1PtI3LhRJAU6cZBZirE3KZ9Le6Pd8kwt6T7moyPq%2F0l8YWQGFUwRxUFyaNB8aoiWb4Qq1sb5kRGj1B9W3%2BiD83QQxELNYFl3rsC6%2BNUKSog9kLxfnZWr5mR5nOMVueN5y29Mwbpmo7s0duvQy3h%2F13OpLLv3kCtrvEhY%2FKdvgCQJ27YuHwrcpCox05VHzMJHpDYb72MuulCZ%2ByufMFEAWpa7652rQDvXd1Wynf8vXASUap0r2i3J%2Fk%2Bxo0Y1t0zkjwhuyPtSnOkiKKV3BhgtbOMJzLr8wGOqUB1DpxYnEtzmXuJe04Y%2B7VOvwAbM9M6B4djqEe4aNlfg8UxfKovyWnJqGYoajDwcJvXwiWrXKvtdp9iCxny6XLgR66zf0%2FxRZCi2szB7tqDmJ9f%2BvCr%2BkSOwL6MdxzwLf1Skcsx9gwbaZOD6RoP%2FrPaGLY16%2B4qqeflVSh5wzt5mmvBj1LcJNr96ojvh0upU0e4A1lc%2BDXZWV6GPkvo9IrGawGSIMG&X-Amz-Signature=311125f378419bf187e4a4fade29365330cc1a83fa6c67abcc6d7ee4c5136678&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZPJNWYI%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHTrbAdnbwW6NriSG3qc2yOSLytjGTNJdE%2BEnrSpge2lAiAXs1D3lbqBYN%2BFjw66uX34aqQfncR2MQ%2B9SH2x9tYtWSqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMHUB7QJlbb6JsnuQrKtwDXezhv72t08%2BZhTWVXP3IcKRMFYZa8NMKVrcWnuA%2BfxuKrpLk1x0QIIy6EzX5SWi%2BYofrLl6OIgXTKsYhSOZYeVied8Nr6U7BHbTyGk%2Fu7V%2B6jINWG9u9Yzlk1L7RQ334MjJHdcli80FXCFVu29EC%2F%2BL8813GO9s1BWqT4rE306xTYZfuA1pRtqqA5ytN%2Bw6GkTLNY%2Fq4NE6qxeY3%2FvJcb7EPewShp5u8R94X9uITgfM9QeaBZbnrtQ%2FQtetONKTTc5TBGLQPs3Z3xuIbgvUD%2FfW5oYAGNhQScbBkRLtMrDXUw%2BvepsNhbXIKOuq4gIvhhU%2FQ15t2KljWLlrGa9G1AkdGnhrzW5mzD55tzhRGGI1mhqA2bveADS0qth9OZKoB1himbuFRWPVfe0kMFXc631tKjxsACyJRL5zIf%2BVZwMUhgr7NT3Ml9GGx70Sr%2Frm3s0VT46GHfyb9E7NdIQTQj1X67iZD61DdEIKvItzXapm52Hm1AaAb%2FulwCNY1qgeaRbGnsDU9mF8AR%2BIoQubL8dCDNds0KSxIw%2BrYQpjpeblR3ejhfH4KNoAJMDAscg%2BwI8m24d0xSFvI%2F%2FKxUw877Kw7P6XQi7ymWAPedlodkPgIahfN5eIAWEeDfrww9cqvzAY6pgFTAChYqDSsu98esPouiI6SWPHH8Hejc3x3xmBALmyXTiPwBLwCQtPxuMC8P%2FUNIqifgmc%2B77K%2Bvx0Q8Mn6bklS9BcQXLSKClEFavK0DCadAzDx3NKICLDq%2BOGswGpGuSoYGlcFU%2Fgcp6qtKCqhT%2B%2FP2Wg%2BHroAVWQs8AOgngQUEazqDq1aUq%2B%2B1PVochH2Xsag3Oc45BurhgIHtDdcicI1gmeRYbNO&X-Amz-Signature=45dba3c2aa389aa47c2965aa73b30cc1df5fc9297491afbb8ca1c4b74d7c1632&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662DF3GJ7C%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDWK0Ok%2FS%2Bus5%2FdpTqt89965zRpQB3XXYaauki0dKCNTAIhAK5xCchhvNbc%2BJb%2FKGfcriaGnOE7veqdtKv9NjDTUggFKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwcibBsEFIZ0R3yAPEq3ANGNwUOcLno1JDFXoXqAwMgWe1SAVZv8ChQZu9gVgfq4RtL5lY0O%2BywLiUiV1KGgouS0pIPP0hDRR9XeSxVswuwcaM7wZZ8aB7YWRvQ0Z7fTfTwO8QJnGQYhQskYAO4nqqSNacsZUm0cZo6N1EFCymsstSiBAFtukEcL8OoWHnkdBpaFKhSqPkdKcOgCjL3ThEGFjEudTtcdEql1oGtBdbKH%2B89SEXz%2Fxj8Yr6mYuDVwf63SHbXtPngarrY9s0UAfaIR5XEjCZiRe241YFYb%2FC8SOYPTstJVg1XWUXclZXNW9KPmsDCAEsuawZ92FKyqf9c7crYLAqb8m9tmnyZT7C3IUNxbLtw4qOSHoSka5m1fSDR8gOklHQFt5EcCrHvHK9TaTDui2xtmsFMEh1i5fqHwDOmCA9VZjU2ItNZkjczDfT0XOWC%2FYtKDGBdEXIkR%2FkYwb3YM9C0AHrsecqFDMcEdSigPT3LYSMSwDmHVhCaQMjSYaJ07I00nueVLxmKAZ2OLsQn%2FANx2Hbq70Wv9Fok7LJafTLLNiJ4RZ8bm9VLAfCu5RO8moW5lIBYs9yaXa807J4u5qkp1biPAY1RawZeZWSZyO8A%2FJMbzUaiEmBbilxCLdbVsp35xAMfVDCazK%2FMBjqkAc%2BBAZV9CLUH5fmRq2%2FU4yPHAtpd1zlVq5bJ7jTB7NrQVD8YxYqx%2F7gshDTorGJ94PO4GmkWPTpgDWrQTyKLk4YaN0LXMYPgRlvpX2RVvY2AUkv%2FsBrmvQNnDhXnvdHxbIYTr6%2FomnjrO5omY0JoQYVIxhs2CRPKZ60wPEhXeCRaVQtgVY9gmTl4DiM70qHAP1TitqGeTjJEAyV2QU%2FnXZhqSvKu&X-Amz-Signature=df438f15829337d0b06919b9a8b2103bdd87c50a061a43b9d441daa01c845d74&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662DF3GJ7C%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T043400Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDWK0Ok%2FS%2Bus5%2FdpTqt89965zRpQB3XXYaauki0dKCNTAIhAK5xCchhvNbc%2BJb%2FKGfcriaGnOE7veqdtKv9NjDTUggFKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwcibBsEFIZ0R3yAPEq3ANGNwUOcLno1JDFXoXqAwMgWe1SAVZv8ChQZu9gVgfq4RtL5lY0O%2BywLiUiV1KGgouS0pIPP0hDRR9XeSxVswuwcaM7wZZ8aB7YWRvQ0Z7fTfTwO8QJnGQYhQskYAO4nqqSNacsZUm0cZo6N1EFCymsstSiBAFtukEcL8OoWHnkdBpaFKhSqPkdKcOgCjL3ThEGFjEudTtcdEql1oGtBdbKH%2B89SEXz%2Fxj8Yr6mYuDVwf63SHbXtPngarrY9s0UAfaIR5XEjCZiRe241YFYb%2FC8SOYPTstJVg1XWUXclZXNW9KPmsDCAEsuawZ92FKyqf9c7crYLAqb8m9tmnyZT7C3IUNxbLtw4qOSHoSka5m1fSDR8gOklHQFt5EcCrHvHK9TaTDui2xtmsFMEh1i5fqHwDOmCA9VZjU2ItNZkjczDfT0XOWC%2FYtKDGBdEXIkR%2FkYwb3YM9C0AHrsecqFDMcEdSigPT3LYSMSwDmHVhCaQMjSYaJ07I00nueVLxmKAZ2OLsQn%2FANx2Hbq70Wv9Fok7LJafTLLNiJ4RZ8bm9VLAfCu5RO8moW5lIBYs9yaXa807J4u5qkp1biPAY1RawZeZWSZyO8A%2FJMbzUaiEmBbilxCLdbVsp35xAMfVDCazK%2FMBjqkAc%2BBAZV9CLUH5fmRq2%2FU4yPHAtpd1zlVq5bJ7jTB7NrQVD8YxYqx%2F7gshDTorGJ94PO4GmkWPTpgDWrQTyKLk4YaN0LXMYPgRlvpX2RVvY2AUkv%2FsBrmvQNnDhXnvdHxbIYTr6%2FomnjrO5omY0JoQYVIxhs2CRPKZ60wPEhXeCRaVQtgVY9gmTl4DiM70qHAP1TitqGeTjJEAyV2QU%2FnXZhqSvKu&X-Amz-Signature=a81884baced6d9805a3fe3462709c2cea8d4cbd196b61e5d50f09d2c15747fb3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
