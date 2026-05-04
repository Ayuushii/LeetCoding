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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GO4CK2C%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101236Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQDEXSb78wMpOsxKvpRv8fvvIqsveBLSezmCUXltgY%2BN4AIfI%2FCHpo9gT9DOA3lnJrkdm8tC%2BRLc%2FvvNOHznMjxD1yr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMyhZwYmA17A%2F%2BlqThKtwDD7ylL%2FUj4BgcUFrysAdOM5cI%2F1ulfKATJ8YDhUbUinOBfWR5j6LbyEkXw8w6Pf0PV8cBqRif0iPv2I4%2BZfbYfpCZktuGksqkfJ2unTqyIfxpt4t1Dvl6rqzHcqZQu9BVGHiZYUtMYq06phAwavyWjfydru6QS4Ur3ImeqgtkWVVrclSOpPc%2BkUCZC0Q0mLomm5lf5K284ELbnngHrOgJQ48WZ8ErFCyTgRtkwxuVbgm518ErRtJljIpmkpyJRFIDkYH9VWIRs8QM3kjuvTrXCGnLOOjRrdqn%2FL5V4%2FQLUv3fXe82yPwpkSFi4n0D6yylYny81zYUSrpIrtPOKKIURG8IkZat7T9BI9IaTQGyMZ6D8P3xTy06Kw5bfXLoOfQVw%2FTnup84ZcEVrF%2FNtw%2BNLRvWd3p4g9ZKwvskwhbLoJT6RV9tdl%2Bve6J33Cf2B3AVq%2FJmcaYAnyk5DaRQIbhEV63%2B1819E95IaFUx6BSGVYUks5A1skUc7zdSCQM4G3BR%2FBghBRncLCArOqbGdDFLB8CfHeDo75TZxufZ97fgpw%2FvMnhWIwaZS5KjvvkOEcXeLbxOB8YaeWrpa1Xpp4ButewByIlh7c%2FfK5SRkihdXQkd0mvxPs7b%2B6wya98wy87hzwY6pgGC2Ix5YNdlfGkVbveYPpvhB2NtD%2FBODyDGSjBGFf3bglDjwv4gxbIpyCtWHukliANHk5h9hH7XbGb6YF2CoPCOK7AwqU%2Fgwh7wyJp1CaZ65tkb0paiAa4dvBOYpxVGlQzIGaZerzzCU106LfIHF6YufwikM%2F9sMaz5kK3QixES%2Bpw%2BNK4sOa5R4orByPgQ6sCYxpuKnFKT2YmpUXNqdimH%2FiML5dbM&X-Amz-Signature=df34f737adf0e47362ff582f4a56220d6143a2a087ddf166c544812734dccfcc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GO4CK2C%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101236Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQDEXSb78wMpOsxKvpRv8fvvIqsveBLSezmCUXltgY%2BN4AIfI%2FCHpo9gT9DOA3lnJrkdm8tC%2BRLc%2FvvNOHznMjxD1yr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMyhZwYmA17A%2F%2BlqThKtwDD7ylL%2FUj4BgcUFrysAdOM5cI%2F1ulfKATJ8YDhUbUinOBfWR5j6LbyEkXw8w6Pf0PV8cBqRif0iPv2I4%2BZfbYfpCZktuGksqkfJ2unTqyIfxpt4t1Dvl6rqzHcqZQu9BVGHiZYUtMYq06phAwavyWjfydru6QS4Ur3ImeqgtkWVVrclSOpPc%2BkUCZC0Q0mLomm5lf5K284ELbnngHrOgJQ48WZ8ErFCyTgRtkwxuVbgm518ErRtJljIpmkpyJRFIDkYH9VWIRs8QM3kjuvTrXCGnLOOjRrdqn%2FL5V4%2FQLUv3fXe82yPwpkSFi4n0D6yylYny81zYUSrpIrtPOKKIURG8IkZat7T9BI9IaTQGyMZ6D8P3xTy06Kw5bfXLoOfQVw%2FTnup84ZcEVrF%2FNtw%2BNLRvWd3p4g9ZKwvskwhbLoJT6RV9tdl%2Bve6J33Cf2B3AVq%2FJmcaYAnyk5DaRQIbhEV63%2B1819E95IaFUx6BSGVYUks5A1skUc7zdSCQM4G3BR%2FBghBRncLCArOqbGdDFLB8CfHeDo75TZxufZ97fgpw%2FvMnhWIwaZS5KjvvkOEcXeLbxOB8YaeWrpa1Xpp4ButewByIlh7c%2FfK5SRkihdXQkd0mvxPs7b%2B6wya98wy87hzwY6pgGC2Ix5YNdlfGkVbveYPpvhB2NtD%2FBODyDGSjBGFf3bglDjwv4gxbIpyCtWHukliANHk5h9hH7XbGb6YF2CoPCOK7AwqU%2Fgwh7wyJp1CaZ65tkb0paiAa4dvBOYpxVGlQzIGaZerzzCU106LfIHF6YufwikM%2F9sMaz5kK3QixES%2Bpw%2BNK4sOa5R4orByPgQ6sCYxpuKnFKT2YmpUXNqdimH%2FiML5dbM&X-Amz-Signature=a9db4bbd18433be4f7ba6acc29f6d384373f7fbf05a30b480b7e03241aa2c567&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662GO4CK2C%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101236Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIQDEXSb78wMpOsxKvpRv8fvvIqsveBLSezmCUXltgY%2BN4AIfI%2FCHpo9gT9DOA3lnJrkdm8tC%2BRLc%2FvvNOHznMjxD1yr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMyhZwYmA17A%2F%2BlqThKtwDD7ylL%2FUj4BgcUFrysAdOM5cI%2F1ulfKATJ8YDhUbUinOBfWR5j6LbyEkXw8w6Pf0PV8cBqRif0iPv2I4%2BZfbYfpCZktuGksqkfJ2unTqyIfxpt4t1Dvl6rqzHcqZQu9BVGHiZYUtMYq06phAwavyWjfydru6QS4Ur3ImeqgtkWVVrclSOpPc%2BkUCZC0Q0mLomm5lf5K284ELbnngHrOgJQ48WZ8ErFCyTgRtkwxuVbgm518ErRtJljIpmkpyJRFIDkYH9VWIRs8QM3kjuvTrXCGnLOOjRrdqn%2FL5V4%2FQLUv3fXe82yPwpkSFi4n0D6yylYny81zYUSrpIrtPOKKIURG8IkZat7T9BI9IaTQGyMZ6D8P3xTy06Kw5bfXLoOfQVw%2FTnup84ZcEVrF%2FNtw%2BNLRvWd3p4g9ZKwvskwhbLoJT6RV9tdl%2Bve6J33Cf2B3AVq%2FJmcaYAnyk5DaRQIbhEV63%2B1819E95IaFUx6BSGVYUks5A1skUc7zdSCQM4G3BR%2FBghBRncLCArOqbGdDFLB8CfHeDo75TZxufZ97fgpw%2FvMnhWIwaZS5KjvvkOEcXeLbxOB8YaeWrpa1Xpp4ButewByIlh7c%2FfK5SRkihdXQkd0mvxPs7b%2B6wya98wy87hzwY6pgGC2Ix5YNdlfGkVbveYPpvhB2NtD%2FBODyDGSjBGFf3bglDjwv4gxbIpyCtWHukliANHk5h9hH7XbGb6YF2CoPCOK7AwqU%2Fgwh7wyJp1CaZ65tkb0paiAa4dvBOYpxVGlQzIGaZerzzCU106LfIHF6YufwikM%2F9sMaz5kK3QixES%2Bpw%2BNK4sOa5R4orByPgQ6sCYxpuKnFKT2YmpUXNqdimH%2FiML5dbM&X-Amz-Signature=6363cef2e5a20b2b9d4510cdfe98c0b6e9529c1f0cf48454771d07ae045c1815&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W34CCHSW%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDybMeDglfNA3ePt4CoCWWazuj68jcMgKeL25N10XYwdwIhAO8qeqwbWcSubIsiPqhtD67R1gnQRlmbZ3Z0xoTmq%2Fy2Kv8DCGsQABoMNjM3NDIzMTgzODA1Igw8K5kNgGvUp3Kts8sq3APbQoOjWZOsglXnf9YMaLB8QHEFbRsL4pPgL6SIebxqlZqGIgpq8mR6Dvnm8wH9xigGMSSaXBWPJ2IslLT%2FeFxAi3%2BRgl3athbRogq21UNqujTEgE0WF%2BFyeqHtfuk7SP%2FdsvRj27d70EggvearvNCvpjuXwUVaa7iLf0MTW%2Fv2ZxTmw4nDPgaSJarjKwfEP%2FmYRTmAzQYgXiud0h4jUDFMoBg4ZiOlR8dcFVK2%2BeAsWOvof6pQlHGzzXWnKPUbW4PtpHno98EnAg4v0Q44A%2BoCuiA77%2FyRAbXCNvqK%2FPKj4DfrsS4Mk6y9Vg4NvGqTsiLgkjcXaCu%2FeQSyjREYKAK6U9QNMCRTMDlfh3MNs9iFJWfDmIuCshSAtc1gFn%2BkTVW33Hmkzg40uIuwf4VGuUsWcfi%2BknkebchuAfGDGu32DFf1ZNxNHoCjxWwtnbN5nP3MIIwAk386Fy15hOf%2BphC%2BPJUooa1OjhW%2BeIdDsRT0BlAvt5QumLFw7f5QT4HhGPrYZGTPJtCLjv44Jk9%2FinbulR32YPYJ7l%2FyYprJb7NkWoRxDokMGlwN3OQbR0KrePlQUGFvwZz84hXFBmim8D92uIBJnF0tB7mK2Q1dF2gCTvtNzyPuMll2sJv27DDIz%2BHPBjqkAZxUyJMtRbAsXkMWN6wvL8kVhmya2DSZo%2FJ2yDIN7%2F63YfEs7oFOzmtbP56QGysB75rNErbWkpDLfew%2FQsX2QAmmeqasINWq6Z%2Bnwa05TLrNg%2FcWIXOKO4iWHatWjazu0%2BW0iBkwnicNxdD7PGVIJNjhRpTqIuXrBrX7BGYz8oKVj3ymv7G2QnrMbkHv%2B3HZObNlmvz2bF%2FrbPVXdKGe%2BlMqsui8&X-Amz-Signature=4efaead8cba8d877d862f77f39bcfc995600c77c37032c376adf7f1b1477b1c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W34CCHSW%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDybMeDglfNA3ePt4CoCWWazuj68jcMgKeL25N10XYwdwIhAO8qeqwbWcSubIsiPqhtD67R1gnQRlmbZ3Z0xoTmq%2Fy2Kv8DCGsQABoMNjM3NDIzMTgzODA1Igw8K5kNgGvUp3Kts8sq3APbQoOjWZOsglXnf9YMaLB8QHEFbRsL4pPgL6SIebxqlZqGIgpq8mR6Dvnm8wH9xigGMSSaXBWPJ2IslLT%2FeFxAi3%2BRgl3athbRogq21UNqujTEgE0WF%2BFyeqHtfuk7SP%2FdsvRj27d70EggvearvNCvpjuXwUVaa7iLf0MTW%2Fv2ZxTmw4nDPgaSJarjKwfEP%2FmYRTmAzQYgXiud0h4jUDFMoBg4ZiOlR8dcFVK2%2BeAsWOvof6pQlHGzzXWnKPUbW4PtpHno98EnAg4v0Q44A%2BoCuiA77%2FyRAbXCNvqK%2FPKj4DfrsS4Mk6y9Vg4NvGqTsiLgkjcXaCu%2FeQSyjREYKAK6U9QNMCRTMDlfh3MNs9iFJWfDmIuCshSAtc1gFn%2BkTVW33Hmkzg40uIuwf4VGuUsWcfi%2BknkebchuAfGDGu32DFf1ZNxNHoCjxWwtnbN5nP3MIIwAk386Fy15hOf%2BphC%2BPJUooa1OjhW%2BeIdDsRT0BlAvt5QumLFw7f5QT4HhGPrYZGTPJtCLjv44Jk9%2FinbulR32YPYJ7l%2FyYprJb7NkWoRxDokMGlwN3OQbR0KrePlQUGFvwZz84hXFBmim8D92uIBJnF0tB7mK2Q1dF2gCTvtNzyPuMll2sJv27DDIz%2BHPBjqkAZxUyJMtRbAsXkMWN6wvL8kVhmya2DSZo%2FJ2yDIN7%2F63YfEs7oFOzmtbP56QGysB75rNErbWkpDLfew%2FQsX2QAmmeqasINWq6Z%2Bnwa05TLrNg%2FcWIXOKO4iWHatWjazu0%2BW0iBkwnicNxdD7PGVIJNjhRpTqIuXrBrX7BGYz8oKVj3ymv7G2QnrMbkHv%2B3HZObNlmvz2bF%2FrbPVXdKGe%2BlMqsui8&X-Amz-Signature=7c023eb707d1c519b71a70fc77e79b421f714e56bc6ea1f1758912cc2814b485&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W34CCHSW%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDybMeDglfNA3ePt4CoCWWazuj68jcMgKeL25N10XYwdwIhAO8qeqwbWcSubIsiPqhtD67R1gnQRlmbZ3Z0xoTmq%2Fy2Kv8DCGsQABoMNjM3NDIzMTgzODA1Igw8K5kNgGvUp3Kts8sq3APbQoOjWZOsglXnf9YMaLB8QHEFbRsL4pPgL6SIebxqlZqGIgpq8mR6Dvnm8wH9xigGMSSaXBWPJ2IslLT%2FeFxAi3%2BRgl3athbRogq21UNqujTEgE0WF%2BFyeqHtfuk7SP%2FdsvRj27d70EggvearvNCvpjuXwUVaa7iLf0MTW%2Fv2ZxTmw4nDPgaSJarjKwfEP%2FmYRTmAzQYgXiud0h4jUDFMoBg4ZiOlR8dcFVK2%2BeAsWOvof6pQlHGzzXWnKPUbW4PtpHno98EnAg4v0Q44A%2BoCuiA77%2FyRAbXCNvqK%2FPKj4DfrsS4Mk6y9Vg4NvGqTsiLgkjcXaCu%2FeQSyjREYKAK6U9QNMCRTMDlfh3MNs9iFJWfDmIuCshSAtc1gFn%2BkTVW33Hmkzg40uIuwf4VGuUsWcfi%2BknkebchuAfGDGu32DFf1ZNxNHoCjxWwtnbN5nP3MIIwAk386Fy15hOf%2BphC%2BPJUooa1OjhW%2BeIdDsRT0BlAvt5QumLFw7f5QT4HhGPrYZGTPJtCLjv44Jk9%2FinbulR32YPYJ7l%2FyYprJb7NkWoRxDokMGlwN3OQbR0KrePlQUGFvwZz84hXFBmim8D92uIBJnF0tB7mK2Q1dF2gCTvtNzyPuMll2sJv27DDIz%2BHPBjqkAZxUyJMtRbAsXkMWN6wvL8kVhmya2DSZo%2FJ2yDIN7%2F63YfEs7oFOzmtbP56QGysB75rNErbWkpDLfew%2FQsX2QAmmeqasINWq6Z%2Bnwa05TLrNg%2FcWIXOKO4iWHatWjazu0%2BW0iBkwnicNxdD7PGVIJNjhRpTqIuXrBrX7BGYz8oKVj3ymv7G2QnrMbkHv%2B3HZObNlmvz2bF%2FrbPVXdKGe%2BlMqsui8&X-Amz-Signature=145c7fbb9fdbec400a42bacc4dff14e5349cee74e94c02076e81a88e10e66983&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W34CCHSW%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101237Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDybMeDglfNA3ePt4CoCWWazuj68jcMgKeL25N10XYwdwIhAO8qeqwbWcSubIsiPqhtD67R1gnQRlmbZ3Z0xoTmq%2Fy2Kv8DCGsQABoMNjM3NDIzMTgzODA1Igw8K5kNgGvUp3Kts8sq3APbQoOjWZOsglXnf9YMaLB8QHEFbRsL4pPgL6SIebxqlZqGIgpq8mR6Dvnm8wH9xigGMSSaXBWPJ2IslLT%2FeFxAi3%2BRgl3athbRogq21UNqujTEgE0WF%2BFyeqHtfuk7SP%2FdsvRj27d70EggvearvNCvpjuXwUVaa7iLf0MTW%2Fv2ZxTmw4nDPgaSJarjKwfEP%2FmYRTmAzQYgXiud0h4jUDFMoBg4ZiOlR8dcFVK2%2BeAsWOvof6pQlHGzzXWnKPUbW4PtpHno98EnAg4v0Q44A%2BoCuiA77%2FyRAbXCNvqK%2FPKj4DfrsS4Mk6y9Vg4NvGqTsiLgkjcXaCu%2FeQSyjREYKAK6U9QNMCRTMDlfh3MNs9iFJWfDmIuCshSAtc1gFn%2BkTVW33Hmkzg40uIuwf4VGuUsWcfi%2BknkebchuAfGDGu32DFf1ZNxNHoCjxWwtnbN5nP3MIIwAk386Fy15hOf%2BphC%2BPJUooa1OjhW%2BeIdDsRT0BlAvt5QumLFw7f5QT4HhGPrYZGTPJtCLjv44Jk9%2FinbulR32YPYJ7l%2FyYprJb7NkWoRxDokMGlwN3OQbR0KrePlQUGFvwZz84hXFBmim8D92uIBJnF0tB7mK2Q1dF2gCTvtNzyPuMll2sJv27DDIz%2BHPBjqkAZxUyJMtRbAsXkMWN6wvL8kVhmya2DSZo%2FJ2yDIN7%2F63YfEs7oFOzmtbP56QGysB75rNErbWkpDLfew%2FQsX2QAmmeqasINWq6Z%2Bnwa05TLrNg%2FcWIXOKO4iWHatWjazu0%2BW0iBkwnicNxdD7PGVIJNjhRpTqIuXrBrX7BGYz8oKVj3ymv7G2QnrMbkHv%2B3HZObNlmvz2bF%2FrbPVXdKGe%2BlMqsui8&X-Amz-Signature=5021a9af304bed596141e29f9a57b71c1e464602dd4ba8be08f4852e7cabcbec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662ZMHOO2T%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICcJQI6op4%2BNtr3N6d%2Ba1oqw1iig2NzNbmiOKum5d%2FXvAiEArMkCh%2Bo8r6FoqR6A0bpoOJPWbDploald2vT6C59yCeoq%2FwMIaxAAGgw2Mzc0MjMxODM4MDUiDCx76xXRkzjFjWwpeCrcA07kbGJqnFn101DHgx0KCx4%2FWI932bWZiuMoro7ODyHcklSN4MMmur0FydrwGvUfno8HPv2gRC3vD24v2oKv2Fx4JvJWvmjUOoyvVha3qRvMphY%2F%2B6KNoXmUym2Hms6nsXV3dtCo2w36sYM7KH2MKE%2F37uOzPVhEVroDGVkdxBDaVgU9Y3xhIDl3cY1nz5z0ldvz8Oanlrx431b5dAvTk8CB497efMPLU9P%2F7vCq4oKdz8%2BTexa9JNZD8OXCRFcxk6qzgy9IZCySPiVy2rtFZOATeydkF3wkNOqhQmtZZ90NFG2TSsXUSBpONfeQ%2Fa74Yinqw14g%2BTGGqSL3EuaDKLVxFZB6h0tU1jxRHmCcpcncKCF8rg%2BNefdP257uI9yOam3o3lmnDW%2FunO5V0jjyHIXDxaq6d9IWmFJEM97GAkcwW0yoxH6jOrDVd2avqqNwMLe%2FcJk45%2BRrg8%2B949Z4fSwzPVTdoJsQHXEfMJCAuK4%2FK4k6EKi6BRYzkB1B%2B9NVaLh3vFpOw3ZxpHLyEAyS3Os1hqp8YZP4XLt1ytRsZEzB5OulNO1pjNFZfWZx8%2BCJH1mh6tNn3%2BVBpMbEKrOVzZC12IKTaRoyP3G7a92BGG0%2FuiBKJf5atwjaeJV4MJDP4c8GOqUBrTNCgqje5gFH9sy6VMTuwxHIIMtvUGqNHUkOC9RHsHAZa3f0lUvBeiGbsTf5ojVerueDZi9lAl%2FvY7OEAqwN8SfomqgbQEwANgEVYav8fHWKSf2sER0lnQUhMtHZsKp%2B%2F7Y95e%2F4DMG8Qkj%2F%2B725h2tmsV%2B%2BQbPVM955lao5EIKCIqqia6RAIZ%2BJcb2c%2B51Q%2BOHKPWGPhUv%2FLRUPgqXb9elkdaiS&X-Amz-Signature=80b86dcadce9c578806db76a8d2a5ca4c7a8a3ad93f23bbd7baa2531dda74831&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZDGB442J%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101239Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUMhrrgbVNMeZ2wJZw3lLGRu88hJN23%2BXrpFLaj0ziAQIhAPHknK2945OekT27UoPoXzFDyzYXc130NPDXBp5s3y6%2BKv8DCGsQABoMNjM3NDIzMTgzODA1Igx8EEja5N%2FUye0Pls0q3APyjtc8cmViYkU0HuS3%2B8P%2Frrw%2BybRh8qGWWE1v6cNRQdq0lBmZR%2BHRBSZEvgQnFPGbQ70vo%2FNtf3jkHExYic5a4fPKMAS9oW%2FLltaIv6rfHSb5E6EyTPnqPIxIhCuHihoONeH%2B%2BXB6yY2xPejCZPgaziYgFv4M9VbMJXkC%2BAYPsx059rK%2FGfTmIsXnLUIAAcF3jAwC1BY0ZEiv8gg51qi0XVqDMOYHJ%2FzpCNvozpPIMJtekUpJe0%2FdGhQc6ouNur8a4TXn1oAC42R4narvBdnmTtaKBWKeSaLbNYBgEXi%2BEeGPdIzRGtwJ0p2ZCW5GQgaMRn9ncf5yNpfI961H7ByosCTN3Vh4Ax1VTXbEQM9mzNRib96q0Kw%2BU%2FZD72eVGprYIENDIY37OPe2cOgswaHxFan4SDW%2BjB9HdEvMmk0MJumyhMSgauE8zwxosvs0L8ErTVHZRaBN%2BJXL5H5ejI2Mu8FA%2B8YhGp4KVolUpvDBTAyNeeXSjHtohSsCULMQ92ZWjCSMiFHpi7aGU4TTvKF3Z1hNDjupIm5Sk34oP74jaVMGXv61jGLcS9uCojLieo5TpXHwG0XgE93h%2F4Y7Lddyy46iH8D6J61VqUIqXD%2Fhw3KCLvVn07LSTKjoozD%2FzeHPBjqkAYAqfY0NLDQfK3DLAodWnKh03c3yAktxR0dvjjxQSsxEWYLUoF9Iqu3vLlBDoTlc2QNNN2M9oUrDG%2F0xXAu%2BFXgewguvV79MyQGC%2BD4Z4YeLUzq3s1HxfIB8%2F5pA3ctSJ5hsXhu4bOOttjjlDsheH16ssgUkzBm5hkiHZbEJJ89xDLaQJkmT3guMWCCN%2FjmC5TULRVUj61rHaNGULUYQv%2F%2Bsetzs&X-Amz-Signature=1069dc6c0edd4e3c2a973c9e497ea0ee6762ff8ba24c1cebfc7f80efd7a7ed97&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZDGB442J%2F20260504%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260504T101239Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUMhrrgbVNMeZ2wJZw3lLGRu88hJN23%2BXrpFLaj0ziAQIhAPHknK2945OekT27UoPoXzFDyzYXc130NPDXBp5s3y6%2BKv8DCGsQABoMNjM3NDIzMTgzODA1Igx8EEja5N%2FUye0Pls0q3APyjtc8cmViYkU0HuS3%2B8P%2Frrw%2BybRh8qGWWE1v6cNRQdq0lBmZR%2BHRBSZEvgQnFPGbQ70vo%2FNtf3jkHExYic5a4fPKMAS9oW%2FLltaIv6rfHSb5E6EyTPnqPIxIhCuHihoONeH%2B%2BXB6yY2xPejCZPgaziYgFv4M9VbMJXkC%2BAYPsx059rK%2FGfTmIsXnLUIAAcF3jAwC1BY0ZEiv8gg51qi0XVqDMOYHJ%2FzpCNvozpPIMJtekUpJe0%2FdGhQc6ouNur8a4TXn1oAC42R4narvBdnmTtaKBWKeSaLbNYBgEXi%2BEeGPdIzRGtwJ0p2ZCW5GQgaMRn9ncf5yNpfI961H7ByosCTN3Vh4Ax1VTXbEQM9mzNRib96q0Kw%2BU%2FZD72eVGprYIENDIY37OPe2cOgswaHxFan4SDW%2BjB9HdEvMmk0MJumyhMSgauE8zwxosvs0L8ErTVHZRaBN%2BJXL5H5ejI2Mu8FA%2B8YhGp4KVolUpvDBTAyNeeXSjHtohSsCULMQ92ZWjCSMiFHpi7aGU4TTvKF3Z1hNDjupIm5Sk34oP74jaVMGXv61jGLcS9uCojLieo5TpXHwG0XgE93h%2F4Y7Lddyy46iH8D6J61VqUIqXD%2Fhw3KCLvVn07LSTKjoozD%2FzeHPBjqkAYAqfY0NLDQfK3DLAodWnKh03c3yAktxR0dvjjxQSsxEWYLUoF9Iqu3vLlBDoTlc2QNNN2M9oUrDG%2F0xXAu%2BFXgewguvV79MyQGC%2BD4Z4YeLUzq3s1HxfIB8%2F5pA3ctSJ5hsXhu4bOOttjjlDsheH16ssgUkzBm5hkiHZbEJJ89xDLaQJkmT3guMWCCN%2FjmC5TULRVUj61rHaNGULUYQv%2F%2Bsetzs&X-Amz-Signature=ec79a3eab5c647cb9ccfe16d28ae9a4c7fdce2f13ed2d3e6dc91478aed143810&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
