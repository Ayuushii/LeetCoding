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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T4GHZDAE%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDsN3TUc9wuz7ldCjLVeXvGOA%2Few1XVrx6A4%2F6O%2FSVZOwIgXtXtWRSEaiHD8n%2Bs2n1gzxikjmKfULYu5f2QQCHMVUYqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJwGVYNQhFEY57i4dSrcA5buJsov43vnJziYNSJcHh9O5iZpQay6IhdxaCTqHbULN9kpyFTD0oj7tXZgnpa5QsyaXZr6Z%2BNqyDzgrjR4W898%2FmAXZHV06xMt0SxC1%2FmlKoyfS9zND%2FD%2FaIkPWS6t%2FU6ls2ugYmpHtiBO6jDoOOIIUYmkMetFXLm3ay3sCqe8Edk8XXL8m4Xo%2BqDx%2BYEz%2BREML2b7WR0Y30pq58Q7f7NcLWtN4aLAwvhhNtYWxqyOPZucnVp8ueyOt78wYQbJ2wTktI%2F3E3trqu8M8xsYQEava1GQYi7GQKQtQ%2BbeCbuTrVrkDVljMcE9SGr%2BfmNbL38SSCn7juga1aFCBvo6CfrPNz6b3FGHI5vCqEJ%2BmESIDNcb0ls7qd8qPkvNGxQUDS9d24zLkunJJuacwSE%2FnW5ZhNlgi8SzS0rGO3SSYTK%2F7VkpJI8DsJayPPPsdxnlB1FFumrnT5Tum%2F5n2anGc6hOPGY9chZmfPMuL4hlaPZm4L6D6ap18G05ch6LKa3YXimeoz1jLb%2BHRuHhN4XUJAroIZWNSVFBlmGijc2NUjJL%2FPG0jh%2Fb8wvVdFvNJZJr2sruWT9TAi9s984z9ixJVpDyqZND1Ah1pBS0PinvT%2BrLlXdTKg0H3CZXl8gmML6Zic4GOqUBrupjNl%2BDR97Bfx9KdyK0Z8ooytAASRQn199G6u3%2FrVPqEhu0q1reyPtV12knAkjm3ujV6pBmIbfqBDzSg2DXGuPEIsz76yt1KATC%2B1xRw%2BB%2F%2B5wFKZSLQ%2BYsNsHWciroUvFfauYKeAYa4cmG0VsMSUapRhCumWidRBYdLSmn5OlNfHCMRtOUwlrLmo5%2FKx98cWT5NLzgyDLJBswU0%2B0qzQgXfYVL&X-Amz-Signature=15dd6bc9a02b0de58b2005c88a4d1032ae1330c6bd038193ab6f9048c758a385&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T4GHZDAE%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDsN3TUc9wuz7ldCjLVeXvGOA%2Few1XVrx6A4%2F6O%2FSVZOwIgXtXtWRSEaiHD8n%2Bs2n1gzxikjmKfULYu5f2QQCHMVUYqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJwGVYNQhFEY57i4dSrcA5buJsov43vnJziYNSJcHh9O5iZpQay6IhdxaCTqHbULN9kpyFTD0oj7tXZgnpa5QsyaXZr6Z%2BNqyDzgrjR4W898%2FmAXZHV06xMt0SxC1%2FmlKoyfS9zND%2FD%2FaIkPWS6t%2FU6ls2ugYmpHtiBO6jDoOOIIUYmkMetFXLm3ay3sCqe8Edk8XXL8m4Xo%2BqDx%2BYEz%2BREML2b7WR0Y30pq58Q7f7NcLWtN4aLAwvhhNtYWxqyOPZucnVp8ueyOt78wYQbJ2wTktI%2F3E3trqu8M8xsYQEava1GQYi7GQKQtQ%2BbeCbuTrVrkDVljMcE9SGr%2BfmNbL38SSCn7juga1aFCBvo6CfrPNz6b3FGHI5vCqEJ%2BmESIDNcb0ls7qd8qPkvNGxQUDS9d24zLkunJJuacwSE%2FnW5ZhNlgi8SzS0rGO3SSYTK%2F7VkpJI8DsJayPPPsdxnlB1FFumrnT5Tum%2F5n2anGc6hOPGY9chZmfPMuL4hlaPZm4L6D6ap18G05ch6LKa3YXimeoz1jLb%2BHRuHhN4XUJAroIZWNSVFBlmGijc2NUjJL%2FPG0jh%2Fb8wvVdFvNJZJr2sruWT9TAi9s984z9ixJVpDyqZND1Ah1pBS0PinvT%2BrLlXdTKg0H3CZXl8gmML6Zic4GOqUBrupjNl%2BDR97Bfx9KdyK0Z8ooytAASRQn199G6u3%2FrVPqEhu0q1reyPtV12knAkjm3ujV6pBmIbfqBDzSg2DXGuPEIsz76yt1KATC%2B1xRw%2BB%2F%2B5wFKZSLQ%2BYsNsHWciroUvFfauYKeAYa4cmG0VsMSUapRhCumWidRBYdLSmn5OlNfHCMRtOUwlrLmo5%2FKx98cWT5NLzgyDLJBswU0%2B0qzQgXfYVL&X-Amz-Signature=b3258ca196bdb3f66c52538098e0b08d96fa520f1e576850fd8d1a7d1d6b5931&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T4GHZDAE%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDsN3TUc9wuz7ldCjLVeXvGOA%2Few1XVrx6A4%2F6O%2FSVZOwIgXtXtWRSEaiHD8n%2Bs2n1gzxikjmKfULYu5f2QQCHMVUYqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJwGVYNQhFEY57i4dSrcA5buJsov43vnJziYNSJcHh9O5iZpQay6IhdxaCTqHbULN9kpyFTD0oj7tXZgnpa5QsyaXZr6Z%2BNqyDzgrjR4W898%2FmAXZHV06xMt0SxC1%2FmlKoyfS9zND%2FD%2FaIkPWS6t%2FU6ls2ugYmpHtiBO6jDoOOIIUYmkMetFXLm3ay3sCqe8Edk8XXL8m4Xo%2BqDx%2BYEz%2BREML2b7WR0Y30pq58Q7f7NcLWtN4aLAwvhhNtYWxqyOPZucnVp8ueyOt78wYQbJ2wTktI%2F3E3trqu8M8xsYQEava1GQYi7GQKQtQ%2BbeCbuTrVrkDVljMcE9SGr%2BfmNbL38SSCn7juga1aFCBvo6CfrPNz6b3FGHI5vCqEJ%2BmESIDNcb0ls7qd8qPkvNGxQUDS9d24zLkunJJuacwSE%2FnW5ZhNlgi8SzS0rGO3SSYTK%2F7VkpJI8DsJayPPPsdxnlB1FFumrnT5Tum%2F5n2anGc6hOPGY9chZmfPMuL4hlaPZm4L6D6ap18G05ch6LKa3YXimeoz1jLb%2BHRuHhN4XUJAroIZWNSVFBlmGijc2NUjJL%2FPG0jh%2Fb8wvVdFvNJZJr2sruWT9TAi9s984z9ixJVpDyqZND1Ah1pBS0PinvT%2BrLlXdTKg0H3CZXl8gmML6Zic4GOqUBrupjNl%2BDR97Bfx9KdyK0Z8ooytAASRQn199G6u3%2FrVPqEhu0q1reyPtV12knAkjm3ujV6pBmIbfqBDzSg2DXGuPEIsz76yt1KATC%2B1xRw%2BB%2F%2B5wFKZSLQ%2BYsNsHWciroUvFfauYKeAYa4cmG0VsMSUapRhCumWidRBYdLSmn5OlNfHCMRtOUwlrLmo5%2FKx98cWT5NLzgyDLJBswU0%2B0qzQgXfYVL&X-Amz-Signature=1047c2bb4bddeba015579b8c495df24cebf8e758ce6302aad1527f08e2126375&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2U5UBBO%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBBfXO5hCefjRVJl7JUwBBOO9X8BPxLcBpslMUxBOi0JAiBBGbe%2Fce%2F1mILi0rVTypIrYnIZnk5QCSHEyLOG8JEz3CqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMd7p8e88TTjthct9DKtwD0Jmnst1R%2BS3PJFSNvxTvT9TRfctVKNr9%2FS%2FyRX6vuNsGVEkBi8VcrDJVjVFpwZKh0PRbx%2FihBC5O1VlyiY8q6%2F4R1x5deJqAssHPPEG7LzTLVOBIsDX%2Fy0z00OK3Y98JtdUa3U9A0yb5w60nb1a1fvq1GOhI0mL03yp5N%2BwRTSp9MVQp3XeNu7oGIY7DX9iKg8%2FLsW6uxD5oRQzFksOVEvSjy%2FINTUHdEff9DIlVNgNTP%2B2dBa9fyBzLZZSI%2BdFOssR3TIurR0kr3du4sVc313JFJFXWkIVYIzOdI3n9uNZfmVB2Xzp6Ia22prqaSE1mIRx9aRmr4eY6d9xULurmOzNh7uBBhYin9X48IDbxhv%2BR7ecaME4MDslFyTNIMkHjWKBbni361eFkQRpKoHvhZk0ofWzaV7G5KmtoTbSJJgwSnHVR6iUJdM9ImiXVxcOps8BU%2FJLDOvEvadUMqtOVZErldCxtfESsfjePjHzDTVwL%2B7B8tCxr9RtPMrSP9aOUctnA20ays92E%2F3l2l81LfveoRw%2BgYhsjLkM7c3Eutqxt50hfFv6zHR%2FFAh%2BsHe8f%2FgJkWbs6mz1ZyGA7jKqFNGdzMUOOE7J9umQ8v9zVJXCBDN%2Bu2XjI8W4VdeEw6piJzgY6pgF6DlzZNPauQZ9NiO6g1POiyhvDaQ8MAw%2F%2BfGh%2BS8pEa%2FnTVI2etWKdh1Pj08dkXDAJvV4BiV5rAH0lZn93Wn%2FLqnWro%2Blur%2BGeolKGtYNoAQOzSXqdVK5UegNIgWGr%2FFtXX0v4sG5rsjmpzdzF1xLdFDnw%2BBVJn5OGBvYF9Sdig%2FtX42aoTjEM2nZvlMZ85Ainuuxpr2sJEqcziHTHGyfUZtSnCMZj&X-Amz-Signature=3b9c87930f9e298b0a8424b973e9e14dbab42b0c6af9ab9dba692c3a3f338278&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2U5UBBO%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBBfXO5hCefjRVJl7JUwBBOO9X8BPxLcBpslMUxBOi0JAiBBGbe%2Fce%2F1mILi0rVTypIrYnIZnk5QCSHEyLOG8JEz3CqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMd7p8e88TTjthct9DKtwD0Jmnst1R%2BS3PJFSNvxTvT9TRfctVKNr9%2FS%2FyRX6vuNsGVEkBi8VcrDJVjVFpwZKh0PRbx%2FihBC5O1VlyiY8q6%2F4R1x5deJqAssHPPEG7LzTLVOBIsDX%2Fy0z00OK3Y98JtdUa3U9A0yb5w60nb1a1fvq1GOhI0mL03yp5N%2BwRTSp9MVQp3XeNu7oGIY7DX9iKg8%2FLsW6uxD5oRQzFksOVEvSjy%2FINTUHdEff9DIlVNgNTP%2B2dBa9fyBzLZZSI%2BdFOssR3TIurR0kr3du4sVc313JFJFXWkIVYIzOdI3n9uNZfmVB2Xzp6Ia22prqaSE1mIRx9aRmr4eY6d9xULurmOzNh7uBBhYin9X48IDbxhv%2BR7ecaME4MDslFyTNIMkHjWKBbni361eFkQRpKoHvhZk0ofWzaV7G5KmtoTbSJJgwSnHVR6iUJdM9ImiXVxcOps8BU%2FJLDOvEvadUMqtOVZErldCxtfESsfjePjHzDTVwL%2B7B8tCxr9RtPMrSP9aOUctnA20ays92E%2F3l2l81LfveoRw%2BgYhsjLkM7c3Eutqxt50hfFv6zHR%2FFAh%2BsHe8f%2FgJkWbs6mz1ZyGA7jKqFNGdzMUOOE7J9umQ8v9zVJXCBDN%2Bu2XjI8W4VdeEw6piJzgY6pgF6DlzZNPauQZ9NiO6g1POiyhvDaQ8MAw%2F%2BfGh%2BS8pEa%2FnTVI2etWKdh1Pj08dkXDAJvV4BiV5rAH0lZn93Wn%2FLqnWro%2Blur%2BGeolKGtYNoAQOzSXqdVK5UegNIgWGr%2FFtXX0v4sG5rsjmpzdzF1xLdFDnw%2BBVJn5OGBvYF9Sdig%2FtX42aoTjEM2nZvlMZ85Ainuuxpr2sJEqcziHTHGyfUZtSnCMZj&X-Amz-Signature=f8cccb913a3345c56d45cdd33722bf060e52de1ed395917d9c3566dc5b6746ec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2U5UBBO%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBBfXO5hCefjRVJl7JUwBBOO9X8BPxLcBpslMUxBOi0JAiBBGbe%2Fce%2F1mILi0rVTypIrYnIZnk5QCSHEyLOG8JEz3CqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMd7p8e88TTjthct9DKtwD0Jmnst1R%2BS3PJFSNvxTvT9TRfctVKNr9%2FS%2FyRX6vuNsGVEkBi8VcrDJVjVFpwZKh0PRbx%2FihBC5O1VlyiY8q6%2F4R1x5deJqAssHPPEG7LzTLVOBIsDX%2Fy0z00OK3Y98JtdUa3U9A0yb5w60nb1a1fvq1GOhI0mL03yp5N%2BwRTSp9MVQp3XeNu7oGIY7DX9iKg8%2FLsW6uxD5oRQzFksOVEvSjy%2FINTUHdEff9DIlVNgNTP%2B2dBa9fyBzLZZSI%2BdFOssR3TIurR0kr3du4sVc313JFJFXWkIVYIzOdI3n9uNZfmVB2Xzp6Ia22prqaSE1mIRx9aRmr4eY6d9xULurmOzNh7uBBhYin9X48IDbxhv%2BR7ecaME4MDslFyTNIMkHjWKBbni361eFkQRpKoHvhZk0ofWzaV7G5KmtoTbSJJgwSnHVR6iUJdM9ImiXVxcOps8BU%2FJLDOvEvadUMqtOVZErldCxtfESsfjePjHzDTVwL%2B7B8tCxr9RtPMrSP9aOUctnA20ays92E%2F3l2l81LfveoRw%2BgYhsjLkM7c3Eutqxt50hfFv6zHR%2FFAh%2BsHe8f%2FgJkWbs6mz1ZyGA7jKqFNGdzMUOOE7J9umQ8v9zVJXCBDN%2Bu2XjI8W4VdeEw6piJzgY6pgF6DlzZNPauQZ9NiO6g1POiyhvDaQ8MAw%2F%2BfGh%2BS8pEa%2FnTVI2etWKdh1Pj08dkXDAJvV4BiV5rAH0lZn93Wn%2FLqnWro%2Blur%2BGeolKGtYNoAQOzSXqdVK5UegNIgWGr%2FFtXX0v4sG5rsjmpzdzF1xLdFDnw%2BBVJn5OGBvYF9Sdig%2FtX42aoTjEM2nZvlMZ85Ainuuxpr2sJEqcziHTHGyfUZtSnCMZj&X-Amz-Signature=52f1779e826a056b1ce18f8b560baf0707f004e72c1fac0baeedd6c9b413ad47&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2U5UBBO%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBBfXO5hCefjRVJl7JUwBBOO9X8BPxLcBpslMUxBOi0JAiBBGbe%2Fce%2F1mILi0rVTypIrYnIZnk5QCSHEyLOG8JEz3CqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMd7p8e88TTjthct9DKtwD0Jmnst1R%2BS3PJFSNvxTvT9TRfctVKNr9%2FS%2FyRX6vuNsGVEkBi8VcrDJVjVFpwZKh0PRbx%2FihBC5O1VlyiY8q6%2F4R1x5deJqAssHPPEG7LzTLVOBIsDX%2Fy0z00OK3Y98JtdUa3U9A0yb5w60nb1a1fvq1GOhI0mL03yp5N%2BwRTSp9MVQp3XeNu7oGIY7DX9iKg8%2FLsW6uxD5oRQzFksOVEvSjy%2FINTUHdEff9DIlVNgNTP%2B2dBa9fyBzLZZSI%2BdFOssR3TIurR0kr3du4sVc313JFJFXWkIVYIzOdI3n9uNZfmVB2Xzp6Ia22prqaSE1mIRx9aRmr4eY6d9xULurmOzNh7uBBhYin9X48IDbxhv%2BR7ecaME4MDslFyTNIMkHjWKBbni361eFkQRpKoHvhZk0ofWzaV7G5KmtoTbSJJgwSnHVR6iUJdM9ImiXVxcOps8BU%2FJLDOvEvadUMqtOVZErldCxtfESsfjePjHzDTVwL%2B7B8tCxr9RtPMrSP9aOUctnA20ays92E%2F3l2l81LfveoRw%2BgYhsjLkM7c3Eutqxt50hfFv6zHR%2FFAh%2BsHe8f%2FgJkWbs6mz1ZyGA7jKqFNGdzMUOOE7J9umQ8v9zVJXCBDN%2Bu2XjI8W4VdeEw6piJzgY6pgF6DlzZNPauQZ9NiO6g1POiyhvDaQ8MAw%2F%2BfGh%2BS8pEa%2FnTVI2etWKdh1Pj08dkXDAJvV4BiV5rAH0lZn93Wn%2FLqnWro%2Blur%2BGeolKGtYNoAQOzSXqdVK5UegNIgWGr%2FFtXX0v4sG5rsjmpzdzF1xLdFDnw%2BBVJn5OGBvYF9Sdig%2FtX42aoTjEM2nZvlMZ85Ainuuxpr2sJEqcziHTHGyfUZtSnCMZj&X-Amz-Signature=36b09d76aeb17e64b809e349c52aa09ab32c93d6190b4ebcc3cf559811903f86&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q5CFI5RD%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085302Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIAf4JojUpx3UW8x%2FiQtrwPcOpcU6bBl1MDmcGkGCkvWVAiEA%2FLo39vUgkZb%2BkbKsreEmfaJz7%2FdWbQjW9qY1d6FkNWgqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDO7b8i66d%2BVskAloWCrcA3gn14bTUm%2F%2FeLHHjzGWTrONxmqoBn25vEc7kxwcmlXysxBIhMvTFt%2Bf68%2F%2BMOYEzHKXJjRY0JLV21aQfYr1akPxQTnTi6uN3sBtUWElkhrort%2BJO%2FnQUB7FnHHQ9hL%2BM2zkNq5JVIUmv276TeYl1bzQ1J2p7KR8ZM%2FiDuYiGBOscRBFdiwZ9RwLpA0u%2F54xeA70yNz26o8Z0hkQ4cAqHERKZHRUtVkwCMvXjuqMLeBtLGt0jqZoUjf4sWXQQevy75HvHDHROnGxpEYPUMYnAeh2W06e8Dj16as15y%2F9kFsH4V6GX0mRSec%2BHtZLltV5s2qbQHxi842z%2FH24Mh640N07VjhQs4U7Og%2FC0uAzAKFaDTKeT6KamBppw5uOtKaGNNp1xKa4WMWEKDi0zw36dwnNHyuaybBXDm66G5gCxOifNopVZqnq888cMzLK4bAohwLWIxPxV1DQ2drhjzDbJG6bq95vOV1vjsegJiyroeJSw%2F7oYjTzzg1RarmqHP1LWpWa8ICw0C10MeKyv%2FDei0wA3WfG2Jjbm%2FmDNZAS%2B1uDXSCZWjlJIiI2DJPNjmFzVPbY0SMh8scUHswMX1c%2BVdexak%2F8fJLzhxy%2BO0SFw%2BFC23Bg3w1lZbWD1FwmMPKYic4GOqUBmU34cjVFO9a0pUCzsUweV4pYZN23WhKX9ZKgA8Ab5iJDJ7Zy2wibvOQYPZ0qgyGkdSxZS0Gb%2FaFFYcmPjwkdMzCODZLlK4sZOZWklcPDa2Z3nHF5TuwbrLLpyGM1a5dtLg1i4Qr%2BqC7FPbc840yVVaNqncfor4Y4DiA6OXhuTir0RURVjO6AqXZbeAGNxoh2lELiGUoqI71hD9OBcJ7uF%2FDIkJej&X-Amz-Signature=83688ebc7936ebc3d6e142fd092ce81dd5b05dd9cb96c190b12b04316ae04eea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3EMFXUF%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG2jMM4F%2BwcIQhFMmKpH2xH1N8UEM74%2FCyiCNEUUKVhdAiEA1PnpPPybyl1NrbPu9W2DV1Tc97pLj3%2FXP3XR5yWm0NQqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKsVAxUTmeJRcUW6wCrcA4PnUcWv2LqC98g3WNFFW8PNvmXGKQWBOLcYlzROAG3x7nYC45hh3jfeHaI%2Fg2ve%2FW1XskMolW3w3BHXWizgAw%2FihLXJcHd%2B12LS%2Fwd%2FMjSEwip1ERFyrNMNSooLQoVx4cZbxTHWtXuxmS2mR1cLyn4loNZTYFwYX7E1Og8pvlU9QCqP%2FGpvZHvaR3mc9XRoia3n6H1APyUGO4L8TO20wk%2BAYtDt1KPuhZdwLkh5%2BbTrZdnK4Vc7O3JSurx1CxReuRzpp9OQONytk3%2BM9yiRkE%2BqjgHviBs98qbyGvQXLVeCIRR1L6UyuQCWKoLarmTfdycmGW%2FLvnJH7FlT3%2FE8TFj%2BjqZj%2BwQG2CbpSrmQxT0ThQ7AHxTfkBSVuWrq00Ig2caVuMFmTp1LdJzhE5UnwujB4eadS3198qWq8G7ItNaG5fAH2rnJ%2BgEYUmMMs57hJXdvfnzSXJ7DHZP73380eS5yYcRaXymXJ01FSa3nVbbTZPkDJMpavwcd%2Bgn95fVT9eaXGGOKYpx65NCzvUtU6ga73%2BLTtKPhIwIMU2eGl9NMfumqPvAg4OA%2BSgDrJOgzaELsyZA%2BOxdX3EmJdDxkIiAbkU9%2FZiqHvvZyOG16hJjLBA7QvFyw9qTvqPn6MPaYic4GOqUBxgdmqj9SgIsCqO7FDblf0DTgguC2Y%2Bqiv85ymW0UL5XhURRyod0y6Mo9ZpKBl3r3bq0XnLBqHmumADuptJ%2BJSlKHpF0xndHHXjGw37c7RRWasonUChtgaIDeWJyuOjMGGa0Kq9fk8FP06VreR8sP9MllqUkS3lQvflUI8bb99otUSpqXEUKeNNbEcSgH54OZZAVfe4uvfOUHDHN7jIGzHFrMds0g&X-Amz-Signature=b8f533befc374fa75311f30953e92f2c2868421a83395b1d6afc5e9e2512e7a8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3EMFXUF%2F20260324%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260324T085303Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIG2jMM4F%2BwcIQhFMmKpH2xH1N8UEM74%2FCyiCNEUUKVhdAiEA1PnpPPybyl1NrbPu9W2DV1Tc97pLj3%2FXP3XR5yWm0NQqiAQIkv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKsVAxUTmeJRcUW6wCrcA4PnUcWv2LqC98g3WNFFW8PNvmXGKQWBOLcYlzROAG3x7nYC45hh3jfeHaI%2Fg2ve%2FW1XskMolW3w3BHXWizgAw%2FihLXJcHd%2B12LS%2Fwd%2FMjSEwip1ERFyrNMNSooLQoVx4cZbxTHWtXuxmS2mR1cLyn4loNZTYFwYX7E1Og8pvlU9QCqP%2FGpvZHvaR3mc9XRoia3n6H1APyUGO4L8TO20wk%2BAYtDt1KPuhZdwLkh5%2BbTrZdnK4Vc7O3JSurx1CxReuRzpp9OQONytk3%2BM9yiRkE%2BqjgHviBs98qbyGvQXLVeCIRR1L6UyuQCWKoLarmTfdycmGW%2FLvnJH7FlT3%2FE8TFj%2BjqZj%2BwQG2CbpSrmQxT0ThQ7AHxTfkBSVuWrq00Ig2caVuMFmTp1LdJzhE5UnwujB4eadS3198qWq8G7ItNaG5fAH2rnJ%2BgEYUmMMs57hJXdvfnzSXJ7DHZP73380eS5yYcRaXymXJ01FSa3nVbbTZPkDJMpavwcd%2Bgn95fVT9eaXGGOKYpx65NCzvUtU6ga73%2BLTtKPhIwIMU2eGl9NMfumqPvAg4OA%2BSgDrJOgzaELsyZA%2BOxdX3EmJdDxkIiAbkU9%2FZiqHvvZyOG16hJjLBA7QvFyw9qTvqPn6MPaYic4GOqUBxgdmqj9SgIsCqO7FDblf0DTgguC2Y%2Bqiv85ymW0UL5XhURRyod0y6Mo9ZpKBl3r3bq0XnLBqHmumADuptJ%2BJSlKHpF0xndHHXjGw37c7RRWasonUChtgaIDeWJyuOjMGGa0Kq9fk8FP06VreR8sP9MllqUkS3lQvflUI8bb99otUSpqXEUKeNNbEcSgH54OZZAVfe4uvfOUHDHN7jIGzHFrMds0g&X-Amz-Signature=52d3e0671b90c82c30f1a6bdc69b405d5d15e20b5433a5257d33e538b09f7e57&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
