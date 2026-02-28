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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662RBO44P5%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxyfTyaWF5Tm3%2FuUMAoOeQzSrahNZEYRZ9usD4heokkQIhAIbqVHujjbHARk%2FpSQ5onnczCp3jIPGC2Lav%2BPQ6c8wyKv8DCE4QABoMNjM3NDIzMTgzODA1IgwU5Tq%2FSzdHXApn8dkq3AMvA%2FkwNkFdkQI2U%2B3o2ZW1cUS6FIZ14iyL%2FFV5AQ6GmukKdLp0gGKeN5xUlnAG%2BuJKwgqTIfeDXOSFwkyToA576O%2B%2FyrLvWa8diUC3e2588GuOCHHFJSkkbR%2BR7u5%2FpfRfSE%2FxrgummHwrDAWtsX%2BbM1x05kZeHHDRQtJL%2FQsSKfWfJ26IjNwbF3Fvoo7FQPnc60FCNJSRt64T85zGJcWyDVWr9mahUbfGmVVmN4LYCoRAYCatIjwV6G9dJ3M%2BWSbdWIY6Z06QYcnMM%2BW%2FC4PLFIYImWZxLQtrvoj%2BfW2ucKmYdw92DIUqJSz8Cequf2fDliGivTNZOwBl3EsnoMuvwJLrj47znB39Of07%2BmcBlxVGL5MSEt1UJSe%2BnwltJLEm82hz%2F6BFcGH1ky8N09hgYoDlFQGzSxOWMykkG0LKsk1ZfrLtWiHCfHBkl7pNbmsjbqEnVpX46yBSec24nl3e7pfGMmSLOBjMGmfPlh3dgq%2BMS7YHtIMDIbZCQxrGD3G39f%2F0PBWhVv48vdxkjNpcHb0aR8R%2B9ZjU3NZdliBAJEOuER4bHvxV57t7U5FJZnk9ZjjrJb27w0C%2Fekl9ATvwfRl6zI1G%2FbWi8gQP528Tc%2FkyCu92M3hsOyBpSjDv%2BInNBjqkAZmBCUak7VbHucAmaJyR3YccpSr2n%2F28WRgd4BL0HF2JdY6qrv3frrrampCcI0A0QNkJj0%2BlycOjQYeagn9iFV0ZOeG3BN7gTnz70p2CT7PcVmzXvLVpSvGpSTAqlS0s9f55n79vFA7T2BBnyhNY9IP9iHKa%2Bq9jcxW1YYzuwIIVBz%2BB3zjdm%2FqTHWO3tIbn4RoQA4PNQTFj7xYGCexC%2BIcVXTQ6&X-Amz-Signature=7ecba2a0f522c3db735aca58154e6f1bb927e9e98e482312b777010078bb404e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662RBO44P5%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxyfTyaWF5Tm3%2FuUMAoOeQzSrahNZEYRZ9usD4heokkQIhAIbqVHujjbHARk%2FpSQ5onnczCp3jIPGC2Lav%2BPQ6c8wyKv8DCE4QABoMNjM3NDIzMTgzODA1IgwU5Tq%2FSzdHXApn8dkq3AMvA%2FkwNkFdkQI2U%2B3o2ZW1cUS6FIZ14iyL%2FFV5AQ6GmukKdLp0gGKeN5xUlnAG%2BuJKwgqTIfeDXOSFwkyToA576O%2B%2FyrLvWa8diUC3e2588GuOCHHFJSkkbR%2BR7u5%2FpfRfSE%2FxrgummHwrDAWtsX%2BbM1x05kZeHHDRQtJL%2FQsSKfWfJ26IjNwbF3Fvoo7FQPnc60FCNJSRt64T85zGJcWyDVWr9mahUbfGmVVmN4LYCoRAYCatIjwV6G9dJ3M%2BWSbdWIY6Z06QYcnMM%2BW%2FC4PLFIYImWZxLQtrvoj%2BfW2ucKmYdw92DIUqJSz8Cequf2fDliGivTNZOwBl3EsnoMuvwJLrj47znB39Of07%2BmcBlxVGL5MSEt1UJSe%2BnwltJLEm82hz%2F6BFcGH1ky8N09hgYoDlFQGzSxOWMykkG0LKsk1ZfrLtWiHCfHBkl7pNbmsjbqEnVpX46yBSec24nl3e7pfGMmSLOBjMGmfPlh3dgq%2BMS7YHtIMDIbZCQxrGD3G39f%2F0PBWhVv48vdxkjNpcHb0aR8R%2B9ZjU3NZdliBAJEOuER4bHvxV57t7U5FJZnk9ZjjrJb27w0C%2Fekl9ATvwfRl6zI1G%2FbWi8gQP528Tc%2FkyCu92M3hsOyBpSjDv%2BInNBjqkAZmBCUak7VbHucAmaJyR3YccpSr2n%2F28WRgd4BL0HF2JdY6qrv3frrrampCcI0A0QNkJj0%2BlycOjQYeagn9iFV0ZOeG3BN7gTnz70p2CT7PcVmzXvLVpSvGpSTAqlS0s9f55n79vFA7T2BBnyhNY9IP9iHKa%2Bq9jcxW1YYzuwIIVBz%2BB3zjdm%2FqTHWO3tIbn4RoQA4PNQTFj7xYGCexC%2BIcVXTQ6&X-Amz-Signature=ca2546f5571e6d50d0bc11d1f656ec8daf5d87014b2c9cd8494473d7fb53c244&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662RBO44P5%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082913Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCxyfTyaWF5Tm3%2FuUMAoOeQzSrahNZEYRZ9usD4heokkQIhAIbqVHujjbHARk%2FpSQ5onnczCp3jIPGC2Lav%2BPQ6c8wyKv8DCE4QABoMNjM3NDIzMTgzODA1IgwU5Tq%2FSzdHXApn8dkq3AMvA%2FkwNkFdkQI2U%2B3o2ZW1cUS6FIZ14iyL%2FFV5AQ6GmukKdLp0gGKeN5xUlnAG%2BuJKwgqTIfeDXOSFwkyToA576O%2B%2FyrLvWa8diUC3e2588GuOCHHFJSkkbR%2BR7u5%2FpfRfSE%2FxrgummHwrDAWtsX%2BbM1x05kZeHHDRQtJL%2FQsSKfWfJ26IjNwbF3Fvoo7FQPnc60FCNJSRt64T85zGJcWyDVWr9mahUbfGmVVmN4LYCoRAYCatIjwV6G9dJ3M%2BWSbdWIY6Z06QYcnMM%2BW%2FC4PLFIYImWZxLQtrvoj%2BfW2ucKmYdw92DIUqJSz8Cequf2fDliGivTNZOwBl3EsnoMuvwJLrj47znB39Of07%2BmcBlxVGL5MSEt1UJSe%2BnwltJLEm82hz%2F6BFcGH1ky8N09hgYoDlFQGzSxOWMykkG0LKsk1ZfrLtWiHCfHBkl7pNbmsjbqEnVpX46yBSec24nl3e7pfGMmSLOBjMGmfPlh3dgq%2BMS7YHtIMDIbZCQxrGD3G39f%2F0PBWhVv48vdxkjNpcHb0aR8R%2B9ZjU3NZdliBAJEOuER4bHvxV57t7U5FJZnk9ZjjrJb27w0C%2Fekl9ATvwfRl6zI1G%2FbWi8gQP528Tc%2FkyCu92M3hsOyBpSjDv%2BInNBjqkAZmBCUak7VbHucAmaJyR3YccpSr2n%2F28WRgd4BL0HF2JdY6qrv3frrrampCcI0A0QNkJj0%2BlycOjQYeagn9iFV0ZOeG3BN7gTnz70p2CT7PcVmzXvLVpSvGpSTAqlS0s9f55n79vFA7T2BBnyhNY9IP9iHKa%2Bq9jcxW1YYzuwIIVBz%2BB3zjdm%2FqTHWO3tIbn4RoQA4PNQTFj7xYGCexC%2BIcVXTQ6&X-Amz-Signature=27913021d725e44bb38d06e782aff84023ae5e7921f3419955dc2cfe3ea27add&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662R46LHHG%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082914Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD3HvfIncr7ZnfIcBOxGxCPbJH2%2FhL2Q9Mt5wnW8uZq3wIhAJ1fqbKvUMA1II8VL%2FGPi2CAqClc%2FTS7DWHOjLGUNKqgKv8DCE8QABoMNjM3NDIzMTgzODA1IgxoZcABR0PPhP84c4cq3AMje5XDCYIX20wXRrHL6Ai3%2Fe6%2Bya2bqzrIzHXSwhnIoKdXGPAVwLMFWPs5kkLy3AdCBFyaaZBGVACZki6FawJ7TJowLxCMg%2BYT6Ar5zI4%2FYcFSgs5Fd2hRbiO1nQvpmEamI%2F2ZdxfXj5%2FtHaGMJYJLD943pC2YKdjWuxhOFeqcImX6YkS7wN4xRVCj9iSSwAHxryGIEX8kk7kGfzlwVattYm2P7RZoHV0cUvNMO6MvGXFcNr%2BJt509oTBVWxSaeoQKEtWSPlEDnsdP3MLm7xF6MKc0VsXLoakcAzx0pPhgDRFwX9PwUOl91vmb%2Fg86SSUsBLabISfsFuorXzsG5hx9MLSsmIPPZWv6Dip%2BaMgLcOGMdvltGLOWDIQN4%2BYFqD7YBInYUB7Kxb7iw5wyTypBHQW9jC0BwvbcKNyDU0U2DjQaeQP97jXZyXXGP0heSoMtGqBKOP5i5o2bUepWJ1zzabvJ3MmaRSFTMTVqoYkrU2%2B428iAae1%2FQTsBOjexp%2FNqQaervnxFNRurg4ATummUL7xqPcREnoXWMepALSQ6k0E1AZ158QJswX1jAuYcfmkWetouUyu2Mp9KcambQ3wXpATksE7jKOshygoU3B97ZgkIjb3pDRV97%2FQWeTD7%2BYnNBjqkAcPGmG1KkJUn8FzC2VBRD1JeLzZqtdQQGsA35bof9n7%2BLNQf9q8Opcp7EQf567k2uhmQoa%2B5Pe1KdwZ9inQN4YAR3Y4FSYbde4BE1jp9d0x3br7YuZe9zksjcSU6Pn3dL5B%2FaW9poaGqu8tUEL5H3fV2YJOqUFfQq%2FJj%2FQScK67zb7VCTRm4N70yyscXSyh0W20j11wNSOilOEZ8bgk6m6Tv6%2FTC&X-Amz-Signature=1a36d1e120814efa76d2e26230ce6afd659b3c59e5e1b940f0a5115f06d4b6ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662R46LHHG%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082914Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD3HvfIncr7ZnfIcBOxGxCPbJH2%2FhL2Q9Mt5wnW8uZq3wIhAJ1fqbKvUMA1II8VL%2FGPi2CAqClc%2FTS7DWHOjLGUNKqgKv8DCE8QABoMNjM3NDIzMTgzODA1IgxoZcABR0PPhP84c4cq3AMje5XDCYIX20wXRrHL6Ai3%2Fe6%2Bya2bqzrIzHXSwhnIoKdXGPAVwLMFWPs5kkLy3AdCBFyaaZBGVACZki6FawJ7TJowLxCMg%2BYT6Ar5zI4%2FYcFSgs5Fd2hRbiO1nQvpmEamI%2F2ZdxfXj5%2FtHaGMJYJLD943pC2YKdjWuxhOFeqcImX6YkS7wN4xRVCj9iSSwAHxryGIEX8kk7kGfzlwVattYm2P7RZoHV0cUvNMO6MvGXFcNr%2BJt509oTBVWxSaeoQKEtWSPlEDnsdP3MLm7xF6MKc0VsXLoakcAzx0pPhgDRFwX9PwUOl91vmb%2Fg86SSUsBLabISfsFuorXzsG5hx9MLSsmIPPZWv6Dip%2BaMgLcOGMdvltGLOWDIQN4%2BYFqD7YBInYUB7Kxb7iw5wyTypBHQW9jC0BwvbcKNyDU0U2DjQaeQP97jXZyXXGP0heSoMtGqBKOP5i5o2bUepWJ1zzabvJ3MmaRSFTMTVqoYkrU2%2B428iAae1%2FQTsBOjexp%2FNqQaervnxFNRurg4ATummUL7xqPcREnoXWMepALSQ6k0E1AZ158QJswX1jAuYcfmkWetouUyu2Mp9KcambQ3wXpATksE7jKOshygoU3B97ZgkIjb3pDRV97%2FQWeTD7%2BYnNBjqkAcPGmG1KkJUn8FzC2VBRD1JeLzZqtdQQGsA35bof9n7%2BLNQf9q8Opcp7EQf567k2uhmQoa%2B5Pe1KdwZ9inQN4YAR3Y4FSYbde4BE1jp9d0x3br7YuZe9zksjcSU6Pn3dL5B%2FaW9poaGqu8tUEL5H3fV2YJOqUFfQq%2FJj%2FQScK67zb7VCTRm4N70yyscXSyh0W20j11wNSOilOEZ8bgk6m6Tv6%2FTC&X-Amz-Signature=89c01412e461c51ef80d8771a65db715bef37294d26789211ed10ece3a696037&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662R46LHHG%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082914Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD3HvfIncr7ZnfIcBOxGxCPbJH2%2FhL2Q9Mt5wnW8uZq3wIhAJ1fqbKvUMA1II8VL%2FGPi2CAqClc%2FTS7DWHOjLGUNKqgKv8DCE8QABoMNjM3NDIzMTgzODA1IgxoZcABR0PPhP84c4cq3AMje5XDCYIX20wXRrHL6Ai3%2Fe6%2Bya2bqzrIzHXSwhnIoKdXGPAVwLMFWPs5kkLy3AdCBFyaaZBGVACZki6FawJ7TJowLxCMg%2BYT6Ar5zI4%2FYcFSgs5Fd2hRbiO1nQvpmEamI%2F2ZdxfXj5%2FtHaGMJYJLD943pC2YKdjWuxhOFeqcImX6YkS7wN4xRVCj9iSSwAHxryGIEX8kk7kGfzlwVattYm2P7RZoHV0cUvNMO6MvGXFcNr%2BJt509oTBVWxSaeoQKEtWSPlEDnsdP3MLm7xF6MKc0VsXLoakcAzx0pPhgDRFwX9PwUOl91vmb%2Fg86SSUsBLabISfsFuorXzsG5hx9MLSsmIPPZWv6Dip%2BaMgLcOGMdvltGLOWDIQN4%2BYFqD7YBInYUB7Kxb7iw5wyTypBHQW9jC0BwvbcKNyDU0U2DjQaeQP97jXZyXXGP0heSoMtGqBKOP5i5o2bUepWJ1zzabvJ3MmaRSFTMTVqoYkrU2%2B428iAae1%2FQTsBOjexp%2FNqQaervnxFNRurg4ATummUL7xqPcREnoXWMepALSQ6k0E1AZ158QJswX1jAuYcfmkWetouUyu2Mp9KcambQ3wXpATksE7jKOshygoU3B97ZgkIjb3pDRV97%2FQWeTD7%2BYnNBjqkAcPGmG1KkJUn8FzC2VBRD1JeLzZqtdQQGsA35bof9n7%2BLNQf9q8Opcp7EQf567k2uhmQoa%2B5Pe1KdwZ9inQN4YAR3Y4FSYbde4BE1jp9d0x3br7YuZe9zksjcSU6Pn3dL5B%2FaW9poaGqu8tUEL5H3fV2YJOqUFfQq%2FJj%2FQScK67zb7VCTRm4N70yyscXSyh0W20j11wNSOilOEZ8bgk6m6Tv6%2FTC&X-Amz-Signature=b0ece8d9fb1cb088218906e28f55b63bc4007314896fb5d9caa0ca11de1c4df1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662R46LHHG%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082914Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD3HvfIncr7ZnfIcBOxGxCPbJH2%2FhL2Q9Mt5wnW8uZq3wIhAJ1fqbKvUMA1II8VL%2FGPi2CAqClc%2FTS7DWHOjLGUNKqgKv8DCE8QABoMNjM3NDIzMTgzODA1IgxoZcABR0PPhP84c4cq3AMje5XDCYIX20wXRrHL6Ai3%2Fe6%2Bya2bqzrIzHXSwhnIoKdXGPAVwLMFWPs5kkLy3AdCBFyaaZBGVACZki6FawJ7TJowLxCMg%2BYT6Ar5zI4%2FYcFSgs5Fd2hRbiO1nQvpmEamI%2F2ZdxfXj5%2FtHaGMJYJLD943pC2YKdjWuxhOFeqcImX6YkS7wN4xRVCj9iSSwAHxryGIEX8kk7kGfzlwVattYm2P7RZoHV0cUvNMO6MvGXFcNr%2BJt509oTBVWxSaeoQKEtWSPlEDnsdP3MLm7xF6MKc0VsXLoakcAzx0pPhgDRFwX9PwUOl91vmb%2Fg86SSUsBLabISfsFuorXzsG5hx9MLSsmIPPZWv6Dip%2BaMgLcOGMdvltGLOWDIQN4%2BYFqD7YBInYUB7Kxb7iw5wyTypBHQW9jC0BwvbcKNyDU0U2DjQaeQP97jXZyXXGP0heSoMtGqBKOP5i5o2bUepWJ1zzabvJ3MmaRSFTMTVqoYkrU2%2B428iAae1%2FQTsBOjexp%2FNqQaervnxFNRurg4ATummUL7xqPcREnoXWMepALSQ6k0E1AZ158QJswX1jAuYcfmkWetouUyu2Mp9KcambQ3wXpATksE7jKOshygoU3B97ZgkIjb3pDRV97%2FQWeTD7%2BYnNBjqkAcPGmG1KkJUn8FzC2VBRD1JeLzZqtdQQGsA35bof9n7%2BLNQf9q8Opcp7EQf567k2uhmQoa%2B5Pe1KdwZ9inQN4YAR3Y4FSYbde4BE1jp9d0x3br7YuZe9zksjcSU6Pn3dL5B%2FaW9poaGqu8tUEL5H3fV2YJOqUFfQq%2FJj%2FQScK67zb7VCTRm4N70yyscXSyh0W20j11wNSOilOEZ8bgk6m6Tv6%2FTC&X-Amz-Signature=13e56b701657807f0e4c831848f10411d5a01af08cc159b6117767cf61f4f311&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TQPZ2J3R%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082918Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCeDyuX4oKF8xMExkLicMidO80IUAJrQAdrgxRWen8RuAIhAOStgoxLW9yJY1AJA1fxX%2F5GjqeC7OPc5hOXtYMBBSHJKv8DCE8QABoMNjM3NDIzMTgzODA1IgxbrLyAKrOEniPoT9wq3APROWqDoqseSVp95rTQHVkxuZCkRcxPchRNNH%2FPEzZyDeOn187uNvKk3LgZS1aI8%2FbB%2FVeoJcEnzgMZe5SzrRCh9ezegBR0Sv5j2VC62pZsfvrdHgkgCl8h6i3a7oPYNG4fV%2BOBQ9CJIzCwhjjxsuWwZEHQakWXXKir3hNd%2Fn2wr976OnVNP0T35FADZ7TCSRfaOmZrqIU56ljJr3u0kyEEItmhcO%2FlRppL4k4DfO%2B%2BPIUolAruBjJ9uW2QVLd4OdH0i4MvoGviXt8KrICxBouM4NcnCfrBXQNBJKBPfJ2Ob%2FzJrg0ULiS4O2P0kORfbLLHmVnZ1c5iwr8sV0vg%2BczLP18pgLAeMS%2BFpjGF7xU9c%2BA3%2FkKsM5STVaQkKv99euUru50AABqHz4WgoXOHWkJTbI6YxUi%2FUh4Kw5N6ZmoOHoHzJYjMC1eGt%2FwF80t9ZwHnwj3mpH6nvmkh6uOtnGm4maIGwUyvWpLwbdQ2%2FU1B%2FjCAj4VD2oE52jLYlmZen57yAb1U%2BP5YiQZvSON4x7G1ZpFe4cCh4J0%2BWRfJYHl6JO94A9foQPldJkt51fS1fuP%2FZzJQXBAM7tAU9GS23y850l8cy7BvNndomiWmCvjEdDhwtWQQomTPTtk3hTDx%2BYnNBjqkATBKOd0RpYXX1JDC4%2BCFr3MEZITiwpjmUYbp3%2BtUVCpzPfOOWephSHvk4DQN7pUEwdbSwwC4Su%2FxSq67XIFFc5VLuYrFc9MLxaDMSpMDivtSjwd3iYDRiD4PvsYLwG67pVYSm4mGrmWnKx5uzVlKIs7AqypCp18xu5IujUieqRbB8wDvPWjirpOAZ4Omrn4af82Mg%2BHfIvTmSJWzcSU7k4wjGV8P&X-Amz-Signature=975cd5c0724be0efda73ace3911d9b22995eeba6de76ba0bcdaeb11a95c0f3eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DMKMNYY%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082918Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsVwb%2FqPCbt6%2Bvif4ha4cHezFckHnQux%2BvP2Lkemc%2BHQIhAKM2QT8U05KLYFNej2FSQeJlj20xvqAi%2BL74hAYd2uphKv8DCE4QABoMNjM3NDIzMTgzODA1Igzy34m3xP3fBMA1ooMq3AMBY6kMs11TfkaOdzxRvFxmt6hIicqeZuZ7Ir%2FjjpvJGlJ1mtX4G52o3Y3vR%2FgImZ%2BcpTY5eS25Rmp1vmilz9AsJb1oZ%2BFQmNf3kliDzoZEKu%2FaXJmQ1j8bUW6QKkGg3lZ7BLranx7p%2B5doABlxjmrv5HhSCKNmQZI0Ic38EpVf18arOm1Kn425YEb1oz%2BTzUqVWvAuB%2FqF4%2BBqWtFB9L2VrFx6SXsGxPfjvOwGJ6QPHGooCDx6kFGxvFSqnSdBcfytW%2FsZwyUjMpFtHu3iaQbXXG%2Bw7M3JDXG4TqZNfABhDvZbHcg8Of8ry2fF%2Bxd4l1%2FxlJzKw9ZAeAzVuuBktBPobHoEetw5MLAcRVq38oprH0l5gcCDoP9dXtyoLd50aV%2FaWRs8T%2FZAgKKKWHbVJFSDMiqqzGRq%2FmWhzm%2B8ikRN649AGVClnqcvuDd1uafYHgUG2%2BPqpN153YMMKuo6J%2Fg%2BBbPKDkeHTPm%2BDMmiPaEwka6%2BXXWy%2BfAQMD6%2BakKWycIjorieRIpg0%2BxIQT5XyKFOczE%2Fqf5nMdIJUH5TdDSN6blEMeKyCFYsTXbC1AoQZTTnaIn%2BTmixYyHGLQpMaYvNeaOQQLL1LBZ6hBHLe3lR1TWTPMMA9VR3F8u6NDDg%2BInNBjqkAREtd1YdxAPOMriljuvts8WjAf3r9uPn3BEmY80dEbgsU6%2F4cYu2wIFXIY3gXNkP3tvhdXLJek6HqGdKA4UsbXNSDl6h%2BQff1lp9%2BF58a%2Fz1Oaq2HsMlrepJsvt1ZSsCv3FWQjK4N9PSErTPt1XnAgdRQEezDNlIru82qoueA5V67IGj%2BhKLH5TopbBP%2By29XoVLjnGQNKyWBhy99NBrc%2FMf%2F2GC&X-Amz-Signature=7bd357b60d9635d7113a8d13e5ad2dc7390a139f0dda9825c83ad559ac57508e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DMKMNYY%2F20260228%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260228T082918Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIb%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCsVwb%2FqPCbt6%2Bvif4ha4cHezFckHnQux%2BvP2Lkemc%2BHQIhAKM2QT8U05KLYFNej2FSQeJlj20xvqAi%2BL74hAYd2uphKv8DCE4QABoMNjM3NDIzMTgzODA1Igzy34m3xP3fBMA1ooMq3AMBY6kMs11TfkaOdzxRvFxmt6hIicqeZuZ7Ir%2FjjpvJGlJ1mtX4G52o3Y3vR%2FgImZ%2BcpTY5eS25Rmp1vmilz9AsJb1oZ%2BFQmNf3kliDzoZEKu%2FaXJmQ1j8bUW6QKkGg3lZ7BLranx7p%2B5doABlxjmrv5HhSCKNmQZI0Ic38EpVf18arOm1Kn425YEb1oz%2BTzUqVWvAuB%2FqF4%2BBqWtFB9L2VrFx6SXsGxPfjvOwGJ6QPHGooCDx6kFGxvFSqnSdBcfytW%2FsZwyUjMpFtHu3iaQbXXG%2Bw7M3JDXG4TqZNfABhDvZbHcg8Of8ry2fF%2Bxd4l1%2FxlJzKw9ZAeAzVuuBktBPobHoEetw5MLAcRVq38oprH0l5gcCDoP9dXtyoLd50aV%2FaWRs8T%2FZAgKKKWHbVJFSDMiqqzGRq%2FmWhzm%2B8ikRN649AGVClnqcvuDd1uafYHgUG2%2BPqpN153YMMKuo6J%2Fg%2BBbPKDkeHTPm%2BDMmiPaEwka6%2BXXWy%2BfAQMD6%2BakKWycIjorieRIpg0%2BxIQT5XyKFOczE%2Fqf5nMdIJUH5TdDSN6blEMeKyCFYsTXbC1AoQZTTnaIn%2BTmixYyHGLQpMaYvNeaOQQLL1LBZ6hBHLe3lR1TWTPMMA9VR3F8u6NDDg%2BInNBjqkAREtd1YdxAPOMriljuvts8WjAf3r9uPn3BEmY80dEbgsU6%2F4cYu2wIFXIY3gXNkP3tvhdXLJek6HqGdKA4UsbXNSDl6h%2BQff1lp9%2BF58a%2Fz1Oaq2HsMlrepJsvt1ZSsCv3FWQjK4N9PSErTPt1XnAgdRQEezDNlIru82qoueA5V67IGj%2BhKLH5TopbBP%2By29XoVLjnGQNKyWBhy99NBrc%2FMf%2F2GC&X-Amz-Signature=443807566cfc49e6dbbf7e31e2a6cea1515045a7f36abae30a6423184e405911&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
