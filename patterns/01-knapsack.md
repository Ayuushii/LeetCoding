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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCXWGDDW%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIDpsnMd5xzD9AWz6YWzmCow0hcVoxlReL77D2bJ3tTxoAiBKfAtEZAU3kBYwBg77AM0%2BewePlIRuZV1nr1qcqsSgvSqIBAjL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FEK1xze54S9%2B2Q12KtwD0Nx9EjHpPDqpNzExVvkcP67rXHCzOulhBnruSL0IrynnDJfYoOuRGGVHWqLr%2FF9yaiknudqii4%2Br27SWKqALdNH%2F0vfQWq9MlhL%2FrRFEnDnqmnP7yOs8Wh%2BNNSfS66wYnd6LqROCO0s2AReUSegMWjRy1HqM3OKD6En5T%2BF6vm4PUjo%2BGsad9U%2BrZf5cGK4Vibn1%2FUNL6AQM3Qp4PpqRYIxB3LJoEtAy3Hqst8AzxIjXF8mbJi%2F7dO5CowQ4tRFJuF4p9eAaump0gJ4s1FYume%2BiN2Hv9Dw%2F10p5eCBmfz3MsNmLGD6LsECi2jokx37ASi7wXaPO2HmghjfFOLA%2BHou72L%2BxKhdAQhMGy9YaDtyBzM%2FDRjXf%2F5KYa%2BAQq77cHbemcfmAuJfRXSXx8jyKaIGKWCSQ9HHWUy6DU6MbMthZP42LVXMcYV72PqLDkJTHrZpEteiPNlxLoQW0EtfQipb3iBO%2FFkLutdqtQ5jnGZSbn1IKgDJeFJbASa7BfHWCjz2N4vkmYfcgbBv6gz9U2tdfijcgUYljfkMVWoMv6qSSGFFg%2B0rKlEyCWxIkZk4HVrAmYJ0fb%2Fxad7n2fNrNiBpAvYfqF1icf9hVx0KD6NRiuM8pE6DgYFa3GLcwv7ep1AY6pgGw3oau9V7HUxZ1FZ3UA67N7%2B4cHswRFSssAcXOi18SEh6wCCZGvNeJnSI9y%2ByokIaNbHPsy4InlfTHbmfuNKgCOXhp0sj76NGOrc62MPhOgU1OOfNrjKdQztEEXNNbNRnwK1eLNNNefnpU8VJmNHXzVTtqnwHPQS44C4pWNRxkFZwP7idiLE14X63u7a6cabuMgk%2FqL9nVZxtG8M3bllbMgbYtACWp&X-Amz-Signature=7de83633f480ed5ecdc86b7cbc10cccc9c30427325f0e0f66dea4e25d3fb9899&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCXWGDDW%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIDpsnMd5xzD9AWz6YWzmCow0hcVoxlReL77D2bJ3tTxoAiBKfAtEZAU3kBYwBg77AM0%2BewePlIRuZV1nr1qcqsSgvSqIBAjL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FEK1xze54S9%2B2Q12KtwD0Nx9EjHpPDqpNzExVvkcP67rXHCzOulhBnruSL0IrynnDJfYoOuRGGVHWqLr%2FF9yaiknudqii4%2Br27SWKqALdNH%2F0vfQWq9MlhL%2FrRFEnDnqmnP7yOs8Wh%2BNNSfS66wYnd6LqROCO0s2AReUSegMWjRy1HqM3OKD6En5T%2BF6vm4PUjo%2BGsad9U%2BrZf5cGK4Vibn1%2FUNL6AQM3Qp4PpqRYIxB3LJoEtAy3Hqst8AzxIjXF8mbJi%2F7dO5CowQ4tRFJuF4p9eAaump0gJ4s1FYume%2BiN2Hv9Dw%2F10p5eCBmfz3MsNmLGD6LsECi2jokx37ASi7wXaPO2HmghjfFOLA%2BHou72L%2BxKhdAQhMGy9YaDtyBzM%2FDRjXf%2F5KYa%2BAQq77cHbemcfmAuJfRXSXx8jyKaIGKWCSQ9HHWUy6DU6MbMthZP42LVXMcYV72PqLDkJTHrZpEteiPNlxLoQW0EtfQipb3iBO%2FFkLutdqtQ5jnGZSbn1IKgDJeFJbASa7BfHWCjz2N4vkmYfcgbBv6gz9U2tdfijcgUYljfkMVWoMv6qSSGFFg%2B0rKlEyCWxIkZk4HVrAmYJ0fb%2Fxad7n2fNrNiBpAvYfqF1icf9hVx0KD6NRiuM8pE6DgYFa3GLcwv7ep1AY6pgGw3oau9V7HUxZ1FZ3UA67N7%2B4cHswRFSssAcXOi18SEh6wCCZGvNeJnSI9y%2ByokIaNbHPsy4InlfTHbmfuNKgCOXhp0sj76NGOrc62MPhOgU1OOfNrjKdQztEEXNNbNRnwK1eLNNNefnpU8VJmNHXzVTtqnwHPQS44C4pWNRxkFZwP7idiLE14X63u7a6cabuMgk%2FqL9nVZxtG8M3bllbMgbYtACWp&X-Amz-Signature=91ceb451501613e55a8bedb198ac89988e209fe4bebc27a3c1ebc20daf5ada96&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VCXWGDDW%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAMaCXVzLXdlc3QtMiJGMEQCIDpsnMd5xzD9AWz6YWzmCow0hcVoxlReL77D2bJ3tTxoAiBKfAtEZAU3kBYwBg77AM0%2BewePlIRuZV1nr1qcqsSgvSqIBAjL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2FEK1xze54S9%2B2Q12KtwD0Nx9EjHpPDqpNzExVvkcP67rXHCzOulhBnruSL0IrynnDJfYoOuRGGVHWqLr%2FF9yaiknudqii4%2Br27SWKqALdNH%2F0vfQWq9MlhL%2FrRFEnDnqmnP7yOs8Wh%2BNNSfS66wYnd6LqROCO0s2AReUSegMWjRy1HqM3OKD6En5T%2BF6vm4PUjo%2BGsad9U%2BrZf5cGK4Vibn1%2FUNL6AQM3Qp4PpqRYIxB3LJoEtAy3Hqst8AzxIjXF8mbJi%2F7dO5CowQ4tRFJuF4p9eAaump0gJ4s1FYume%2BiN2Hv9Dw%2F10p5eCBmfz3MsNmLGD6LsECi2jokx37ASi7wXaPO2HmghjfFOLA%2BHou72L%2BxKhdAQhMGy9YaDtyBzM%2FDRjXf%2F5KYa%2BAQq77cHbemcfmAuJfRXSXx8jyKaIGKWCSQ9HHWUy6DU6MbMthZP42LVXMcYV72PqLDkJTHrZpEteiPNlxLoQW0EtfQipb3iBO%2FFkLutdqtQ5jnGZSbn1IKgDJeFJbASa7BfHWCjz2N4vkmYfcgbBv6gz9U2tdfijcgUYljfkMVWoMv6qSSGFFg%2B0rKlEyCWxIkZk4HVrAmYJ0fb%2Fxad7n2fNrNiBpAvYfqF1icf9hVx0KD6NRiuM8pE6DgYFa3GLcwv7ep1AY6pgGw3oau9V7HUxZ1FZ3UA67N7%2B4cHswRFSssAcXOi18SEh6wCCZGvNeJnSI9y%2ByokIaNbHPsy4InlfTHbmfuNKgCOXhp0sj76NGOrc62MPhOgU1OOfNrjKdQztEEXNNbNRnwK1eLNNNefnpU8VJmNHXzVTtqnwHPQS44C4pWNRxkFZwP7idiLE14X63u7a6cabuMgk%2FqL9nVZxtG8M3bllbMgbYtACWp&X-Amz-Signature=0b121860d28db57fbbea8ef98f85150a4c2e2a3bf26ba6ddd844ca1bc7de43f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YGTDRC4%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCp9gbAS7knPv%2FTgxW%2FG1stz5EV67EbyVPTgSfH7ApvogIhANJlVJb416xvCcfTa%2BeDsBJqv1KzN1ou2N1RNSQwI4XEKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw2ITqFu6aQLu48SGIq3AMydGVUJuzyvNDFxcwH7Mrdpp9K35PDmVOFXS4Vap4041B355u7wCW0gmyClydOPTMq8pvKWHBm2aSH4KZw1UqjRs3AJNQgR%2Fojl3oqoVXrBjyUYGjKKqRyOaGQy6KjrtEkjnwES1x6H7zbgbFD9Iq5G5XnD%2FZvXn7qd6%2BW%2FWNnrxWfmZOeVJUa4YwvCBIwlVgcdwLeCKpSrLhmaCg5tlQebF4lCHrgI7a9YQx%2FqF0dpcynJshECqZt2gcHk4BDUOJxbAO3ABy2KS06KmMQdtMwwWrtJpnHy6BM6eGwzghvV2fkkOyNd%2FUFQ38lDs6oN3aDNHr7cUVH3kZhSFVn1dv2u02xgKgOEbTur6HqzRw4x0ZPbELdyKgiZTQS5EOTYeqmXMkttZDO0oCNyXFfymbpQMRIwNDAPPmYiW7ieH%2BSM8e9FZwiOoA%2Bnzs8ETTGmD1Ck99zschK4txtKgGGWRrOYV%2BHXmtbQvVcKt5VKLWqRKa6KWcW9iFZapQJ7TZmrudOtneAfG%2FA5DvOWOWqPsaE%2BiRMh4qcNGHaKO3mr0%2BNFIzeVzfX9H1TAzjTksAAFCntfDGK6T4UXMDSvMERvVjitHP5KuL3H2SxbGToCWNZprc5Mr1dv43Ukk%2FpOzCS26rUBjqkAcrdbZm99TEFxzWSLa3M0QO3sR7Lcn9ZsbWef22dEz3ebjU0zUgzvA47vJIatXtrqcyBqkzxfRYZLd5zisshKh8aQGN1BpnoZmXc%2FRBWOCInjxLT3k4X6Z771kSmszG14rOMUqyNOebxMbdfa8Iajto7graqiSu7%2FLn33e7MMCywqs2dE%2Bd1YIIPlq0I%2Bpx%2B32Ung0ZxAh1oXTKTnHxduqrXuUWS&X-Amz-Signature=00d2f5407468e46bef1b23302f9290d874c5ba40ecf55ebee34023b8bad6fb16&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YGTDRC4%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCp9gbAS7knPv%2FTgxW%2FG1stz5EV67EbyVPTgSfH7ApvogIhANJlVJb416xvCcfTa%2BeDsBJqv1KzN1ou2N1RNSQwI4XEKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw2ITqFu6aQLu48SGIq3AMydGVUJuzyvNDFxcwH7Mrdpp9K35PDmVOFXS4Vap4041B355u7wCW0gmyClydOPTMq8pvKWHBm2aSH4KZw1UqjRs3AJNQgR%2Fojl3oqoVXrBjyUYGjKKqRyOaGQy6KjrtEkjnwES1x6H7zbgbFD9Iq5G5XnD%2FZvXn7qd6%2BW%2FWNnrxWfmZOeVJUa4YwvCBIwlVgcdwLeCKpSrLhmaCg5tlQebF4lCHrgI7a9YQx%2FqF0dpcynJshECqZt2gcHk4BDUOJxbAO3ABy2KS06KmMQdtMwwWrtJpnHy6BM6eGwzghvV2fkkOyNd%2FUFQ38lDs6oN3aDNHr7cUVH3kZhSFVn1dv2u02xgKgOEbTur6HqzRw4x0ZPbELdyKgiZTQS5EOTYeqmXMkttZDO0oCNyXFfymbpQMRIwNDAPPmYiW7ieH%2BSM8e9FZwiOoA%2Bnzs8ETTGmD1Ck99zschK4txtKgGGWRrOYV%2BHXmtbQvVcKt5VKLWqRKa6KWcW9iFZapQJ7TZmrudOtneAfG%2FA5DvOWOWqPsaE%2BiRMh4qcNGHaKO3mr0%2BNFIzeVzfX9H1TAzjTksAAFCntfDGK6T4UXMDSvMERvVjitHP5KuL3H2SxbGToCWNZprc5Mr1dv43Ukk%2FpOzCS26rUBjqkAcrdbZm99TEFxzWSLa3M0QO3sR7Lcn9ZsbWef22dEz3ebjU0zUgzvA47vJIatXtrqcyBqkzxfRYZLd5zisshKh8aQGN1BpnoZmXc%2FRBWOCInjxLT3k4X6Z771kSmszG14rOMUqyNOebxMbdfa8Iajto7graqiSu7%2FLn33e7MMCywqs2dE%2Bd1YIIPlq0I%2Bpx%2B32Ung0ZxAh1oXTKTnHxduqrXuUWS&X-Amz-Signature=4a178f622df68180bb11d047025f48299c74aee6faaaf030cee3ed2c053f2697&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YGTDRC4%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCp9gbAS7knPv%2FTgxW%2FG1stz5EV67EbyVPTgSfH7ApvogIhANJlVJb416xvCcfTa%2BeDsBJqv1KzN1ou2N1RNSQwI4XEKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw2ITqFu6aQLu48SGIq3AMydGVUJuzyvNDFxcwH7Mrdpp9K35PDmVOFXS4Vap4041B355u7wCW0gmyClydOPTMq8pvKWHBm2aSH4KZw1UqjRs3AJNQgR%2Fojl3oqoVXrBjyUYGjKKqRyOaGQy6KjrtEkjnwES1x6H7zbgbFD9Iq5G5XnD%2FZvXn7qd6%2BW%2FWNnrxWfmZOeVJUa4YwvCBIwlVgcdwLeCKpSrLhmaCg5tlQebF4lCHrgI7a9YQx%2FqF0dpcynJshECqZt2gcHk4BDUOJxbAO3ABy2KS06KmMQdtMwwWrtJpnHy6BM6eGwzghvV2fkkOyNd%2FUFQ38lDs6oN3aDNHr7cUVH3kZhSFVn1dv2u02xgKgOEbTur6HqzRw4x0ZPbELdyKgiZTQS5EOTYeqmXMkttZDO0oCNyXFfymbpQMRIwNDAPPmYiW7ieH%2BSM8e9FZwiOoA%2Bnzs8ETTGmD1Ck99zschK4txtKgGGWRrOYV%2BHXmtbQvVcKt5VKLWqRKa6KWcW9iFZapQJ7TZmrudOtneAfG%2FA5DvOWOWqPsaE%2BiRMh4qcNGHaKO3mr0%2BNFIzeVzfX9H1TAzjTksAAFCntfDGK6T4UXMDSvMERvVjitHP5KuL3H2SxbGToCWNZprc5Mr1dv43Ukk%2FpOzCS26rUBjqkAcrdbZm99TEFxzWSLa3M0QO3sR7Lcn9ZsbWef22dEz3ebjU0zUgzvA47vJIatXtrqcyBqkzxfRYZLd5zisshKh8aQGN1BpnoZmXc%2FRBWOCInjxLT3k4X6Z771kSmszG14rOMUqyNOebxMbdfa8Iajto7graqiSu7%2FLn33e7MMCywqs2dE%2Bd1YIIPlq0I%2Bpx%2B32Ung0ZxAh1oXTKTnHxduqrXuUWS&X-Amz-Signature=07be90b95aba3b69bb4a78f5df61bff6241ff92ac22e4aa6f36baa2bd5f4bc00&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666YGTDRC4%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082723Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCp9gbAS7knPv%2FTgxW%2FG1stz5EV67EbyVPTgSfH7ApvogIhANJlVJb416xvCcfTa%2BeDsBJqv1KzN1ou2N1RNSQwI4XEKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw2ITqFu6aQLu48SGIq3AMydGVUJuzyvNDFxcwH7Mrdpp9K35PDmVOFXS4Vap4041B355u7wCW0gmyClydOPTMq8pvKWHBm2aSH4KZw1UqjRs3AJNQgR%2Fojl3oqoVXrBjyUYGjKKqRyOaGQy6KjrtEkjnwES1x6H7zbgbFD9Iq5G5XnD%2FZvXn7qd6%2BW%2FWNnrxWfmZOeVJUa4YwvCBIwlVgcdwLeCKpSrLhmaCg5tlQebF4lCHrgI7a9YQx%2FqF0dpcynJshECqZt2gcHk4BDUOJxbAO3ABy2KS06KmMQdtMwwWrtJpnHy6BM6eGwzghvV2fkkOyNd%2FUFQ38lDs6oN3aDNHr7cUVH3kZhSFVn1dv2u02xgKgOEbTur6HqzRw4x0ZPbELdyKgiZTQS5EOTYeqmXMkttZDO0oCNyXFfymbpQMRIwNDAPPmYiW7ieH%2BSM8e9FZwiOoA%2Bnzs8ETTGmD1Ck99zschK4txtKgGGWRrOYV%2BHXmtbQvVcKt5VKLWqRKa6KWcW9iFZapQJ7TZmrudOtneAfG%2FA5DvOWOWqPsaE%2BiRMh4qcNGHaKO3mr0%2BNFIzeVzfX9H1TAzjTksAAFCntfDGK6T4UXMDSvMERvVjitHP5KuL3H2SxbGToCWNZprc5Mr1dv43Ukk%2FpOzCS26rUBjqkAcrdbZm99TEFxzWSLa3M0QO3sR7Lcn9ZsbWef22dEz3ebjU0zUgzvA47vJIatXtrqcyBqkzxfRYZLd5zisshKh8aQGN1BpnoZmXc%2FRBWOCInjxLT3k4X6Z771kSmszG14rOMUqyNOebxMbdfa8Iajto7graqiSu7%2FLn33e7MMCywqs2dE%2Bd1YIIPlq0I%2Bpx%2B32Ung0ZxAh1oXTKTnHxduqrXuUWS&X-Amz-Signature=91616378ec4c5271c9fed38442940059b90573edd8ce4ea09b88fc7cc4783382&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X47RGDCN%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082724Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAgaCXVzLXdlc3QtMiJHMEUCIBmZHDzboOcu37rh7k%2Bujn%2Bzwk%2BZleJO8g93g0lyWlHKAiEA%2BK9OouCQQJ7Uv9XDCStgZWdj3QgHjR00bODLLhNFxOwqiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNMlVEqMuXXe305mWyrcA3vz%2B429h2xNvb0GPha7B%2Fra6w4z1GrnH1Fr5RgQS7E7tJvtYjo0Nj%2FshkGtFKrnRG2ljaANfYo3qN%2BCERJ193YXa9fxXiD%2F0e4NEf6ZQFi5hjrRmwra7IDARL0onDQTBynsgFspmJQZLs8ahRMaet0Dtc1RfE3S5O0MY9XA7CXuLb9u%2BvAaVdRzmq1gNIvz1H0pmJhSIFxl2CSsO1puHAW2svz9ppIoHk8WbLK%2FaY7gvBbq1HFiOzMAtLWl%2FGlggLeJ3l5zmb2LTfzFFcT77OWQ2lLL%2BFXSitqo55BuiIAVasgZVjPCBL4YbW6%2FadrlzkWYgwJm0655ICdRvYcJVOXpZ2wCb8dw7cmFtU9IfJF3twRXFe0A%2FUTSTH4Qq9lMLqtfVtfmiwGrFOeM907OeaqxidJVSIr%2BE8Raa%2BEio0RmWS1AEE6FxSnmvx4frkiRs%2B7P5OkRu1I%2BVThlK1sLtYzdl70qnYAhJ1MR4JIcZcF3A8iZnUTzOetzuRz3wxv572DRg20QjPatGfBN0NeFwOY6exPijCbzGY4C9nrJW4uQXdXJMAmDP0xqfR7vV%2BRYUP%2BQdPIQln4QX3YvD8QebVgZDDGbj5pv%2FfCb8cnex%2FehSPDZRUMWPGLHF2fRMLLWqtQGOqUBpErOEbV%2FYoOTAk4YeFO8vPCINhJRk%2FvOqo6dmLGDtd8bDrNnh24hljKVtuPBnSJlvrHApEiSsOQzxWIeGWj9clLTwonuwSaD31dHgrTdr8n4wkw4uv8l520ZmvidYZE3C383%2Bbd5oPwEalmm1KJOMQy3l3xQbJ9P5wwTA76g%2FSAG0yIIsI4ptN8YM6HKINMYwkDJOMufBLBEeOa9KWhH8H8HAdVc&X-Amz-Signature=5c3f277bfd285ffbde2715f0e1e296796a07bc07731d23b19a8e95870e7e66ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663X3BQX7P%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082724Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIB1zUqDHJgrOUcQyHamfkOyIzM6jPd60As326zo%2BGKcJAiEApE2K5V%2B129ZqmJBYsYF9fE%2B%2FeLItt9uQjFGoo4mTGC4qiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEs6jm4AQXZvTY7q6CrcAycRYNcukIMgKXgBIJp60mgtXgJrbTcsQQxrh%2FYvYcGgoSFsdQ1VEBtEKnjEo%2BXDPvWby5J7%2FYHPtnteKwaM%2BGZ3n15HZj%2FwiAZPxmEbguHogGgiH9qpvUBl7qD9CRxxbFpSQ2xE3Gmus3p9WQTX%2FrWfBviklZg2o7yb9RNP1HfNLWpJLdFHV8AdpuE00ddru%2BTEU60NtFWbFFwmNPuKwpmQqdtG670xD2svyzEzMKtkBMME%2BTnG%2FltsyncOajE76oTRobiQTrLfVAHKauvdXsv0h1Be7hZN10RDXqvdqyTinmEnvxfiPkh%2BYxeaO5L2BtvV20MKEVJAAO2GVQBM%2BVpuSyaLTi4UTu1M1Ez7l7ej3XR%2BVfq%2Fa%2BeLCW6quzCplG4F0xnZ2exdiyTewkgJgzohjypkH6rnwXl9cpffDv2p0lfC4f5085mBrlgIvwkyUftT95qo8w8up9uMPy8R8PPatFrn9B%2FxjVivCf7bW0%2BYCWhABDr%2FJXgoArjU2Vxa6ccwZmjAS7lnkm6DUbW5n62tuG62UxQp5xtrC3t7NxMqcjUWt9paRpjJWiw%2FvZirf9x0AkwqCc0Kn81Pzujub69oil9JjeX3CyVrwjzkBkl7LF93CJZv%2BsbOENZwML%2FbqtQGOqUBk0gcs0Dh2sxyCp%2FVCg5k1E8TZ91W0aifkbo6S0UOZOfQGWebj%2BU%2BN94hobmqlyrJJI2fnAppTvryWiC65WkDPvgqym4IMgBjWUVxeuOTy5dvKVWehv989Y4ophtsAMICKy0Hv5z4ocXg1Y8UYt%2BtJ2gc2mrmvkUVfMMveCP5AazK%2BU8G%2FlANWU3h1%2FaAtj9ksjRQbHfpC07VDWtqNwwWc9sBa%2FsC&X-Amz-Signature=335e86903d35a96afd30e91fefe3adac303ed29e5e2916b6259a7fd1c82cdb3a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663X3BQX7P%2F20260823%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260823T082724Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIB1zUqDHJgrOUcQyHamfkOyIzM6jPd60As326zo%2BGKcJAiEApE2K5V%2B129ZqmJBYsYF9fE%2B%2FeLItt9uQjFGoo4mTGC4qiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEs6jm4AQXZvTY7q6CrcAycRYNcukIMgKXgBIJp60mgtXgJrbTcsQQxrh%2FYvYcGgoSFsdQ1VEBtEKnjEo%2BXDPvWby5J7%2FYHPtnteKwaM%2BGZ3n15HZj%2FwiAZPxmEbguHogGgiH9qpvUBl7qD9CRxxbFpSQ2xE3Gmus3p9WQTX%2FrWfBviklZg2o7yb9RNP1HfNLWpJLdFHV8AdpuE00ddru%2BTEU60NtFWbFFwmNPuKwpmQqdtG670xD2svyzEzMKtkBMME%2BTnG%2FltsyncOajE76oTRobiQTrLfVAHKauvdXsv0h1Be7hZN10RDXqvdqyTinmEnvxfiPkh%2BYxeaO5L2BtvV20MKEVJAAO2GVQBM%2BVpuSyaLTi4UTu1M1Ez7l7ej3XR%2BVfq%2Fa%2BeLCW6quzCplG4F0xnZ2exdiyTewkgJgzohjypkH6rnwXl9cpffDv2p0lfC4f5085mBrlgIvwkyUftT95qo8w8up9uMPy8R8PPatFrn9B%2FxjVivCf7bW0%2BYCWhABDr%2FJXgoArjU2Vxa6ccwZmjAS7lnkm6DUbW5n62tuG62UxQp5xtrC3t7NxMqcjUWt9paRpjJWiw%2FvZirf9x0AkwqCc0Kn81Pzujub69oil9JjeX3CyVrwjzkBkl7LF93CJZv%2BsbOENZwML%2FbqtQGOqUBk0gcs0Dh2sxyCp%2FVCg5k1E8TZ91W0aifkbo6S0UOZOfQGWebj%2BU%2BN94hobmqlyrJJI2fnAppTvryWiC65WkDPvgqym4IMgBjWUVxeuOTy5dvKVWehv989Y4ophtsAMICKy0Hv5z4ocXg1Y8UYt%2BtJ2gc2mrmvkUVfMMveCP5AazK%2BU8G%2FlANWU3h1%2FaAtj9ksjRQbHfpC07VDWtqNwwWc9sBa%2FsC&X-Amz-Signature=ee4a86471090f177eb157f9549d0a720dac9ca6ad862c226b2a09318f1ccc8ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
