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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SQRPSEA%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQDW1SusiIVlZE1w6QA%2B3zm9T52sq9ZQVkN5wUhUThu0WgIhAO70OGmj9ChVyf3JZBHmjN7tKCtsVRolCtIakPDVg4MjKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDbriG%2FnE40TZ4Broq3ANqdJEYb6wJzDO%2BzjOAGa4iIzEjpa%2BuXq0YledoqdvJ4E1qRVbGiDgn%2BK9VNYC9Tym%2BzR7yg0b4elaCllmJZ2zQ5qrakEYAvs6ziyVADH9pycvovLLh6YKqu9zQC8wARSTTSFcOMjFQMAkEPcnFhReblNBlfO7ainIBZWXOEf3UxVOQocGZ0nZAtkIrjJtFi1yYCxhxA8VVq3r9Q8iSJFk1orpii2CsDIO2n7FpQlaZUxu7OAoGCkSg0XBhw6iGNPG%2Bur9rXqod7cpO1QHPRyzovG8fbPCWYBwHn%2FUv6kS5w1EbRhgmvcTdSgJVpjRvm%2FW1OgVmoDpd6Z1j39a0oDX7C%2B4z9B2R1PUFs4vXSOVn34rgeLYlx213a7%2FkzykaREsTRPTiTISwiBBD93A5MRv6TywsjGdULneY6OIiOx2Z4Kg9WSyt4M19nlxD55FSss80YuS2VbhIXKC5fufzeIPmAMbLkDegQO%2BwN2J7tsfU1TOrthL5omUIRBX0o8OOKwIvfBVBEVFDcnkG%2B4GeClvK4ol7ba19ZbDOWnENAVM0m7HoPdrUXcSfSwyaXJLp1lBQ3xvzrFxyXGK7wNDVgpNu1E1J52Unl%2FFNZnhBbmD1lkQCDLHQn0i0QFznQjCQ3uzXBjqkAbw%2Bw2m67UIA2Fj3PSrUsPDGw6qPqk0W0wSW%2BL4UCmjNTPtnW8Wnhrh30VFFdAAZpZ%2F7rKONTciZ1pCAomAusAwHavHPMbvRhFo7E5sKcfJtTrzUcTQ4M3iXMShSWkyMJWDTXAuQ4VP6nqhbTouVir%2F%2FhVkvlBiQGJBIonpqmSdW7DR%2FuURCu8a5YsF%2Bp2gnRKBoFlBOTG%2B9y6ePke9J%2FXFroQ3N&X-Amz-Signature=bcbd8952d83b40272b1c3e6004196165ea7c4d9a5a8476ecd2359d8e43a86f5d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SQRPSEA%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQDW1SusiIVlZE1w6QA%2B3zm9T52sq9ZQVkN5wUhUThu0WgIhAO70OGmj9ChVyf3JZBHmjN7tKCtsVRolCtIakPDVg4MjKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDbriG%2FnE40TZ4Broq3ANqdJEYb6wJzDO%2BzjOAGa4iIzEjpa%2BuXq0YledoqdvJ4E1qRVbGiDgn%2BK9VNYC9Tym%2BzR7yg0b4elaCllmJZ2zQ5qrakEYAvs6ziyVADH9pycvovLLh6YKqu9zQC8wARSTTSFcOMjFQMAkEPcnFhReblNBlfO7ainIBZWXOEf3UxVOQocGZ0nZAtkIrjJtFi1yYCxhxA8VVq3r9Q8iSJFk1orpii2CsDIO2n7FpQlaZUxu7OAoGCkSg0XBhw6iGNPG%2Bur9rXqod7cpO1QHPRyzovG8fbPCWYBwHn%2FUv6kS5w1EbRhgmvcTdSgJVpjRvm%2FW1OgVmoDpd6Z1j39a0oDX7C%2B4z9B2R1PUFs4vXSOVn34rgeLYlx213a7%2FkzykaREsTRPTiTISwiBBD93A5MRv6TywsjGdULneY6OIiOx2Z4Kg9WSyt4M19nlxD55FSss80YuS2VbhIXKC5fufzeIPmAMbLkDegQO%2BwN2J7tsfU1TOrthL5omUIRBX0o8OOKwIvfBVBEVFDcnkG%2B4GeClvK4ol7ba19ZbDOWnENAVM0m7HoPdrUXcSfSwyaXJLp1lBQ3xvzrFxyXGK7wNDVgpNu1E1J52Unl%2FFNZnhBbmD1lkQCDLHQn0i0QFznQjCQ3uzXBjqkAbw%2Bw2m67UIA2Fj3PSrUsPDGw6qPqk0W0wSW%2BL4UCmjNTPtnW8Wnhrh30VFFdAAZpZ%2F7rKONTciZ1pCAomAusAwHavHPMbvRhFo7E5sKcfJtTrzUcTQ4M3iXMShSWkyMJWDTXAuQ4VP6nqhbTouVir%2F%2FhVkvlBiQGJBIonpqmSdW7DR%2FuURCu8a5YsF%2Bp2gnRKBoFlBOTG%2B9y6ePke9J%2FXFroQ3N&X-Amz-Signature=5ecb17f0d1f7fcf2686c4725b3feeb9f93f1dfa169bd98a72d05c60cd77f982e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SQRPSEA%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175733Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQDW1SusiIVlZE1w6QA%2B3zm9T52sq9ZQVkN5wUhUThu0WgIhAO70OGmj9ChVyf3JZBHmjN7tKCtsVRolCtIakPDVg4MjKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDbriG%2FnE40TZ4Broq3ANqdJEYb6wJzDO%2BzjOAGa4iIzEjpa%2BuXq0YledoqdvJ4E1qRVbGiDgn%2BK9VNYC9Tym%2BzR7yg0b4elaCllmJZ2zQ5qrakEYAvs6ziyVADH9pycvovLLh6YKqu9zQC8wARSTTSFcOMjFQMAkEPcnFhReblNBlfO7ainIBZWXOEf3UxVOQocGZ0nZAtkIrjJtFi1yYCxhxA8VVq3r9Q8iSJFk1orpii2CsDIO2n7FpQlaZUxu7OAoGCkSg0XBhw6iGNPG%2Bur9rXqod7cpO1QHPRyzovG8fbPCWYBwHn%2FUv6kS5w1EbRhgmvcTdSgJVpjRvm%2FW1OgVmoDpd6Z1j39a0oDX7C%2B4z9B2R1PUFs4vXSOVn34rgeLYlx213a7%2FkzykaREsTRPTiTISwiBBD93A5MRv6TywsjGdULneY6OIiOx2Z4Kg9WSyt4M19nlxD55FSss80YuS2VbhIXKC5fufzeIPmAMbLkDegQO%2BwN2J7tsfU1TOrthL5omUIRBX0o8OOKwIvfBVBEVFDcnkG%2B4GeClvK4ol7ba19ZbDOWnENAVM0m7HoPdrUXcSfSwyaXJLp1lBQ3xvzrFxyXGK7wNDVgpNu1E1J52Unl%2FFNZnhBbmD1lkQCDLHQn0i0QFznQjCQ3uzXBjqkAbw%2Bw2m67UIA2Fj3PSrUsPDGw6qPqk0W0wSW%2BL4UCmjNTPtnW8Wnhrh30VFFdAAZpZ%2F7rKONTciZ1pCAomAusAwHavHPMbvRhFo7E5sKcfJtTrzUcTQ4M3iXMShSWkyMJWDTXAuQ4VP6nqhbTouVir%2F%2FhVkvlBiQGJBIonpqmSdW7DR%2FuURCu8a5YsF%2Bp2gnRKBoFlBOTG%2B9y6ePke9J%2FXFroQ3N&X-Amz-Signature=635508b775c4dc95a0f631cb5a293e0c033cc8ca0d1501698127272226e4a7ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPYFICJD%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCYnfT5udMEilVKlQK0H7GcTomnAKMw6LvbhB9AXdW%2FqAIhAN4cNhYAX%2BWdaTXxPRkvdcUzlAEJBHiMKpeVVfwOV%2FGZKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDAvcOS1eYukb9Zscq3AMgVdP3nrZBJHyM1mJUC7Gghhk%2FuV6cZPS%2F5%2Bm8Z30B0FtL3MJ5%2BLjaOLk6zhmXFxRVe9e%2BCyuHB5dvt0FZVOAhv9eC6s4Ig2RtglEUrRz1XSCRdk%2F52ieXAHOcwDmbTbi5SVcLOrSRPpVu810qhrhXBFX7hjeBELMmp1xMCNjlO6fnA1d3UElP9gvnqqalpLO9whuoikOu9SapZD4vCNCO4dXFiKNlNxtG%2FyKp3npCm2RPBXEETsioI%2BPzg92Xqx7Nx8vSZRhw9jM%2BS4m2x%2Bscm4Ou5%2B4YxN6IJ3qqg3lxtK9XZR4t2ZNxhshnuj9fNTCcJZyq0axiR%2BQpgNp8v1I729G0RK2RTaPE3D7hwLn0cF%2F2r3BhUM9ZI8Lp6vxGQjn5az0wLjneZk%2BofVUDuD27J7e%2BvA4dkE8JwL1Cx0GmDvS1HVQ7Wm7Ir%2F0Sgp9BLhH2h9plRVlvSvY7uKK7indKtPCQroiB2%2BEByw7mRQ1ULV2ewv7rOPDHPsOn5D4gyFoioTW7Qsmv1jA4kMH6QE2DZUd2i7FB5rF5gj%2FdpRo4NQhsYPNxGShAbfTeim4MsFCd1%2F276S%2BSnKSDjJ4FmKfLOeG6BDL4aFzOF60IklGZHwfW%2FUxbVDrOrB6FpjC33OzXBjqkAaGd0exkvCuK%2BVRpIMzqOJSvm2dLa91e7nuvXMncquh6Wgx5Q%2FkjfTr1qgtWmQyM45YBIDpl%2BiFYypUhtYUK%2BqYrNGx%2FmDMLm8zyl14qzX0hk706ZX19R3nZia2KaiNTTpv0f2GSKRW4LTY0aj0XFCKSCoValXdyuXnccjdYTk7CeIv1eL7L0vkjEc2d%2BiHpXLVudYWvtHP2SiEr5PT8FFW1wOuh&X-Amz-Signature=1dc1057d8c81bb0159b1b5cef697aabb3751b53bc975bb899b9e658ea3c26671&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPYFICJD%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCYnfT5udMEilVKlQK0H7GcTomnAKMw6LvbhB9AXdW%2FqAIhAN4cNhYAX%2BWdaTXxPRkvdcUzlAEJBHiMKpeVVfwOV%2FGZKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDAvcOS1eYukb9Zscq3AMgVdP3nrZBJHyM1mJUC7Gghhk%2FuV6cZPS%2F5%2Bm8Z30B0FtL3MJ5%2BLjaOLk6zhmXFxRVe9e%2BCyuHB5dvt0FZVOAhv9eC6s4Ig2RtglEUrRz1XSCRdk%2F52ieXAHOcwDmbTbi5SVcLOrSRPpVu810qhrhXBFX7hjeBELMmp1xMCNjlO6fnA1d3UElP9gvnqqalpLO9whuoikOu9SapZD4vCNCO4dXFiKNlNxtG%2FyKp3npCm2RPBXEETsioI%2BPzg92Xqx7Nx8vSZRhw9jM%2BS4m2x%2Bscm4Ou5%2B4YxN6IJ3qqg3lxtK9XZR4t2ZNxhshnuj9fNTCcJZyq0axiR%2BQpgNp8v1I729G0RK2RTaPE3D7hwLn0cF%2F2r3BhUM9ZI8Lp6vxGQjn5az0wLjneZk%2BofVUDuD27J7e%2BvA4dkE8JwL1Cx0GmDvS1HVQ7Wm7Ir%2F0Sgp9BLhH2h9plRVlvSvY7uKK7indKtPCQroiB2%2BEByw7mRQ1ULV2ewv7rOPDHPsOn5D4gyFoioTW7Qsmv1jA4kMH6QE2DZUd2i7FB5rF5gj%2FdpRo4NQhsYPNxGShAbfTeim4MsFCd1%2F276S%2BSnKSDjJ4FmKfLOeG6BDL4aFzOF60IklGZHwfW%2FUxbVDrOrB6FpjC33OzXBjqkAaGd0exkvCuK%2BVRpIMzqOJSvm2dLa91e7nuvXMncquh6Wgx5Q%2FkjfTr1qgtWmQyM45YBIDpl%2BiFYypUhtYUK%2BqYrNGx%2FmDMLm8zyl14qzX0hk706ZX19R3nZia2KaiNTTpv0f2GSKRW4LTY0aj0XFCKSCoValXdyuXnccjdYTk7CeIv1eL7L0vkjEc2d%2BiHpXLVudYWvtHP2SiEr5PT8FFW1wOuh&X-Amz-Signature=d62870ef58b867c0cb8f47ef66ed178a5c72594171ed1238fd3b659852ffa8e8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPYFICJD%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCYnfT5udMEilVKlQK0H7GcTomnAKMw6LvbhB9AXdW%2FqAIhAN4cNhYAX%2BWdaTXxPRkvdcUzlAEJBHiMKpeVVfwOV%2FGZKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDAvcOS1eYukb9Zscq3AMgVdP3nrZBJHyM1mJUC7Gghhk%2FuV6cZPS%2F5%2Bm8Z30B0FtL3MJ5%2BLjaOLk6zhmXFxRVe9e%2BCyuHB5dvt0FZVOAhv9eC6s4Ig2RtglEUrRz1XSCRdk%2F52ieXAHOcwDmbTbi5SVcLOrSRPpVu810qhrhXBFX7hjeBELMmp1xMCNjlO6fnA1d3UElP9gvnqqalpLO9whuoikOu9SapZD4vCNCO4dXFiKNlNxtG%2FyKp3npCm2RPBXEETsioI%2BPzg92Xqx7Nx8vSZRhw9jM%2BS4m2x%2Bscm4Ou5%2B4YxN6IJ3qqg3lxtK9XZR4t2ZNxhshnuj9fNTCcJZyq0axiR%2BQpgNp8v1I729G0RK2RTaPE3D7hwLn0cF%2F2r3BhUM9ZI8Lp6vxGQjn5az0wLjneZk%2BofVUDuD27J7e%2BvA4dkE8JwL1Cx0GmDvS1HVQ7Wm7Ir%2F0Sgp9BLhH2h9plRVlvSvY7uKK7indKtPCQroiB2%2BEByw7mRQ1ULV2ewv7rOPDHPsOn5D4gyFoioTW7Qsmv1jA4kMH6QE2DZUd2i7FB5rF5gj%2FdpRo4NQhsYPNxGShAbfTeim4MsFCd1%2F276S%2BSnKSDjJ4FmKfLOeG6BDL4aFzOF60IklGZHwfW%2FUxbVDrOrB6FpjC33OzXBjqkAaGd0exkvCuK%2BVRpIMzqOJSvm2dLa91e7nuvXMncquh6Wgx5Q%2FkjfTr1qgtWmQyM45YBIDpl%2BiFYypUhtYUK%2BqYrNGx%2FmDMLm8zyl14qzX0hk706ZX19R3nZia2KaiNTTpv0f2GSKRW4LTY0aj0XFCKSCoValXdyuXnccjdYTk7CeIv1eL7L0vkjEc2d%2BiHpXLVudYWvtHP2SiEr5PT8FFW1wOuh&X-Amz-Signature=ee529a24e0a5369d54d2ecc149280cdaa63f9a954a856ee8102f96327ece68fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPYFICJD%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJIMEYCIQCYnfT5udMEilVKlQK0H7GcTomnAKMw6LvbhB9AXdW%2FqAIhAN4cNhYAX%2BWdaTXxPRkvdcUzlAEJBHiMKpeVVfwOV%2FGZKogECNH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxDAvcOS1eYukb9Zscq3AMgVdP3nrZBJHyM1mJUC7Gghhk%2FuV6cZPS%2F5%2Bm8Z30B0FtL3MJ5%2BLjaOLk6zhmXFxRVe9e%2BCyuHB5dvt0FZVOAhv9eC6s4Ig2RtglEUrRz1XSCRdk%2F52ieXAHOcwDmbTbi5SVcLOrSRPpVu810qhrhXBFX7hjeBELMmp1xMCNjlO6fnA1d3UElP9gvnqqalpLO9whuoikOu9SapZD4vCNCO4dXFiKNlNxtG%2FyKp3npCm2RPBXEETsioI%2BPzg92Xqx7Nx8vSZRhw9jM%2BS4m2x%2Bscm4Ou5%2B4YxN6IJ3qqg3lxtK9XZR4t2ZNxhshnuj9fNTCcJZyq0axiR%2BQpgNp8v1I729G0RK2RTaPE3D7hwLn0cF%2F2r3BhUM9ZI8Lp6vxGQjn5az0wLjneZk%2BofVUDuD27J7e%2BvA4dkE8JwL1Cx0GmDvS1HVQ7Wm7Ir%2F0Sgp9BLhH2h9plRVlvSvY7uKK7indKtPCQroiB2%2BEByw7mRQ1ULV2ewv7rOPDHPsOn5D4gyFoioTW7Qsmv1jA4kMH6QE2DZUd2i7FB5rF5gj%2FdpRo4NQhsYPNxGShAbfTeim4MsFCd1%2F276S%2BSnKSDjJ4FmKfLOeG6BDL4aFzOF60IklGZHwfW%2FUxbVDrOrB6FpjC33OzXBjqkAaGd0exkvCuK%2BVRpIMzqOJSvm2dLa91e7nuvXMncquh6Wgx5Q%2FkjfTr1qgtWmQyM45YBIDpl%2BiFYypUhtYUK%2BqYrNGx%2FmDMLm8zyl14qzX0hk706ZX19R3nZia2KaiNTTpv0f2GSKRW4LTY0aj0XFCKSCoValXdyuXnccjdYTk7CeIv1eL7L0vkjEc2d%2BiHpXLVudYWvtHP2SiEr5PT8FFW1wOuh&X-Amz-Signature=28cda34c20d36e9d12ae2ea18a15570a8918cc5e5fc1f958cceb3ce24474c218&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667HBVRGJW%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175734Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJGMEQCICK69nN7vMR%2F5XldAj9Ftq%2BEuZh%2B%2BIrceWkvgpd6u292AiBHDO%2BU6X8ld4gWlqMa64bnXC9BTHqUXKZcwgITKFeQfyqIBAjR%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2BiVVU0WgiWhlwzrHKtwDbo3mNPz2AgpxKoFCcV8INfRAI4mRJSzAnp1w%2FTckX%2BuTelQ%2FaWvaFwH3ACQRwm%2B0cBNgjOcCI5dDeYhP6OGz5Zd7hkjGsuVoI%2F2tpD2TkV9aW5mJ9I3RM8e%2BDq2OGO%2Bc6%2FTkPUWoZFwdP0XkHYHKSZd8cCVAz7BSzi1njCz7ndDPmowmI3vOkoXxRlTQhUuZV%2F9MGpBnPBBVndy3lzs7tP48u01vAMiIKUOEM1v6ZVoSlYFkzoR8lpROLg%2B5bdZj4Vme71uJAeiGeBYpICeZ7D3aIldyx0L64CmeCD5jvOSBeTN4N3gash0TzkwCvV44c9arKP8mSDcuquXSNp5zXuzzN%2FEQSCFVRCLy65HLdPz4pLqwAAIc8qgJCKSib76Cd8v809P6eEZkZX7GK3X9gZ21zZPF%2Fl1uEU%2Fp%2F%2FYMQSJD24L%2BHWVJf7eB7odDmPou65GsQ1XnPwgZOOj%2Foig%2FKYhTN9ZlbcrdHxR4OuO7Gdtq%2FogCx3ZHYqjbwQKIf%2B5Wl807eBTizvSv11YpwtGTZ5ucApHKBB1%2F5SMhoRDorsbp9zDbQKPjzvxl27akRzEbU3y0LSq%2Fa%2FNos8QDKOmcSErk48FDxaFo2X213bhMZvkYIq4C737eE5hcv14wltzs1wY6pgFkCsygFU7Yekdzn%2BtG%2FbaWIFjDv4JJmNOqW4Kn3ezsoutRdS26CsQX5ARTtht6vQi42aj4%2BvfUuCT1lu%2FmU%2BRl%2FoQIRwVIgOXJjzVOLIQY9tqz4LAVUNIQlTFy6LrrhdY45DXqRi1uPj3brk7o9IXn5R73oqWNjma2%2BmXAAVwYK7wCKlZjnfNcReT1k5X7kA4toxSG%2BsUB3ybO1yli0NjybKSe8nmc&X-Amz-Signature=78b5f127de3bf24fa3e6d99d93e75efb13aaf428031782ae8bd68b43278564d7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665G6XXQRL%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIF0ys9UbwFhj6JNV7aeUbBK6Ah%2Fdu43vaSO6busa6tSOAiEA6pFOdt4osA%2B6cdsUNFQe2fgqIMac8oGOoMVhXCuzWn4qiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHlTM36JHkvGKsBYbSrcA5NLR0DATQAZPNgPolREYVqf%2Fa9LGPjpywqsR3c%2FWq88zSRP9iakc7B63RBoHETIZnlAB3395Ax1mlHLuItovFjluF9N7nnXuwKDw%2FpMnN041cVvxhBXtNeT0wIacLMumwnPFw7f9sV1ZH%2BUvzbZuRtj0s%2BuKtbK6W62UlPovhCrsRDtbLUBsj7crJjKehkFbkXZpn%2F3ilJXXta7ktf6GW4t7s33zGxHFxad6THxa%2FxjD3pHIQ8M0rSaky7S%2BGZJ1LbqZcuFBPsbmG0MYZlnuQhmFv7kuehHY52fqDz20ZVBZMZ3ynLiaGvq0N58ymSVUTlg5ikjO%2FpOAGFK%2BnB%2BiIAYfrLwtGhpyEylScVsA4WLv8JT9q7h2s02N6zOOH4fAM9jgBcZ639%2FOEjsg8mfbQh5DoSIFh2GzEn1wZpnzTeb49VKCydMIbgPPDzSGk06lvubHvM3SCWLqWZYex%2FQDPvcpc5D3uiy6aDvU%2Bo1y6XBz6Ku3Wd0dLT9nNCeLV3o4180Ru1ArDtAaB5ZWv37SxpizTS4rZsXPI0Yhy259ksUG22NVExQ5iJeSryhmmWdb6ettVQz1jHh0gbKBFN1r4ISLVh%2FX25vZGRePLNXJUap8n3Vx6oV8LReO6R2MLXc7NcGOqUBblC7X2n1ekWYzl718JM7AmsPjvsDpyKYjBFXg6LPlphmCtAJXvLczld931Jj9Ivv0r%2Bd4WKvVOv6GRAARDZcpfdxSaj7kFlXQ3Ph5raC5uXFGkA1D9cMvfuoT8gU4cvgrOAUQOPT8asz%2FRpBMDqFDKoADJZY93iPMvM9NuTX20V%2B8S5kmg%2FcFm6G75CUpkZwJILo6TklJTNEszanwR3w2C2qi7Ss&X-Amz-Signature=97e1804669d69d38680ead10168cc86ade53e2a5f0700047c44bec751250b83f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665G6XXQRL%2F20261116%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261116T175735Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIF0ys9UbwFhj6JNV7aeUbBK6Ah%2Fdu43vaSO6busa6tSOAiEA6pFOdt4osA%2B6cdsUNFQe2fgqIMac8oGOoMVhXCuzWn4qiAQI0f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHlTM36JHkvGKsBYbSrcA5NLR0DATQAZPNgPolREYVqf%2Fa9LGPjpywqsR3c%2FWq88zSRP9iakc7B63RBoHETIZnlAB3395Ax1mlHLuItovFjluF9N7nnXuwKDw%2FpMnN041cVvxhBXtNeT0wIacLMumwnPFw7f9sV1ZH%2BUvzbZuRtj0s%2BuKtbK6W62UlPovhCrsRDtbLUBsj7crJjKehkFbkXZpn%2F3ilJXXta7ktf6GW4t7s33zGxHFxad6THxa%2FxjD3pHIQ8M0rSaky7S%2BGZJ1LbqZcuFBPsbmG0MYZlnuQhmFv7kuehHY52fqDz20ZVBZMZ3ynLiaGvq0N58ymSVUTlg5ikjO%2FpOAGFK%2BnB%2BiIAYfrLwtGhpyEylScVsA4WLv8JT9q7h2s02N6zOOH4fAM9jgBcZ639%2FOEjsg8mfbQh5DoSIFh2GzEn1wZpnzTeb49VKCydMIbgPPDzSGk06lvubHvM3SCWLqWZYex%2FQDPvcpc5D3uiy6aDvU%2Bo1y6XBz6Ku3Wd0dLT9nNCeLV3o4180Ru1ArDtAaB5ZWv37SxpizTS4rZsXPI0Yhy259ksUG22NVExQ5iJeSryhmmWdb6ettVQz1jHh0gbKBFN1r4ISLVh%2FX25vZGRePLNXJUap8n3Vx6oV8LReO6R2MLXc7NcGOqUBblC7X2n1ekWYzl718JM7AmsPjvsDpyKYjBFXg6LPlphmCtAJXvLczld931Jj9Ivv0r%2Bd4WKvVOv6GRAARDZcpfdxSaj7kFlXQ3Ph5raC5uXFGkA1D9cMvfuoT8gU4cvgrOAUQOPT8asz%2FRpBMDqFDKoADJZY93iPMvM9NuTX20V%2B8S5kmg%2FcFm6G75CUpkZwJILo6TklJTNEszanwR3w2C2qi7Ss&X-Amz-Signature=e10abb1a93e94d5b524b25d4c70b80f9c4c5eda8fac923618cbbb3b5d5cb70cf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
