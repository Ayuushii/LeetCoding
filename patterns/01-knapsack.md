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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFZEWG37%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChnerUUS7XXQxdGes8G43MOcRiRzRJMWbr60RypU1WGwIhAKFANlidYmRk%2BoxntGoAMCOm4m51KFhUqExTyz1x3MxrKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2FsV1LuFkpD05ip%2B0q3APguG399pNy3Btn8xDOnU8srnwr17KNILeO6uaNZU2FycoLXopmAMfeoqbpPAQEORv9m3wJ8Jz4jgr7a7mTRlyLKfzyZMChNQ5zJZgDg%2F%2BXkKJbCRNCPAKLZDCz74P3CuTuWsb4BWRkZC3v8%2BacloQNhV%2BEcaNZKZMcAYMd9ISIOl38i43MOx%2FFYXYPjoME8byPPaP%2B2yhPBmU5A84mV0EWLlJWksky5by1SJ69lbihkaXpO6UkSwTz3Y1sH3qmjFZV6lHdHOr48FJ8mmeIz775ZMGbww%2BmF30GAQUYBt3DA0%2FxWpP0CIS%2ByHmoB6PfSXY9MHYD88gPqvdI3f%2Bt7OTbG8rMywC1M%2BbPFXn60hwIjH0uRTH5JQEOAHJnInNbApXcL0yD6CIRT99RSOQYZDjajd17PHv76VMYjjHsvp3UMWApsojS2RtroX%2FhSvCnjNa1CdcR%2FckttJyBEzV5klc4pZwYBu4cvHcrm1eWOz6k06OHyyhUwvJTi2WjyJd92m8OOsX1Mo1PLZc4%2BJIMZEzvyqIQTUftf1INqZrtfUwabEvsy7zG%2BfDNDwWN8fIghPAiXKBGjXDkbssuQBjpUcC3xMjuWLIEXhnQNPtu73cqR6BTkdhRfUaYU%2BS6HzDqyObPBjqkAe1UDfuTuo2uP0kQOiZAGBRloRpfjOCoctGX%2BTaWlR%2B1R0moYR%2FVBBnwv3vfkXGnLYep8KWybyGIcGYNsZFmGkFoW8NOr2hFtE%2FM%2BmKrKaSOEBAG1obz97iWXbS0fXZStExd2LJWipk7x0p5pTmOd3x8VdDz6gqJEricq9DEd3pw4TPWHi6ou%2BCqlBmQVj4XonSAL75or6rVD1i4%2Frtvqw2BxkBz&X-Amz-Signature=8b096168fd3d65b5d652d758ee6c251811f0f35cf12131b8425ca7f8e8eee328&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFZEWG37%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChnerUUS7XXQxdGes8G43MOcRiRzRJMWbr60RypU1WGwIhAKFANlidYmRk%2BoxntGoAMCOm4m51KFhUqExTyz1x3MxrKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2FsV1LuFkpD05ip%2B0q3APguG399pNy3Btn8xDOnU8srnwr17KNILeO6uaNZU2FycoLXopmAMfeoqbpPAQEORv9m3wJ8Jz4jgr7a7mTRlyLKfzyZMChNQ5zJZgDg%2F%2BXkKJbCRNCPAKLZDCz74P3CuTuWsb4BWRkZC3v8%2BacloQNhV%2BEcaNZKZMcAYMd9ISIOl38i43MOx%2FFYXYPjoME8byPPaP%2B2yhPBmU5A84mV0EWLlJWksky5by1SJ69lbihkaXpO6UkSwTz3Y1sH3qmjFZV6lHdHOr48FJ8mmeIz775ZMGbww%2BmF30GAQUYBt3DA0%2FxWpP0CIS%2ByHmoB6PfSXY9MHYD88gPqvdI3f%2Bt7OTbG8rMywC1M%2BbPFXn60hwIjH0uRTH5JQEOAHJnInNbApXcL0yD6CIRT99RSOQYZDjajd17PHv76VMYjjHsvp3UMWApsojS2RtroX%2FhSvCnjNa1CdcR%2FckttJyBEzV5klc4pZwYBu4cvHcrm1eWOz6k06OHyyhUwvJTi2WjyJd92m8OOsX1Mo1PLZc4%2BJIMZEzvyqIQTUftf1INqZrtfUwabEvsy7zG%2BfDNDwWN8fIghPAiXKBGjXDkbssuQBjpUcC3xMjuWLIEXhnQNPtu73cqR6BTkdhRfUaYU%2BS6HzDqyObPBjqkAe1UDfuTuo2uP0kQOiZAGBRloRpfjOCoctGX%2BTaWlR%2B1R0moYR%2FVBBnwv3vfkXGnLYep8KWybyGIcGYNsZFmGkFoW8NOr2hFtE%2FM%2BmKrKaSOEBAG1obz97iWXbS0fXZStExd2LJWipk7x0p5pTmOd3x8VdDz6gqJEricq9DEd3pw4TPWHi6ou%2BCqlBmQVj4XonSAL75or6rVD1i4%2Frtvqw2BxkBz&X-Amz-Signature=02e54a999c6abfcc7edd0625db7f7369681c35e5c29639eb2d0f616f7979585e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFZEWG37%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQChnerUUS7XXQxdGes8G43MOcRiRzRJMWbr60RypU1WGwIhAKFANlidYmRk%2BoxntGoAMCOm4m51KFhUqExTyz1x3MxrKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx%2FsV1LuFkpD05ip%2B0q3APguG399pNy3Btn8xDOnU8srnwr17KNILeO6uaNZU2FycoLXopmAMfeoqbpPAQEORv9m3wJ8Jz4jgr7a7mTRlyLKfzyZMChNQ5zJZgDg%2F%2BXkKJbCRNCPAKLZDCz74P3CuTuWsb4BWRkZC3v8%2BacloQNhV%2BEcaNZKZMcAYMd9ISIOl38i43MOx%2FFYXYPjoME8byPPaP%2B2yhPBmU5A84mV0EWLlJWksky5by1SJ69lbihkaXpO6UkSwTz3Y1sH3qmjFZV6lHdHOr48FJ8mmeIz775ZMGbww%2BmF30GAQUYBt3DA0%2FxWpP0CIS%2ByHmoB6PfSXY9MHYD88gPqvdI3f%2Bt7OTbG8rMywC1M%2BbPFXn60hwIjH0uRTH5JQEOAHJnInNbApXcL0yD6CIRT99RSOQYZDjajd17PHv76VMYjjHsvp3UMWApsojS2RtroX%2FhSvCnjNa1CdcR%2FckttJyBEzV5klc4pZwYBu4cvHcrm1eWOz6k06OHyyhUwvJTi2WjyJd92m8OOsX1Mo1PLZc4%2BJIMZEzvyqIQTUftf1INqZrtfUwabEvsy7zG%2BfDNDwWN8fIghPAiXKBGjXDkbssuQBjpUcC3xMjuWLIEXhnQNPtu73cqR6BTkdhRfUaYU%2BS6HzDqyObPBjqkAe1UDfuTuo2uP0kQOiZAGBRloRpfjOCoctGX%2BTaWlR%2B1R0moYR%2FVBBnwv3vfkXGnLYep8KWybyGIcGYNsZFmGkFoW8NOr2hFtE%2FM%2BmKrKaSOEBAG1obz97iWXbS0fXZStExd2LJWipk7x0p5pTmOd3x8VdDz6gqJEricq9DEd3pw4TPWHi6ou%2BCqlBmQVj4XonSAL75or6rVD1i4%2Frtvqw2BxkBz&X-Amz-Signature=ff645e7c5190ca0e1459b219435891bb3ea695a7e27ee4093ee94dc6376014ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TM6MUUS%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCt2eUZ8aiSd1B6e02W%2FBWOuC33caBGo4kCRYNPS0SVJgIhALVTuoVu%2FecHii%2BkfwOFRApjn%2B0ehmruEz0UletsmywSKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7finorg3eAKRgtbUq3APmyptvqlKrbCLSIebfvQAlV%2BOuRku3u0oL7HlfFtZ8avsZob33%2BU%2FLqBFoNzWN2e2a5BHRpPOsm1jrllWwFf4mAN4rpkSdrGqVIcNOCITsw66P8bfclzFHFqJL%2BDWX4nSSuDWK2nFms6CXBsv9ScZP15%2Fnq4dflUg24QuIPbVleyTB%2FEl6SJHSdjZswIgj1kV2ZUJv0PBeLfnUaR4NevP5nVuS%2FJYbVYgwMk0%2B4RR0JnWvxVKS1T6wfxKReKtyLcU3fFjkGgQIP%2F7TL8nbaHFj2Psg0qAuxDD6NGVLVpYQal6IFB5lvBQtews0oTV35cEUVXXyeCJ5VrISVRjdlIOY9PkY1FBSQ%2FFZ9OYO8IBx%2B9XCACHPGybXitKov9gb0dPH9fXsux2QrhWceenuumXcwDy5ajKNUMgUrH2Cw8mNqVMvvE47%2FjK5zdaTqF0YhgrDaZgY8ze6pL2tVbLOkWJKjJ5fJp0lTdXRB%2FdEF4nek8aV%2FIgjDskZldDqNG3J20OMJ0Po7Hr4DrUQZan%2Bj72YRLTrfCGR4yxiHBj6FHwEyjW4LT%2BQu2wZ5UAAimawMLIx63OkUh67JKlPPQpGm%2FcFXBfAUp0fGAmy5Z%2FLa%2F01UUuxSkm4uhzWRm3DpDD3x%2BbPBjqkAUXx7W8LaE%2F0%2BOoKPg5hsAJn41vZM8158sT06kP71Mv2zvTnLaYHqqJIefOYXay7tJ4JezoxI%2B6bQcEAFrRO8ihb2pKFkY2aXvSbDypgb39jnyWFyqPhkwC3h3cFPplU8IMDuivBzljwQ2jpbK%2BROkWLr6klycHuPIQrRxdkXiyxgxy6TOVjsF1jqIIl2TUHHQIXV41yENuwaZq8ZcUHgO%2B5r64r&X-Amz-Signature=91579a5f36a9e4567a983a2856ef525e26dddd5c21d0c7303aeadb0b66b6ebf5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TM6MUUS%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCt2eUZ8aiSd1B6e02W%2FBWOuC33caBGo4kCRYNPS0SVJgIhALVTuoVu%2FecHii%2BkfwOFRApjn%2B0ehmruEz0UletsmywSKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7finorg3eAKRgtbUq3APmyptvqlKrbCLSIebfvQAlV%2BOuRku3u0oL7HlfFtZ8avsZob33%2BU%2FLqBFoNzWN2e2a5BHRpPOsm1jrllWwFf4mAN4rpkSdrGqVIcNOCITsw66P8bfclzFHFqJL%2BDWX4nSSuDWK2nFms6CXBsv9ScZP15%2Fnq4dflUg24QuIPbVleyTB%2FEl6SJHSdjZswIgj1kV2ZUJv0PBeLfnUaR4NevP5nVuS%2FJYbVYgwMk0%2B4RR0JnWvxVKS1T6wfxKReKtyLcU3fFjkGgQIP%2F7TL8nbaHFj2Psg0qAuxDD6NGVLVpYQal6IFB5lvBQtews0oTV35cEUVXXyeCJ5VrISVRjdlIOY9PkY1FBSQ%2FFZ9OYO8IBx%2B9XCACHPGybXitKov9gb0dPH9fXsux2QrhWceenuumXcwDy5ajKNUMgUrH2Cw8mNqVMvvE47%2FjK5zdaTqF0YhgrDaZgY8ze6pL2tVbLOkWJKjJ5fJp0lTdXRB%2FdEF4nek8aV%2FIgjDskZldDqNG3J20OMJ0Po7Hr4DrUQZan%2Bj72YRLTrfCGR4yxiHBj6FHwEyjW4LT%2BQu2wZ5UAAimawMLIx63OkUh67JKlPPQpGm%2FcFXBfAUp0fGAmy5Z%2FLa%2F01UUuxSkm4uhzWRm3DpDD3x%2BbPBjqkAUXx7W8LaE%2F0%2BOoKPg5hsAJn41vZM8158sT06kP71Mv2zvTnLaYHqqJIefOYXay7tJ4JezoxI%2B6bQcEAFrRO8ihb2pKFkY2aXvSbDypgb39jnyWFyqPhkwC3h3cFPplU8IMDuivBzljwQ2jpbK%2BROkWLr6klycHuPIQrRxdkXiyxgxy6TOVjsF1jqIIl2TUHHQIXV41yENuwaZq8ZcUHgO%2B5r64r&X-Amz-Signature=c585a68ee8d3387892ed84e0449c232db9caa2ead671bd8f503b125ea0cd9957&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TM6MUUS%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCt2eUZ8aiSd1B6e02W%2FBWOuC33caBGo4kCRYNPS0SVJgIhALVTuoVu%2FecHii%2BkfwOFRApjn%2B0ehmruEz0UletsmywSKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7finorg3eAKRgtbUq3APmyptvqlKrbCLSIebfvQAlV%2BOuRku3u0oL7HlfFtZ8avsZob33%2BU%2FLqBFoNzWN2e2a5BHRpPOsm1jrllWwFf4mAN4rpkSdrGqVIcNOCITsw66P8bfclzFHFqJL%2BDWX4nSSuDWK2nFms6CXBsv9ScZP15%2Fnq4dflUg24QuIPbVleyTB%2FEl6SJHSdjZswIgj1kV2ZUJv0PBeLfnUaR4NevP5nVuS%2FJYbVYgwMk0%2B4RR0JnWvxVKS1T6wfxKReKtyLcU3fFjkGgQIP%2F7TL8nbaHFj2Psg0qAuxDD6NGVLVpYQal6IFB5lvBQtews0oTV35cEUVXXyeCJ5VrISVRjdlIOY9PkY1FBSQ%2FFZ9OYO8IBx%2B9XCACHPGybXitKov9gb0dPH9fXsux2QrhWceenuumXcwDy5ajKNUMgUrH2Cw8mNqVMvvE47%2FjK5zdaTqF0YhgrDaZgY8ze6pL2tVbLOkWJKjJ5fJp0lTdXRB%2FdEF4nek8aV%2FIgjDskZldDqNG3J20OMJ0Po7Hr4DrUQZan%2Bj72YRLTrfCGR4yxiHBj6FHwEyjW4LT%2BQu2wZ5UAAimawMLIx63OkUh67JKlPPQpGm%2FcFXBfAUp0fGAmy5Z%2FLa%2F01UUuxSkm4uhzWRm3DpDD3x%2BbPBjqkAUXx7W8LaE%2F0%2BOoKPg5hsAJn41vZM8158sT06kP71Mv2zvTnLaYHqqJIefOYXay7tJ4JezoxI%2B6bQcEAFrRO8ihb2pKFkY2aXvSbDypgb39jnyWFyqPhkwC3h3cFPplU8IMDuivBzljwQ2jpbK%2BROkWLr6klycHuPIQrRxdkXiyxgxy6TOVjsF1jqIIl2TUHHQIXV41yENuwaZq8ZcUHgO%2B5r64r&X-Amz-Signature=a60aad86ccf9ccc8772906e34e3cccc5beb1871ee4f01a861af745f0c7758fbb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TM6MUUS%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100200Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCt2eUZ8aiSd1B6e02W%2FBWOuC33caBGo4kCRYNPS0SVJgIhALVTuoVu%2FecHii%2BkfwOFRApjn%2B0ehmruEz0UletsmywSKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7finorg3eAKRgtbUq3APmyptvqlKrbCLSIebfvQAlV%2BOuRku3u0oL7HlfFtZ8avsZob33%2BU%2FLqBFoNzWN2e2a5BHRpPOsm1jrllWwFf4mAN4rpkSdrGqVIcNOCITsw66P8bfclzFHFqJL%2BDWX4nSSuDWK2nFms6CXBsv9ScZP15%2Fnq4dflUg24QuIPbVleyTB%2FEl6SJHSdjZswIgj1kV2ZUJv0PBeLfnUaR4NevP5nVuS%2FJYbVYgwMk0%2B4RR0JnWvxVKS1T6wfxKReKtyLcU3fFjkGgQIP%2F7TL8nbaHFj2Psg0qAuxDD6NGVLVpYQal6IFB5lvBQtews0oTV35cEUVXXyeCJ5VrISVRjdlIOY9PkY1FBSQ%2FFZ9OYO8IBx%2B9XCACHPGybXitKov9gb0dPH9fXsux2QrhWceenuumXcwDy5ajKNUMgUrH2Cw8mNqVMvvE47%2FjK5zdaTqF0YhgrDaZgY8ze6pL2tVbLOkWJKjJ5fJp0lTdXRB%2FdEF4nek8aV%2FIgjDskZldDqNG3J20OMJ0Po7Hr4DrUQZan%2Bj72YRLTrfCGR4yxiHBj6FHwEyjW4LT%2BQu2wZ5UAAimawMLIx63OkUh67JKlPPQpGm%2FcFXBfAUp0fGAmy5Z%2FLa%2F01UUuxSkm4uhzWRm3DpDD3x%2BbPBjqkAUXx7W8LaE%2F0%2BOoKPg5hsAJn41vZM8158sT06kP71Mv2zvTnLaYHqqJIefOYXay7tJ4JezoxI%2B6bQcEAFrRO8ihb2pKFkY2aXvSbDypgb39jnyWFyqPhkwC3h3cFPplU8IMDuivBzljwQ2jpbK%2BROkWLr6klycHuPIQrRxdkXiyxgxy6TOVjsF1jqIIl2TUHHQIXV41yENuwaZq8ZcUHgO%2B5r64r&X-Amz-Signature=bcc0e8f4fb8dcd3ed8cc82dbd2fbda824349609840b90405de2402fdc30a67a3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T7RA6HSZ%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDNLcgj3nh8xEvKs4YsuBRgVjktl3DP39%2F461KhCuZQMAiEApKTSsVujZQOR9bed4IUnWU3BVtLD2JoLpRY1qS9DN24qiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCjKLOfKlXDhf52k8CrcAwcs2DB3MmBfCe8pkVzGO%2F5IaIhCp1YCaSZtIsCni0gKilFQDCBi52mAaWEFh6G5YFlBDJB3b8hRFu2tK5iR4FkWods9jcqYEWukO2LVP0VcgGlBndToumjy67BPycbR4ug396ES0%2FE3KGMnal7saGZXa6FqwEMrHN7yrGG%2FluAdufJQM1LucziVfG5hcB7AnWM84nMIwgZqDOglU1nAxTSr2ai6KT5Yt3ptjYjL4aATnXK3E4df5Lva7Ta2m5DXQ30u%2FJn4JuHL0BtdUm9bWP6gUAa2Bszc5V2h37nPbqgYBNYnVYZEG5g922vp%2BrYpx0jTjwlJDuKYWEVg94t906GG2RwRnWzSQNI1ilABrfz0vwyjaWMnCSWDH216DrRlb%2FC%2BGAx4YF%2FAqGm%2F5scvlvJk2zx2thIiauxq7wXphC3raZ%2FNq23IIe1Kxi6iGH3rk5X5h3vro7sXrzWQVuFZcGgKq3iMLMkqMSh21fKxXnl4tn%2BDlPPL4t%2FTx8jBkt3vnYRUuc0bF%2FaYnvQkreWbpbrme0vxeSOFaKsOS8ydeDGSbCQoWww8kkGwJ5eCXeGQooLtKzWYcZC9LMQnvl4UpfYpvQNkpugB%2FKvv83lO9tTjZkOdwVQgRfp8VyueMI7J5s8GOqUBTjRpAhRQxoybK9uX66V%2BrB9VNoHlKyhobj%2F%2BN%2F8W%2Fbb3WiTAaKUtvcjnApS5mqjR284Rfd2f6YqKKSu5ZlFCQ8dFOlvXRkyRQpFLbndWVsW%2BhLn%2FCM3kMonYXRnwfvjn1GSpMkCEceaRo%2B%2BkEtO7PCVcKuzDFUZgfwQBS9bSsAc6B8gkFYbwi2q4iWOxlnLL%2FbFiYHA1nqGDMYuMrH2ptXLr3I5d&X-Amz-Signature=f386238517d2c9235ed3f776ddd63361db31da0e4772f6c64d4846b33cedd214&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667NIVAYVX%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH8yduf%2BQIgnZ%2Bt71ukcIDasxc28MkKFKKGN69BMRzQtAiEAqIuNkwsY%2F8a%2BA9ABlT8p8NYodHL%2Bn%2BaEXdREdyR9RN8qiAQIg%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDlzZLgiJKX9F%2F760SrcA1Tl3KC%2FIB%2B9tOsz14J5y6Z2i8g%2F7O0rQVk16Gm1OR%2BcZ9PBwalfciWmfw1KWgxRO2AUd5NjcQhZb4z%2Bw%2FcdW1U1vat5%2FMPcDkjt0umQY65ASPeBA1RMFjBBP7HnBUfPDwiM344R1WI2FjJpNIrGe7Ln9psgsnPsjvWec%2F2Pa4ePDoXB4SP4Em1oAQ2v14gMiT7N%2ByRbFchHRdFpmqv1yFgpRLSjFcuUiSc%2BnFrWn%2Fq9Rvq86Pmp8PHGTHEQfCxXlI%2FTiLxEf%2FcM4BllLtcEWBLNVF78I2nVyO6TAFIH5T8yZP2q4ipDqzzy2%2FRfES0LuMewH3XOq6qfNCFCeMPOZ6DXDOHLZKlNyiY6FLdUAjeF8WrrXk64jKLxRqw7O%2FB7cHvF1xJImhbAx%2FLANyE7Gw85u%2BE3GKZb66TbRin%2FMQ9kemSBbwsYADELqrydjbzetJTl7WBqEptMpU4mY6QBPwp3yuEgErJiSB9zeUYxfUSPiJT3zTVM%2BDpHbqvicXNzGXLrWb6C1hXOCzxT2jogKDVDPR%2BaKS03S2FRaDXY9JMfe%2FCIwEtoNB2zhFaPevpw9VEbL9wwoU3JkP2kJBSaM%2FiyGs0CYczQzopx018gCrlH9VLsYgaqaYvkHpJ3MOnv5s8GOqUBOB0VcAkVhZOxW7auKE163EQMTD8VkVtteAFNPRkiHmC2pWs2HFddWygd2Nh%2BFGTxVBXhSI0ZMvRd0FepzYCKZVAptOOm8ezOcKNvYMUmQY5LzMOp0UJA380hnJ1jLQb2iJ0Nux0TWfFb0A%2By5yGMEeNIIQkWI%2Be1fpSpnITrIEHHEsDZEGv6ype6l40qiXpCC77IY93uxs6tDQxmO0OmD8uBYJZG&X-Amz-Signature=52920e8bc91dddb934420b0398687f02aac3f918f252566a2e732f121e7965e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667NIVAYVX%2F20260505%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260505T100201Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH8yduf%2BQIgnZ%2Bt71ukcIDasxc28MkKFKKGN69BMRzQtAiEAqIuNkwsY%2F8a%2BA9ABlT8p8NYodHL%2Bn%2BaEXdREdyR9RN8qiAQIg%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDlzZLgiJKX9F%2F760SrcA1Tl3KC%2FIB%2B9tOsz14J5y6Z2i8g%2F7O0rQVk16Gm1OR%2BcZ9PBwalfciWmfw1KWgxRO2AUd5NjcQhZb4z%2Bw%2FcdW1U1vat5%2FMPcDkjt0umQY65ASPeBA1RMFjBBP7HnBUfPDwiM344R1WI2FjJpNIrGe7Ln9psgsnPsjvWec%2F2Pa4ePDoXB4SP4Em1oAQ2v14gMiT7N%2ByRbFchHRdFpmqv1yFgpRLSjFcuUiSc%2BnFrWn%2Fq9Rvq86Pmp8PHGTHEQfCxXlI%2FTiLxEf%2FcM4BllLtcEWBLNVF78I2nVyO6TAFIH5T8yZP2q4ipDqzzy2%2FRfES0LuMewH3XOq6qfNCFCeMPOZ6DXDOHLZKlNyiY6FLdUAjeF8WrrXk64jKLxRqw7O%2FB7cHvF1xJImhbAx%2FLANyE7Gw85u%2BE3GKZb66TbRin%2FMQ9kemSBbwsYADELqrydjbzetJTl7WBqEptMpU4mY6QBPwp3yuEgErJiSB9zeUYxfUSPiJT3zTVM%2BDpHbqvicXNzGXLrWb6C1hXOCzxT2jogKDVDPR%2BaKS03S2FRaDXY9JMfe%2FCIwEtoNB2zhFaPevpw9VEbL9wwoU3JkP2kJBSaM%2FiyGs0CYczQzopx018gCrlH9VLsYgaqaYvkHpJ3MOnv5s8GOqUBOB0VcAkVhZOxW7auKE163EQMTD8VkVtteAFNPRkiHmC2pWs2HFddWygd2Nh%2BFGTxVBXhSI0ZMvRd0FepzYCKZVAptOOm8ezOcKNvYMUmQY5LzMOp0UJA380hnJ1jLQb2iJ0Nux0TWfFb0A%2By5yGMEeNIIQkWI%2Be1fpSpnITrIEHHEsDZEGv6ype6l40qiXpCC77IY93uxs6tDQxmO0OmD8uBYJZG&X-Amz-Signature=a92cdeba42e012c956e8fd303347bbbfb1ba5bb418d203a86537cd8c3a61c93e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
