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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRM3MZNN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDgL9GOem7g6bniTTf%2B6qICnE%2FnX5E6zpH3dIQrJCIzLAiAt68Do3A%2BEaTMSghOHYuoBe1h9XXiBaQBKPVueoCHufSqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0nGUxBkVpgkYkSVIKtwDDjoeQlmcse5%2BcRxmxtuuteQRrjpD5XkXeJlqqN%2Fu1vCAM5h0kGu6rt9Ds5wSAsW31YsT9UpeIfYaqbC4PPD2VUWWY8%2FrG%2FsMevGGoHtiMioxF57g9aBU6G0bVLqqk2DTi1u8NORTH5NL9GpZC1YoM8nYaEFu1eXoWnVHJ5jSpA0%2FFCphXl91UwfoQkd%2FmdxHTy9t%2FG9wrO0BBCcTIlS0E%2B0hKZyT%2BoDOgfwa555k8NiesH1o2rK%2Bjo2D7G1xOD01pvJRNGPBQ%2B0d8HQRCA5ql7L30WC%2B%2BdvdeA3apfwMzw2m%2FioaMmalfWjA9Q9o2MSrQd7U0VcpjX4BiIG40IUEoFyOgKgUIQlHWJEfiCyB%2FbJfUgYSGr%2FWi4gVtB3zQY9HHCXrmd1wQe1e8hmTXNJHTRDvF7GNdS4BJkSO1KwUsRNz%2BX3F7VjVNla%2Bzrz%2FvNZ5TdAmpLTMeD9csKue5FtzkiWozGuEHan%2B%2BpdYFGIRKl8BZDqLL1CXzLfxX511TJR1VpzMcNr0decx06YJKRtm59Xvjcarw2o5cMq%2FQvu95edRYYS0yJlQXNuqDjbvc5qVFWvBEgjQj0dfrIOU%2Bzv1aogzQHqK2dKPxgdk%2FKDKLK4yx8fyqLpijF%2F9Upcw7ZCB0AY6pgFCRGd7r4ojIyzio4HI7Ix%2BRbOt7%2B8SRainQacFj%2Bf4noE2prI3kFDTPJBDSLgAqEEjBLTn%2FJEXxrMdiZ3GoiV1atp756RKslTcUcYyFD0CGTL5NeTuLMHvaRXTkn%2B0TE23HoKlTBpHIPdD4A6RHtMOwuat9qMF3ijRGN6TL%2BSYiN8xqatX2O31Rx%2FHyTpLKWK%2FgDjYJBoInSMAA5r5xey%2FmdN4%2Faax&X-Amz-Signature=d9a0a791f2561d8d276f1390a8199858b425cd33ea9ac3edc5b152d51a8a7add&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRM3MZNN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDgL9GOem7g6bniTTf%2B6qICnE%2FnX5E6zpH3dIQrJCIzLAiAt68Do3A%2BEaTMSghOHYuoBe1h9XXiBaQBKPVueoCHufSqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0nGUxBkVpgkYkSVIKtwDDjoeQlmcse5%2BcRxmxtuuteQRrjpD5XkXeJlqqN%2Fu1vCAM5h0kGu6rt9Ds5wSAsW31YsT9UpeIfYaqbC4PPD2VUWWY8%2FrG%2FsMevGGoHtiMioxF57g9aBU6G0bVLqqk2DTi1u8NORTH5NL9GpZC1YoM8nYaEFu1eXoWnVHJ5jSpA0%2FFCphXl91UwfoQkd%2FmdxHTy9t%2FG9wrO0BBCcTIlS0E%2B0hKZyT%2BoDOgfwa555k8NiesH1o2rK%2Bjo2D7G1xOD01pvJRNGPBQ%2B0d8HQRCA5ql7L30WC%2B%2BdvdeA3apfwMzw2m%2FioaMmalfWjA9Q9o2MSrQd7U0VcpjX4BiIG40IUEoFyOgKgUIQlHWJEfiCyB%2FbJfUgYSGr%2FWi4gVtB3zQY9HHCXrmd1wQe1e8hmTXNJHTRDvF7GNdS4BJkSO1KwUsRNz%2BX3F7VjVNla%2Bzrz%2FvNZ5TdAmpLTMeD9csKue5FtzkiWozGuEHan%2B%2BpdYFGIRKl8BZDqLL1CXzLfxX511TJR1VpzMcNr0decx06YJKRtm59Xvjcarw2o5cMq%2FQvu95edRYYS0yJlQXNuqDjbvc5qVFWvBEgjQj0dfrIOU%2Bzv1aogzQHqK2dKPxgdk%2FKDKLK4yx8fyqLpijF%2F9Upcw7ZCB0AY6pgFCRGd7r4ojIyzio4HI7Ix%2BRbOt7%2B8SRainQacFj%2Bf4noE2prI3kFDTPJBDSLgAqEEjBLTn%2FJEXxrMdiZ3GoiV1atp756RKslTcUcYyFD0CGTL5NeTuLMHvaRXTkn%2B0TE23HoKlTBpHIPdD4A6RHtMOwuat9qMF3ijRGN6TL%2BSYiN8xqatX2O31Rx%2FHyTpLKWK%2FgDjYJBoInSMAA5r5xey%2FmdN4%2Faax&X-Amz-Signature=fa616f6994951b536347de6b9b4487ca05d517e8841943be3d9a9816563f0f7e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SRM3MZNN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDgL9GOem7g6bniTTf%2B6qICnE%2FnX5E6zpH3dIQrJCIzLAiAt68Do3A%2BEaTMSghOHYuoBe1h9XXiBaQBKPVueoCHufSqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0nGUxBkVpgkYkSVIKtwDDjoeQlmcse5%2BcRxmxtuuteQRrjpD5XkXeJlqqN%2Fu1vCAM5h0kGu6rt9Ds5wSAsW31YsT9UpeIfYaqbC4PPD2VUWWY8%2FrG%2FsMevGGoHtiMioxF57g9aBU6G0bVLqqk2DTi1u8NORTH5NL9GpZC1YoM8nYaEFu1eXoWnVHJ5jSpA0%2FFCphXl91UwfoQkd%2FmdxHTy9t%2FG9wrO0BBCcTIlS0E%2B0hKZyT%2BoDOgfwa555k8NiesH1o2rK%2Bjo2D7G1xOD01pvJRNGPBQ%2B0d8HQRCA5ql7L30WC%2B%2BdvdeA3apfwMzw2m%2FioaMmalfWjA9Q9o2MSrQd7U0VcpjX4BiIG40IUEoFyOgKgUIQlHWJEfiCyB%2FbJfUgYSGr%2FWi4gVtB3zQY9HHCXrmd1wQe1e8hmTXNJHTRDvF7GNdS4BJkSO1KwUsRNz%2BX3F7VjVNla%2Bzrz%2FvNZ5TdAmpLTMeD9csKue5FtzkiWozGuEHan%2B%2BpdYFGIRKl8BZDqLL1CXzLfxX511TJR1VpzMcNr0decx06YJKRtm59Xvjcarw2o5cMq%2FQvu95edRYYS0yJlQXNuqDjbvc5qVFWvBEgjQj0dfrIOU%2Bzv1aogzQHqK2dKPxgdk%2FKDKLK4yx8fyqLpijF%2F9Upcw7ZCB0AY6pgFCRGd7r4ojIyzio4HI7Ix%2BRbOt7%2B8SRainQacFj%2Bf4noE2prI3kFDTPJBDSLgAqEEjBLTn%2FJEXxrMdiZ3GoiV1atp756RKslTcUcYyFD0CGTL5NeTuLMHvaRXTkn%2B0TE23HoKlTBpHIPdD4A6RHtMOwuat9qMF3ijRGN6TL%2BSYiN8xqatX2O31Rx%2FHyTpLKWK%2FgDjYJBoInSMAA5r5xey%2FmdN4%2Faax&X-Amz-Signature=27c1b031876268cffe544e467cc02f688ec1b62bda89f45ed5abc4d871db2772&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLXBUCCN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQD8dt7p1LUgq685oaJU%2FfUjQ555C1y0yhmUNZ%2BPu3Ok9AIgAjR1himSrJq8ZcARjyNyuaVzvxNxqmw%2FL5LNsWwaa54qiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK1fdB%2BDCo8aGO1deyrcA4vzUOLwhP4sokkGeKy5ZJPncKagIib5TvztIhfGFJ1XBLfSvSpy7Jm5Q4MojGQjgswFWbuKhO5lGWLxv6Nsjn2Wk%2BaMRqQuhX7yp6WPbnnchA6pV0Lv3z5al5sK8rwmS9YR92%2F2cgEpH3r8wm1RvaKQP8majUl6FOmi0P6INPdoiW3VSVGGpj2ZFPdVR%2F%2BXL2nDo27tF8k8d4I0eB9553GOmYZPzkTjWbAg4ZjQ5ULMzYPY9gvqMAxwBmyiO5AJMPWerJ5jd%2BNb0IzizHWksj2s13iHO8ZHnzBh4RyxhVVD1k3IY7g46mGlUSu9oVBmtX06X%2BkaKwLdKwJwHSpjDUTeHAwWDMjPive6OABtB9KZ67mRQ0efZQSlfBXj4WaLEXtAbD%2F2zPeI9segPNYczT2JH6sX9X5a9cMe%2F9wA0xy9AhCLy8voe3RBpGTxr4UFQfsr6FZ1NmFzH1fK8RY%2F7Q8cRLi3zE873O366kdoc4k5NnQC605wsqYj65gVX5Q1YKY4pjD61eS9S48KtGSR3bEw2nAlKjvfuYeghlx8CfwrnKq69pAyeAF8PsGL51gNR5JcTsIufjfsvIOcymjtalY2Ok85O5I0sgszkGjWx1rmGKDJ0DQUHigmhBXgMNqRgdAGOqUByGRZqB%2FBYIv8v6VIRP96l%2F4WsSYBSBPWjzcCCbMDCnvETs6s%2FVezlvmbKqizE3IqAg6F9mW40oxDpRviaG4ti9Akqd07xfFbTQUzscOLZu5V7nsgt57%2FgBS5kcOmcWSjnxvChQD9xeutrWP1sNZUzkV3O86s%2BDtuPvqlriBKfpiAODqZLf9FOXp1uQjJj%2BlreNXe6xRpi4u5LnHMGUCDaQJQdthf&X-Amz-Signature=7a727ebfd30a66a56161d87d7e53f992e65561094486bb9a4c7b08d75e64dc1a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLXBUCCN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQD8dt7p1LUgq685oaJU%2FfUjQ555C1y0yhmUNZ%2BPu3Ok9AIgAjR1himSrJq8ZcARjyNyuaVzvxNxqmw%2FL5LNsWwaa54qiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK1fdB%2BDCo8aGO1deyrcA4vzUOLwhP4sokkGeKy5ZJPncKagIib5TvztIhfGFJ1XBLfSvSpy7Jm5Q4MojGQjgswFWbuKhO5lGWLxv6Nsjn2Wk%2BaMRqQuhX7yp6WPbnnchA6pV0Lv3z5al5sK8rwmS9YR92%2F2cgEpH3r8wm1RvaKQP8majUl6FOmi0P6INPdoiW3VSVGGpj2ZFPdVR%2F%2BXL2nDo27tF8k8d4I0eB9553GOmYZPzkTjWbAg4ZjQ5ULMzYPY9gvqMAxwBmyiO5AJMPWerJ5jd%2BNb0IzizHWksj2s13iHO8ZHnzBh4RyxhVVD1k3IY7g46mGlUSu9oVBmtX06X%2BkaKwLdKwJwHSpjDUTeHAwWDMjPive6OABtB9KZ67mRQ0efZQSlfBXj4WaLEXtAbD%2F2zPeI9segPNYczT2JH6sX9X5a9cMe%2F9wA0xy9AhCLy8voe3RBpGTxr4UFQfsr6FZ1NmFzH1fK8RY%2F7Q8cRLi3zE873O366kdoc4k5NnQC605wsqYj65gVX5Q1YKY4pjD61eS9S48KtGSR3bEw2nAlKjvfuYeghlx8CfwrnKq69pAyeAF8PsGL51gNR5JcTsIufjfsvIOcymjtalY2Ok85O5I0sgszkGjWx1rmGKDJ0DQUHigmhBXgMNqRgdAGOqUByGRZqB%2FBYIv8v6VIRP96l%2F4WsSYBSBPWjzcCCbMDCnvETs6s%2FVezlvmbKqizE3IqAg6F9mW40oxDpRviaG4ti9Akqd07xfFbTQUzscOLZu5V7nsgt57%2FgBS5kcOmcWSjnxvChQD9xeutrWP1sNZUzkV3O86s%2BDtuPvqlriBKfpiAODqZLf9FOXp1uQjJj%2BlreNXe6xRpi4u5LnHMGUCDaQJQdthf&X-Amz-Signature=2112df4e8478c1d3eacb988c49b60414df997596e7dfe6657e514059b0433ef7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLXBUCCN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQD8dt7p1LUgq685oaJU%2FfUjQ555C1y0yhmUNZ%2BPu3Ok9AIgAjR1himSrJq8ZcARjyNyuaVzvxNxqmw%2FL5LNsWwaa54qiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK1fdB%2BDCo8aGO1deyrcA4vzUOLwhP4sokkGeKy5ZJPncKagIib5TvztIhfGFJ1XBLfSvSpy7Jm5Q4MojGQjgswFWbuKhO5lGWLxv6Nsjn2Wk%2BaMRqQuhX7yp6WPbnnchA6pV0Lv3z5al5sK8rwmS9YR92%2F2cgEpH3r8wm1RvaKQP8majUl6FOmi0P6INPdoiW3VSVGGpj2ZFPdVR%2F%2BXL2nDo27tF8k8d4I0eB9553GOmYZPzkTjWbAg4ZjQ5ULMzYPY9gvqMAxwBmyiO5AJMPWerJ5jd%2BNb0IzizHWksj2s13iHO8ZHnzBh4RyxhVVD1k3IY7g46mGlUSu9oVBmtX06X%2BkaKwLdKwJwHSpjDUTeHAwWDMjPive6OABtB9KZ67mRQ0efZQSlfBXj4WaLEXtAbD%2F2zPeI9segPNYczT2JH6sX9X5a9cMe%2F9wA0xy9AhCLy8voe3RBpGTxr4UFQfsr6FZ1NmFzH1fK8RY%2F7Q8cRLi3zE873O366kdoc4k5NnQC605wsqYj65gVX5Q1YKY4pjD61eS9S48KtGSR3bEw2nAlKjvfuYeghlx8CfwrnKq69pAyeAF8PsGL51gNR5JcTsIufjfsvIOcymjtalY2Ok85O5I0sgszkGjWx1rmGKDJ0DQUHigmhBXgMNqRgdAGOqUByGRZqB%2FBYIv8v6VIRP96l%2F4WsSYBSBPWjzcCCbMDCnvETs6s%2FVezlvmbKqizE3IqAg6F9mW40oxDpRviaG4ti9Akqd07xfFbTQUzscOLZu5V7nsgt57%2FgBS5kcOmcWSjnxvChQD9xeutrWP1sNZUzkV3O86s%2BDtuPvqlriBKfpiAODqZLf9FOXp1uQjJj%2BlreNXe6xRpi4u5LnHMGUCDaQJQdthf&X-Amz-Signature=abc1fd1db732b5df6b5f1d66a78e14382e665e1faa5d34d46db36fe80a7bc8a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XLXBUCCN%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092713Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQD8dt7p1LUgq685oaJU%2FfUjQ555C1y0yhmUNZ%2BPu3Ok9AIgAjR1himSrJq8ZcARjyNyuaVzvxNxqmw%2FL5LNsWwaa54qiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK1fdB%2BDCo8aGO1deyrcA4vzUOLwhP4sokkGeKy5ZJPncKagIib5TvztIhfGFJ1XBLfSvSpy7Jm5Q4MojGQjgswFWbuKhO5lGWLxv6Nsjn2Wk%2BaMRqQuhX7yp6WPbnnchA6pV0Lv3z5al5sK8rwmS9YR92%2F2cgEpH3r8wm1RvaKQP8majUl6FOmi0P6INPdoiW3VSVGGpj2ZFPdVR%2F%2BXL2nDo27tF8k8d4I0eB9553GOmYZPzkTjWbAg4ZjQ5ULMzYPY9gvqMAxwBmyiO5AJMPWerJ5jd%2BNb0IzizHWksj2s13iHO8ZHnzBh4RyxhVVD1k3IY7g46mGlUSu9oVBmtX06X%2BkaKwLdKwJwHSpjDUTeHAwWDMjPive6OABtB9KZ67mRQ0efZQSlfBXj4WaLEXtAbD%2F2zPeI9segPNYczT2JH6sX9X5a9cMe%2F9wA0xy9AhCLy8voe3RBpGTxr4UFQfsr6FZ1NmFzH1fK8RY%2F7Q8cRLi3zE873O366kdoc4k5NnQC605wsqYj65gVX5Q1YKY4pjD61eS9S48KtGSR3bEw2nAlKjvfuYeghlx8CfwrnKq69pAyeAF8PsGL51gNR5JcTsIufjfsvIOcymjtalY2Ok85O5I0sgszkGjWx1rmGKDJ0DQUHigmhBXgMNqRgdAGOqUByGRZqB%2FBYIv8v6VIRP96l%2F4WsSYBSBPWjzcCCbMDCnvETs6s%2FVezlvmbKqizE3IqAg6F9mW40oxDpRviaG4ti9Akqd07xfFbTQUzscOLZu5V7nsgt57%2FgBS5kcOmcWSjnxvChQD9xeutrWP1sNZUzkV3O86s%2BDtuPvqlriBKfpiAODqZLf9FOXp1uQjJj%2BlreNXe6xRpi4u5LnHMGUCDaQJQdthf&X-Amz-Signature=bcad9344529071239ef900be4b8a58c7df6e7fe1cb33fb8b810bceb8480f7235&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZCQ27LCX%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIBANjSRVL5r6GisJKqlNcx6P50bBHoUtOlhl3HSfFl3zAiEA5ryEN1OmoQt3dR0SHQ0%2Fn%2FOA6ilv9SfhP1p3sz3hpEsqiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNl5hbtbWCHnVbnaWircA1SRMUXw33wQw3Ir0FJ%2FR2vTSpEG15ov3r5FexOF4928o4oVQNzVEPDBjBSAvc47K%2BEJV1K4ksHWVg3Qaud898xxzMGeRtBfFLh%2Blw0VJybchG48h7ZULIWI3BBWAqmDt3bMrnhibuATYEAkeWqSR5xYejUHjeCmFzdlEart9HAeWKb%2BK6WaRF4Fbt8VG8%2BqKiwyWkL8Kbzdez1djX4rVvA0HBMLR%2FwqkUykUfBDymu%2Fdcx9bj0TRo7ZLkOZ%2BZ4dt0D%2FawGAeCptkAR5S8nd94e1qQuqR1rDCmNhVXhomnMlg3wp3OhdjX%2BOOEx7gPHkJKSyKLTFp1F68%2BJTaUIGhLVSOYapZKMhsTQbE39fUguGW3GZey2%2BNsT%2BwztjnCl2QXSMGxJ5LJQCxQvHCMi50t%2FDrAQNm05GTOXie%2BnvUoEwtL2rRGOMB4GKnOrYMf88%2BRVSHNfssmt07GoqzjjVuNBrxaZ96frjWW7EijEbF9vhZJjc%2FSe4DIAkrnh%2FA%2Bf6U2jb6aB8sLI9mALNt0JIIknvo17VNvk3OV1Ub7EjC5MtjLPC4hL3a5%2FoUFRtN0YEywrOKNBTdMLBYJhoQpV%2BHxjYZNlW8nQPbzdWvRun7XJQuiXXgJ2QLXmCdAvXML2RgdAGOqUBPC84a6nZ3sD%2Bo0ybcRf%2BIvbxD4Nyt5lNPwatftbqWz3jM%2BEajAfhpI%2BjNF9dzqCE43jto%2FUFLgCR%2By5HhlADgLt1xOsZA6cMXD32%2BOZ5GrOuaPfTvjqiHr8O1n4OT6jCcYWKIjfBQ5RMnB0ZiK5Y0lgcJG4TZHmq51qiXypxFswUaWe6RLH06lkzhg9kgmTa5cxX3nzK85QJ%2F7vRlixviKG2t0Ye&X-Amz-Signature=2cb9022517eab22311ac1abafc22b4d822ce7ea7f6abb3959c51b296071abd8a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCGOZSWD%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJIMEYCIQDGtOAh5wNf%2BhM6FRUcFSfuvzN8iOy4c%2FPc7a%2BC9VjaggIhAPN%2FIUWYSXgC8EcQ17jtLPvUHai4IUVBA73ZJeQykFEdKogECPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz5j2%2BdNz7ya0cmLEcq3AM7S%2BC1H%2FyWKpg7%2BB328FDDI%2BNH2oAcYMInNTqeKtHeqzF98O7pLR9LVrB4BszONNQ%2FsAyM%2FvC4X6rZRUcYClw3zxjki4INJvY9kt5AiYI1J2zHj14LHpjJ7%2BGRAp3WIkjxiJNLxQzlOLU7SCsCfq63ndrlaj0f6OQ7kpbQYedeVX193SOJcWsqdyTn%2FPtYj%2FIMaJ3jlLhBHwv2jpkefKx4cE%2BiN4IOq6nL6c2a9Umh6knT8BScIkr4SJmQYowULvxG6v0PZQcEjL7eP03aCsqiWao8NpRsiS%2FpVnXx%2FOv6h8ozN5sanET6OoldSlVVMEsoBfa7faD4MkGgCt79sZTbf9zK2ngk3K3W1O55fBdRd%2Fll6Q6qbRs%2FoN%2BT16lBFnuYKAmsjItFoZJ5kzlhsRJX8qNgKqr3c%2FZyKmm%2Bl%2BMdyR6yN9tMbroI2WOTj1Gqddg2QTsBkfSG8ua32Hy1xhCIhFmVqZutpK57e1pd7eK1A7XSu2Cpi5f2D1QsBdsZkWFCNZ2tPBchiiFsEbYnbg3fWP9braw40MBYftXQI%2BUfO2ny85uM3CYI5vXi7cOVbm%2Bds5EhnfWOt41hRoVM4xECEqBFSjvM1s0cKz%2FumLDLedju5VRy%2F9Fn0p1r%2FzCNkIHQBjqkAdxnmJgqS9OB5olG5WsZJNX0DX2rqAqctFQRa5ognUlecd%2BJxrw6UHMzPOKOmpcxJxm4xQS4g%2FUs0vEIT53DFgV2LMd3gWZ5HZWlmujiNM8z1Dn9ga0Dm0vux9k6GcbsfUATlQDdREGy1ZK4tv3oGZnHb%2FdpvECJIx2F2U8PGs0YyipMM%2FJ5G81oOGeyZk43mm5XpSyUKmCQm993YcKXam0pRaDj&X-Amz-Signature=4debb67ca0b41324f6a94e565a330fa7e6f76dc875a4a4b77b482bd7ace23a11&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCGOZSWD%2F20260510%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260510T092714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJIMEYCIQDGtOAh5wNf%2BhM6FRUcFSfuvzN8iOy4c%2FPc7a%2BC9VjaggIhAPN%2FIUWYSXgC8EcQ17jtLPvUHai4IUVBA73ZJeQykFEdKogECPr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz5j2%2BdNz7ya0cmLEcq3AM7S%2BC1H%2FyWKpg7%2BB328FDDI%2BNH2oAcYMInNTqeKtHeqzF98O7pLR9LVrB4BszONNQ%2FsAyM%2FvC4X6rZRUcYClw3zxjki4INJvY9kt5AiYI1J2zHj14LHpjJ7%2BGRAp3WIkjxiJNLxQzlOLU7SCsCfq63ndrlaj0f6OQ7kpbQYedeVX193SOJcWsqdyTn%2FPtYj%2FIMaJ3jlLhBHwv2jpkefKx4cE%2BiN4IOq6nL6c2a9Umh6knT8BScIkr4SJmQYowULvxG6v0PZQcEjL7eP03aCsqiWao8NpRsiS%2FpVnXx%2FOv6h8ozN5sanET6OoldSlVVMEsoBfa7faD4MkGgCt79sZTbf9zK2ngk3K3W1O55fBdRd%2Fll6Q6qbRs%2FoN%2BT16lBFnuYKAmsjItFoZJ5kzlhsRJX8qNgKqr3c%2FZyKmm%2Bl%2BMdyR6yN9tMbroI2WOTj1Gqddg2QTsBkfSG8ua32Hy1xhCIhFmVqZutpK57e1pd7eK1A7XSu2Cpi5f2D1QsBdsZkWFCNZ2tPBchiiFsEbYnbg3fWP9braw40MBYftXQI%2BUfO2ny85uM3CYI5vXi7cOVbm%2Bds5EhnfWOt41hRoVM4xECEqBFSjvM1s0cKz%2FumLDLedju5VRy%2F9Fn0p1r%2FzCNkIHQBjqkAdxnmJgqS9OB5olG5WsZJNX0DX2rqAqctFQRa5ognUlecd%2BJxrw6UHMzPOKOmpcxJxm4xQS4g%2FUs0vEIT53DFgV2LMd3gWZ5HZWlmujiNM8z1Dn9ga0Dm0vux9k6GcbsfUATlQDdREGy1ZK4tv3oGZnHb%2FdpvECJIx2F2U8PGs0YyipMM%2FJ5G81oOGeyZk43mm5XpSyUKmCQm993YcKXam0pRaDj&X-Amz-Signature=684199077973ac6eaac0b35dfc99596712d74a4901aefb3703d60606585cfc4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
