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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUQXIE23%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPt6X%2BgQ1otu%2FmxY9lNrNR2St%2FGMssd0rI7IJ0Lrnn0gIgIwgilspE3ehO57Cmnt2E7TEa73959P1CM7D9DJjovugqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF5RTd5q0N4xv9RNDircA9blVf%2BBipK0WNjRJDRnssXcX4I4ZH6ow%2BEgGmvjn1Tqs01rwX17YpeorCEtPYQ%2FUpbXkTXl0l8fHFcQ2aNM%2BQD8Fpghv9BpolggsODol3HAt7Usiwpj%2Bi9XSaNl2Rxpv8GUB26Qr%2B7JGZWY1EWGBOOv9ocvGJ49D2qpNxGIo4YuRboynyaXaepFxiXG67sBH6eDvXGIhUYdT2n21exGEd9x1F8v19Hbf4tl691KCYWActq5%2F%2FDo6qbekGyaiccEamabYduqLb52mTbqPY3d7e%2FLQvhIfp7%2BWP5zK7faDT75CVhoWOXwm8KsPzGg7Kt0k7Wfz3iCDF5hskGWqTa2%2FsisKIAG6OzpZRh1R1kV8vMztf1UtG5w5chlGJ5dL%2FyMyB43GMA5FgNfeOT8bwucMRzEyiLL6zi1sYpmcRR5TbytlLqw74yRQ1ovDqiyAaGbJc0XqDz6N%2BcEdf%2FPJTTtQMsrPr6YLdUsWZBVc0YbtwM1hi96gSsKHig1nsi4LArl3eqCClEipKeQypRuLejzwAS5%2Fl9DJeW%2FTtv10jsz80EWCc9pj%2BEUH5jj5pwuA7VKu5O%2F8e3Ws1dQjRkqlzTNgHxFgJskXpo24BKG%2FMa2ltILBOT5KZ4IBupUpns7MOjS99YGOqUB1bC6MAXpSGsRDP61iwLgzpc%2BIFJkXcKYXeqkAWs3ElgvAhOneDpp2dYwf6kjRsr%2FD9VvhrtmadpcKzRIAb50IltyH1yNha6eyFKiAD1xBaHYrEpNZwfU2KdvrL6dV4UYQZBw2QmLCWntAjxyg7DZXLKVTd7EaAt%2BWwZpRxYOa2iwKyR6VV3LLXKlGNlDJLaBEeX0u92j314t4lbSDZnphiVAEGCn&X-Amz-Signature=2bdc7147c12b938b0925f9718c05fde852150b0259660f1e4e2a2a07d81e22fb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUQXIE23%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPt6X%2BgQ1otu%2FmxY9lNrNR2St%2FGMssd0rI7IJ0Lrnn0gIgIwgilspE3ehO57Cmnt2E7TEa73959P1CM7D9DJjovugqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF5RTd5q0N4xv9RNDircA9blVf%2BBipK0WNjRJDRnssXcX4I4ZH6ow%2BEgGmvjn1Tqs01rwX17YpeorCEtPYQ%2FUpbXkTXl0l8fHFcQ2aNM%2BQD8Fpghv9BpolggsODol3HAt7Usiwpj%2Bi9XSaNl2Rxpv8GUB26Qr%2B7JGZWY1EWGBOOv9ocvGJ49D2qpNxGIo4YuRboynyaXaepFxiXG67sBH6eDvXGIhUYdT2n21exGEd9x1F8v19Hbf4tl691KCYWActq5%2F%2FDo6qbekGyaiccEamabYduqLb52mTbqPY3d7e%2FLQvhIfp7%2BWP5zK7faDT75CVhoWOXwm8KsPzGg7Kt0k7Wfz3iCDF5hskGWqTa2%2FsisKIAG6OzpZRh1R1kV8vMztf1UtG5w5chlGJ5dL%2FyMyB43GMA5FgNfeOT8bwucMRzEyiLL6zi1sYpmcRR5TbytlLqw74yRQ1ovDqiyAaGbJc0XqDz6N%2BcEdf%2FPJTTtQMsrPr6YLdUsWZBVc0YbtwM1hi96gSsKHig1nsi4LArl3eqCClEipKeQypRuLejzwAS5%2Fl9DJeW%2FTtv10jsz80EWCc9pj%2BEUH5jj5pwuA7VKu5O%2F8e3Ws1dQjRkqlzTNgHxFgJskXpo24BKG%2FMa2ltILBOT5KZ4IBupUpns7MOjS99YGOqUB1bC6MAXpSGsRDP61iwLgzpc%2BIFJkXcKYXeqkAWs3ElgvAhOneDpp2dYwf6kjRsr%2FD9VvhrtmadpcKzRIAb50IltyH1yNha6eyFKiAD1xBaHYrEpNZwfU2KdvrL6dV4UYQZBw2QmLCWntAjxyg7DZXLKVTd7EaAt%2BWwZpRxYOa2iwKyR6VV3LLXKlGNlDJLaBEeX0u92j314t4lbSDZnphiVAEGCn&X-Amz-Signature=eaccdc0b52a77eb2086153c019f634fd39c1d9da0efcae5251518187a77333d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUQXIE23%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPt6X%2BgQ1otu%2FmxY9lNrNR2St%2FGMssd0rI7IJ0Lrnn0gIgIwgilspE3ehO57Cmnt2E7TEa73959P1CM7D9DJjovugqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF5RTd5q0N4xv9RNDircA9blVf%2BBipK0WNjRJDRnssXcX4I4ZH6ow%2BEgGmvjn1Tqs01rwX17YpeorCEtPYQ%2FUpbXkTXl0l8fHFcQ2aNM%2BQD8Fpghv9BpolggsODol3HAt7Usiwpj%2Bi9XSaNl2Rxpv8GUB26Qr%2B7JGZWY1EWGBOOv9ocvGJ49D2qpNxGIo4YuRboynyaXaepFxiXG67sBH6eDvXGIhUYdT2n21exGEd9x1F8v19Hbf4tl691KCYWActq5%2F%2FDo6qbekGyaiccEamabYduqLb52mTbqPY3d7e%2FLQvhIfp7%2BWP5zK7faDT75CVhoWOXwm8KsPzGg7Kt0k7Wfz3iCDF5hskGWqTa2%2FsisKIAG6OzpZRh1R1kV8vMztf1UtG5w5chlGJ5dL%2FyMyB43GMA5FgNfeOT8bwucMRzEyiLL6zi1sYpmcRR5TbytlLqw74yRQ1ovDqiyAaGbJc0XqDz6N%2BcEdf%2FPJTTtQMsrPr6YLdUsWZBVc0YbtwM1hi96gSsKHig1nsi4LArl3eqCClEipKeQypRuLejzwAS5%2Fl9DJeW%2FTtv10jsz80EWCc9pj%2BEUH5jj5pwuA7VKu5O%2F8e3Ws1dQjRkqlzTNgHxFgJskXpo24BKG%2FMa2ltILBOT5KZ4IBupUpns7MOjS99YGOqUB1bC6MAXpSGsRDP61iwLgzpc%2BIFJkXcKYXeqkAWs3ElgvAhOneDpp2dYwf6kjRsr%2FD9VvhrtmadpcKzRIAb50IltyH1yNha6eyFKiAD1xBaHYrEpNZwfU2KdvrL6dV4UYQZBw2QmLCWntAjxyg7DZXLKVTd7EaAt%2BWwZpRxYOa2iwKyR6VV3LLXKlGNlDJLaBEeX0u92j314t4lbSDZnphiVAEGCn&X-Amz-Signature=9a3a2aca1dd04da29ac16ac75f5e4a621b4a66bcb1b4e0bbdb3289e252a3ac5b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFSV6GA4%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCbuqyKJ2Wi59LQ4UzPXtgbtiJpmJ21Nc2EaosQAouAUgIhALJkoeBs6JKZrcS%2BG1a3e7wpA4R4VcxrhKakZ2OrfQ%2FrKogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2BIQv%2FWCj523LgvU0q3AOJut%2BKYSEp4abZIb%2BrhJnjp44a%2F7VAAc1x0Jv3z6rIV%2FXage%2F0Qynr23Na4IwuYxqE%2FPQKNzuavqt3BYncbEh8C6zlYP6rrPwxQkXY7siGh4pzO5oEnpOzS529yQhfMK880rGLtLMdFvHHnEaK9kUuMYERVUdl5qxKkH7Ad10X4xxWrkK0l1WD4dV7U%2BzRRE%2BrmBs3kdWGWbEVuAC7O7ml9pLouLHdktViE7gQakVDOAJPg95qKN4W1OiUhjyf4IqsU3W64DQMmwZKzrGRsr9O3oWKR7ZyExT%2BkG9uE0f860E4TG2yMo285049mWO5ssWLdld2zOvfNRv2nZBceb4OwF0EqIt8sGwZd7CBYi3mQpIYjodj1SXdR567TReIQEMKIX5XBZZ5XcRwhxYZNscvYP2cidyYQF%2BQaIiTFGbRTyZD4F8hY0XHGzkhcRDSsD3RYLBnvSZgmdEn%2FZR3kqFm5Zxgzgtsl0dMxSoJHf2QGuCWZ3AMFLFFaKQLgnxdEjyNhZ6SnMDFuM27iuBOfE216MRO4uXmoT4ofk7rZsAyZT8gRp0V31sUtNztAwLVE3tsidUDAisZielptV3oHgxashdKkFLBCJ859omDbnUpSadMDSoJfw5AsV9E7TDc1vfWBjqkAZafBjDAE5CPyXFAq5Ftvb9%2FJcxmj6gaTR6LsTLIhlN2yVWXNEqH%2B3vxV3kDchiQLApc7vMvSlSmULOGfF1kAdbcXq0z78%2Bin6hj1qB2LWqf%2FSYo2JVDeHOyfS39YftjIu8A7ZRQOtbkWT99U7D90ofaoRQ26CmiYpBWUrRy0PaQmInGU49tA9DQ6hEGIKmfoQOi72Ik8XaD74OSuwVtPw8oI9ph&X-Amz-Signature=a7ec8ca2aea2471bc883342f92ab1efeae77f214461e9dfeeab033645741bb6d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFSV6GA4%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCbuqyKJ2Wi59LQ4UzPXtgbtiJpmJ21Nc2EaosQAouAUgIhALJkoeBs6JKZrcS%2BG1a3e7wpA4R4VcxrhKakZ2OrfQ%2FrKogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2BIQv%2FWCj523LgvU0q3AOJut%2BKYSEp4abZIb%2BrhJnjp44a%2F7VAAc1x0Jv3z6rIV%2FXage%2F0Qynr23Na4IwuYxqE%2FPQKNzuavqt3BYncbEh8C6zlYP6rrPwxQkXY7siGh4pzO5oEnpOzS529yQhfMK880rGLtLMdFvHHnEaK9kUuMYERVUdl5qxKkH7Ad10X4xxWrkK0l1WD4dV7U%2BzRRE%2BrmBs3kdWGWbEVuAC7O7ml9pLouLHdktViE7gQakVDOAJPg95qKN4W1OiUhjyf4IqsU3W64DQMmwZKzrGRsr9O3oWKR7ZyExT%2BkG9uE0f860E4TG2yMo285049mWO5ssWLdld2zOvfNRv2nZBceb4OwF0EqIt8sGwZd7CBYi3mQpIYjodj1SXdR567TReIQEMKIX5XBZZ5XcRwhxYZNscvYP2cidyYQF%2BQaIiTFGbRTyZD4F8hY0XHGzkhcRDSsD3RYLBnvSZgmdEn%2FZR3kqFm5Zxgzgtsl0dMxSoJHf2QGuCWZ3AMFLFFaKQLgnxdEjyNhZ6SnMDFuM27iuBOfE216MRO4uXmoT4ofk7rZsAyZT8gRp0V31sUtNztAwLVE3tsidUDAisZielptV3oHgxashdKkFLBCJ859omDbnUpSadMDSoJfw5AsV9E7TDc1vfWBjqkAZafBjDAE5CPyXFAq5Ftvb9%2FJcxmj6gaTR6LsTLIhlN2yVWXNEqH%2B3vxV3kDchiQLApc7vMvSlSmULOGfF1kAdbcXq0z78%2Bin6hj1qB2LWqf%2FSYo2JVDeHOyfS39YftjIu8A7ZRQOtbkWT99U7D90ofaoRQ26CmiYpBWUrRy0PaQmInGU49tA9DQ6hEGIKmfoQOi72Ik8XaD74OSuwVtPw8oI9ph&X-Amz-Signature=be3e326cc1681d3160f9cf09e808c9b38ae30d0da738f7131045c6c378aaf909&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFSV6GA4%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCbuqyKJ2Wi59LQ4UzPXtgbtiJpmJ21Nc2EaosQAouAUgIhALJkoeBs6JKZrcS%2BG1a3e7wpA4R4VcxrhKakZ2OrfQ%2FrKogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2BIQv%2FWCj523LgvU0q3AOJut%2BKYSEp4abZIb%2BrhJnjp44a%2F7VAAc1x0Jv3z6rIV%2FXage%2F0Qynr23Na4IwuYxqE%2FPQKNzuavqt3BYncbEh8C6zlYP6rrPwxQkXY7siGh4pzO5oEnpOzS529yQhfMK880rGLtLMdFvHHnEaK9kUuMYERVUdl5qxKkH7Ad10X4xxWrkK0l1WD4dV7U%2BzRRE%2BrmBs3kdWGWbEVuAC7O7ml9pLouLHdktViE7gQakVDOAJPg95qKN4W1OiUhjyf4IqsU3W64DQMmwZKzrGRsr9O3oWKR7ZyExT%2BkG9uE0f860E4TG2yMo285049mWO5ssWLdld2zOvfNRv2nZBceb4OwF0EqIt8sGwZd7CBYi3mQpIYjodj1SXdR567TReIQEMKIX5XBZZ5XcRwhxYZNscvYP2cidyYQF%2BQaIiTFGbRTyZD4F8hY0XHGzkhcRDSsD3RYLBnvSZgmdEn%2FZR3kqFm5Zxgzgtsl0dMxSoJHf2QGuCWZ3AMFLFFaKQLgnxdEjyNhZ6SnMDFuM27iuBOfE216MRO4uXmoT4ofk7rZsAyZT8gRp0V31sUtNztAwLVE3tsidUDAisZielptV3oHgxashdKkFLBCJ859omDbnUpSadMDSoJfw5AsV9E7TDc1vfWBjqkAZafBjDAE5CPyXFAq5Ftvb9%2FJcxmj6gaTR6LsTLIhlN2yVWXNEqH%2B3vxV3kDchiQLApc7vMvSlSmULOGfF1kAdbcXq0z78%2Bin6hj1qB2LWqf%2FSYo2JVDeHOyfS39YftjIu8A7ZRQOtbkWT99U7D90ofaoRQ26CmiYpBWUrRy0PaQmInGU49tA9DQ6hEGIKmfoQOi72Ik8XaD74OSuwVtPw8oI9ph&X-Amz-Signature=46081435cdccd9901977bfc4d2993fda2aaa56a98126247464c536448a18aa48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UFSV6GA4%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125738Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCbuqyKJ2Wi59LQ4UzPXtgbtiJpmJ21Nc2EaosQAouAUgIhALJkoeBs6JKZrcS%2BG1a3e7wpA4R4VcxrhKakZ2OrfQ%2FrKogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2BIQv%2FWCj523LgvU0q3AOJut%2BKYSEp4abZIb%2BrhJnjp44a%2F7VAAc1x0Jv3z6rIV%2FXage%2F0Qynr23Na4IwuYxqE%2FPQKNzuavqt3BYncbEh8C6zlYP6rrPwxQkXY7siGh4pzO5oEnpOzS529yQhfMK880rGLtLMdFvHHnEaK9kUuMYERVUdl5qxKkH7Ad10X4xxWrkK0l1WD4dV7U%2BzRRE%2BrmBs3kdWGWbEVuAC7O7ml9pLouLHdktViE7gQakVDOAJPg95qKN4W1OiUhjyf4IqsU3W64DQMmwZKzrGRsr9O3oWKR7ZyExT%2BkG9uE0f860E4TG2yMo285049mWO5ssWLdld2zOvfNRv2nZBceb4OwF0EqIt8sGwZd7CBYi3mQpIYjodj1SXdR567TReIQEMKIX5XBZZ5XcRwhxYZNscvYP2cidyYQF%2BQaIiTFGbRTyZD4F8hY0XHGzkhcRDSsD3RYLBnvSZgmdEn%2FZR3kqFm5Zxgzgtsl0dMxSoJHf2QGuCWZ3AMFLFFaKQLgnxdEjyNhZ6SnMDFuM27iuBOfE216MRO4uXmoT4ofk7rZsAyZT8gRp0V31sUtNztAwLVE3tsidUDAisZielptV3oHgxashdKkFLBCJ859omDbnUpSadMDSoJfw5AsV9E7TDc1vfWBjqkAZafBjDAE5CPyXFAq5Ftvb9%2FJcxmj6gaTR6LsTLIhlN2yVWXNEqH%2B3vxV3kDchiQLApc7vMvSlSmULOGfF1kAdbcXq0z78%2Bin6hj1qB2LWqf%2FSYo2JVDeHOyfS39YftjIu8A7ZRQOtbkWT99U7D90ofaoRQ26CmiYpBWUrRy0PaQmInGU49tA9DQ6hEGIKmfoQOi72Ik8XaD74OSuwVtPw8oI9ph&X-Amz-Signature=8702c59b0b36a97aba21029c33f609b5e745e00d4fd63088552984fbf375a23c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666KYN7ATZ%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125739Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAbh0LUqbAgaPv7LmSxNtuWY6vqWxLSmoegF3Xc0ilg8AiAS%2F2OspGoozIZU7D8GRJWpopzrmECD8vPD1BvG%2FDixiCqIBAi9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM6E9qX1qg6Kn64qg9KtwD2Qfwj56r%2F07GR9Sfh4%2FrK05v9WwRDi%2FOIR2N5s019uaA5txmx3e3RTl8OQ%2B3H6BKSHioau3whl1N836SpdiV2sQmTmUTHij7yemCzWDUUKfSPhKfg9RaTTWkIwA0fb22jca7Qz1KgMgJFWkw5zTZvNykIQwIF06DOL5DHO8eo9XyRx1p4OBhinus3sc0%2B5oTQUojynwSHoizW4JruV9ixEVYyk0O1wJ7GDboHSIqlMX%2BMYQNV9k%2Fbvgd71csbVaLL3rky3PIvS56sc9pv9Djou22s6AMEZTt33B6JqEViEtEFLva5cwURo9Xqm7NERZI285URmE5nkZNhpmhiXGUP83q2xV4upF7Jx0TuwPgC%2BsEC7CHSmhWOOTR8G22IqgoJbHq741RzLqtIq2cES4z%2FguokMwBlGe3%2FoemyxpjskRsSh52MwM5RtIpsF5vT7I7Jhf6iwAblc7RNEwMy3F1lUes9mY7bUcR4RzBX9Rhyc0LNxyiuFt5Vvzu9srUain6VgCVAO7vQVvguEnTxNPJn7HIvKw9X3I5gBu8IpYkUneOdCaI7wvT10drhTMZMthkyZuWoWOPMjHSlI8X36ysPUocGElJ12VfxEbYzm3fkO%2BR1aW7xAPAoBWP1TYwktn31gY6pgGyaKCfayFmP%2FZx5PZ3abEtsj4KprU%2F9Y0C6eXIJ7Xl3ugDDu3RcKL2lL0jItdUnSNZu7gzHfqX9ZwItMySh%2BlhIo8aXkeYXUjYI5wgctcp5luYBGC%2B8%2FShnEcJikLxUoHM3DFShStyesBqr4zdi4GurxlL367LzAurLEX7%2F0DCWIwxTK8%2BFAPJ79qh7Tbao19spHvTiXd%2BUHJ8P1mm7mhPUk08enTz&X-Amz-Signature=f373094d6c5fae94bdcc5331308fdcf2ba3fa8bbfe07ba2c34504306839ce608&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JDMN72A%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125739Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEAyXO5tnJT3UX6h3O1h51ZOsoRdfFAo%2FCw1Ls9w5X3DAiAML9j8%2FH9DDutESkjNtRVfH4FUA1LDKRfK1s4Lkv%2FpACqIBAi8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMD4tIqPoIMYk1iSEOKtwDAF2hgdy%2B3FswvN9lQFFEymGOitQGOaE8t5O5bmYWPq6vqZjO4JR8GqIIE0h9lT581FkBJD8KEyEHcPZDOMF12252kGYrsqAnKtlCChQyDWcEAk375%2Fc5lsCFScPEMv84RzJ%2BZ4d7IpdfPvIkfE0bfXRDHmDyj00rhVWGQvgaZ0ePvYzx7s8tHX1CFwPzAxq9fw36zlXDGBg9K7TjO%2BMHcgMFUkBJObmIc9AiFlb3zPUk%2B0Ryacn1Hpm46J9I01UQASLaTxjfKHMQEL3YMJlV3NqZT6i8NYMn0sYvZMs35xPg4ds1Mm%2B7ae4PpY44HJUhtr3lLUTze3RakdfcA8ACJSQZoimeUVmIDPtmnetC1PlYXwnP8QBK%2F65lDWgAGzC862QSyJjSYO55MgmLevgUT9qjqzRmTku5d1Nwv6%2B3xWdFADSCXRi3ayj%2FKPCI83jlhcAJt4QAt%2B7oNUyZ2q2uOtZLgt1Ei%2BCaU9LrTRidaqtdlUe0WGd6UOlTbrvokVgipHm%2BYxqdz3IGVbHzZX9vubzF1vy3UaU0Ey5uhydcFuaYWwtXTJJEN5YNITWnSGfakC0sB1y6gzg1uK6d%2FgeyXMGzQ6T1asqsNKsMghjDq91BifjyDHuRTAVOizgwk9T31gY6pgGkR0LxQUIo6lVfose3XLZO7UVM5sDjlF26JpzY86KUivIZc1C%2FAzGgI6pBIStx2JKFD67p40iJqciH0%2B9ZrmAyEySEST9UBSexNvrD3qi37t2VVlYKqem0w7psja3Vyt2BQcAyceemBr%2FVYO4%2FuGpoJiOIdTUrPrHhMultxo2Ucrd9oFJar8sw2jIrygKYFOgiEDNRGKeGhLG3ICoKs5CJ%2BF%2FxlAlw&X-Amz-Signature=72733e45565557e969b412958970d8d422e35b3903e477fb86a63f17786b14f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JDMN72A%2F20261025%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261025T125739Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEAyXO5tnJT3UX6h3O1h51ZOsoRdfFAo%2FCw1Ls9w5X3DAiAML9j8%2FH9DDutESkjNtRVfH4FUA1LDKRfK1s4Lkv%2FpACqIBAi8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMD4tIqPoIMYk1iSEOKtwDAF2hgdy%2B3FswvN9lQFFEymGOitQGOaE8t5O5bmYWPq6vqZjO4JR8GqIIE0h9lT581FkBJD8KEyEHcPZDOMF12252kGYrsqAnKtlCChQyDWcEAk375%2Fc5lsCFScPEMv84RzJ%2BZ4d7IpdfPvIkfE0bfXRDHmDyj00rhVWGQvgaZ0ePvYzx7s8tHX1CFwPzAxq9fw36zlXDGBg9K7TjO%2BMHcgMFUkBJObmIc9AiFlb3zPUk%2B0Ryacn1Hpm46J9I01UQASLaTxjfKHMQEL3YMJlV3NqZT6i8NYMn0sYvZMs35xPg4ds1Mm%2B7ae4PpY44HJUhtr3lLUTze3RakdfcA8ACJSQZoimeUVmIDPtmnetC1PlYXwnP8QBK%2F65lDWgAGzC862QSyJjSYO55MgmLevgUT9qjqzRmTku5d1Nwv6%2B3xWdFADSCXRi3ayj%2FKPCI83jlhcAJt4QAt%2B7oNUyZ2q2uOtZLgt1Ei%2BCaU9LrTRidaqtdlUe0WGd6UOlTbrvokVgipHm%2BYxqdz3IGVbHzZX9vubzF1vy3UaU0Ey5uhydcFuaYWwtXTJJEN5YNITWnSGfakC0sB1y6gzg1uK6d%2FgeyXMGzQ6T1asqsNKsMghjDq91BifjyDHuRTAVOizgwk9T31gY6pgGkR0LxQUIo6lVfose3XLZO7UVM5sDjlF26JpzY86KUivIZc1C%2FAzGgI6pBIStx2JKFD67p40iJqciH0%2B9ZrmAyEySEST9UBSexNvrD3qi37t2VVlYKqem0w7psja3Vyt2BQcAyceemBr%2FVYO4%2FuGpoJiOIdTUrPrHhMultxo2Ucrd9oFJar8sw2jIrygKYFOgiEDNRGKeGhLG3ICoKs5CJ%2BF%2FxlAlw&X-Amz-Signature=7400f56ff95ebabd743ac232ee8d139086654de54efb26b1592bb0492077bb18&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
