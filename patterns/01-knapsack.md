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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCJ2XY6I%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQDKX7YY7RF2DKcubOaGHc1Joz1%2BOWT6w2iEpIaV37%2BH9AIgf%2BKQb68QBIhXhJTKcW8gF437IMXN5ca28PYIP5TXQCkq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDPhSO5UbXgg7SXNunircAzGXjgfYDelS8N1J0Kj%2BIeh0o5GcdESq3odzmNkqQRvTo3rfFHdKRKMsnONN7sJ5YlATmeY8KZ516RnsdVAXTAlFHoSwcTQHS%2BQbjRv4RLO%2BxY0nbPuWEMTzquDcdReGw0sYHa%2BHUGf1sH7eHO2WbZW0oNo6IqRGeLLF5y7ZMCJWQDKtjRrK06rPl6h9K9dEQvpuHTa9vzdNEAvCcgqdHxChSA97k%2F%2FiZthuxSmtmcwnKHcW1YObKvsnMH5NCZLJMl3UVdAPIbe3BV%2F5Xvs8mx4sv%2B2NYo4Sa85YOV5F3M5Gvogijhj6VdfewNC13cE136oX4gDPDgTaSqFzIcShElOoU90kjfEl7gGD32TrdToQizjkV2ETL5gGVLN5k7A7AKP01TyAH0hrsy4RIyIDiQpHL8GPa1iamsgCapDpP0jQNrSbOva%2BJto16s2oadiidhHpy%2BykBWwVw2UoJz01YZoxj%2F5cILIdbkS3I6afFTI4cgyKTcFduy3J3Dww5Sd0UtV8Pmlf2fLjPu9qiYDNKRbX%2FWEVLV7mzb76gl%2FYAFYxBlX2RBMGNTjXukyX5cvU7x3Iip%2Bqjfi1IGSz62Bvje9%2B8dzxDxzyLP%2BgaWSvhYZXq4eTrX0uoEDyAnnsMKnt4s4GOqUB1fyQzyzajIdXA3GsKbgOJVPNs24avQu0h8ufFIUfZOZMfl45FWIeiTLoqzTRpKnwReB4YEi%2Bvpk%2BuxMAcOK2HHdjqdeBc5k5o%2FTbrGuFoiOO6tXoFqLrliVz%2B2MjMmuC4np%2F%2Bh%2BedLyvQDisNY21pQ%2Bat0YHAN1mtTMZq%2Fp%2BM5YpnYtsIAqpFIYDjsyyHhl5ljvp8IHpfsnTobLdVVPXybxb3S%2FE&X-Amz-Signature=75cffec147fc9ecfb3277271768de67e964d47e336e71ce8e8ee075d6f46c23f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCJ2XY6I%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQDKX7YY7RF2DKcubOaGHc1Joz1%2BOWT6w2iEpIaV37%2BH9AIgf%2BKQb68QBIhXhJTKcW8gF437IMXN5ca28PYIP5TXQCkq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDPhSO5UbXgg7SXNunircAzGXjgfYDelS8N1J0Kj%2BIeh0o5GcdESq3odzmNkqQRvTo3rfFHdKRKMsnONN7sJ5YlATmeY8KZ516RnsdVAXTAlFHoSwcTQHS%2BQbjRv4RLO%2BxY0nbPuWEMTzquDcdReGw0sYHa%2BHUGf1sH7eHO2WbZW0oNo6IqRGeLLF5y7ZMCJWQDKtjRrK06rPl6h9K9dEQvpuHTa9vzdNEAvCcgqdHxChSA97k%2F%2FiZthuxSmtmcwnKHcW1YObKvsnMH5NCZLJMl3UVdAPIbe3BV%2F5Xvs8mx4sv%2B2NYo4Sa85YOV5F3M5Gvogijhj6VdfewNC13cE136oX4gDPDgTaSqFzIcShElOoU90kjfEl7gGD32TrdToQizjkV2ETL5gGVLN5k7A7AKP01TyAH0hrsy4RIyIDiQpHL8GPa1iamsgCapDpP0jQNrSbOva%2BJto16s2oadiidhHpy%2BykBWwVw2UoJz01YZoxj%2F5cILIdbkS3I6afFTI4cgyKTcFduy3J3Dww5Sd0UtV8Pmlf2fLjPu9qiYDNKRbX%2FWEVLV7mzb76gl%2FYAFYxBlX2RBMGNTjXukyX5cvU7x3Iip%2Bqjfi1IGSz62Bvje9%2B8dzxDxzyLP%2BgaWSvhYZXq4eTrX0uoEDyAnnsMKnt4s4GOqUB1fyQzyzajIdXA3GsKbgOJVPNs24avQu0h8ufFIUfZOZMfl45FWIeiTLoqzTRpKnwReB4YEi%2Bvpk%2BuxMAcOK2HHdjqdeBc5k5o%2FTbrGuFoiOO6tXoFqLrliVz%2B2MjMmuC4np%2F%2Bh%2BedLyvQDisNY21pQ%2Bat0YHAN1mtTMZq%2Fp%2BM5YpnYtsIAqpFIYDjsyyHhl5ljvp8IHpfsnTobLdVVPXybxb3S%2FE&X-Amz-Signature=dd4389df0c8c203e3fc13124fc1741f070c8baf7aa438676f9aa6484bb1a1211&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RCJ2XY6I%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQDKX7YY7RF2DKcubOaGHc1Joz1%2BOWT6w2iEpIaV37%2BH9AIgf%2BKQb68QBIhXhJTKcW8gF437IMXN5ca28PYIP5TXQCkq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDPhSO5UbXgg7SXNunircAzGXjgfYDelS8N1J0Kj%2BIeh0o5GcdESq3odzmNkqQRvTo3rfFHdKRKMsnONN7sJ5YlATmeY8KZ516RnsdVAXTAlFHoSwcTQHS%2BQbjRv4RLO%2BxY0nbPuWEMTzquDcdReGw0sYHa%2BHUGf1sH7eHO2WbZW0oNo6IqRGeLLF5y7ZMCJWQDKtjRrK06rPl6h9K9dEQvpuHTa9vzdNEAvCcgqdHxChSA97k%2F%2FiZthuxSmtmcwnKHcW1YObKvsnMH5NCZLJMl3UVdAPIbe3BV%2F5Xvs8mx4sv%2B2NYo4Sa85YOV5F3M5Gvogijhj6VdfewNC13cE136oX4gDPDgTaSqFzIcShElOoU90kjfEl7gGD32TrdToQizjkV2ETL5gGVLN5k7A7AKP01TyAH0hrsy4RIyIDiQpHL8GPa1iamsgCapDpP0jQNrSbOva%2BJto16s2oadiidhHpy%2BykBWwVw2UoJz01YZoxj%2F5cILIdbkS3I6afFTI4cgyKTcFduy3J3Dww5Sd0UtV8Pmlf2fLjPu9qiYDNKRbX%2FWEVLV7mzb76gl%2FYAFYxBlX2RBMGNTjXukyX5cvU7x3Iip%2Bqjfi1IGSz62Bvje9%2B8dzxDxzyLP%2BgaWSvhYZXq4eTrX0uoEDyAnnsMKnt4s4GOqUB1fyQzyzajIdXA3GsKbgOJVPNs24avQu0h8ufFIUfZOZMfl45FWIeiTLoqzTRpKnwReB4YEi%2Bvpk%2BuxMAcOK2HHdjqdeBc5k5o%2FTbrGuFoiOO6tXoFqLrliVz%2B2MjMmuC4np%2F%2Bh%2BedLyvQDisNY21pQ%2Bat0YHAN1mtTMZq%2Fp%2BM5YpnYtsIAqpFIYDjsyyHhl5ljvp8IHpfsnTobLdVVPXybxb3S%2FE&X-Amz-Signature=11a9677fe0d74157b5d10832948f90cb45c0f8327b86a204c082b5e232ebe9c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBTLZFGB%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQCXNV4uCNS3Iix0m3KCylwJeJOlDvWemTOXB5VYoUUswQIgCPr0EA8y6ZEByrBBoIB%2FYqxbak7FkGGxUgPpxdLrLzIq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDHrYr3NXYqUHX%2FPGtircA0qMcPyQfSLo4j1jV1s70cLMts5fcAAwhBr5mfqIjNjdWC2ghw1zemiEnhKfg1y7OlFv%2FG2xaW5zEyR6dNUdkYEbDye9o9g9r0frhKlReArtIzqXwBVxMDMe2RkxARWFgH4mieU5end%2BmkQeDIUWH91YVpaYoLCu1oKc2hGbtOSSuACgGFRM%2BMlQhU9QdGZTcZFWQqECrEUK9bQDs7JNvxoqbihpDm2045sBg%2Be7JHXH%2BkHNsiVIvMOxSAt%2FsBsEvriZ3%2B%2FjP%2BIWTUndu%2F2CZnvgiTcXc28XhIC%2FfiaQyKt7BmpQ9%2FFDbO5DoQnG%2Bk6NPu9MLNpXhSiLAcf5vRurijQGzO4kkE6zmtqJheBvpkZ240TlP%2FrvvvoWhiPOtrhMf4abCNI1Z7yFqY%2B0EvA3J%2Fod7cmo9MIDP0WDuydxPRE%2F6rAZcj%2Be6KqLYDoWaN1GKau6LdgtQcyXnVkOAMV91pu946NnSPL70pBdFlHgonhCqndiWzBK7eDbxf0v%2FxtOA0qJs2%2FoaKcJNFWmTVbHgO9fFbcKCFsfDUeC4aeZFB8m4iV20xpHstPc1kTR%2FN0184FOgZLiFOB7v7KtDc7fBOEZSTi4nmixzDSWDGWbBAWlsK0jqS726UKUYY2LMNbv4s4GOqUBYwFYkgnLp3H3Ae6SyQSo7%2Bwck2cGZ4uMSxJSL6%2Bul%2BfYmNpab0GM6wq8tH3fhBSZ6pICmSP%2FjkqaTds68m2ki3t1VqW1TRHZhNErNfMmJ5vo%2BfJyMgZETgdjiPBOVVE53n9Vv%2FkcYK0dok5JM9TjKgDvI4jOJ7YD6bxcM1WRQ6YJmdeiry8yt1izBzChO2HZRGrYofORKeL%2F6zEr7IX79ajolRuK&X-Amz-Signature=d3b401067b5b67bf4163f23eed35161db624f641cf229b4858e3ec797c8fcca0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBTLZFGB%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQCXNV4uCNS3Iix0m3KCylwJeJOlDvWemTOXB5VYoUUswQIgCPr0EA8y6ZEByrBBoIB%2FYqxbak7FkGGxUgPpxdLrLzIq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDHrYr3NXYqUHX%2FPGtircA0qMcPyQfSLo4j1jV1s70cLMts5fcAAwhBr5mfqIjNjdWC2ghw1zemiEnhKfg1y7OlFv%2FG2xaW5zEyR6dNUdkYEbDye9o9g9r0frhKlReArtIzqXwBVxMDMe2RkxARWFgH4mieU5end%2BmkQeDIUWH91YVpaYoLCu1oKc2hGbtOSSuACgGFRM%2BMlQhU9QdGZTcZFWQqECrEUK9bQDs7JNvxoqbihpDm2045sBg%2Be7JHXH%2BkHNsiVIvMOxSAt%2FsBsEvriZ3%2B%2FjP%2BIWTUndu%2F2CZnvgiTcXc28XhIC%2FfiaQyKt7BmpQ9%2FFDbO5DoQnG%2Bk6NPu9MLNpXhSiLAcf5vRurijQGzO4kkE6zmtqJheBvpkZ240TlP%2FrvvvoWhiPOtrhMf4abCNI1Z7yFqY%2B0EvA3J%2Fod7cmo9MIDP0WDuydxPRE%2F6rAZcj%2Be6KqLYDoWaN1GKau6LdgtQcyXnVkOAMV91pu946NnSPL70pBdFlHgonhCqndiWzBK7eDbxf0v%2FxtOA0qJs2%2FoaKcJNFWmTVbHgO9fFbcKCFsfDUeC4aeZFB8m4iV20xpHstPc1kTR%2FN0184FOgZLiFOB7v7KtDc7fBOEZSTi4nmixzDSWDGWbBAWlsK0jqS726UKUYY2LMNbv4s4GOqUBYwFYkgnLp3H3Ae6SyQSo7%2Bwck2cGZ4uMSxJSL6%2Bul%2BfYmNpab0GM6wq8tH3fhBSZ6pICmSP%2FjkqaTds68m2ki3t1VqW1TRHZhNErNfMmJ5vo%2BfJyMgZETgdjiPBOVVE53n9Vv%2FkcYK0dok5JM9TjKgDvI4jOJ7YD6bxcM1WRQ6YJmdeiry8yt1izBzChO2HZRGrYofORKeL%2F6zEr7IX79ajolRuK&X-Amz-Signature=23706af58ba730429d8d51582473eedfb83121e79a879df5571d138e8fadbf41&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBTLZFGB%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQCXNV4uCNS3Iix0m3KCylwJeJOlDvWemTOXB5VYoUUswQIgCPr0EA8y6ZEByrBBoIB%2FYqxbak7FkGGxUgPpxdLrLzIq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDHrYr3NXYqUHX%2FPGtircA0qMcPyQfSLo4j1jV1s70cLMts5fcAAwhBr5mfqIjNjdWC2ghw1zemiEnhKfg1y7OlFv%2FG2xaW5zEyR6dNUdkYEbDye9o9g9r0frhKlReArtIzqXwBVxMDMe2RkxARWFgH4mieU5end%2BmkQeDIUWH91YVpaYoLCu1oKc2hGbtOSSuACgGFRM%2BMlQhU9QdGZTcZFWQqECrEUK9bQDs7JNvxoqbihpDm2045sBg%2Be7JHXH%2BkHNsiVIvMOxSAt%2FsBsEvriZ3%2B%2FjP%2BIWTUndu%2F2CZnvgiTcXc28XhIC%2FfiaQyKt7BmpQ9%2FFDbO5DoQnG%2Bk6NPu9MLNpXhSiLAcf5vRurijQGzO4kkE6zmtqJheBvpkZ240TlP%2FrvvvoWhiPOtrhMf4abCNI1Z7yFqY%2B0EvA3J%2Fod7cmo9MIDP0WDuydxPRE%2F6rAZcj%2Be6KqLYDoWaN1GKau6LdgtQcyXnVkOAMV91pu946NnSPL70pBdFlHgonhCqndiWzBK7eDbxf0v%2FxtOA0qJs2%2FoaKcJNFWmTVbHgO9fFbcKCFsfDUeC4aeZFB8m4iV20xpHstPc1kTR%2FN0184FOgZLiFOB7v7KtDc7fBOEZSTi4nmixzDSWDGWbBAWlsK0jqS726UKUYY2LMNbv4s4GOqUBYwFYkgnLp3H3Ae6SyQSo7%2Bwck2cGZ4uMSxJSL6%2Bul%2BfYmNpab0GM6wq8tH3fhBSZ6pICmSP%2FjkqaTds68m2ki3t1VqW1TRHZhNErNfMmJ5vo%2BfJyMgZETgdjiPBOVVE53n9Vv%2FkcYK0dok5JM9TjKgDvI4jOJ7YD6bxcM1WRQ6YJmdeiry8yt1izBzChO2HZRGrYofORKeL%2F6zEr7IX79ajolRuK&X-Amz-Signature=2f02a906102c027a0dd9d8cc8c09c0f176b5b7f3c0cfd570e492ddafc3a97cfe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YBTLZFGB%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQCXNV4uCNS3Iix0m3KCylwJeJOlDvWemTOXB5VYoUUswQIgCPr0EA8y6ZEByrBBoIB%2FYqxbak7FkGGxUgPpxdLrLzIq%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDHrYr3NXYqUHX%2FPGtircA0qMcPyQfSLo4j1jV1s70cLMts5fcAAwhBr5mfqIjNjdWC2ghw1zemiEnhKfg1y7OlFv%2FG2xaW5zEyR6dNUdkYEbDye9o9g9r0frhKlReArtIzqXwBVxMDMe2RkxARWFgH4mieU5end%2BmkQeDIUWH91YVpaYoLCu1oKc2hGbtOSSuACgGFRM%2BMlQhU9QdGZTcZFWQqECrEUK9bQDs7JNvxoqbihpDm2045sBg%2Be7JHXH%2BkHNsiVIvMOxSAt%2FsBsEvriZ3%2B%2FjP%2BIWTUndu%2F2CZnvgiTcXc28XhIC%2FfiaQyKt7BmpQ9%2FFDbO5DoQnG%2Bk6NPu9MLNpXhSiLAcf5vRurijQGzO4kkE6zmtqJheBvpkZ240TlP%2FrvvvoWhiPOtrhMf4abCNI1Z7yFqY%2B0EvA3J%2Fod7cmo9MIDP0WDuydxPRE%2F6rAZcj%2Be6KqLYDoWaN1GKau6LdgtQcyXnVkOAMV91pu946NnSPL70pBdFlHgonhCqndiWzBK7eDbxf0v%2FxtOA0qJs2%2FoaKcJNFWmTVbHgO9fFbcKCFsfDUeC4aeZFB8m4iV20xpHstPc1kTR%2FN0184FOgZLiFOB7v7KtDc7fBOEZSTi4nmixzDSWDGWbBAWlsK0jqS726UKUYY2LMNbv4s4GOqUBYwFYkgnLp3H3Ae6SyQSo7%2Bwck2cGZ4uMSxJSL6%2Bul%2BfYmNpab0GM6wq8tH3fhBSZ6pICmSP%2FjkqaTds68m2ki3t1VqW1TRHZhNErNfMmJ5vo%2BfJyMgZETgdjiPBOVVE53n9Vv%2FkcYK0dok5JM9TjKgDvI4jOJ7YD6bxcM1WRQ6YJmdeiry8yt1izBzChO2HZRGrYofORKeL%2F6zEr7IX79ajolRuK&X-Amz-Signature=5cdd65e0d4a66f8c01ee204b3292f0b7ede1385b3e1e8006043e149e98b5b693&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQRT2H46%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090844Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJHMEUCIQDcqYCfE5CuH3OpZuKobglrCOTujMxqT8YxmGvhgMBPZwIgakER%2Bd3h6u89TZkkuNyGJhMkbUJjCSPxLQj%2BJ9aFCM0q%2FwMIKhAAGgw2Mzc0MjMxODM4MDUiDESLEF5v%2F3sDJNyZjyrcAzQPv%2BwVh%2B%2FKV0D9utP7dbpl4QajlLHO7X7xGJb5s5WANnT7510p8QRzVR6IF6AP1Wv1OsJ%2Fjs1Wq4%2FfDfHL9aFtGhKWo11L47ucJYfZz%2FT%2BwLOJRllCl10nwX7Y62OTqmHVAoUrG755lVDTYfnE6WXpSCv4uty5h2EJsRwqBbbCiyQN9bEd5wX5JZL0KnGVnPqsDAIagkLrdQ0B2RwQTKxF0C5rk3FXGEetH0EjANDH6mMHJonNuw0w0KSGCql47ogmaOi9LiYRihYzn4wzn%2FqcGCIePJJs4DpYUSx1oMYEieDO%2FmUvAwxxMt8%2B0oPYkTmDBz9jovgqUt46smaf9GG6Y%2FAY9EgA24I96rtsniaTrz29qFczoF%2BgF%2Bh9dDwJ9gb%2FIoL07GlUCyM1x3c1gksPytkrkiY3fh11d9pXF2p19TD2Ysadf78lPLIGL7rNz81A8iwYt9sJfABVQEjZJp1zpE4%2B690Rd4asYC8xDV2wYrz23Cx1DImUhgER3uXUSl7fSItppjidvmcY99EKo4J5yh%2BSmgp3jw6%2BSBZbMqwYiK9WDEqoHaVu7QoCFAJG5U%2By48dTArTKnNToylsXuz8eMAwQ4Dz3KBxbGB0H6ca2jQRip1tdBvFKWBjFMKbt4s4GOqUBsRvwZYVQ4AuGRAOlV6BEMRjdglsLtNxnbVJC1h10%2B9iWvapGLtnsbBA5QFCocRYMkjiWPWy8Oy16d3EwjP3LyGVg3uFuxVrMcm3o%2Btl7u6y6PzP%2BUsx5BP44WjHyVX1XniYpHn8c4GxxtebcepCkcMgbB7sdJjkFXRx0HTiw8V0brwrewR5Pl1x48rMcfmNupusS8Z8RH%2FfZImpEC6DABZqLcJkC&X-Amz-Signature=a6be3541fc42cec0c7d05be16e5cd55ca42d060f28fe1b36ba573397a88b2c6d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2YHFBW2%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJIMEYCIQDHkNzl1f67dJpbhxxj8JOw3avD1ol%2BAkXc%2Bbqrktv2wgIhAMwTNssX3BB8svQ8SImFjSGbBfeS2sPLbVqbeMJR6ObSKv8DCCoQABoMNjM3NDIzMTgzODA1Igy2%2B6mCrECRXCH0cToq3APlm51ooohqVxmmaMor5V6IqHj0H0HiPhGwaVNTWrogqPBiwT44BCYSltKRgt%2BdjuA0nsFMRA4JV6T8QA42RYrZ2XkYnJulb48XLBKBnFe9gz4RozvOcy%2Fx65I2KyvE3BQrVdyjJOPjKfyQL9sq%2F38emV4f%2BGzgqc3gJSSTVGBq0iG%2BWTY2u7rg7gEQY%2Bpx0T2K40ETL9VaEQeA%2FrJLPnFN9sGbHnhV77Ccy%2BTgltSxSPurg20GPvtjUCT3sKgG1UL8CHdPcqxIDhwOS%2FsDz29ozrOToPUfXb%2F5RlSkF4aOrPwwZA33%2BN8g1xbk%2FaIUe5tnu0XTJklVxpOred6uR%2BsizFiz3TRPab9fdtQxdcdtMnGRMIW0PiJxvx%2Bc6VYd9PQ5c4Per%2FtDrGAJ1FLd1QKaOMDvdB0MIqV9FPRAv2fs1tQT%2BgOk%2Bm%2BTzg9lK9%2BmWSORHEPQ36Kd7yBDGUFBvRqcVYpNQl80fS9VTfs8SHXvnOA7L429Qt3KfAKZ%2Fd6VJbhbzxlpw8mdkX1DCJrz%2BDsT8hZ2Pb2ttoOBsb9q53jZVYDR8%2F6PC2zcussJYYs3n7vuJ48Egcf%2FNavL2bn2un%2Fpy%2F%2FqY8LBX6lYa5jfzAxDV1P81vjIZKQUa%2BnckjC77uLOBjqkAcDR4gbfVLKbve8gKa5LdJa8WYs9YKkl2iJSHLvEutwZwxAkkbwCsqE6GWWfLSaf8yAO9yRd0qNaJb350esZ0nZvHLMmWvDPSj4o2qZ5N6RwzmZPd9dZ6a35%2FJM28PkWkowKw6kVaDc1%2FErPBNtJUrooq0bk5INjrfV3KuBBjU%2BDdeWjn%2BHZnpRWDfjMKZ68rBLbF1z9lGtqc4B2tcLU5Hgg1uMp&X-Amz-Signature=93aab94c3c7420fb374cbaa00c1cc7ae9fae920929c0cefcf8d362a23874a5b1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466V2YHFBW2%2F20260410%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260410T090845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGEaCXVzLXdlc3QtMiJIMEYCIQDHkNzl1f67dJpbhxxj8JOw3avD1ol%2BAkXc%2Bbqrktv2wgIhAMwTNssX3BB8svQ8SImFjSGbBfeS2sPLbVqbeMJR6ObSKv8DCCoQABoMNjM3NDIzMTgzODA1Igy2%2B6mCrECRXCH0cToq3APlm51ooohqVxmmaMor5V6IqHj0H0HiPhGwaVNTWrogqPBiwT44BCYSltKRgt%2BdjuA0nsFMRA4JV6T8QA42RYrZ2XkYnJulb48XLBKBnFe9gz4RozvOcy%2Fx65I2KyvE3BQrVdyjJOPjKfyQL9sq%2F38emV4f%2BGzgqc3gJSSTVGBq0iG%2BWTY2u7rg7gEQY%2Bpx0T2K40ETL9VaEQeA%2FrJLPnFN9sGbHnhV77Ccy%2BTgltSxSPurg20GPvtjUCT3sKgG1UL8CHdPcqxIDhwOS%2FsDz29ozrOToPUfXb%2F5RlSkF4aOrPwwZA33%2BN8g1xbk%2FaIUe5tnu0XTJklVxpOred6uR%2BsizFiz3TRPab9fdtQxdcdtMnGRMIW0PiJxvx%2Bc6VYd9PQ5c4Per%2FtDrGAJ1FLd1QKaOMDvdB0MIqV9FPRAv2fs1tQT%2BgOk%2Bm%2BTzg9lK9%2BmWSORHEPQ36Kd7yBDGUFBvRqcVYpNQl80fS9VTfs8SHXvnOA7L429Qt3KfAKZ%2Fd6VJbhbzxlpw8mdkX1DCJrz%2BDsT8hZ2Pb2ttoOBsb9q53jZVYDR8%2F6PC2zcussJYYs3n7vuJ48Egcf%2FNavL2bn2un%2Fpy%2F%2FqY8LBX6lYa5jfzAxDV1P81vjIZKQUa%2BnckjC77uLOBjqkAcDR4gbfVLKbve8gKa5LdJa8WYs9YKkl2iJSHLvEutwZwxAkkbwCsqE6GWWfLSaf8yAO9yRd0qNaJb350esZ0nZvHLMmWvDPSj4o2qZ5N6RwzmZPd9dZ6a35%2FJM28PkWkowKw6kVaDc1%2FErPBNtJUrooq0bk5INjrfV3KuBBjU%2BDdeWjn%2BHZnpRWDfjMKZ68rBLbF1z9lGtqc4B2tcLU5Hgg1uMp&X-Amz-Signature=853838bd39aa0a6ced2312d593e76560a72160d82bc6b904fda3e6081033d9a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
