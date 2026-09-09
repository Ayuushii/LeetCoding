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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBGSEYB5%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDW0ckt1XYoXo%2Fu%2BuRLdTNtnCV4sXHqopu%2BSUoiTPHdvAIhAJQzNwyy4rS9Dit1NbBgDsugSvRju62MEdfnzJWXkhBUKv8DCGwQABoMNjM3NDIzMTgzODA1Igx7EgNhIvfdCxBrSGIq3AOwOViQmOhEKgtFOFFG%2BMAmNU9q0lSouZ%2BaAy3bldgYpKFcyJ13atEFb1w8kXRQt9IT7vJXp87JdEjkHZzFe8BhV1wYWeh49TVSR3nMXT0hOL9peYZvpEDb7VAYuH6nkouVOWYY%2B9jz9J3ysrtKTVxW0ioxXGFisRfIsL5kzW2xo05%2FFWEmoKi%2F2izfPYQl0zNEAkBqzFeDLrTgXr4YexOVOPVaZSoc8jJzGbWQlvvCbDcBhU9GkiJCmgGVaUTH4wEAYcKR0JsGofBnv%2FDUr3kgb3C7JkA64foNXGZhAIx9S%2BC7EaPP95RCMgE0FenXDcvj%2F6o345f0Qa4qPzt2h05YldwAC6y3ucz%2Bnl%2F5T%2Fi0aAwPO5d8%2BY6moKDkTnbD9ndUs6MFeFaFvoJpfur1PzX8Ta3PQTeNehZaEP9zloUJ5arSsdXx3C%2FcEwiC7olGanfSnLuLorxJPLXkXzEg2ZSFhagYKZDaYOOcLDKRJctaVFIgsEXvFQTqxV8XvkfO3iSslDVcpfgkk0SlrbkuNuzl7bqFg8Mzq1cqZ70bpKVuKo0uRhptrnUqoJkAXDPjEl3OIGiiznHGCq7OcFb%2FoGm7PzUqIKTBB84J5aBNyIi%2B%2BKLqPuE1wgAb3mKTVzD494TVBjqkAbqvZ7aN874ZPTx26VPs92DEdoa48nqZYsBIHsNUh9EcAFTqqtbEWNs%2FBOMveqGQNI1cVA85BKxe9jZX1gEB6vKVOHyT%2Fa7nKHuebDmenM96PThKnHn3%2Bn%2Fehp9p70blb9o97Y1JjFfWn5EPpxHIcJ6rC60C4EgWCQs3HnKEWyY84d%2Bi%2BR0mbvA00o8%2BqyIl4%2BQer2YLL6dsUR5YPrvN1j3LNrtZ&X-Amz-Signature=9103a9592271dd58906d9eae40a2dc1b0267fd1b49ed60d80af78898dce0328e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBGSEYB5%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDW0ckt1XYoXo%2Fu%2BuRLdTNtnCV4sXHqopu%2BSUoiTPHdvAIhAJQzNwyy4rS9Dit1NbBgDsugSvRju62MEdfnzJWXkhBUKv8DCGwQABoMNjM3NDIzMTgzODA1Igx7EgNhIvfdCxBrSGIq3AOwOViQmOhEKgtFOFFG%2BMAmNU9q0lSouZ%2BaAy3bldgYpKFcyJ13atEFb1w8kXRQt9IT7vJXp87JdEjkHZzFe8BhV1wYWeh49TVSR3nMXT0hOL9peYZvpEDb7VAYuH6nkouVOWYY%2B9jz9J3ysrtKTVxW0ioxXGFisRfIsL5kzW2xo05%2FFWEmoKi%2F2izfPYQl0zNEAkBqzFeDLrTgXr4YexOVOPVaZSoc8jJzGbWQlvvCbDcBhU9GkiJCmgGVaUTH4wEAYcKR0JsGofBnv%2FDUr3kgb3C7JkA64foNXGZhAIx9S%2BC7EaPP95RCMgE0FenXDcvj%2F6o345f0Qa4qPzt2h05YldwAC6y3ucz%2Bnl%2F5T%2Fi0aAwPO5d8%2BY6moKDkTnbD9ndUs6MFeFaFvoJpfur1PzX8Ta3PQTeNehZaEP9zloUJ5arSsdXx3C%2FcEwiC7olGanfSnLuLorxJPLXkXzEg2ZSFhagYKZDaYOOcLDKRJctaVFIgsEXvFQTqxV8XvkfO3iSslDVcpfgkk0SlrbkuNuzl7bqFg8Mzq1cqZ70bpKVuKo0uRhptrnUqoJkAXDPjEl3OIGiiznHGCq7OcFb%2FoGm7PzUqIKTBB84J5aBNyIi%2B%2BKLqPuE1wgAb3mKTVzD494TVBjqkAbqvZ7aN874ZPTx26VPs92DEdoa48nqZYsBIHsNUh9EcAFTqqtbEWNs%2FBOMveqGQNI1cVA85BKxe9jZX1gEB6vKVOHyT%2Fa7nKHuebDmenM96PThKnHn3%2Bn%2Fehp9p70blb9o97Y1JjFfWn5EPpxHIcJ6rC60C4EgWCQs3HnKEWyY84d%2Bi%2BR0mbvA00o8%2BqyIl4%2BQer2YLL6dsUR5YPrvN1j3LNrtZ&X-Amz-Signature=fb65b1a3fbffd8b7b11eb163162e6b5fbe06dbbabd80c6494c0f0c9ea1fdcc68&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBGSEYB5%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124425Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDW0ckt1XYoXo%2Fu%2BuRLdTNtnCV4sXHqopu%2BSUoiTPHdvAIhAJQzNwyy4rS9Dit1NbBgDsugSvRju62MEdfnzJWXkhBUKv8DCGwQABoMNjM3NDIzMTgzODA1Igx7EgNhIvfdCxBrSGIq3AOwOViQmOhEKgtFOFFG%2BMAmNU9q0lSouZ%2BaAy3bldgYpKFcyJ13atEFb1w8kXRQt9IT7vJXp87JdEjkHZzFe8BhV1wYWeh49TVSR3nMXT0hOL9peYZvpEDb7VAYuH6nkouVOWYY%2B9jz9J3ysrtKTVxW0ioxXGFisRfIsL5kzW2xo05%2FFWEmoKi%2F2izfPYQl0zNEAkBqzFeDLrTgXr4YexOVOPVaZSoc8jJzGbWQlvvCbDcBhU9GkiJCmgGVaUTH4wEAYcKR0JsGofBnv%2FDUr3kgb3C7JkA64foNXGZhAIx9S%2BC7EaPP95RCMgE0FenXDcvj%2F6o345f0Qa4qPzt2h05YldwAC6y3ucz%2Bnl%2F5T%2Fi0aAwPO5d8%2BY6moKDkTnbD9ndUs6MFeFaFvoJpfur1PzX8Ta3PQTeNehZaEP9zloUJ5arSsdXx3C%2FcEwiC7olGanfSnLuLorxJPLXkXzEg2ZSFhagYKZDaYOOcLDKRJctaVFIgsEXvFQTqxV8XvkfO3iSslDVcpfgkk0SlrbkuNuzl7bqFg8Mzq1cqZ70bpKVuKo0uRhptrnUqoJkAXDPjEl3OIGiiznHGCq7OcFb%2FoGm7PzUqIKTBB84J5aBNyIi%2B%2BKLqPuE1wgAb3mKTVzD494TVBjqkAbqvZ7aN874ZPTx26VPs92DEdoa48nqZYsBIHsNUh9EcAFTqqtbEWNs%2FBOMveqGQNI1cVA85BKxe9jZX1gEB6vKVOHyT%2Fa7nKHuebDmenM96PThKnHn3%2Bn%2Fehp9p70blb9o97Y1JjFfWn5EPpxHIcJ6rC60C4EgWCQs3HnKEWyY84d%2Bi%2BR0mbvA00o8%2BqyIl4%2BQer2YLL6dsUR5YPrvN1j3LNrtZ&X-Amz-Signature=011861a31dc9705670c7881cbced3afd6d80a0922f74f22ab62786dff62b2bd5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VP4JEI4W%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDmGqoqrT52oFRd%2BGVlg27MxLZPPWYY0%2FhqJWCvtFuKJAiBVKdYydbsriy%2F2sRywtL1HNwJSH88XY5YjVmzObiMMHir%2FAwhsEAAaDDYzNzQyMzE4MzgwNSIMRvRO5ilgup65BNkqKtwDr75eNTkUY253z%2BxRqcXWap1i396bAviZdXzN%2F7sVqLBqS0KCI0N4AiHdiy4ZD0vyIcaJd42y%2FHxGNjxu2h%2BRwq92KAf23DWUN6vxCzO2Vc53zFuQtgtJLo1NjQRxC%2BJ1df2mLjGmifTuBzjdXXhKCumeQPVGcSbV8jkvqZLvgHmchLlz5Wl0Cg2ouwkH3PVEDwrk2UTIQfiegH8%2FBzjj%2BoTnbMobcgVEMkdILxNdTiukbmawm3mFOk%2BMePW8H9GoZlQlxU2mf730oQKXkZjscRIF1Gh2tg5AfwscVfAbGbFVfBBy4wmE0hmc%2F9y0Y%2FoaRM4nfZoRhUwvEP2UNhl9MXr65U1Rfq%2Bmdx75PQedJpE3wM4D%2BlZ48EdWEwm4qmzHONDJYSRu1FhPxmBlOArVWtRcivlihp7%2Ff4AYnyE3D0mitHXexAe0ELg1GEXJwrIwKpMvuncEWWenpd%2BeWMUscdTKP6n77vw8f6aJcutV1D3V8WkgcvAP6mx2ewG1OibgdDwDewsOH76U64WlYJsRwwBc4IIy1Zq3laSZHglcbXh785%2FrD5dt7bgUx8cZSxUVs2V0ki3n8vzRk6Dyl%2B7g8eVHR8oxhihYuRb2%2BlVEJdorCCuDKpqtlAr4ZucwlPWE1QY6pgHeUXSkf%2BBcNfsuZTt6jk7PPi6TCbxpyCf34Iz1N%2BU%2BpbGiTe1aiB2jcSKLl1pmdQi4SYM50SgpLXMad6KLAZLqz%2BBY%2FgWNmi%2F%2FzzyznNY%2FRk1OcpwPfhv2bbFaPoKJlTQS%2FLE%2FmuNBbEeZMqSlfbvK7epjB9PsTIAWDjFGWs%2BpLWIhO%2B5wvj5gA5v63l0e2%2BtOHPHFQ%2Bj0IDx39BNtyl7KdvIEp%2Fms&X-Amz-Signature=7427ebbf570f46feabafd2070861ce4a0f08d4eb81904a7ccb10075bff96bd66&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VP4JEI4W%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDmGqoqrT52oFRd%2BGVlg27MxLZPPWYY0%2FhqJWCvtFuKJAiBVKdYydbsriy%2F2sRywtL1HNwJSH88XY5YjVmzObiMMHir%2FAwhsEAAaDDYzNzQyMzE4MzgwNSIMRvRO5ilgup65BNkqKtwDr75eNTkUY253z%2BxRqcXWap1i396bAviZdXzN%2F7sVqLBqS0KCI0N4AiHdiy4ZD0vyIcaJd42y%2FHxGNjxu2h%2BRwq92KAf23DWUN6vxCzO2Vc53zFuQtgtJLo1NjQRxC%2BJ1df2mLjGmifTuBzjdXXhKCumeQPVGcSbV8jkvqZLvgHmchLlz5Wl0Cg2ouwkH3PVEDwrk2UTIQfiegH8%2FBzjj%2BoTnbMobcgVEMkdILxNdTiukbmawm3mFOk%2BMePW8H9GoZlQlxU2mf730oQKXkZjscRIF1Gh2tg5AfwscVfAbGbFVfBBy4wmE0hmc%2F9y0Y%2FoaRM4nfZoRhUwvEP2UNhl9MXr65U1Rfq%2Bmdx75PQedJpE3wM4D%2BlZ48EdWEwm4qmzHONDJYSRu1FhPxmBlOArVWtRcivlihp7%2Ff4AYnyE3D0mitHXexAe0ELg1GEXJwrIwKpMvuncEWWenpd%2BeWMUscdTKP6n77vw8f6aJcutV1D3V8WkgcvAP6mx2ewG1OibgdDwDewsOH76U64WlYJsRwwBc4IIy1Zq3laSZHglcbXh785%2FrD5dt7bgUx8cZSxUVs2V0ki3n8vzRk6Dyl%2B7g8eVHR8oxhihYuRb2%2BlVEJdorCCuDKpqtlAr4ZucwlPWE1QY6pgHeUXSkf%2BBcNfsuZTt6jk7PPi6TCbxpyCf34Iz1N%2BU%2BpbGiTe1aiB2jcSKLl1pmdQi4SYM50SgpLXMad6KLAZLqz%2BBY%2FgWNmi%2F%2FzzyznNY%2FRk1OcpwPfhv2bbFaPoKJlTQS%2FLE%2FmuNBbEeZMqSlfbvK7epjB9PsTIAWDjFGWs%2BpLWIhO%2B5wvj5gA5v63l0e2%2BtOHPHFQ%2Bj0IDx39BNtyl7KdvIEp%2Fms&X-Amz-Signature=d6577281ceabd45fa33f5d21c6ef41c75a5b715c3d12e6006f550359846cf47f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VP4JEI4W%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDmGqoqrT52oFRd%2BGVlg27MxLZPPWYY0%2FhqJWCvtFuKJAiBVKdYydbsriy%2F2sRywtL1HNwJSH88XY5YjVmzObiMMHir%2FAwhsEAAaDDYzNzQyMzE4MzgwNSIMRvRO5ilgup65BNkqKtwDr75eNTkUY253z%2BxRqcXWap1i396bAviZdXzN%2F7sVqLBqS0KCI0N4AiHdiy4ZD0vyIcaJd42y%2FHxGNjxu2h%2BRwq92KAf23DWUN6vxCzO2Vc53zFuQtgtJLo1NjQRxC%2BJ1df2mLjGmifTuBzjdXXhKCumeQPVGcSbV8jkvqZLvgHmchLlz5Wl0Cg2ouwkH3PVEDwrk2UTIQfiegH8%2FBzjj%2BoTnbMobcgVEMkdILxNdTiukbmawm3mFOk%2BMePW8H9GoZlQlxU2mf730oQKXkZjscRIF1Gh2tg5AfwscVfAbGbFVfBBy4wmE0hmc%2F9y0Y%2FoaRM4nfZoRhUwvEP2UNhl9MXr65U1Rfq%2Bmdx75PQedJpE3wM4D%2BlZ48EdWEwm4qmzHONDJYSRu1FhPxmBlOArVWtRcivlihp7%2Ff4AYnyE3D0mitHXexAe0ELg1GEXJwrIwKpMvuncEWWenpd%2BeWMUscdTKP6n77vw8f6aJcutV1D3V8WkgcvAP6mx2ewG1OibgdDwDewsOH76U64WlYJsRwwBc4IIy1Zq3laSZHglcbXh785%2FrD5dt7bgUx8cZSxUVs2V0ki3n8vzRk6Dyl%2B7g8eVHR8oxhihYuRb2%2BlVEJdorCCuDKpqtlAr4ZucwlPWE1QY6pgHeUXSkf%2BBcNfsuZTt6jk7PPi6TCbxpyCf34Iz1N%2BU%2BpbGiTe1aiB2jcSKLl1pmdQi4SYM50SgpLXMad6KLAZLqz%2BBY%2FgWNmi%2F%2FzzyznNY%2FRk1OcpwPfhv2bbFaPoKJlTQS%2FLE%2FmuNBbEeZMqSlfbvK7epjB9PsTIAWDjFGWs%2BpLWIhO%2B5wvj5gA5v63l0e2%2BtOHPHFQ%2Bj0IDx39BNtyl7KdvIEp%2Fms&X-Amz-Signature=2b6c59bd5e1bd91d35acfc2dfcd136fb1de237703feb62ef50d94e0f8e789529&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VP4JEI4W%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDmGqoqrT52oFRd%2BGVlg27MxLZPPWYY0%2FhqJWCvtFuKJAiBVKdYydbsriy%2F2sRywtL1HNwJSH88XY5YjVmzObiMMHir%2FAwhsEAAaDDYzNzQyMzE4MzgwNSIMRvRO5ilgup65BNkqKtwDr75eNTkUY253z%2BxRqcXWap1i396bAviZdXzN%2F7sVqLBqS0KCI0N4AiHdiy4ZD0vyIcaJd42y%2FHxGNjxu2h%2BRwq92KAf23DWUN6vxCzO2Vc53zFuQtgtJLo1NjQRxC%2BJ1df2mLjGmifTuBzjdXXhKCumeQPVGcSbV8jkvqZLvgHmchLlz5Wl0Cg2ouwkH3PVEDwrk2UTIQfiegH8%2FBzjj%2BoTnbMobcgVEMkdILxNdTiukbmawm3mFOk%2BMePW8H9GoZlQlxU2mf730oQKXkZjscRIF1Gh2tg5AfwscVfAbGbFVfBBy4wmE0hmc%2F9y0Y%2FoaRM4nfZoRhUwvEP2UNhl9MXr65U1Rfq%2Bmdx75PQedJpE3wM4D%2BlZ48EdWEwm4qmzHONDJYSRu1FhPxmBlOArVWtRcivlihp7%2Ff4AYnyE3D0mitHXexAe0ELg1GEXJwrIwKpMvuncEWWenpd%2BeWMUscdTKP6n77vw8f6aJcutV1D3V8WkgcvAP6mx2ewG1OibgdDwDewsOH76U64WlYJsRwwBc4IIy1Zq3laSZHglcbXh785%2FrD5dt7bgUx8cZSxUVs2V0ki3n8vzRk6Dyl%2B7g8eVHR8oxhihYuRb2%2BlVEJdorCCuDKpqtlAr4ZucwlPWE1QY6pgHeUXSkf%2BBcNfsuZTt6jk7PPi6TCbxpyCf34Iz1N%2BU%2BpbGiTe1aiB2jcSKLl1pmdQi4SYM50SgpLXMad6KLAZLqz%2BBY%2FgWNmi%2F%2FzzyznNY%2FRk1OcpwPfhv2bbFaPoKJlTQS%2FLE%2FmuNBbEeZMqSlfbvK7epjB9PsTIAWDjFGWs%2BpLWIhO%2B5wvj5gA5v63l0e2%2BtOHPHFQ%2Bj0IDx39BNtyl7KdvIEp%2Fms&X-Amz-Signature=7e02f2876d2d59fb7c10ae19126f1c0fa882b9a8d792dd2c2b8b3f81abaf6279&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QAB5XKMT%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIELCxoy5G3iN85CnjE%2BzL1NA78jOWuZYqFKQxdASWmN%2BAiAWrMihnHXr%2FtnLxEM7IvYNmcUrpHSuqcr51UsoQ5UJxir%2FAwhsEAAaDDYzNzQyMzE4MzgwNSIMGvl7vhLMojfaAo8lKtwDpBSE1%2B7YtiiLIxyvSMy7T%2FOvUsZfijMsE1xUBGP2xqD%2Bvz6%2BGOFCwc9nYv0vBg5R%2BMKqN27g4caAmNYnCuT2mh9uGb1YRH7LDOUeNJX8X2h1Za%2F%2FUmgN75Q%2Fr%2F6IteN4Po3%2BTO2%2BOB6OAtpVTH7knridpFYh7nO1nfnDwu2jg1WATYxNOEzZNDV3q7gdTeivY6aaaFqaGgO1UuNzBQc%2BEc5vsuH2DjJj%2Fyc0qRSZulW5ocyIKJhKpjMWShb6eFXtCm3sOHbVfL6YMqla56zGg2c2F3ivK15Ub%2Bil0dYqB4mcmWffsSbffMM7Ebd3YhdWKwaQ8XVcj2%2FUHTLw%2FPO2WRqEnqcyovjbOdyQ4pSuE5tT%2F%2F%2F42TsDh9kXQfE691YM8y%2BPAD1Bq%2BYO%2BSRi8Ka2uINmXZUfVirawV2C5hejnRdKxqWPK0nP5pLgmyzNY%2B4H8HzKWpL3Wy4RZ5I1S9Rq83eDvUl7v04C6GYjUmtWEqrteN%2BlhaPFbKmU4x69k2FMOl0bBxmAoD86ckbBryS3msc4%2Fc3Z8S7oFJ6xjDug34prOtgIGYSk03iRmyPGgBp77FnRb3cbA%2FhPkEUJsJXGWSpSId0RELKD70z1HDMa7OsBPCddJCZbqrhWJvMwrfWE1QY6pgHDCgd7xpzxQ3Btmaq0q0ZJcIZKb%2Bbiaq0ONY%2BbYyw6FWotOS%2B%2FXaTHybFLIIVDHLQ80i47lAckP1YvhHam1%2FlZ1u67wYDENMkqTzBWW56YSU%2FT5uuss5LxUmVTLQjGgjBGovCoCOoj%2BwEHOnQLaThE0iMP9azsA%2Fvk0rbNzoUHDXpJk3WZlKnIIjPRr4gZbqzsE2EBy1ApChP9xWW1abFL85sFsnE%2B&X-Amz-Signature=d1ec66f82448a1dc66cd922c9eec0570be234ffbdd8899e317d4d629c50a36e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W4C4QXPK%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD6N0FJAxVoHSshH6O8ZcjFDVZsIgI3iYuk0%2FCGXi7RaAIhAJ%2FUDM8QTQ%2BBcLBYjuhedxUuCMxcpEQxrbH%2BR2LS%2BEC5Kv8DCGwQABoMNjM3NDIzMTgzODA1IgypkBe8t9TgdnUyIUUq3AMGzGPWFjg4eO7XcxfQArni2oLwoJMeozC7cZVyDxpKKLb%2F0NtAuh%2BSL3w%2FodhbpPYjhqdeFzDvE79vNSTAlmVEQZQnfHAfLBmHpZlYjqDCtFhw3afiGVNXWrXjT3q%2BaQtzp7%2FHUW4C67H7xCx7R5mm%2Bnnf819x4Vxin5cQk2C4tR8aJVtYUoXWyxk7E%2FFJYxyzQLDs8Rq5qcXhanCKPPG09yrBRgzP3eAhn128zVBIScfv8X9EeMJn2XjKTVaMvU%2FVu9v6wl0T8EOLvJnmm63rZXjnlXeCHgjjDIRPczj7hBSy10lPMYBYXXHE3OUAFomMZlriWf4lNOI4Jv2%2Fkh7yavzUpBOBKw0KTsMRqu3vUdXwlcD3TQFgPLaWvwsmP5TFzRJ02JY4ebnY2biOWiQHuv2yh8EMu2U%2BeQfyN7OA6sNmbHAfw7U5h6DMa1cDky6Z%2FVqOXsOqz27xiHnVMj6qm%2BD%2FE%2B5biSzbaZmmCiq8QZoAGSZrjpj1A3iIXpvXT8j7i1uPx2dbnukZmn3ir9EaI7bfKUwwPHLIBwT0nytYfJlzuXzH7gz58MVHECKo2%2BSy%2B7Pk15c9RZEpPmfdOkiFtUxpGsghYKRbVVOFVha9GZ1FNpbSbzKd3ucE%2FzCz%2BITVBjqkAUbu37ANCxyQMmMFhowVkd2WRoOwf1q2h1OGq95z54p8vpNqs5J%2F61QYhLi0oRg0amiXkR8y8LVn0rVpjKLvMmItILF3IW5dqBgTTgsg231SKS8iVKdYQNaoz7LmwA1Tpq3r42eVHgJGsbNOQbVpO1i%2FVTJn4P%2F4pZEon4XdsGOV52vHo6r0p9Eycc7naznzIdlzEu8YevKgI3FeP9V3IOEbYeKT&X-Amz-Signature=21c0fab6d0f0dcf2683afe9300718ed2d94e9f6b239b8ba39fc8fe7030ba17b0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W4C4QXPK%2F20260909%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260909T124426Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD6N0FJAxVoHSshH6O8ZcjFDVZsIgI3iYuk0%2FCGXi7RaAIhAJ%2FUDM8QTQ%2BBcLBYjuhedxUuCMxcpEQxrbH%2BR2LS%2BEC5Kv8DCGwQABoMNjM3NDIzMTgzODA1IgypkBe8t9TgdnUyIUUq3AMGzGPWFjg4eO7XcxfQArni2oLwoJMeozC7cZVyDxpKKLb%2F0NtAuh%2BSL3w%2FodhbpPYjhqdeFzDvE79vNSTAlmVEQZQnfHAfLBmHpZlYjqDCtFhw3afiGVNXWrXjT3q%2BaQtzp7%2FHUW4C67H7xCx7R5mm%2Bnnf819x4Vxin5cQk2C4tR8aJVtYUoXWyxk7E%2FFJYxyzQLDs8Rq5qcXhanCKPPG09yrBRgzP3eAhn128zVBIScfv8X9EeMJn2XjKTVaMvU%2FVu9v6wl0T8EOLvJnmm63rZXjnlXeCHgjjDIRPczj7hBSy10lPMYBYXXHE3OUAFomMZlriWf4lNOI4Jv2%2Fkh7yavzUpBOBKw0KTsMRqu3vUdXwlcD3TQFgPLaWvwsmP5TFzRJ02JY4ebnY2biOWiQHuv2yh8EMu2U%2BeQfyN7OA6sNmbHAfw7U5h6DMa1cDky6Z%2FVqOXsOqz27xiHnVMj6qm%2BD%2FE%2B5biSzbaZmmCiq8QZoAGSZrjpj1A3iIXpvXT8j7i1uPx2dbnukZmn3ir9EaI7bfKUwwPHLIBwT0nytYfJlzuXzH7gz58MVHECKo2%2BSy%2B7Pk15c9RZEpPmfdOkiFtUxpGsghYKRbVVOFVha9GZ1FNpbSbzKd3ucE%2FzCz%2BITVBjqkAUbu37ANCxyQMmMFhowVkd2WRoOwf1q2h1OGq95z54p8vpNqs5J%2F61QYhLi0oRg0amiXkR8y8LVn0rVpjKLvMmItILF3IW5dqBgTTgsg231SKS8iVKdYQNaoz7LmwA1Tpq3r42eVHgJGsbNOQbVpO1i%2FVTJn4P%2F4pZEon4XdsGOV52vHo6r0p9Eycc7naznzIdlzEu8YevKgI3FeP9V3IOEbYeKT&X-Amz-Signature=df60b6851ffdebdb666fdda6b31720e03d4b52d959138961d4f1bec37e9ad635&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
