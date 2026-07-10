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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WXJAQDA%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD%2Fy6LxH2RvTj%2B5iQqUau9JAiu6Bpt%2FuNhoE4%2FNRQ%2F%2BfQIhALIpPslPpnYdlhGIpTzUJMrHTs1CCT1kgYgAAbHGxqH2KogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwZq9mv%2BatRRmpvw1sq3APGblpwEUFP%2BHLZyNEfp7P4YHweNiSxlU4ZtuOgnZzl6Rcan8NdDfiUFFlgvbGqnAetRYPwSSNnrZHkMwGkhN8tvH%2B%2FrlLPJFNxFl3vY7GVZxGruwBH8jlyObEV4GOugcwD%2FkjTqx2bDubq31NhRWA42pkY5mWoUQ5Cy4%2BtodhLs2wRrmp%2BR9scVWIL1OROHwRAUJqoJPE77CBB77ZOYcEu7JwEz%2FCSP%2FepyCFLyLv0X22kwioYZlZIfZTciTBwYuPlzRiItse4e%2FnGdpIEJLduZmtsD79WXgVf2rk1QJR5%2B0ZTj%2FFnAvvuyVroOHGI5f8VP%2BNpEbQTRdCbCKa4JnoZS5yNFrbiyARjmjKk39SQb1R1WYzsK765sf8yY9OuMl%2FQQg5F9U82nGK9i1%2BuLinXw0lUU6JzqY5NCTkia1vkioEG8y0esyy3qeMsEUrwUVlb1XQfH5DIjCx5Wrd%2FnAnRaO4HZfPjhQBagUnAie8igVg0ZVO9k0n7Edpo1TZHmPkVsibLvlLJ3vqs7%2FtUjgM6%2BSw32DrgSrD1HSt81oGLO4i5PsKrewMPGZ7fZt25YYcfYjJqk%2BRkF9EmQiZmw%2BjMkRB0hOgi1Vjkdxb1iDa6Gic5OGOc13YFVqTFszDs%2FcLSBjqkAeYNzYdz%2F2r%2BdPw2FMH%2FUX3Q1Vtgh95N5Xn%2F%2B7pyhzdVwJdK495C9MI2k3kpN%2B4L98tsWvtO7Vxu6dfFLtq%2BtrU0Pu%2FmDhN6YTJIE2SE%2FJ4ILvsDuYC84NGxzac%2FUrcWBhR96iTRhqsEil2vfVEfj4vuTu2IvUrPO8m68XR70mCADifXX0X54rEOu2Rq6wf9K1ZJGtL8rQOuhhBxj33CYaRLkizP&X-Amz-Signature=62e8e60f05824a0ea62df51d487ff99cdd4ca2311edbe4b921d55934fd39a0d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WXJAQDA%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD%2Fy6LxH2RvTj%2B5iQqUau9JAiu6Bpt%2FuNhoE4%2FNRQ%2F%2BfQIhALIpPslPpnYdlhGIpTzUJMrHTs1CCT1kgYgAAbHGxqH2KogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwZq9mv%2BatRRmpvw1sq3APGblpwEUFP%2BHLZyNEfp7P4YHweNiSxlU4ZtuOgnZzl6Rcan8NdDfiUFFlgvbGqnAetRYPwSSNnrZHkMwGkhN8tvH%2B%2FrlLPJFNxFl3vY7GVZxGruwBH8jlyObEV4GOugcwD%2FkjTqx2bDubq31NhRWA42pkY5mWoUQ5Cy4%2BtodhLs2wRrmp%2BR9scVWIL1OROHwRAUJqoJPE77CBB77ZOYcEu7JwEz%2FCSP%2FepyCFLyLv0X22kwioYZlZIfZTciTBwYuPlzRiItse4e%2FnGdpIEJLduZmtsD79WXgVf2rk1QJR5%2B0ZTj%2FFnAvvuyVroOHGI5f8VP%2BNpEbQTRdCbCKa4JnoZS5yNFrbiyARjmjKk39SQb1R1WYzsK765sf8yY9OuMl%2FQQg5F9U82nGK9i1%2BuLinXw0lUU6JzqY5NCTkia1vkioEG8y0esyy3qeMsEUrwUVlb1XQfH5DIjCx5Wrd%2FnAnRaO4HZfPjhQBagUnAie8igVg0ZVO9k0n7Edpo1TZHmPkVsibLvlLJ3vqs7%2FtUjgM6%2BSw32DrgSrD1HSt81oGLO4i5PsKrewMPGZ7fZt25YYcfYjJqk%2BRkF9EmQiZmw%2BjMkRB0hOgi1Vjkdxb1iDa6Gic5OGOc13YFVqTFszDs%2FcLSBjqkAeYNzYdz%2F2r%2BdPw2FMH%2FUX3Q1Vtgh95N5Xn%2F%2B7pyhzdVwJdK495C9MI2k3kpN%2B4L98tsWvtO7Vxu6dfFLtq%2BtrU0Pu%2FmDhN6YTJIE2SE%2FJ4ILvsDuYC84NGxzac%2FUrcWBhR96iTRhqsEil2vfVEfj4vuTu2IvUrPO8m68XR70mCADifXX0X54rEOu2Rq6wf9K1ZJGtL8rQOuhhBxj33CYaRLkizP&X-Amz-Signature=f32aa1203c533006583f1b5d765466b42928b0a7f9342110ee1a0581622e59ae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WXJAQDA%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD%2Fy6LxH2RvTj%2B5iQqUau9JAiu6Bpt%2FuNhoE4%2FNRQ%2F%2BfQIhALIpPslPpnYdlhGIpTzUJMrHTs1CCT1kgYgAAbHGxqH2KogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwZq9mv%2BatRRmpvw1sq3APGblpwEUFP%2BHLZyNEfp7P4YHweNiSxlU4ZtuOgnZzl6Rcan8NdDfiUFFlgvbGqnAetRYPwSSNnrZHkMwGkhN8tvH%2B%2FrlLPJFNxFl3vY7GVZxGruwBH8jlyObEV4GOugcwD%2FkjTqx2bDubq31NhRWA42pkY5mWoUQ5Cy4%2BtodhLs2wRrmp%2BR9scVWIL1OROHwRAUJqoJPE77CBB77ZOYcEu7JwEz%2FCSP%2FepyCFLyLv0X22kwioYZlZIfZTciTBwYuPlzRiItse4e%2FnGdpIEJLduZmtsD79WXgVf2rk1QJR5%2B0ZTj%2FFnAvvuyVroOHGI5f8VP%2BNpEbQTRdCbCKa4JnoZS5yNFrbiyARjmjKk39SQb1R1WYzsK765sf8yY9OuMl%2FQQg5F9U82nGK9i1%2BuLinXw0lUU6JzqY5NCTkia1vkioEG8y0esyy3qeMsEUrwUVlb1XQfH5DIjCx5Wrd%2FnAnRaO4HZfPjhQBagUnAie8igVg0ZVO9k0n7Edpo1TZHmPkVsibLvlLJ3vqs7%2FtUjgM6%2BSw32DrgSrD1HSt81oGLO4i5PsKrewMPGZ7fZt25YYcfYjJqk%2BRkF9EmQiZmw%2BjMkRB0hOgi1Vjkdxb1iDa6Gic5OGOc13YFVqTFszDs%2FcLSBjqkAeYNzYdz%2F2r%2BdPw2FMH%2FUX3Q1Vtgh95N5Xn%2F%2B7pyhzdVwJdK495C9MI2k3kpN%2B4L98tsWvtO7Vxu6dfFLtq%2BtrU0Pu%2FmDhN6YTJIE2SE%2FJ4ILvsDuYC84NGxzac%2FUrcWBhR96iTRhqsEil2vfVEfj4vuTu2IvUrPO8m68XR70mCADifXX0X54rEOu2Rq6wf9K1ZJGtL8rQOuhhBxj33CYaRLkizP&X-Amz-Signature=159552548db9263fe1ee79eac7e3c1d300eaed8fe5ec3a18180619b8213041d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664SOLYLU%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCexLhz3rXyCxS8ry1BJ5s1eydom2jpNoj%2F8gagfClUDQIhAJAKkvDZqyMktEct4H%2FBf3lzrJGkSXNhnXS32TiqG1daKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxcWKrqqOYjbqHwKMQq3ANdRRbji41CZFiaQQ%2FmOPDL0Y3Vs3ottXYlAbKbBVRZEwr3IeYtwT4ryvYbhULBx1j%2FtpPQiUBb6actGfRu47DkfFskZee2m9OeoEOX5v0%2BFUarHWNUgYJOLycvweRsxPghy7MiWZQNBg1J1jMoJonVpObVsOUV7%2BbnmrZ54hVzhwkfBX43cERinnUCdtd1GHPpHss%2Bz91Eh5%2BqIJXKQnhnnF7APCj5kJ2EVobP58NjGU9c3NmOoSyKpIj4Pe7oqv38rJQqveOYX7rWv31d0LZFv0o%2BeN86Ccrb44rw7kE3bpKja81zdnBL0n5t8tYBR%2B3ps9Wc0%2FC6I72WdmPF7Elf%2BlKONlrhHb94j4KtTrR07JuCzXzTals2tafs8ASVPjiOh8ptp5UcxtZD4DLJ0Br01UOOBna6tzOOZ%2B6WMX00Xyh0E53rOzFDy4DktmYY9owkk4OuBp9ooFBanGYalH%2B1tGn%2Bjr%2B2FwBxkkaxXe8b66oiRWIdvKuBUsesGw%2FkHF0s71NVFCK4NKhJgu1kMyRTU2%2BjA3lm5GBtAO3ovnpAZzR%2B3xF1VE6PwKAerY8BA96ytqCCcgFL%2BZVbpN4Ot9ufOqBUEffemd%2FR19gEZ%2Fqtm2ttO9DvlCvzvyll3zDjgMPSBjqkAWBu5iRX2UYGKlNeBV8SC1fwkmJPqiytzm12c20ltApTPb00rzqgSMlTY%2BIEVMXaNk7Td0XwjQx4zb4c%2BiXc4WjbFzg09TBYRU9i2V40rBm8%2FZoNF55C8fvyNyBWiON%2FrVO2cnkMKdtuAJ9g5tV26mVXm6FHn32F92DRSvBO1DiKhD%2F0Fiw%2BOVWP6txoxDzi0sK3JTzIttaiw1MzFYCnegk1wSvE&X-Amz-Signature=97842f923b8035963e7ae4deaff9c10a481fa33046dc8e0b19c1923499269d0a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664SOLYLU%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCexLhz3rXyCxS8ry1BJ5s1eydom2jpNoj%2F8gagfClUDQIhAJAKkvDZqyMktEct4H%2FBf3lzrJGkSXNhnXS32TiqG1daKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxcWKrqqOYjbqHwKMQq3ANdRRbji41CZFiaQQ%2FmOPDL0Y3Vs3ottXYlAbKbBVRZEwr3IeYtwT4ryvYbhULBx1j%2FtpPQiUBb6actGfRu47DkfFskZee2m9OeoEOX5v0%2BFUarHWNUgYJOLycvweRsxPghy7MiWZQNBg1J1jMoJonVpObVsOUV7%2BbnmrZ54hVzhwkfBX43cERinnUCdtd1GHPpHss%2Bz91Eh5%2BqIJXKQnhnnF7APCj5kJ2EVobP58NjGU9c3NmOoSyKpIj4Pe7oqv38rJQqveOYX7rWv31d0LZFv0o%2BeN86Ccrb44rw7kE3bpKja81zdnBL0n5t8tYBR%2B3ps9Wc0%2FC6I72WdmPF7Elf%2BlKONlrhHb94j4KtTrR07JuCzXzTals2tafs8ASVPjiOh8ptp5UcxtZD4DLJ0Br01UOOBna6tzOOZ%2B6WMX00Xyh0E53rOzFDy4DktmYY9owkk4OuBp9ooFBanGYalH%2B1tGn%2Bjr%2B2FwBxkkaxXe8b66oiRWIdvKuBUsesGw%2FkHF0s71NVFCK4NKhJgu1kMyRTU2%2BjA3lm5GBtAO3ovnpAZzR%2B3xF1VE6PwKAerY8BA96ytqCCcgFL%2BZVbpN4Ot9ufOqBUEffemd%2FR19gEZ%2Fqtm2ttO9DvlCvzvyll3zDjgMPSBjqkAWBu5iRX2UYGKlNeBV8SC1fwkmJPqiytzm12c20ltApTPb00rzqgSMlTY%2BIEVMXaNk7Td0XwjQx4zb4c%2BiXc4WjbFzg09TBYRU9i2V40rBm8%2FZoNF55C8fvyNyBWiON%2FrVO2cnkMKdtuAJ9g5tV26mVXm6FHn32F92DRSvBO1DiKhD%2F0Fiw%2BOVWP6txoxDzi0sK3JTzIttaiw1MzFYCnegk1wSvE&X-Amz-Signature=2f6cbbdd4fc4a36c78128e2e6efb5642e81401d3e58a812e03403cc030a24ab7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664SOLYLU%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCexLhz3rXyCxS8ry1BJ5s1eydom2jpNoj%2F8gagfClUDQIhAJAKkvDZqyMktEct4H%2FBf3lzrJGkSXNhnXS32TiqG1daKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxcWKrqqOYjbqHwKMQq3ANdRRbji41CZFiaQQ%2FmOPDL0Y3Vs3ottXYlAbKbBVRZEwr3IeYtwT4ryvYbhULBx1j%2FtpPQiUBb6actGfRu47DkfFskZee2m9OeoEOX5v0%2BFUarHWNUgYJOLycvweRsxPghy7MiWZQNBg1J1jMoJonVpObVsOUV7%2BbnmrZ54hVzhwkfBX43cERinnUCdtd1GHPpHss%2Bz91Eh5%2BqIJXKQnhnnF7APCj5kJ2EVobP58NjGU9c3NmOoSyKpIj4Pe7oqv38rJQqveOYX7rWv31d0LZFv0o%2BeN86Ccrb44rw7kE3bpKja81zdnBL0n5t8tYBR%2B3ps9Wc0%2FC6I72WdmPF7Elf%2BlKONlrhHb94j4KtTrR07JuCzXzTals2tafs8ASVPjiOh8ptp5UcxtZD4DLJ0Br01UOOBna6tzOOZ%2B6WMX00Xyh0E53rOzFDy4DktmYY9owkk4OuBp9ooFBanGYalH%2B1tGn%2Bjr%2B2FwBxkkaxXe8b66oiRWIdvKuBUsesGw%2FkHF0s71NVFCK4NKhJgu1kMyRTU2%2BjA3lm5GBtAO3ovnpAZzR%2B3xF1VE6PwKAerY8BA96ytqCCcgFL%2BZVbpN4Ot9ufOqBUEffemd%2FR19gEZ%2Fqtm2ttO9DvlCvzvyll3zDjgMPSBjqkAWBu5iRX2UYGKlNeBV8SC1fwkmJPqiytzm12c20ltApTPb00rzqgSMlTY%2BIEVMXaNk7Td0XwjQx4zb4c%2BiXc4WjbFzg09TBYRU9i2V40rBm8%2FZoNF55C8fvyNyBWiON%2FrVO2cnkMKdtuAJ9g5tV26mVXm6FHn32F92DRSvBO1DiKhD%2F0Fiw%2BOVWP6txoxDzi0sK3JTzIttaiw1MzFYCnegk1wSvE&X-Amz-Signature=211abed8a0d3b7ac49265f9a7b0a3b4a0f068cf862f9b2dd89ab7a8c7d094a14&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46664SOLYLU%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105140Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCexLhz3rXyCxS8ry1BJ5s1eydom2jpNoj%2F8gagfClUDQIhAJAKkvDZqyMktEct4H%2FBf3lzrJGkSXNhnXS32TiqG1daKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxcWKrqqOYjbqHwKMQq3ANdRRbji41CZFiaQQ%2FmOPDL0Y3Vs3ottXYlAbKbBVRZEwr3IeYtwT4ryvYbhULBx1j%2FtpPQiUBb6actGfRu47DkfFskZee2m9OeoEOX5v0%2BFUarHWNUgYJOLycvweRsxPghy7MiWZQNBg1J1jMoJonVpObVsOUV7%2BbnmrZ54hVzhwkfBX43cERinnUCdtd1GHPpHss%2Bz91Eh5%2BqIJXKQnhnnF7APCj5kJ2EVobP58NjGU9c3NmOoSyKpIj4Pe7oqv38rJQqveOYX7rWv31d0LZFv0o%2BeN86Ccrb44rw7kE3bpKja81zdnBL0n5t8tYBR%2B3ps9Wc0%2FC6I72WdmPF7Elf%2BlKONlrhHb94j4KtTrR07JuCzXzTals2tafs8ASVPjiOh8ptp5UcxtZD4DLJ0Br01UOOBna6tzOOZ%2B6WMX00Xyh0E53rOzFDy4DktmYY9owkk4OuBp9ooFBanGYalH%2B1tGn%2Bjr%2B2FwBxkkaxXe8b66oiRWIdvKuBUsesGw%2FkHF0s71NVFCK4NKhJgu1kMyRTU2%2BjA3lm5GBtAO3ovnpAZzR%2B3xF1VE6PwKAerY8BA96ytqCCcgFL%2BZVbpN4Ot9ufOqBUEffemd%2FR19gEZ%2Fqtm2ttO9DvlCvzvyll3zDjgMPSBjqkAWBu5iRX2UYGKlNeBV8SC1fwkmJPqiytzm12c20ltApTPb00rzqgSMlTY%2BIEVMXaNk7Td0XwjQx4zb4c%2BiXc4WjbFzg09TBYRU9i2V40rBm8%2FZoNF55C8fvyNyBWiON%2FrVO2cnkMKdtuAJ9g5tV26mVXm6FHn32F92DRSvBO1DiKhD%2F0Fiw%2BOVWP6txoxDzi0sK3JTzIttaiw1MzFYCnegk1wSvE&X-Amz-Signature=439b690c512745045f2cdc50190ce9dae299e708220cec4efada503f82326bb0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667G2N36H6%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0pRa9YwwGrpbnq%2F7wuLC0Oz4dh%2F3qqw%2Fg0zzXnhOoVwIhALHYnroXGthEnPNNiYL1Z4CZQgAZzS2H5Xi%2F7pnCHBHQKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxcHliLxLSKRfIRemsq3ANYfqNa2Ufhec8JHOnWR4tye1WgwhuyhyNgXPgjvfqcP6tDajyr%2BQ%2BRLrkUm%2B3pDcNq2HPHekOgThuc13svVDVDm2P6uGo4Gw95DIzasq%2FzVj6hVc7uLe5ZPtCuvDgoClyijkLrnhig46La22iLM07FNiEdbEGH43ua5bf33AfNk09WgccJAxj10zM2CtA4A5fqR%2BtAZ50hlKjpGO5OLI6QqKWlpb0jXRJEZmn9p147H%2BJ8Cfvimur4bA6SKW3A328VBDbL%2FqGlgcLTWpq7ppWvfCRcvJ3PENNeGCpPzkOc1wdGDZBBiR9EahJV%2BbSLOjTWeNCcCf0oxxlU5v0DKRDaEG1SB5Msdf3Kj9%2FyJVTKOIuiwLtH7JKGpLzw%2FdoxHhmb%2F9SQvy1LNNSB0wdXeGPCoQD0O8OZHAjEfWC9H9P6xZt37KeQHvmuWxlOCT2srtTqF8RADkoqoBsnStImzCsycElPGukjPZDARB%2BnzGCqhjhqEIsQwLT1UZdWmK7A1qyyP99mV2E0wsBT%2FhSKQ16Bxu%2FSzKPp6FGAd40LkOPyIlxEAZ9E3i42D41H1QqO2R4lF%2BjX4liAzNM5pzVK%2FzeqWysoC63OOX3u3%2BKuUerIP8BEMN9Wla%2BcqFh7hTC5%2FsLSBjqkASHACMI2pGOBml2DdQTUJQ8Z0ulgdJB2n%2FxGWUvUu4O3F%2FkI10I3Tw3lyvzFO5dgn%2BtitbYhGqZG4kzhFI5AR3QToUE0l9FYnUE8%2Fm5Ec3t1sH1zAsRcJt9QlAQO9wE2u%2FSJyRVzmbjxLu60etH5nAFTRV1JU5L5g4%2FaMC0jg9LOdsmLmRSIsg7LyXm%2BCBgcXfoMXzj4eJpyiSzqvTE59qrLPRPu&X-Amz-Signature=9a6fcbc7a6c21994b2a29a1a5ff6b37a8fd57175352ebdb9c8c5baa97d615ab2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666LD5JKVT%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCt792Xofvrp2ELoIMckpn7PMkxFqOUNTBks67TwjCTtQIhAMAi%2Ff45H%2B%2BR8ussThB%2BYem7NJ0dtctnYWvShD4QreeZKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igzi1LfZUwk%2FYE1dWEAq3APqYFCtoj0%2BFi2gSRqgIahsrU7Txu5zBcAUXZq4S1gsaRrMYUDWQC%2BHuWwHdUfOrtc6ffWa5JdipJJlnVw4pFY2WxCNg%2FB2Ckt1wh4bWngugABKFAXKtBl8GmWUMbUvAOGRjCWbPeLMycXil0R8bYnNMlcxEI4HZNobEoIJjr6sJO79FWDGD4%2FH8JNlN935tAUNfeO4ujz2vnhqEZRTUokn%2BkdLSxBwS7Mu0rTMyMWo6vLy%2FQEPv%2BvHYHcCiaHeShxs9COjPsRVnWq85cOjBA1gpOODWSzDXkITiDRGgvsfZGePCLnB5vY%2FQpSWh7ZPVAj%2BERjdXXUh6%2B2FJFjag%2BevaEQ4IoDqsJ3kyYy2ALtwYQCbbee5Xm2%2B65Cu%2BtXvh7vN2ieikhJv37WjN%2Bwsr7G2HCxfIbqZPvV0ZDhrNvfT8jQqJGjczzZ5o%2FGP1n2RVToFuLtD2KdVfLusf9GDHbonCODPfCaTC60RH5SdKtXu22C%2Bx4oK2rjfRWYXU%2Bkw6vJFVP1owXh%2FYoLHJsekyLqkUwst%2FErKNmIT1zgaCirE2ldNcl4ht8PuJya7rRtBOaTq6DTnRG%2BgEnrFEQx%2FOrrFjmbmnYuPvBnQRK5yeJZDITefnN%2BJ7%2FZX60m9CTCv%2FcLSBjqkATK%2BGFz%2BoyizPI%2FFKVHpXv1bO5dGkBGli43oadziONl6PEHOYbn7MYKjEA%2FtzBMhygo3%2FBdLF9bDP%2FyFKn1FMabrXrsQHWtDhNgpEz62%2BwZMZvEtfxS2tDwck7m2RZDnpyIITokynLGR%2BYTYvitRTlTlH9mOZFaVKqdQk%2BmEkIrGN1XAYXgUgrNd%2BZkMFSnl8EgM5nVJGgXeaj7VT3B6dKbzbHfV&X-Amz-Signature=1193b26484e861b688c1d7fcab9b47ae01cd57601d69df557d73ffa1e5acc284&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666LD5JKVT%2F20260710%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260710T105141Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCt792Xofvrp2ELoIMckpn7PMkxFqOUNTBks67TwjCTtQIhAMAi%2Ff45H%2B%2BR8ussThB%2BYem7NJ0dtctnYWvShD4QreeZKogECLP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igzi1LfZUwk%2FYE1dWEAq3APqYFCtoj0%2BFi2gSRqgIahsrU7Txu5zBcAUXZq4S1gsaRrMYUDWQC%2BHuWwHdUfOrtc6ffWa5JdipJJlnVw4pFY2WxCNg%2FB2Ckt1wh4bWngugABKFAXKtBl8GmWUMbUvAOGRjCWbPeLMycXil0R8bYnNMlcxEI4HZNobEoIJjr6sJO79FWDGD4%2FH8JNlN935tAUNfeO4ujz2vnhqEZRTUokn%2BkdLSxBwS7Mu0rTMyMWo6vLy%2FQEPv%2BvHYHcCiaHeShxs9COjPsRVnWq85cOjBA1gpOODWSzDXkITiDRGgvsfZGePCLnB5vY%2FQpSWh7ZPVAj%2BERjdXXUh6%2B2FJFjag%2BevaEQ4IoDqsJ3kyYy2ALtwYQCbbee5Xm2%2B65Cu%2BtXvh7vN2ieikhJv37WjN%2Bwsr7G2HCxfIbqZPvV0ZDhrNvfT8jQqJGjczzZ5o%2FGP1n2RVToFuLtD2KdVfLusf9GDHbonCODPfCaTC60RH5SdKtXu22C%2Bx4oK2rjfRWYXU%2Bkw6vJFVP1owXh%2FYoLHJsekyLqkUwst%2FErKNmIT1zgaCirE2ldNcl4ht8PuJya7rRtBOaTq6DTnRG%2BgEnrFEQx%2FOrrFjmbmnYuPvBnQRK5yeJZDITefnN%2BJ7%2FZX60m9CTCv%2FcLSBjqkATK%2BGFz%2BoyizPI%2FFKVHpXv1bO5dGkBGli43oadziONl6PEHOYbn7MYKjEA%2FtzBMhygo3%2FBdLF9bDP%2FyFKn1FMabrXrsQHWtDhNgpEz62%2BwZMZvEtfxS2tDwck7m2RZDnpyIITokynLGR%2BYTYvitRTlTlH9mOZFaVKqdQk%2BmEkIrGN1XAYXgUgrNd%2BZkMFSnl8EgM5nVJGgXeaj7VT3B6dKbzbHfV&X-Amz-Signature=17a6449a68c700fb123dce5ea5d6851df05b186ead3a7e68cdd4cdc6cb862df1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
